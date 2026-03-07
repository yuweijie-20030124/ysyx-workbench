`include "define.v"

//ifu1_idu级间流水线

module ysyx_25060170_ifuidureg(
     input  logic                           rst
    ,input  logic                           clk

    //signals from ifu1
    ,input  logic [`ysyx_25060170_PC]       ifu_ifuidureg_currentpc
    ,input  logic [`ysyx_25060170_PC]       ifu_ifuidureg_nextpc
    ,input  logic                           ifu_ifuidureg_bpupredict
    ,input  logic                           ifu_ifuidureg_bpuvalid
    //stage control signal
    ,input  logic                           ifu_ifuidureg_valid
    ,input  logic                           idu_ifuidureg_ready
    ,input  logic                           idu_ifuidureg_stall
    ,input  logic                           idu_ifuidureg_flush
    ,input  logic                           lsu_ifuidureg_stall
    ,input  logic                           lsu_ifuidureg_flush

    //output to idu
    ,output logic [`ysyx_25060170_PC]       ifuidureg_idu_currentpc 
    ,output logic [`ysyx_25060170_PC]       ifuidureg_idu_nextpc
    ,output logic                           ifuidureg_idu_bpupredict
    ,output logic                           ifuidureg_idu_bpuvalid
    ,output logic                           ifuidureg_idu_valid
);

//流水线控制
wire stall = ifu_ifuidureg_valid | idu_ifuidureg_stall | lsu_ifuidureg_stall | idu_ifuidureg_stall | ~idu_ifuidureg_ready;
wire flush = (~idu_ifuidureg_stall & idu_ifuidureg_flush) | lsu_ifuidureg_flush;

always_ff @(posedge clk) begin
    if(rst) begin
        ifuidureg_idu_currentpc  <= `ysyx_25060170_ZERO32      ;
        ifuidureg_idu_nextpc     <= `ysyx_25060170_ZERO32      ;
        ifuidureg_idu_bpupredict <= 1'b0                       ;
        ifuidureg_idu_bpuvalid   <= 1'b0                       ;
        ifuidureg_idu_valid      <= 1'b1                       ;
    end
    else begin
        if(stall) begin
        ifuidureg_idu_currentpc  <= ifuidureg_idu_currentpc   ;
        ifuidureg_idu_nextpc     <= ifuidureg_idu_nextpc      ;
        ifuidureg_idu_bpupredict <= ifuidureg_idu_bpupredict  ;
        ifuidureg_idu_bpuvalid   <= ifuidureg_idu_bpuvalid    ;
        ifuidureg_idu_valid      <= ifuidureg_idu_valid       ;
        end
        else if(flush) begin
        ifuidureg_idu_currentpc  <= `ysyx_25060170_ZERO32      ;
        ifuidureg_idu_nextpc     <= `ysyx_25060170_ZERO32      ;
        ifuidureg_idu_bpupredict <= 1'b0                       ;
        ifuidureg_idu_bpuvalid   <= 1'b0                       ;
        ifuidureg_idu_valid      <= 1'b1                       ;
        end
        else  begin
        ifuidureg_idu_currentpc  <= ifu_ifuidureg_currentpc   ;
        ifuidureg_idu_nextpc     <= ifu_ifuidureg_nextpc      ;
        ifuidureg_idu_bpupredict <= ifu_ifuidureg_bpupredict  ;
        ifuidureg_idu_bpuvalid   <= ifu_ifuidureg_bpuvalid    ;
        ifuidureg_idu_valid      <= 1'b0                       ;
        end
    end
end

endmodule
