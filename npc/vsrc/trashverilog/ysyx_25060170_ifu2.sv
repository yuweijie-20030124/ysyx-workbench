`include "define.v"

// 从ram中获得inst并且传给idu

//信号起名 什么模块传出_什么模块传进_信号名字

module ysyx_25060170_ifu2(
    //  input  logic                           rst
    // ,input  logic                           clk
    //signals from if1if2reg
     input  logic [`ysyx_25060170_PC]       if1if2reg_ifu2_currentpc 
    ,input  logic [`ysyx_25060170_PC]       if1if2reg_ifu2_nextpc
    ,input  logic                           if1if2reg_ifu2_bpupredict
    ,input  logic                           if1if2reg_ifu2_bpuvalid

    //signals from axi-lite / ram
    ,input  logic [`ysyx_25060170_INST]     ram_ifu2_inst

    //stage control signal
    ,input  logic                           idu_ready 
    ,input  logic                           ifu1_valid
    ,output logic                           ifu2_valid
    ,output logic                           ifu2_ready
    ,output logic                           ifu2_stall

    //signals to if2idreg
    ,output logic [`ysyx_25060170_PC]       ifu2_if2idreg_currentpc 
    ,output logic [`ysyx_25060170_PC]       ifu2_if2idreg_nextpc
    ,output logic                           ifu2_if2idreg_bpupredict
    ,output logic                           ifu2_if2idreg_bpuvalid
    ,output logic [`ysyx_25060170_INST]     ifu2_if2idreg_inst
);

//流水线控制
// assign ifu2_valid = (~idu_ready | stall) ? 1'b1 : 1'b0;
assign ifu2_valid = ifu1_valid | ~idu_ready;
assign ifu2_stall = 1'b0;
assign ifu2_ready = idu_ready & ~ifu2_stall;


//output to next stage
always_comb begin
    ifu2_if2idreg_currentpc     =   if1if2reg_ifu2_currentpc    ;
    ifu2_if2idreg_nextpc        =   if1if2reg_ifu2_nextpc       ;
    ifu2_if2idreg_bpupredict    =   if1if2reg_ifu2_bpupredict   ;
    ifu2_if2idreg_inst          =   ram_ifu2_inst               ;
    ifu2_if2idreg_bpuvalid      =   if1if2reg_ifu2_bpuvalid     ;
end     


endmodule
