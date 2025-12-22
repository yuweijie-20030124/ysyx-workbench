`include "define.v"

//五级流水线取指模块
//正常还是用ifu的pc
//当jal jalr bxx采用bpu的pc
module ysyx_25060170_ifu(
    //pc jump signals
     input  wire                        id_pc_jump_i    //<<i<<
    ,input  wire [`ysyx_25060170_PC]    id_pc_i         //<<i<<
    ,input  wire                        ls_pc_jump_i    //<<i<<
    ,input  wire [`ysyx_25060170_PC]    ls_pc_i         //<<i<<
    ,input  wire                        bp_pc_jump_i    //<<i<<
    ,input  wire [`ysyx_25060170_PC]    bp_pc_i         //<<i<<
    
    
    //stage control signal
    ,input wire                         rst             //<<i<<      
    ,input wire                         clk             //<<i<<  
    // ,input  wire                        inst_valid_i //<<i<<
    ,input  wire                        id_ready_i      //<<i<<
    ,input  wire                        id_stall_i      //<<i<<
    ,output wire                        if_valid_o      //>>o>>

    //out for idu
    ,input  wire [`ysyx_25060170_INST]  inst_i          //<<i<<
    ,input  wire [`ysyx_25060170_PC]    pc_i            //<<i<<
    ,output reg  [`ysyx_25060170_PC]    pc_o            //>>o>>
    ,output wire [`ysyx_25060170_INST]  inst_o          //>>o>>
    ,output reg  [`ysyx_25060170_PC]    next_pc_o       //>>o>>
    
);
wire   stall      = (ls_pc_jump_i) ? 0 : id_stall_i  ;

// assign if_valid_o = (id_ready_i | stall) ? 0 : ~inst_valid_i        ;
assign if_valid_o = (id_ready_i | stall) ? 1'b0 : 1'b1              ;
assign inst_o     = inst_i                                          ;
// assign pc_o       = pc_i                                            ;

always@(posedge clk) begin
    if(rst) begin
        pc_o <= `ysyx_25060170_STARTPC;
    end
    else begin
        if(ls_pc_jump_i) begin
            pc_o <= ls_pc_i;
        end
        else if(id_pc_jump_i) begin
            pc_o <= id_pc_i;
        end
        else if(bp_pc_jump_i) begin
            pc_o <= bp_pc_i;
        end
        else if(~stall & if_valid_o) begin
            pc_o <= pc_i + `ysyx_25060170_PLUS4;
        end
    end
end

assign next_pc_o = pc_o + `ysyx_25060170_PLUS4 ;

// assign pc_next_o =                        bp_pc_i |
//                 {32{ls_pc_jump_i == 1}} & ls_pc_i |
//                 {32{id_pc_jump_i == 1}} & id_pc_i ;


endmodule
