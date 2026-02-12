`include "define.v"

//ifu2_idu级间流水线

module ysyx_25060170_if2idureg(
     input  logic                           rst
    ,input  logic                           clk

    //signals from ifu1
    ,input  logic [`ysyx_25060170_PC]       ifu2_if2idureg_currentpc
    ,input  logic [`ysyx_25060170_INST]     ifu2_if2idureg_inst
    ,input  logic [`ysyx_25060170_PC]       ifu2_if2idureg_nextpc
    ,input  logic                           ifu2_if2idureg_bpupredict
    ,input  logic                           ifu2_if2idureg_bpuvalid
    //stage control signal
    ,input  logic                           ifu2_if2idureg_valid
    ,input  logic                           idu_if2idureg_ready
    ,input  logic                           idu_if2idureg_stall
    ,input  logic                           idu_if2idureg_flush
    ,input  logic                           lsu_if2idureg_stall
    ,input  logic                           lsu_if2idureg_flush

    //output to ifu2
    ,output logic [`ysyx_25060170_PC]       if2idureg_idu_currentpc     
    ,output logic [`ysyx_25060170_INST]     if2idureg_idu_inst          
    ,output logic [`ysyx_25060170_PC]       if2idureg_idu_nextpc        
    ,output logic                           if2idureg_idu_bpupredict
    ,output logic                           if2idureg_idu_bpuvalid    
    ,output logic                           if2idureg_idu_valid         
);

//流水线控制
wire stall = ifu2_if2idureg_valid | idu_if2idureg_stall | lsu_if2idureg_stall | ~idu_if2idureg_ready;
wire flush = (~idu_if2idureg_stall & idu_if2idureg_flush) | lsu_if2idureg_flush;

always_ff @(posedge clk) begin
    if(rst) begin
        if2idureg_idu_currentpc     <=  `ysyx_25060170_ZERO32      ;
        if2idureg_idu_inst          <=  `ysyx_25060170_ZERO32      ;
        if2idureg_idu_nextpc        <=  `ysyx_25060170_ZERO32      ;
        if2idureg_idu_bpupredict    <=  1'b0                       ;
        if2idureg_idu_bpuvalid      <=  1'b0                       ;
        if2idureg_idu_valid         <=  1'b1                       ; //1无效 0有效
    end
    else begin
        if(stall) begin
        if2idureg_idu_currentpc     <=  if2idureg_idu_currentpc    ;
        if2idureg_idu_inst          <=  if2idureg_idu_inst         ;
        if2idureg_idu_nextpc        <=  if2idureg_idu_nextpc       ;
        if2idureg_idu_bpupredict    <=  if2idureg_idu_bpupredict   ;
        if2idureg_idu_bpuvalid      <=  if2idureg_idu_bpuvalid     ;
        if2idureg_idu_valid         <=  if2idureg_idu_valid        ; //1无效 0有效
        end
        else if(flush) begin
        if2idureg_idu_currentpc     <=  `ysyx_25060170_ZERO32      ;
        if2idureg_idu_inst          <=  `ysyx_25060170_ZERO32      ;
        if2idureg_idu_nextpc        <=  `ysyx_25060170_ZERO32      ;
        if2idureg_idu_bpupredict    <=  1'b0                       ;
        if2idureg_idu_bpuvalid      <=  1'b0                       ;
        if2idureg_idu_valid         <=  1'b1                       ;
        end
        else  begin
        if2idureg_idu_currentpc     <=  ifu2_if2idureg_currentpc   ;
        if2idureg_idu_inst          <=  ifu2_if2idureg_inst        ;
        if2idureg_idu_nextpc        <=  ifu2_if2idureg_nextpc      ;
        if2idureg_idu_bpupredict    <=  ifu2_if2idureg_bpupredict  ;
        if2idureg_idu_bpuvalid      <=  ifu2_if2idureg_bpuvalid    ;
        if2idureg_idu_valid         <=  1'b0                       ;
        end
    end
end

endmodule

