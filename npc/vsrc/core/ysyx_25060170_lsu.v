`include "define.v"

//LSU: load/store unit, 通过 AXI4 总线接口访存

module ysyx_25060170_lsu(
     input  wire                              clk                   //<<i<<
    ,input  wire                              rst                   //<<i<<
    ,input  wire [`ysyx_25060170_PC]          next_pc_i             //<<i<<
    ,input  wire [`ysyx_25060170_INST]        inst_i                //<<i<<
    ,input  wire [`ysyx_25060170_DATA]        alu_res_i             //<<i<<
    ,input  wire [`ysyx_25060170_DATA]        store_data_i          //<<i<<
    ,input  wire [3:0]                        ls_ctl_i              //<<i<<
    //pipeline control  
    ,input  wire                              mem_ready_i           //<<i<<
    ,input  wire                              ex_valid_i            //<<i<<
    //output
    ,output wire                              ls_ready_o            //>>o>>
    ,output wire                              ls_valid_o            //>>o>>
    ,output wire                              ls_flush_o            //>>o>>
    ,output wire                              ls_jump_o             //>>o>>
    ,output wire [`ysyx_25060170_PC]          ls_jump_pc_o          //>>o>>

    //output to ls_wb_reg  
    ,output wire [`ysyx_25060170_INST]        inst_o                //>>o>>
    ,output wire [`ysyx_25060170_PC]          next_pc_o             //>>o>>

    //================== AXI4 接口 to arbiter ==================
    // AW 通道
    ,output wire                              lsu_arb_awvalid
    ,input  wire                              arb_lsu_awready
    ,output wire [31:0]                       lsu_arb_awaddr
    ,output wire [3:0]                        lsu_arb_awid
    ,output wire [7:0]                        lsu_arb_awlen
    ,output wire [2:0]                        lsu_arb_awsize
    ,output wire [1:0]                        lsu_arb_awburst

    // W 通道
    ,output wire                              lsu_arb_wvalid
    ,input  wire                              arb_lsu_wready
    ,output wire [31:0]                       lsu_arb_wdata
    ,output wire [3:0]                        lsu_arb_wstrb
    ,output wire                              lsu_arb_wlast

    // B 通道
    ,input  wire                              arb_lsu_bvalid
    ,output wire                              lsu_arb_bready
    ,input  wire [1:0]                        arb_lsu_bresp
    ,input  wire [3:0]                        arb_lsu_bid

    // AR 通道
    ,output wire                              lsu_arb_arvalid
    ,input  wire                              arb_lsu_arready
    ,output wire [31:0]                       lsu_arb_araddr
    ,output wire [3:0]                        lsu_arb_arid
    ,output wire [7:0]                        lsu_arb_arlen
    ,output wire [2:0]                        lsu_arb_arsize
    ,output wire [1:0]                        lsu_arb_arburst

    // R 通道
    ,input  wire                              arb_lsu_rvalid
    ,output wire                              lsu_arb_rready
    ,input  wire [1:0]                        arb_lsu_rresp
    ,input  wire [31:0]                       arb_lsu_rdata
    ,input  wire                              arb_lsu_rlast
    ,input  wire [3:0]                        arb_lsu_rid

    // load 数据输出 (给下一级流水线)
    ,output wire [`ysyx_25060170_DATA]        ls_load_data_o        //>>o>>
);

//==========================================================================
// load / store 控制信号
//==========================================================================
wire re = (rst == `ysyx_25060170_RSTABLE || ls_ctl_i == 4'b0000) ? 1'b0 : ls_ctl_i[3];
wire we = (rst == `ysyx_25060170_RSTABLE || ls_ctl_i == 4'b0000) ? 1'b0 : ~ls_ctl_i[3];

wire [31:0] mem_addr = alu_res_i[31:0];
wire [1:0]  byte_sel = alu_res_i[1:0];
wire [1:0]  half_sel = alu_res_i[1:0];

//==========================================================================
// Store: 数据对齐 & wstrb 生成
//==========================================================================
reg [31:0] store_wdata;
reg [3:0]  store_wstrb;

always @(*) begin
    store_wdata = `ysyx_25060170_ZERO32;
    store_wstrb = 4'b0000;
    if (we) begin
        case (ls_ctl_i[2:0])
            3'b001: begin  // SB
                store_wdata = {4{store_data_i[7:0]}};
                case (byte_sel)
                    2'b00: store_wstrb = 4'b0001;
                    2'b01: store_wstrb = 4'b0010;
                    2'b10: store_wstrb = 4'b0100;
                    2'b11: store_wstrb = 4'b1000;
                endcase
            end
            3'b010: begin  // SH
                store_wdata = {2{store_data_i[15:0]}};
                case (half_sel)
                    2'b00: store_wstrb = 4'b0011;
                    2'b10: store_wstrb = 4'b1100;
                    default: store_wstrb = 4'b0000;
                endcase
            end
            3'b100: begin  // SW
                store_wdata = store_data_i;
                store_wstrb = 4'b1111;
            end
            default: begin
                store_wdata = `ysyx_25060170_ZERO32;
                store_wstrb = 4'b0000;
            end
        endcase
    end
end

//==========================================================================
// AXI4 访存状态机
//==========================================================================
localparam [2:0] S_LS_IDLE   = 3'd0;
localparam [2:0] S_LS_ARREQ  = 3'd1;  // 读地址请求
localparam [2:0] S_LS_WAIT_R = 3'd2;  // 等待读数据
localparam [2:0] S_LS_AWREQ  = 3'd3;  // 写地址请求
localparam [2:0] S_LS_WREQ   = 3'd4;  // 写数据请求
localparam [2:0] S_LS_WAIT_B = 3'd5;  // 等待写响应

reg [2:0]  ls_state;
reg [31:0] rdata_buf;     // 缓存从总线读回的数据
reg        ls_done;       // 本次访存完成标志

// 握手信号
wire ar_hs = lsu_arb_arvalid & arb_lsu_arready;
wire r_hs  = arb_lsu_rvalid  & lsu_arb_rready;
wire aw_hs = lsu_arb_awvalid & arb_lsu_awready;
wire w_hs  = lsu_arb_wvalid  & arb_lsu_wready;
wire b_hs  = arb_lsu_bvalid  & lsu_arb_bready;

always @(posedge clk) begin
    if (rst == `ysyx_25060170_RSTABLE) begin
        ls_state  <= S_LS_IDLE;
        rdata_buf <= 32'b0;
        ls_done   <= 1'b0;
    end
    else begin
        case (ls_state)
            S_LS_IDLE: begin
                ls_done <= 1'b0;
                if (re) begin
                    ls_state <= S_LS_ARREQ;
                end
                else if (we) begin
                    ls_state <= S_LS_AWREQ;
                end
            end

            // ---- 读流程 ----
            S_LS_ARREQ: begin
                if (ar_hs) begin
                    ls_state <= S_LS_WAIT_R;
                end
            end
            S_LS_WAIT_R: begin
                if (r_hs) begin
                    rdata_buf <= arb_lsu_rdata;
                    ls_done   <= 1'b1;
                    ls_state  <= S_LS_IDLE;
                end
            end

            // ---- 写流程 ----
            S_LS_AWREQ: begin
                if (aw_hs) begin
                    ls_state <= S_LS_WREQ;
                end
            end
            S_LS_WREQ: begin
                if (w_hs) begin
                    ls_state <= S_LS_WAIT_B;
                end
            end
            S_LS_WAIT_B: begin
                if (b_hs) begin
                    ls_done  <= 1'b1;
                    ls_state <= S_LS_IDLE;
                end
            end

            default: ls_state <= S_LS_IDLE;
        endcase
    end
end

//==========================================================================
// AXI4 输出信号
//==========================================================================

// ---- AR 通道 ----
assign lsu_arb_arvalid = (ls_state == S_LS_ARREQ);
assign lsu_arb_araddr  = mem_addr;
assign lsu_arb_arid    = 4'd1;     // LSU 用 id=1 区分 IFU
assign lsu_arb_arlen   = 8'b0;    // 单次传输
assign lsu_arb_arsize  = 3'b010;  // 4 字节
assign lsu_arb_arburst = 2'b01;   // INCR

// ---- R 通道 ----
assign lsu_arb_rready  = (ls_state == S_LS_WAIT_R);

// ---- AW 通道 ----
assign lsu_arb_awvalid = (ls_state == S_LS_AWREQ);
assign lsu_arb_awaddr  = mem_addr;
assign lsu_arb_awid    = 4'd1;
assign lsu_arb_awlen   = 8'b0;
assign lsu_arb_awsize  = 3'b010;
assign lsu_arb_awburst = 2'b01;

// ---- W 通道 ----
assign lsu_arb_wvalid  = (ls_state == S_LS_WREQ);
assign lsu_arb_wdata   = store_wdata;
assign lsu_arb_wstrb   = store_wstrb;
assign lsu_arb_wlast   = 1'b1;    // 单次传输, wlast 始终为 1

// ---- B 通道 ----
assign lsu_arb_bready  = (ls_state == S_LS_WAIT_B);

//==========================================================================
// Load 数据处理 (从 rdata_buf 根据 ls_ctl 做符号/零扩展)
//==========================================================================
reg [31:0] load_data;

always @(*) begin
    load_data = `ysyx_25060170_ZERO32;
    if (ls_done && re) begin
        case (ls_ctl_i[2:0])
            3'b001: begin  // LB
                case (byte_sel)
                    2'b00: load_data = {{24{rdata_buf[7]}},  rdata_buf[7:0]};
                    2'b01: load_data = {{24{rdata_buf[15]}}, rdata_buf[15:8]};
                    2'b10: load_data = {{24{rdata_buf[23]}}, rdata_buf[23:16]};
                    2'b11: load_data = {{24{rdata_buf[31]}}, rdata_buf[31:24]};
                endcase
            end
            3'b010: begin  // LH
                case (half_sel)
                    2'b00: load_data = {{16{rdata_buf[15]}}, rdata_buf[15:0]};
                    2'b10: load_data = {{16{rdata_buf[31]}}, rdata_buf[31:16]};
                    default: load_data = `ysyx_25060170_ZERO32;
                endcase
            end
            3'b011: load_data = rdata_buf;  // LW
            3'b101: begin  // LBU
                case (byte_sel)
                    2'b00: load_data = {24'b0, rdata_buf[7:0]};
                    2'b01: load_data = {24'b0, rdata_buf[15:8]};
                    2'b10: load_data = {24'b0, rdata_buf[23:16]};
                    2'b11: load_data = {24'b0, rdata_buf[31:24]};
                endcase
            end
            3'b110: begin  // LHU
                case (half_sel)
                    2'b00: load_data = {16'b0, rdata_buf[15:0]};
                    2'b10: load_data = {16'b0, rdata_buf[31:16]};
                    default: load_data = `ysyx_25060170_ZERO32;
                endcase
            end
            default: load_data = `ysyx_25060170_ZERO32;
        endcase
    end
end

assign ls_load_data_o = load_data;

//==========================================================================
// 流水线控制
//==========================================================================
// 当 ls_ctl_i == 0 (无访存) 时直接透传; 有访存时等 ls_done
wire no_mem_op = (ls_ctl_i == 4'b0000);
assign ls_ready_o = no_mem_op ? mem_ready_i : (ls_done & mem_ready_i);
assign ls_valid_o = no_mem_op ? ex_valid_i  : (ls_done & ex_valid_i);

//==========================================================================
// 输出
//==========================================================================
//out to ifu
assign ls_flush_o   = ls_jump_o;
assign ls_jump_pc_o = alu_res_i;
assign ls_jump_o    = 1'b0;

//out to ls_wb_reg
assign inst_o    = inst_i;
assign next_pc_o = next_pc_i;

endmodule

