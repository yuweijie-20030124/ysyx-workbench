`include "define.v"

//获取正确pc，并传给inst ram 改造为AXI4总线的形式

//信号起名 什么模块传出_什么模块传进_信号名字

//IFU只读，AW/W/B通道全部置0

module ysyx_25060170_ifu(
     input  logic                           rst
    ,input  logic                           clk
    ,input  logic [`ysyx_25060170_PC]       idu_ifu_jump_pc
    ,input  logic                           idu_ifu_jump
    ,input  logic [`ysyx_25060170_PC]       bpu_ifu_jump_pc
    ,input  logic                           btb_predictedTaken      //bpu预测发生跳转
    ,input  logic                           bpu_ifu_bpuvalid       //bpu传进去的pctag找到了跳转的地址 有效为1
    ,input  logic [`ysyx_25060170_PC]       lsu_ifu_jump_pc
    ,input  logic                           lsu_ifu_jump

    //stage control signal
    ,input  logic                           idu_ifu_ready
    ,input  logic                           idu_ifu_stall
    ,output logic                           ifu_ifidreg_valid

    //output to inst ram
    ,output logic [`ysyx_25060170_PC]       ifu_if1if2reg_current_pc //既给ram又给idu

    //output to ifu_ifidreg
    ,output logic [`ysyx_25060170_PC]       ifu_if1if2reg_next_pc
    ,output logic [`ysyx_25060170_INST]     ifu_ididreg_inst
    ,output logic                           ifu_ifidreg_bpupredict
    ,output logic                           ifu_ifidreg_bpu_valid

    //================== AXI4 接口 to arbiter ==================
    // AW 通道 (IFU 不写, 全部置0)
    ,output logic                           ifu_arb_awvalid
    ,input  logic                           arb_ifu_awready
    ,output logic [31:0]                    ifu_arb_awaddr
    ,output logic [3:0]                     ifu_arb_awid
    ,output logic [7:0]                     ifu_arb_awlen
    ,output logic [2:0]                     ifu_arb_awsize
    ,output logic [1:0]                     ifu_arb_awburst

    // W 通道 (IFU 不写, 全部置0)
    ,output logic                           ifu_arb_wvalid
    ,input  logic                           arb_ifu_wready
    ,output logic [31:0]                    ifu_arb_wdata
    ,output logic [3:0]                     ifu_arb_wstrb
    ,output logic                           ifu_arb_wlast

    // B 通道 (IFU 不写, 全部置0)
    ,input  logic                           arb_ifu_bvalid
    ,output logic                           ifu_arb_bready
    ,input  logic [1:0]                     arb_ifu_bresp
    ,input  logic [3:0]                     arb_ifu_bid

    // AR 通道 (IFU 读取指令)
    ,output logic                           ifu_arb_arvalid
    ,input  logic                           arb_ifu_arready
    ,output logic [31:0]                    ifu_arb_araddr
    ,output logic [3:0]                     ifu_arb_arid
    ,output logic [7:0]                     ifu_arb_arlen
    ,output logic [2:0]                     ifu_arb_arsize
    ,output logic [1:0]                     ifu_arb_arburst

    // R 通道 (IFU 接收指令数据)
    ,input  logic                           arb_ifu_rvalid
    ,output logic                           ifu_arb_rready
    ,input  logic [1:0]                     arb_ifu_rresp
    ,input  logic [31:0]                    arb_ifu_rdata
    ,input  logic                           arb_ifu_rlast
    ,input  logic [3:0]                     arb_ifu_rid
);


//==========================================================================
// 流水线控制
//==========================================================================
wire stall = idu_ifu_stall;

//==========================================================================
// AW/W/B 通道: IFU 只读, 全部置0
//==========================================================================
assign ifu_arb_awvalid = 1'b0;
assign ifu_arb_awaddr  = 32'b0;
assign ifu_arb_awid    = 4'b0;
assign ifu_arb_awlen   = 8'b0;
assign ifu_arb_awsize  = 3'b0;
assign ifu_arb_awburst = 2'b0;

assign ifu_arb_wvalid  = 1'b0;
assign ifu_arb_wdata   = 32'b0;
assign ifu_arb_wstrb   = 4'b0;
assign ifu_arb_wlast   = 1'b0;

assign ifu_arb_bready  = 1'b0;

//==========================================================================
// AR/R 通道: IFU 取指状态机
// IDLE   -> 发出 arvalid, 等待 arready 握手
// WAIT_R -> 等待 rvalid & rlast, 握手后回 IDLE
//==========================================================================
localparam [1:0] S_IF_IDLE   = 2'd0;
localparam [1:0] S_IF_ARREQ  = 2'd1;  // 发送读地址请求
localparam [1:0] S_IF_WAIT_R = 2'd2;  // 等待读数据返回

reg [1:0] if_state;
reg [31:0] inst_buf;     // 缓存从总线读回的指令
reg        inst_valid;   // inst_buf 中有有效指令

// AR 握手成功
wire ar_handshake = ifu_arb_arvalid & arb_ifu_arready;
// R  握手成功 (读数据接收完成)
wire r_handshake  = arb_ifu_rvalid  & ifu_arb_rready;

always_ff @(posedge clk) begin
    if (rst) begin
        if_state   <= S_IF_IDLE;
        inst_buf   <= 32'b0;
        inst_valid <= 1'b0;
    end
    else begin
        case (if_state)
            S_IF_IDLE: begin
                if (!stall) begin
                    if_state   <= S_IF_ARREQ;
                    inst_valid <= 1'b0;
                end
            end
            S_IF_ARREQ: begin
                if (ar_handshake) begin
                    if_state <= S_IF_WAIT_R;
                end
            end
            S_IF_WAIT_R: begin
                if (r_handshake) begin
                    inst_buf   <= arb_ifu_rdata;
                    inst_valid <= 1'b1;
                    if_state   <= S_IF_IDLE;
                end
            end
            default: if_state <= S_IF_IDLE;
        endcase
    end
end

// AR 通道输出
assign ifu_arb_arvalid = (if_state == S_IF_ARREQ);
assign ifu_arb_araddr  = ifu_if1if2reg_current_pc;
assign ifu_arb_arid    = 4'b0;
assign ifu_arb_arlen   = 8'b0;    // 单次传输 (len=0 表示 1 beat)
assign ifu_arb_arsize  = 3'b010;  // 4 字节
assign ifu_arb_arburst = 2'b01;   // INCR

// R 通道: 在 WAIT_R 状态接受数据
assign ifu_arb_rready  = (if_state == S_IF_WAIT_R);

// valid 信号
assign ifu_ifidreg_valid = inst_valid & ~stall;

//==========================================================================
// PC 更新逻辑
//==========================================================================
always_ff @(posedge clk) begin
    if(rst) begin
        ifu_if1if2reg_current_pc <= `ysyx_25060170_STARTPC;
    end
    else begin
        if(stall) begin
            ifu_if1if2reg_current_pc <= ifu_if1if2reg_current_pc;
        end
        else if(idu_ifu_jump) begin
            ifu_if1if2reg_current_pc <= idu_ifu_jump_pc;
        end
        else if(lsu_ifu_jump) begin
            ifu_if1if2reg_current_pc <= lsu_ifu_jump_pc;
        end
        else if(bpu_ifu_bpuvalid & btb_predictedTaken) begin
            ifu_if1if2reg_current_pc <= bpu_ifu_jump_pc;
        end
        else if(inst_valid) begin
            ifu_if1if2reg_current_pc <= ifu_if1if2reg_current_pc + 32'd4;
        end
    end
end

//==========================================================================
// output to next stage
//==========================================================================
assign ifu_if1if2reg_next_pc   = ifu_if1if2reg_current_pc + `ysyx_25060170_PLUS4;
assign ifu_ifidreg_bpupredict  = btb_predictedTaken;
assign ifu_ifidreg_bpu_valid   = bpu_ifu_bpuvalid;
assign ifu_ididreg_inst        = inst_buf;

endmodule

