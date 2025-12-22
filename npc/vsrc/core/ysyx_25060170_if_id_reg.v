`include "define.v"

module ysyx_25060170_if_id_reg (
    //数据信号
     input  wire						    clk             //<<i<<
    ,input  wire						    rst             //<<i<<
    ,input  wire [`ysyx_25060170_PC]        pc_i            //<<i<<
    ,input  wire [`ysyx_25060170_PC]        next_pc_i       //<<i<<
    ,input  wire [`ysyx_25060170_INST]      inst_i          //<<i<<
    ,input  wire                            bp_jump_i       //<<i<<
    //流水线控制信号
    ,input  wire                            if_valid_i      //<<i>>
    ,input  wire                            id_flush_i      //<<i>>
    ,input  wire                            ls_flush_i      //<<i>>
    ,input  wire                            id_stall_i      //<<i>>
    ,input  wire                            id_ready_i      //<<i>>
    //输出信号给idu
    ,output reg  [`ysyx_25060170_PC]        pc_o            //>>o>>
    ,output reg  [`ysyx_25060170_PC]        next_pc_o       //>>o>>
    ,output reg  [`ysyx_25060170_INST]      inst_o          //>>o>>
    ,output reg                             id_jump_o       //>>o>>

 );

    wire flush = (~id_stall_i & id_flush_i) | ls_flush_i ; //停顿的时候不要清空IF/ID

    always@(posedge clk) begin
        if (rst | flush) begin
            inst_o      <=  `ysyx_25060170_ZERO32;
            pc_o        <=  `ysyx_25060170_ZERO32;
            next_pc_o   <=  `ysyx_25060170_ZERO32;
            id_jump_o   <=  1'b0;
        end
        else if (if_valid_i | id_stall_i | ~id_ready_i) begin
            inst_o      <=  inst_o   ;
            pc_o        <=  pc_o     ;
            next_pc_o   <=  next_pc_o;
            id_jump_o   <=  id_jump_o;
        end
        else begin
            inst_o      <=  inst_i   ;
            pc_o        <=  pc_i     ;
            next_pc_o   <=  next_pc_i;
            id_jump_o   <=  bp_jump_i;
        end
    end
endmodule

