`include "define.v"


//流水线干级间流水 & forwarding的活

module ysyx_25060170_if_id_reg (
    //数据信号
     input  wire						    clk             //<<i<<
    ,input  wire						    rst             //<<i<<
    ,input  wire [`ysyx_25060170_PC]        pc_i            //<<i<<
    ,input  wire [`ysyx_25060170_PC]        next_pc_i       //<<i<<
    ,input  wire [`ysyx_25060170_INST]      inst_i          //<<i<<
    ,input  wire                            bxx_inst_i      //<<i<<
    ,input  wire                            bp_jump_i       //<<i<<
    // ,input  wire [`ysyx_25060170_PC]        bp_jalr_pc_i    //<<i<<
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
    ,output reg                             inst_bxx_o      //>>o>>
    ,output reg                             bp_jump_o       //>>o>>
    // ,output reg  [`ysyx_25060170_PC]        bp_jalr_pc_o   //>>o>>
    ,output reg                             if_valid_o      //>>o>>

 );

    wire flush = (~id_stall_i & id_flush_i) | ls_flush_i ; //停顿的时候不要清空IF/ID
    wire stall = if_valid_i | id_stall_i | ~id_ready_i   ;

    always@(posedge clk) begin
        if (rst | flush) begin
            inst_o       <=  `ysyx_25060170_ZERO32;
            pc_o         <=  `ysyx_25060170_ZERO32;
            next_pc_o    <=  `ysyx_25060170_ZERO32;
            inst_bxx_o   <=  1'b0;
            bp_jump_o    <=  1'b0;
            // bp_jalr_pc_o<=  `ysyx_25060170_ZERO32;
            if_valid_o   <=  1'b1;

        end
        else if (id_ready_i & if_valid_i) begin
            if_valid_o <= 1'b1;
        end
        else if (stall) begin
            inst_o       <=  inst_o      ;
            pc_o         <=  pc_o        ;
            next_pc_o    <=  next_pc_o   ;
            inst_bxx_o   <=  inst_bxx_o  ;
            bp_jump_o    <=  bp_jump_o    ;
            // bp_jalr_pc_o<=  bp_jalr_pc_o;
            if_valid_o   <=  if_valid_o  ;
        end
        else begin
            inst_o       <=  inst_i      ;
            pc_o         <=  pc_i        ;
            next_pc_o    <=  next_pc_i   ;
            inst_bxx_o   <=  bxx_inst_i  ;
            bp_jump_o <=  bp_jump_i;
            // bp_jalr_pc_o<=  bp_jalr_pc_i;
            if_valid_o   <=  1'b0        ;
        end
    end
endmodule

