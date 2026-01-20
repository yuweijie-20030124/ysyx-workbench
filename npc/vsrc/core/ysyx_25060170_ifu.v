`include "define.v"

//五级流水线取指模块
//正常还是用ifu的pc
//当jal jalr bxx采用bpu的pc
module ysyx_25060170_ifu(
    //pc jump signals
     input wire                         rst             //<<i<<      
    ,input wire                         clk             //<<i<<
    ,input  wire                        id_pc_jump_i    //<<i<<
    ,input  wire [`ysyx_25060170_PC]    id_pc_i         //<<i<<
    ,input  wire                        ls_pc_jump_i    //<<i<<
    ,input  wire [`ysyx_25060170_PC]    ls_pc_i         //<<i<<
    ,input  wire                        bp_pc_jump_i    //<<i<<
    ,input  wire [`ysyx_25060170_PC]    bp_pc_i         //<<i<< jal jalr bxx

    /* verilator lint_off UNUSEDSIGNAL */
    // ,input  wire                        jal_jalr_i      //<<i<<
    ,input  wire                        branch_i        //<<i<<
    /* verilator lint_on  UNUSEDSIGNAL */

    //stage control signal  
    // ,input  wire                        inst_valid_i //<<i<<
    ,input  wire                        id_ready_i      //<<i<<
    ,input  wire                        id_stall_i      //<<i<<
    ,output wire                        if_valid_o      //>>o>>

    //out for idu
    ,input  wire [`ysyx_25060170_INST]  inst_i          //<<i<<
    // ,input  wire [`ysyx_25060170_PC]    pc_i            //<<i<<
    ,output reg  [`ysyx_25060170_PC]    pc_o            //>>o>>
    ,output wire [`ysyx_25060170_INST]  inst_o          //>>o>>
    ,output reg  [`ysyx_25060170_PC]    next_pc_o       //>>o>>
    
);
wire   stall      = id_stall_i  ;
reg [`ysyx_25060170_PC]         pc; 
// assign if_valid_o = (id_ready_i | stall) ? 0 : ~inst_valid_i        ;
assign if_valid_o = (~id_ready_i | stall) ? 1'b1 : 1'b0             ;
assign inst_o     = inst_i                                          ;
// assign pc_o       = pc_i                                            ;

// wire [`ysyx_25060170_PC] pc_plus4;
// assign pc_plus4 = (rst==`ysyx_25060170_RSTABLE) ? `ysyx_25060170_STARTPC : (pc_o+`ysyx_25060170_PLUS4);

always@(posedge clk) begin
    if(rst) begin
        pc <= `ysyx_25060170_STARTPC;
    end
    else begin
        if(stall) begin
            pc <= pc; 
        end
        else if(bp_pc_jump_i) begin
            pc <= bp_pc_i;
            // $display("bp pc_o = 0x%h", pc_o); 
        end
        else if(branch_i) begin
            pc <= bp_pc_i;
        end
        else if(ls_pc_jump_i) begin
            pc <= ls_pc_i;
            // $display("ls pc_o = 0x%h", pc_o); 
        end
        else if(id_pc_jump_i) begin
            pc <= id_pc_i;
            // $display("id pc_o = 0x%h", pc_o); 
        end
        else if(~stall & if_valid_o) begin 
            // $display("pc_o = 0x%h", pc_o); 
            pc <= `ysyx_25060170_ZERO32;
        end
        else begin
            pc <= pc_o + `ysyx_25060170_PLUS4;
        end
    end
end
// assign pc_o = rst ? 
assign next_pc_o = pc_o + `ysyx_25060170_PLUS4;      

assign pc_o = pc ;
// assign next_pc_o =  pc_o + `ysyx_25060170_PLUS4 ;


// assign pc_next_o =                        bp_pc_i |
//                 {32{ls_pc_jump_i == 1}} & ls_pc_i |
//                 {32{id_pc_jump_i == 1}} & id_pc_i ;


endmodule
