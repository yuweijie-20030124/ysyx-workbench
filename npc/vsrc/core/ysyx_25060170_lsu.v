`include "define.v"

//LSU: load/store unit, 通过 AXI4 总线接口访存
`include "define.v"

// LSU: load/store unit, AXI4-Lite master

module ysyx_25060170_lsu(
     input  wire                              clk
    ,input  wire                              rst
    ,input  wire [`ysyx_25060170_PC]          next_pc_i
    ,input  wire [`ysyx_25060170_INST]        inst_i
    ,input  wire [`ysyx_25060170_DATA]        alu_res_i
    ,input  wire [`ysyx_25060170_DATA]        store_data_i
    ,input  wire [3:0]                        ls_ctl_i
    // pipeline control
    ,input  wire                              mem_ready_i
    ,input  wire                              ex_valid_i
    // output
    ,output wire                              ls_ready_o
    ,output wire                              ls_valid_o
    ,output wire                              ls_flush_o
    ,output wire                              ls_jump_o
    ,output wire [`ysyx_25060170_PC]          ls_jump_pc_o

    // output to ls_wb_reg
    ,output wire [`ysyx_25060170_INST]        inst_o
    ,output wire [`ysyx_25060170_PC]          next_pc_o

    //================== AXI4-Lite 接口 to arbiter ==================
    // AW channel
    ,output wire                              lsu_arb_awvalid
    ,input  wire                              arb_lsu_awready
    ,output wire [31:0]                       lsu_arb_awaddr

    // W channel
    ,output wire                              lsu_arb_wvalid
    ,input  wire                              arb_lsu_wready
    ,output wire [31:0]                       lsu_arb_wdata
    ,output wire [3:0]                        lsu_arb_wstrb

    // B channel
    ,input  wire                              arb_lsu_bvalid
    ,output wire                              lsu_arb_bready
    ,input  wire [1:0]                        arb_lsu_bresp

    // AR channel
    ,output wire                              lsu_arb_arvalid
    ,input  wire                              arb_lsu_arready
    ,output wire [31:0]                       lsu_arb_araddr

    // R channel
    ,input  wire                              arb_lsu_rvalid
    ,output wire                              lsu_arb_rready
    ,input  wire [1:0]                        arb_lsu_rresp
    ,input  wire [31:0]                       arb_lsu_rdata

    // load data output
    ,output wire [`ysyx_25060170_DATA]        ls_load_data_o
);

//==========================================================================
// 当前输入是否为有效访存指令
// ls_ctl_i[3] = 1 -> load
// ls_ctl_i[3] = 0 -> store
// ls_ctl_i     = 0 -> no mem op
//==========================================================================
wire in_has_mem_op = (rst == `ysyx_25060170_RSTABLE || ex_valid_i == 1'b0 || ls_ctl_i == 4'b0000) ? 1'b0 : 1'b1;
wire in_re         = in_has_mem_op &  ls_ctl_i[3];
wire in_we         = in_has_mem_op & ~ls_ctl_i[3];

//==========================================================================
// LSU 状态机
// IDLE    : 空闲；无访存指令时直接透传
// ARREQ   : 发起读地址
// WAIT_R  : 等待读响应
// WREQ    : 发起写地址/写数据（AXI4-Lite: AW/W 独立握手）
// WAIT_B  : 等待写响应
// RESP    : 访存完成，等待下游接收
//==========================================================================
localparam [2:0] S_LS_IDLE   = 3'd0;
localparam [2:0] S_LS_ARREQ  = 3'd1;
localparam [2:0] S_LS_WAIT_R = 3'd2;
localparam [2:0] S_LS_WREQ   = 3'd3;
localparam [2:0] S_LS_WAIT_B = 3'd4;
localparam [2:0] S_LS_RESP   = 3'd5;

reg [2:0] ls_state;

//==========================================================================
// 锁存一整笔访存请求，防止总线等待期间输入变化
//==========================================================================
reg [`ysyx_25060170_PC]   req_next_pc;
reg [`ysyx_25060170_INST] req_inst;
reg [31:0]                req_addr;
reg [31:0]                req_store_data;
reg [3:0]                 req_ls_ctl;
reg                       req_re;
reg                       req_we;
reg                       req_ex_valid;

// 写通道独立握手跟踪
reg aw_done;
reg w_done;

// 读回数据缓存
reg [31:0] rdata_buf;

//==========================================================================
// 握手信号
//==========================================================================
wire ar_hs = lsu_arb_arvalid & arb_lsu_arready;
wire r_hs  = arb_lsu_rvalid  & lsu_arb_rready;
wire aw_hs = lsu_arb_awvalid & arb_lsu_awready;
wire w_hs  = lsu_arb_wvalid  & arb_lsu_wready;
wire b_hs  = arb_lsu_bvalid  & lsu_arb_bready;

//==========================================================================
// 锁存请求
//==========================================================================
always @(posedge clk) begin
    if (rst == `ysyx_25060170_RSTABLE) begin
        req_next_pc    <= `ysyx_25060170_ZERO32;
        req_inst       <= `ysyx_25060170_ZERO32;
        req_addr       <= `ysyx_25060170_ZERO32;
        req_store_data <= `ysyx_25060170_ZERO32;
        req_ls_ctl     <= 4'b0000;
        req_re         <= 1'b0;
        req_we         <= 1'b0;
        req_ex_valid   <= 1'b0;
    end
    else if (ls_state == S_LS_IDLE && in_has_mem_op) begin
        req_next_pc    <= next_pc_i;
        req_inst       <= inst_i;
        req_addr       <= alu_res_i[31:0];
        req_store_data <= store_data_i;
        req_ls_ctl     <= ls_ctl_i;
        req_re         <= in_re;
        req_we         <= in_we;
        req_ex_valid   <= ex_valid_i;
    end
end

//==========================================================================
// store 对齐 + wstrb
// 基于锁存请求生成，避免等待期间输入变化
//==========================================================================
wire [1:0] req_byte_sel = req_addr[1:0];
wire [1:0] req_half_sel = req_addr[1:0];

reg [31:0] store_wdata;
reg [3:0]  store_wstrb;

always @(*) begin
    store_wdata = `ysyx_25060170_ZERO32;
    store_wstrb = 4'b0000;

    if (req_we) begin
        case (req_ls_ctl[2:0])
            3'b001: begin  // SB
                store_wdata = {4{req_store_data[7:0]}};
                case (req_byte_sel)
                    2'b00: store_wstrb = 4'b0001;
                    2'b01: store_wstrb = 4'b0010;
                    2'b10: store_wstrb = 4'b0100;
                    2'b11: store_wstrb = 4'b1000;
                endcase
            end

            3'b010: begin  // SH
                store_wdata = {2{req_store_data[15:0]}};
                case (req_half_sel)
                    2'b00: store_wstrb = 4'b0011;
                    2'b10: store_wstrb = 4'b1100;
                    default: store_wstrb = 4'b0000;
                endcase
            end

            3'b100: begin  // SW
                store_wdata = req_store_data;
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
// load 数据处理
// 基于锁存地址/控制信号解码
//==========================================================================
reg [31:0] load_data;

always @(*) begin
    load_data = `ysyx_25060170_ZERO32;

    if (req_re) begin
        case (req_ls_ctl[2:0])
            3'b001: begin  // LB
                case (req_byte_sel)
                    2'b00: load_data = {{24{rdata_buf[7]}},  rdata_buf[7:0]};
                    2'b01: load_data = {{24{rdata_buf[15]}}, rdata_buf[15:8]};
                    2'b10: load_data = {{24{rdata_buf[23]}}, rdata_buf[23:16]};
                    2'b11: load_data = {{24{rdata_buf[31]}}, rdata_buf[31:24]};
                endcase
            end

            3'b010: begin  // LH
                case (req_half_sel)
                    2'b00: load_data = {{16{rdata_buf[15]}}, rdata_buf[15:0]};
                    2'b10: load_data = {{16{rdata_buf[31]}}, rdata_buf[31:16]};
                    default: load_data = `ysyx_25060170_ZERO32;
                endcase
            end

            3'b011: begin  // LW
                load_data = rdata_buf;
            end

            3'b101: begin  // LBU
                case (req_byte_sel)
                    2'b00: load_data = {24'b0, rdata_buf[7:0]};
                    2'b01: load_data = {24'b0, rdata_buf[15:8]};
                    2'b10: load_data = {24'b0, rdata_buf[23:16]};
                    2'b11: load_data = {24'b0, rdata_buf[31:24]};
                endcase
            end

            3'b110: begin  // LHU
                case (req_half_sel)
                    2'b00: load_data = {16'b0, rdata_buf[15:0]};
                    2'b10: load_data = {16'b0, rdata_buf[31:16]};
                    default: load_data = `ysyx_25060170_ZERO32;
                endcase
            end

            default: begin
                load_data = `ysyx_25060170_ZERO32;
            end
        endcase
    end
end

assign ls_load_data_o = (ls_state == S_LS_RESP && req_re) ? load_data : `ysyx_25060170_ZERO32;

//==========================================================================
// 状态机
//==========================================================================
always @(posedge clk) begin
    if (rst == `ysyx_25060170_RSTABLE) begin
        ls_state  <= S_LS_IDLE;
        aw_done   <= 1'b0;
        w_done    <= 1'b0;
        rdata_buf <= 32'b0;
    end
    else begin
        case (ls_state)
            S_LS_IDLE: begin
                aw_done <= 1'b0;
                w_done  <= 1'b0;

                if (in_has_mem_op) begin
                    if (in_re) begin
                        ls_state <= S_LS_ARREQ;
                    end
                    else if (in_we) begin
                        ls_state <= S_LS_WREQ;
                    end
                end
            end

            // ---------------- READ ----------------
            S_LS_ARREQ: begin
                if (ar_hs) begin
                    ls_state <= S_LS_WAIT_R;
                end
            end

            S_LS_WAIT_R: begin
                if (r_hs) begin
                    // 先收下数据；异常响应这里简单忽略，后续可扩展 trap
                    rdata_buf <= (arb_lsu_rresp == 2'b00) ? arb_lsu_rdata : 32'b0;
                    ls_state  <= S_LS_RESP;
                end
            end

            // ---------------- WRITE ----------------
            S_LS_WREQ: begin
                if (aw_hs)
                    aw_done <= 1'b1;
                if (w_hs)
                    w_done  <= 1'b1;

                if ((aw_done | aw_hs) & (w_done | w_hs)) begin
                    ls_state <= S_LS_WAIT_B;
                end
            end

            S_LS_WAIT_B: begin
                if (b_hs) begin
                    ls_state <= S_LS_RESP;
                end
            end

            // ---------------- RESPONSE HOLD ----------------
            S_LS_RESP: begin
                if (mem_ready_i) begin
                    ls_state <= S_LS_IDLE;
                end
            end

            default: begin
                ls_state <= S_LS_IDLE;
            end
        endcase
    end
end

//==========================================================================
// AXI4-Lite 输出
//==========================================================================

// AR
assign lsu_arb_arvalid = (ls_state == S_LS_ARREQ);
assign lsu_arb_araddr  = req_addr;

// R
assign lsu_arb_rready  = (ls_state == S_LS_WAIT_R);

// AW
assign lsu_arb_awvalid = (ls_state == S_LS_WREQ) & (~aw_done);
assign lsu_arb_awaddr  = req_addr;

// W
assign lsu_arb_wvalid  = (ls_state == S_LS_WREQ) & (~w_done);
assign lsu_arb_wdata   = store_wdata;
assign lsu_arb_wstrb   = store_wstrb;

// B
assign lsu_arb_bready  = (ls_state == S_LS_WAIT_B);

//==========================================================================
// 流水线控制
// 无访存时：直接透传
// 有访存时：RESP 状态表示结果有效，等待下游 ready
//==========================================================================
wire bypass_no_mem = (ls_state == S_LS_IDLE) & (~in_has_mem_op);

assign ls_valid_o = bypass_no_mem ? ex_valid_i : ((ls_state == S_LS_RESP) ? req_ex_valid : 1'b0);
assign ls_ready_o = bypass_no_mem ? mem_ready_i : ((ls_state == S_LS_RESP) ? mem_ready_i : 1'b0);

//==========================================================================
// 输出
//==========================================================================
assign ls_flush_o   = ls_jump_o;
assign ls_jump_pc_o = alu_res_i;
assign ls_jump_o    = 1'b0;

// 对于无访存指令，直接透传当前输入
// 对于访存指令，输出锁存的请求信息
assign inst_o    = bypass_no_mem ? inst_i    : req_inst;
assign next_pc_o = bypass_no_mem ? next_pc_i : req_next_pc;

endmodule
