`include "define.v"

//ifu1_ifu2级间流水线

module ysyx_25060170_if1if2reg(
     input  logic                           rst
    ,input  logic                           clk

    //signals from ifu1
    ,input  logic [`ysyx_25060170_PC]       ifu1_if1if2reg_currentpc
    ,input  logic [`ysyx_25060170_PC]       ifu1_if1if2reg_nextpc
    ,input  logic                           ifu1_if1if2reg_bpupredict
    ,input  logic                           ifu1_if1if2reg_bpuvalid
    //stage control signal
    ,input  logic                           ifu1_if1if2reg_valid
    ,input  logic                           ifu2_if1if2reg_ready
    ,input  logic                           ifu2_if1if2reg_stall
    ,input  logic                           idu_if1if2reg_stall
    ,input  logic                           idu_if1if2reg_flush
    ,input  logic                           lsu_if1if2reg_stall
    ,input  logic                           lsu_if1if2reg_flush

    //output to ifu2
    ,output logic [`ysyx_25060170_PC]       if1if2reg_ifu2_currentpc 
    ,output logic [`ysyx_25060170_PC]       if1if2reg_ifu2_nextpc
    ,output logic                           if1if2reg_ifu2_bpupredict
    ,output logic                           if1if2reg_ifu2_bpuvalid
    ,output logic                           if1if2reg_ifu2_valid
);

//流水线控制
wire stall = ifu1_if1if2reg_valid | idu_if1if2reg_stall | lsu_if1if2reg_stall | ifu2_if1if2reg_stall | ~ifu2_if1if2reg_ready;
wire flush = (~idu_if1if2reg_stall & idu_if1if2reg_flush) | lsu_if1if2reg_flush;

always_ff @(posedge clk) begin
    if(rst) begin
        if1if2reg_ifu2_currentpc  <= `ysyx_25060170_ZERO32      ;
        if1if2reg_ifu2_nextpc     <= `ysyx_25060170_ZERO32      ;
        if1if2reg_ifu2_bpupredict <= 1'b0                       ;
        if1if2reg_ifu2_bpuvalid   <= 1'b0                       ;
        if1if2reg_ifu2_valid      <= 1'b1                       ;
    end
    else begin
        if(stall) begin
        if1if2reg_ifu2_currentpc  <= if1if2reg_ifu2_currentpc   ;
        if1if2reg_ifu2_nextpc     <= if1if2reg_ifu2_nextpc      ;
        if1if2reg_ifu2_bpupredict <= if1if2reg_ifu2_bpupredict  ;
        if1if2reg_ifu2_bpuvalid   <= if1if2reg_ifu2_bpuvalid    ;
        if1if2reg_ifu2_valid      <= if1if2reg_ifu2_valid       ;
        end
        else if(flush) begin
        if1if2reg_ifu2_currentpc  <= `ysyx_25060170_ZERO32      ;
        if1if2reg_ifu2_nextpc     <= `ysyx_25060170_ZERO32      ;
        if1if2reg_ifu2_bpupredict <= 1'b0                       ;
        if1if2reg_ifu2_bpuvalid   <= 1'b0                       ;
        if1if2reg_ifu2_valid      <= 1'b1                       ;
        end
        else  begin
        if1if2reg_ifu2_currentpc  <= ifu1_if1if2reg_currentpc   ;
        if1if2reg_ifu2_nextpc     <= ifu1_if1if2reg_nextpc      ;
        if1if2reg_ifu2_bpupredict <= ifu1_if1if2reg_bpupredict  ;
        if1if2reg_ifu2_bpuvalid   <= ifu1_if1if2reg_bpuvalid    ;
        if1if2reg_ifu2_valid      <= 1'b0                       ;
        end
    end
end

endmodule
