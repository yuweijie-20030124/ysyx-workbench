`include "define.v"

//获取正确pc，并传给inst ram 改造为AXI4总线的形式

//信号起名 什么模块传出_什么模块传进_信号名字

//IFU只读，AW/W/B通道全部置0


// IFU: AXI4-Lite read-only master
// 只使用 AR / R 通道
// AW / W / B 通道请在上层统一 tie-off 为 0

module ysyx_25060170_ifu(
     input  logic                           rst
    ,input  logic                           clk
    ,input  logic [`ysyx_25060170_PC]       idu_ifu_jump_pc
    ,input  logic                           idu_ifu_jump
    ,input  logic [`ysyx_25060170_PC]       bpu_ifu_jump_pc
    ,input  logic                           btb_predictedTaken
    ,input  logic                           bpu_ifu_bpuvalid
    ,input  logic [`ysyx_25060170_PC]       lsu_ifu_jump_pc
    ,input  logic                           lsu_ifu_jump

    // stage control signal
    ,input  logic                           idu_ifu_ready
    ,input  logic                           idu_ifu_stall
    ,output logic                           ifu_ifidreg_valid

    // output pc
    ,output logic [`ysyx_25060170_PC]       ifu_if1if2reg_current_pc
    ,output logic [`ysyx_25060170_PC]       ifu_if1if2reg_next_pc

    // output to ifid
    ,output logic [`ysyx_25060170_INST]     ifu_ididreg_inst
    ,output logic                           ifu_ifidreg_bpupredict
    ,output logic                           ifu_ifidreg_bpu_valid

    // AXI4-Lite AR channel
    ,output logic                           ifu_arb_arvalid
    ,input  logic                           arb_ifu_arready
    ,output logic [31:0]                    ifu_arb_araddr

    // AXI4-Lite R channel
    /* verilator lint_off UNUSEDSIGNAL */
    ,input  logic [2:0]                     arb_ifu_rresp   // 兼容你现有端口，实际只用低 2bit
    /* verilator lint_on  UNUSEDSIGNAL */
    ,input  logic                           arb_ifu_rvalid
    ,output logic                           ifu_arb_rready
    ,input  logic [31:0]                    arb_ifu_rdata
);

//==========================================================================
// 基本控制
//==========================================================================
logic stall;
assign stall = idu_ifu_stall;

//==========================================================================
// 跳转重定向优先级
// idu > lsu > bpu
//==========================================================================
logic                          redirect_valid;
logic [`ysyx_25060170_PC]      redirect_pc;

always_comb begin
    redirect_valid = 1'b0;
    redirect_pc    = `ysyx_25060170_STARTPC;

    if (idu_ifu_jump) begin
        redirect_valid = 1'b1;
        redirect_pc    = idu_ifu_jump_pc;
    end
    else if (lsu_ifu_jump) begin
        redirect_valid = 1'b1;
        redirect_pc    = lsu_ifu_jump_pc;
    end
    else if (bpu_ifu_bpuvalid && btb_predictedTaken) begin
        redirect_valid = 1'b1;
        redirect_pc    = bpu_ifu_jump_pc;
    end
end

//==========================================================================
// AXI4-Lite IFU 状态机
// IDLE   : 没有 outstanding request
// ARREQ  : 发 AR
// WAIT_R : 等 R
//==========================================================================
typedef enum logic [1:0] {
    S_IF_IDLE   = 2'd0,
    S_IF_ARREQ  = 2'd1,
    S_IF_WAIT_R = 2'd2
} if_state_t;

if_state_t if_state_r, if_state_n;

// 当前 PC（对外可见）
// - 当 inst_valid=1 时，它对应当前要送给下游的指令 PC
// - 当 inst_valid=0 时，它对应下一次要 fetch 的 PC
logic [`ysyx_25060170_PC]   pc_r,      pc_n;

// outstanding request 对应的 PC
logic [`ysyx_25060170_PC]   req_pc_r,  req_pc_n;

// 指令 buffer
logic [`ysyx_25060170_INST] inst_buf_r, inst_buf_n;
logic                       inst_valid_r, inst_valid_n;

// outstanding request 的预测信息
logic                       req_bpupredict_r, req_bpupredict_n;
logic                       req_bpu_valid_r,  req_bpu_valid_n;

// 当前 buffer 中指令对应的预测信息
logic                       inst_bpupredict_r, inst_bpupredict_n;
logic                       inst_bpu_valid_r,  inst_bpu_valid_n;

// 由于 redirect 造成 outstanding response 需要丢弃
logic                       discard_resp_r, discard_resp_n;

// 握手
logic ar_handshake;
logic r_handshake;
logic consume_inst;

assign ar_handshake = ifu_arb_arvalid & arb_ifu_arready;
assign r_handshake  = arb_ifu_rvalid  & ifu_arb_rready;

// 下游真正接收当前指令
assign consume_inst = inst_valid_r & idu_ifu_ready & (~stall);

//==========================================================================
// 输出
//==========================================================================
assign ifu_arb_arvalid         = (if_state_r == S_IF_ARREQ);
assign ifu_arb_araddr          = pc_r;                     // AXI4-Lite 只需要地址
assign ifu_arb_rready          = (if_state_r == S_IF_WAIT_R);

assign ifu_ifidreg_valid       = inst_valid_r & (~stall);
assign ifu_if1if2reg_current_pc= pc_r;
assign ifu_if1if2reg_next_pc   = pc_r + `ysyx_25060170_PLUS4;
assign ifu_ididreg_inst        = inst_buf_r;
assign ifu_ifidreg_bpupredict  = inst_bpupredict_r;
assign ifu_ifidreg_bpu_valid   = inst_bpu_valid_r;

//==========================================================================
// next-state logic
//==========================================================================
always_comb begin
    // default: hold
    if_state_n         = if_state_r;
    pc_n               = pc_r;
    req_pc_n           = req_pc_r;

    inst_buf_n         = inst_buf_r;
    inst_valid_n       = inst_valid_r;

    req_bpupredict_n   = req_bpupredict_r;
    req_bpu_valid_n    = req_bpu_valid_r;

    inst_bpupredict_n  = inst_bpupredict_r;
    inst_bpu_valid_n   = inst_bpu_valid_r;

    discard_resp_n     = discard_resp_r;

    case (if_state_r)

        //==================================================================
        // IDLE
        //==================================================================
        S_IF_IDLE: begin
            if (redirect_valid) begin
                // flush 当前 buffer
                pc_n              = redirect_pc;
                inst_valid_n      = 1'b0;
                inst_bpupredict_n = 1'b0;
                inst_bpu_valid_n  = 1'b0;
            end
            else if (inst_valid_r) begin
                // 等待下游消费 buffer 中的指令
                if (consume_inst) begin
                    inst_valid_n      = 1'b0;
                    inst_bpupredict_n = 1'b0;
                    inst_bpu_valid_n  = 1'b0;

                    pc_n              = pc_r + 32'd4;
                    if_state_n        = S_IF_ARREQ;
                end
            end
            else begin
                // buffer 空，开始取指
                if (!stall) begin
                    if_state_n = S_IF_ARREQ;
                end
            end
        end

        //==================================================================
        // ARREQ
        //==================================================================
        S_IF_ARREQ: begin
            if (redirect_valid) begin
                if (ar_handshake) begin
                    // 这一拍旧地址已经发出去了，后面 R 必须丢弃
                    req_pc_n         = pc_r;
                    req_bpupredict_n = btb_predictedTaken;
                    req_bpu_valid_n  = bpu_ifu_bpuvalid;

                    discard_resp_n   = 1'b1;
                    pc_n             = redirect_pc;
                    if_state_n       = S_IF_WAIT_R;
                end
                else begin
                    // 还没握手成功，直接把待取地址改成 redirect_pc
                    pc_n             = redirect_pc;
                end
            end
            else if (ar_handshake) begin
                req_pc_n         = pc_r;
                req_bpupredict_n = btb_predictedTaken;
                req_bpu_valid_n  = bpu_ifu_bpuvalid;
                if_state_n       = S_IF_WAIT_R;
            end
        end

        //==================================================================
        // WAIT_R
        //==================================================================
        S_IF_WAIT_R: begin
            if (redirect_valid) begin
                // 旧请求已经在路上，回来后要丢弃
                discard_resp_n     = 1'b1;
                pc_n               = redirect_pc;

                // flush 当前已缓存指令（理论上 WAIT_R 时通常没有）
                inst_valid_n       = 1'b0;
                inst_bpupredict_n  = 1'b0;
                inst_bpu_valid_n   = 1'b0;
            end

            if (r_handshake) begin
                if ((!discard_resp_r) && (!redirect_valid) && (arb_ifu_rresp[1:0] == 2'b00)) begin
                    // 正常收下本次 fetch 的指令
                    inst_buf_n         = arb_ifu_rdata;
                    inst_valid_n       = 1'b1;
                    inst_bpupredict_n  = req_bpupredict_r;
                    inst_bpu_valid_n   = req_bpu_valid_r;
                    pc_n               = req_pc_r;
                end
                else begin
                    // 被 flush 或总线返回错误，丢掉这拍
                    inst_valid_n       = 1'b0;
                    inst_bpupredict_n  = 1'b0;
                    inst_bpu_valid_n   = 1'b0;
                end

                discard_resp_n       = 1'b0;
                if_state_n           = S_IF_IDLE;
            end
        end

        default: begin
            if_state_n = S_IF_IDLE;
        end
    endcase
end

//==========================================================================
// 时序寄存器
//==========================================================================
always_ff @(posedge clk) begin
    if (rst) begin
        if_state_r        <= S_IF_IDLE;
        pc_r              <= `ysyx_25060170_STARTPC;
        req_pc_r          <= `ysyx_25060170_STARTPC;

        inst_buf_r        <= 32'b0;
        inst_valid_r      <= 1'b0;

        req_bpupredict_r  <= 1'b0;
        req_bpu_valid_r   <= 1'b0;

        inst_bpupredict_r <= 1'b0;
        inst_bpu_valid_r  <= 1'b0;

        discard_resp_r    <= 1'b0;
    end
    else begin
        if_state_r        <= if_state_n;
        pc_r              <= pc_n;
        req_pc_r          <= req_pc_n;

        inst_buf_r        <= inst_buf_n;
        inst_valid_r      <= inst_valid_n;

        req_bpupredict_r  <= req_bpupredict_n;
        req_bpu_valid_r   <= req_bpu_valid_n;

        inst_bpupredict_r <= inst_bpupredict_n;
        inst_bpu_valid_r  <= inst_bpu_valid_n;

        discard_resp_r    <= discard_resp_n;
    end
end

endmodule
