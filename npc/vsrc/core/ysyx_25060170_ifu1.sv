`include "define.v"

//获取正确pc，并传给inst ram 改造为AXI4-Lite总线的形式

//信号起名 什么模块传出_什么模块传进_信号名字

module ysyx_25060170_ifu1(
     input  logic                           rst
    ,input  logic                           clk
    ,input  logic [`ysyx_25060170_PC]       idu_ifu1_jump_pc
    ,input  logic                           idu_ifu1_jump
    ,input  logic [`ysyx_25060170_PC]       bpu_ifu1_jump_pc
    ,input  logic                           btb_predictedTaken      //bpu预测发生跳转
    ,input  logic                           bpu_ifu1_bpuvalid       //bpu传进去的pctag找到了跳转的地址 有效为1
    ,input  logic [`ysyx_25060170_PC]       lsu_ifu1_jump_pc
    ,input  logic                           lsu_ifu1_jump

    //stage control signal
    ,input  logic                           ifu2_ifu1_ready
    ,input  logic                           ifu2_ifu1_stall
    ,output logic                           ifu1_if1if2reg_valid

    //output to inst ram
    ,output logic [`ysyx_25060170_PC]       ifu1_if1if2reg_current_pc //既给ram又给ifu2

    //output to ifu2
    ,output logic [`ysyx_25060170_PC]       ifu1_if1if2reg_next_pc
    ,output logic                           ifu1_if1if2reg_bpupredict
    ,output logic                           ifu1_if1if2reg_bpuvalid
    // ,output logic                           ifu1

    //AXI4-Lite接口
    
);


//流水线控制
wire stall = ifu2_ifu1_stall ;
assign ifu1_if1if2reg_valid = (ifu2_ifu1_ready & ~stall) ? 1'b0 : 1'b1;

always_ff @(posedge clk) begin
    if(rst) begin
        ifu1_if1if2reg_current_pc <= `ysyx_25060170_STARTPC;
    end
    else begin
        if(stall) begin
            ifu1_if1if2reg_current_pc <= ifu1_if1if2reg_current_pc;
        end
        else if(idu_ifu1_jump) begin
            ifu1_if1if2reg_current_pc <= idu_ifu1_jump_pc;
        end
        else if(lsu_ifu1_jump) begin
            ifu1_if1if2reg_current_pc <= lsu_ifu1_jump_pc;
        end
        else if(bpu_ifu1_bpuvalid & btb_predictedTaken) begin
            ifu1_if1if2reg_current_pc <= bpu_ifu1_jump_pc;
        end
        
        else begin
            ifu1_if1if2reg_current_pc <= ifu1_if1if2reg_current_pc + 32'd4;
        end
    end
end

//output to next stage
assign ifu1_if1if2reg_next_pc    = ifu1_if1if2reg_current_pc + `ysyx_25060170_PLUS4;
assign ifu1_if1if2reg_bpupredict = btb_predictedTaken;
assign ifu1_if1if2reg_bpuvalid   = bpu_ifu1_bpuvalid;

endmodule

