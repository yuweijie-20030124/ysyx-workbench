`include "define.v"

//五级流水线取指模块

module ysyx_25060170_ifu(
    //pc jump signals
     input  wire                        id_pc_jump_i
    ,input  wire [`ysyx_25060170_PC]    id_pc_i
    ,input  wire                        ex_pc_jump_i
    ,input  wire [`ysyx_25060170_PC]    ex_pc_i   
    ,input  wire                        ls_pc_jump_i
    ,input  wire [`ysyx_25060170_PC]    ls_pc_i
    ,input  wire [`ysyx_25060170_PC]    bp_pc_i
    
    //stage control signal
    ,input  wire                        inst_valid_i
    ,input  wire                        id_ready_i
    ,input  wire                        id_stall_i
    ,output wire                        if_valid_o 

    //out for idu
    ,input  wire [`ysyx_25060170_INST]  inst_i
    ,input  wire [`ysyx_25060170_PC]    pc_i
    ,output wire [`ysyx_25060170_PC]    pc_o
    ,output wire [`ysyx_25060170_INST]  inst_o
    ,output wire [`ysyx_25060170_PC]    pc_next_o
);


wire   stall      = (ex_pc_jump_i | ls_pc_jump_i) ? 0 : id_stall_i  ;

assign if_valid_o = (id_ready_i | stall) ? 0 : ~inst_valid_i        ;
assign inst_o     = inst_i                                          ;
assign pc_o       = pc_i                                            ;

assign pc_next_o =                        bp_pc_i |
                {32{ex_pc_jump_i == 1}} & ex_pc_i |
                {32{ls_pc_jump_i == 1}} & ls_pc_i |
                {32{id_pc_jump_i == 1}} & id_pc_i ;

endmodule