`include "define.v"

//ifu的第二级组合逻辑，从

module ysyx_25060170_ifu2(
     input  wire [`ysyx_25060170_PC]        pc_i            //<<i<<
    ,input  wire [`ysyx_25060170_PC]        next_pc_i       //<<i<<
    ,input  wire [`ysyx_25060170_INST]      inst_i          //<<i<< 从存储器(DPIC)来的指令
    ,input  wire                            bxx_inst_i      //<<i<<
    ,input  wire                            bp_jump_i       //<<i<<

    ,output wire [`ysyx_25060170_PC]        pc_o            //>>o>>
    ,output wire [`ysyx_25060170_PC]        next_pc_o       //>>o>>    
    ,output wire [`ysyx_25060170_INST]      inst_o          //>>o>>
    ,output wire                            inst_bxx_o      //>>o>>
    ,output wire                            bp_jump_o       //>>o>>

    //竞争冒险
    ,input  wire                            if1_valid_i     //<<i<<
    ,input  wire                            id_ready_i      //<<i<<
    ,output wire                            if2_valid_o     //>>o>>
    ,output wire                            if2_ready_o     //>>o>>

);

    assign pc_o         =  pc_i        ;
    assign next_pc_o    =  next_pc_i   ;
    assign inst_o       =  inst_i      ;
    assign inst_bxx_o   =  bxx_inst_i  ;
    assign bp_jump_o    =  bp_jump_i   ;
    assign if2_valid_o  =  if1_valid_i ;
    assign if2_ready_o  =  id_ready_i  ;

endmodule
