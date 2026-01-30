 `include "define.v"

module ysyx_25060170_idu_decoder(
	 input wire                 		    rst  		//<<i<<
	,input wire   [`ysyx_25060170_INST]	    inst 		//<<i<<

	,output wire						    rs1_ena		//>>o>>
	,output wire						    rs2_ena		//>>o>>
	,output wire 							csr_inst	//>>o>>
	,output wire  [1:0]          			wb_ctl  	//>>o>>
	,output wire  [3:0]          			mem_ctl 	//>>o>>
	,output wire                 			branch  	//>>o>>
	,output wire  [`ysyx_25060170_IMM] 		ext_imm 	//>>o>>
	,output wire                            load		//>>o>>
	,output wire  [1:0]						op1_sel		//>>o>>
	,output wire  [2:0]						op2_sel		//>>o>>
    ,output wire  [7:0]					    alu_ctl		//>>o>>
	// ,output wire 							INST_ecall  //>>o>>
);

// assign INST_ecall = inst_ecall;

wire [6:0] opcode ;
wire [2:0] funct3 ;
/* verilator lint_off UNUSEDSIGNAL */
wire [6:0] funct7 ;
/* verilator lint_on UNUSEDSIGNAL */

wire [11:0] i_imm ;
wire [20:1] j_imm ;
wire [19:0] u_imm ;
wire [11:0] s_imm ;
wire [12:1] b_imm ;


assign opcode = inst[6:0];
assign funct3 = inst[14:12];
assign funct7 = inst[31:25]  ;

assign i_imm = inst[31:20];
assign {j_imm[20],j_imm[10:1],j_imm[11],j_imm[19:12]} = inst[31:12];
assign u_imm = inst[31:12];
assign s_imm = {inst[31:25], inst[11:7]} ;
assign {b_imm[12] , b_imm[10:5] , b_imm[4:1] , b_imm[11]} = {inst[31:25] , inst[11:7]} ;

wire [7:0] inst_type;

//-----------------------------------decode--------------------------------//

assign inst_type[7] = (rst == `ysyx_25060170_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_25060170_SYSTEM)       ;
assign inst_type[6] = (rst == `ysyx_25060170_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_25060170_OP32)   ;
assign inst_type[5] = (rst == `ysyx_25060170_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_25060170_OPIMM32)   ;
assign inst_type[4] = (rst == `ysyx_25060170_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_25060170_OPIMM)    ;
assign inst_type[3] = (rst == `ysyx_25060170_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_25060170_OP)    ;
assign inst_type[2] = (rst == `ysyx_25060170_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_25060170_BRANCH)    ;
assign inst_type[1] = (rst == `ysyx_25060170_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_25060170_LOAD) & (opcode[1:0] == 2'b11)     ;
assign inst_type[0] = (rst == `ysyx_25060170_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_25060170_STORE)     ;

wire inst_lui   = (rst == `ysyx_25060170_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_25060170_LUI)    ;
wire inst_auipc = (rst == `ysyx_25060170_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_25060170_AUIPC)  ;
wire inst_jal   = (rst == `ysyx_25060170_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_25060170_JAL)    ;
wire inst_jalr  = (rst == `ysyx_25060170_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_25060170_JALR)   ;

wire inst_sb    = inst_type[0] &  ~funct3[2] & ~funct3[1] & ~funct3[0]   ;
wire inst_sh    = inst_type[0] &  ~funct3[2] & ~funct3[1] &  funct3[0]   ;
wire inst_sw    = inst_type[0] &  ~funct3[2] &  funct3[1] & ~funct3[0]   ;
wire inst_sd    = inst_type[0] &  ~funct3[2] &  funct3[1] &  funct3[0]   ;

wire inst_lb    = inst_type[1] &  ~funct3[2] & ~funct3[1] & ~funct3[0]   ;
wire inst_lh    = inst_type[1] &  ~funct3[2] & ~funct3[1] &  funct3[0]   ;
wire inst_lw    = inst_type[1] &  ~funct3[2] &  funct3[1] & ~funct3[0]   ;
wire inst_ld    = inst_type[1] &  ~funct3[2] &  funct3[1] &  funct3[0]   ;
wire inst_lbu   = inst_type[1] &   funct3[2] & ~funct3[1] & ~funct3[0]   ;
wire inst_lhu   = inst_type[1] &   funct3[2] & ~funct3[1] &  funct3[0]   ;
wire inst_lwu   = inst_type[1] &   funct3[2] &  funct3[1] & ~funct3[0]   ;

wire inst_beq   = inst_type[2] & ~funct3[2] & ~funct3[1] & ~funct3[0]   ;
wire inst_bne   = inst_type[2] & ~funct3[2] & ~funct3[1] &  funct3[0]   ;
wire inst_blt   = inst_type[2] &  funct3[2] & ~funct3[1] & ~funct3[0]   ;
wire inst_bge   = inst_type[2] &  funct3[2] & ~funct3[1] &  funct3[0]   ;
wire inst_bltu  = inst_type[2] &  funct3[2] &  funct3[1] & ~funct3[0]   ;
wire inst_bgeu  = inst_type[2] &  funct3[2] &  funct3[1] &  funct3[0]   ;

wire inst_add   = inst_type[3] & ~funct3[2] & ~funct3[1] & ~funct3[0] & ~funct7[5] & ~funct7[0];
wire inst_sub   = inst_type[3] & ~funct3[2] & ~funct3[1] & ~funct3[0] &  funct7[5] & ~funct7[0];
wire inst_sll   = inst_type[3] & ~funct3[2] & ~funct3[1] &  funct3[0] & ~funct7[0] ;
wire inst_slt   = inst_type[3] & ~funct3[2] &  funct3[1] & ~funct3[0] & ~funct7[0] ;
wire inst_sltu  = inst_type[3] & ~funct3[2] &  funct3[1] &  funct3[0] & ~funct7[0]  ;
wire inst_xor   = inst_type[3] &  funct3[2] & ~funct3[1] & ~funct3[0] & ~funct7[0] ;
wire inst_srl   = inst_type[3] &  funct3[2] & ~funct3[1] &  funct3[0] & ~funct7[5] & ~funct7[0];
wire inst_sra   = inst_type[3] &  funct3[2] & ~funct3[1] &  funct3[0] &  funct7[5] & ~funct7[0];
wire inst_or    = inst_type[3] &  funct3[2] &  funct3[1] & ~funct3[0] & ~funct7[0] ;
wire inst_and   = inst_type[3] &  funct3[2] &  funct3[1] &  funct3[0] & ~funct7[0]  ;
wire inst_div   = inst_type[3] &  funct3[2] & ~funct3[1] & ~funct3[0]  & funct7[0] ;
wire inst_divu  = inst_type[3] &  funct3[2] & ~funct3[1] &  funct3[0]  & funct7[0] ;
wire inst_mul   = inst_type[3] &  ~funct3[2] & ~funct3[1] & ~funct3[0] & funct7[0] ;
wire inst_mulh  = inst_type[3] &  ~funct3[2] & ~funct3[1] &  funct3[0] & funct7[0] ;
wire inst_mulhsu= inst_type[3] &  ~funct3[2] &  funct3[1] & ~funct3[0] & funct7[0] ;
wire inst_mulhu = inst_type[3] &  ~funct3[2] &  funct3[1] &  funct3[0] & funct7[0] ;
wire inst_rem   = inst_type[3] &  funct3[2] &  funct3[1] & ~funct3[0]  & funct7[0] ;
wire inst_remu  = inst_type[3] &  funct3[2] &  funct3[1] &  funct3[0]  & funct7[0] ;

wire inst_addi  = inst_type[4] & ~funct3[2] & ~funct3[1] & ~funct3[0]   ;
wire inst_slti  = inst_type[4] & ~funct3[2] &  funct3[1] & ~funct3[0]   ;
wire inst_sltiu = inst_type[4] & ~funct3[2] &  funct3[1] &  funct3[0]   ;
wire inst_xori  = inst_type[4] &  funct3[2] & ~funct3[1] & ~funct3[0]   ;
wire inst_ori   = inst_type[4] &  funct3[2] &  funct3[1] & ~funct3[0]   ;
wire inst_andi  = inst_type[4] &  funct3[2] &  funct3[1] &  funct3[0]   ;
wire inst_slli  = inst_type[4] & ~funct3[2] & ~funct3[1] &  funct3[0]   ;
wire inst_srli  = inst_type[4] &  funct3[2] & ~funct3[1] &  funct3[0] & ~i_imm[10]   ;
wire inst_srai  = inst_type[4] &  funct3[2] & ~funct3[1] &  funct3[0] &  i_imm[10]   ;

wire inst_ecall  = inst_type[7] & ~funct3[2] & ~funct3[1] & ~funct3[0] && (i_imm == 12'd0)         ;	
wire inst_mret   = inst_type[7] & ~funct3[2] & ~funct3[1] & ~funct3[0] & funct7[3] & funct7[4];
wire inst_csrrw  = inst_type[7] & ~funct3[2] & ~funct3[1] &  funct3[0]   ;
wire inst_csrrs  = inst_type[7] & ~funct3[2] &  funct3[1] & ~funct3[0]   ;
wire inst_csrrc  = inst_type[7] & ~funct3[2] &  funct3[1] &  funct3[0]   ;
wire inst_csrrwi = inst_type[7] &  funct3[2] & ~funct3[1] &  funct3[0]   ;
wire inst_csrrsi = inst_type[7] &  funct3[2] &  funct3[1] & ~funct3[0]   ;
wire inst_csrrci = inst_type[7] &  funct3[2] &  funct3[1] &  funct3[0]   ;
wire inst_ebreak = inst_type[7] & ~funct3[2] & ~funct3[1] & ~funct3[0] && (i_imm == 12'd1)         ;

assign alu_ctl[7] = (rst == `ysyx_25060170_RSTABLE) ? 0 :   inst_srli | inst_xor | inst_auipc | inst_ebreak | inst_sh | inst_sw | inst_bltu | inst_ld | inst_mulh | inst_div | inst_remu | inst_csrrw | inst_csrrwi  |  inst_csrrsi | inst_csrrci;

assign alu_ctl[6] = (rst == `ysyx_25060170_RSTABLE) ? 0 :   inst_slli | inst_sltu | inst_xor | inst_lui | inst_jalr | inst_sb | inst_bge | inst_bltu | inst_lw | inst_ld | inst_mul | inst_rem | inst_mret | inst_csrrc | inst_csrrsi;

assign alu_ctl[5] = (rst == `ysyx_25060170_RSTABLE) ? 0 :   inst_andi | inst_slt | inst_sltu | inst_and |inst_auipc | inst_jal | inst_blt | inst_bge | inst_bltu | inst_lh | inst_lw | inst_lwu | inst_mulh | inst_mulhu | inst_divu | inst_ecall | inst_csrrw | inst_csrrs | inst_csrrci;

assign alu_ctl[4] = (rst == `ysyx_25060170_RSTABLE) ? 0 :   inst_ori | inst_sll | inst_slt | inst_or | inst_lui | inst_bne | inst_blt | inst_bge | inst_lb | inst_lh | inst_ld | inst_lhu | inst_mul | inst_mulh | inst_mulhu | inst_div | inst_mret | inst_csrrwi;

assign alu_ctl[3] = (rst == `ysyx_25060170_RSTABLE) ? 0 :   inst_xori  | inst_sub | inst_sll  | inst_sra  | inst_and | inst_beq | inst_bne   | inst_blt | inst_bgeu  | inst_lb  | inst_lw   | inst_lbu | inst_lwu | inst_mul | inst_div | inst_ecall  | inst_csrrw | inst_csrrc | inst_csrrsi ;

assign alu_ctl[2] = (rst == `ysyx_25060170_RSTABLE) ? 0 :   inst_sltiu   | inst_add | inst_sub | inst_srl  | inst_or | inst_ebreak  | inst_sd | inst_beq | inst_bne | inst_bgeu   | inst_lh | inst_lhu | inst_lwu | inst_mulhu | inst_remu | inst_mret  | inst_csrrs | inst_csrrwi | inst_csrrci ;

assign alu_ctl[1] = (rst == `ysyx_25060170_RSTABLE) ? 0 :   inst_slti | inst_srai  | inst_add  | inst_sra | inst_jalr  | inst_sh  | inst_sd   | inst_beq   | inst_lb  | inst_lbu | inst_lhu | inst_mulhsu | inst_mulhu | inst_divu | inst_rem | inst_remu | inst_ecall |inst_csrrc  ;

assign alu_ctl[0] = (rst == `ysyx_25060170_RSTABLE) ? 0 :   inst_addi | inst_srai  | inst_srl | inst_jal | inst_sb | inst_sw   | inst_sd   | inst_bgeu    | inst_lbu | inst_mulhsu | inst_divu | inst_rem | inst_csrrs             ;

assign csr_inst   = inst_csrrw | inst_csrrs | inst_csrrc | inst_csrrwi | inst_csrrsi | inst_csrrci ;

//--------------------------output signal-----------------------//

//output to regfile signal
assign rs1_ena =  inst_type[6] | inst_type[5] | inst_type[4] | inst_type[3] | inst_type[2] | inst_type[1] | inst_type[0] | inst_jalr | inst_csrrw | inst_csrrs | inst_csrrc | inst_ecall;
assign rs2_ena =  inst_type[6] | inst_type[3] | inst_type[2] | inst_type[0] ;

//output to ifu singal
assign branch = inst_type[2];
assign load   = inst_type[1];

//Extend IMM
assign ext_imm = 32'b0 |
				{32{rst == `ysyx_25060170_RSTABLE}} & `ysyx_25060170_ZERO32 | //复位设置为0
				{32{(inst_type[1] | inst_type[4] | inst_type[5] | inst_type[7] | inst_jalr)}} & {{20{i_imm[11]}}, i_imm} | // i_imm扩展为32位
				{32{(inst_lui | inst_auipc)}} & {u_imm, 12'b0} | // u_imm扩展为32位
				{32{inst_jal}} & {{11{j_imm[20]}}, j_imm[20:1], 1'b0} | // j_imm扩展为32位，注意左移1位
				{32{inst_type[0]}} & {{20{s_imm[11]}}, s_imm} | // s_imm扩展为32位
				{32{inst_type[2]}} & {{19{b_imm[12]}}, b_imm, 1'b0} ; // b_imm扩展为32位，注意左移1位

//output to mem signal
assign mem_ctl = 4'b0 | 
				 {4{alu_ctl == `INST_SB}} & 4'b0001 |
				 {4{alu_ctl == `INST_SH}} & 4'b0010 |
				 {4{alu_ctl == `INST_SW}} & 4'b0100 |
				 {4{alu_ctl == `INST_SD}} & 4'b0101 |
				 {4{alu_ctl == `INST_LB}} & 4'b1001 |
				 {4{alu_ctl == `INST_LH}} & 4'b1010 |
				 {4{alu_ctl == `INST_LW}} & 4'b1011 |
				 {4{alu_ctl == `INST_LD}} & 4'b1100 |
				 {4{alu_ctl == `INST_LBU}}& 4'b1101 |
				 {4{alu_ctl == `INST_LHU}}& 4'b1110 |
				 {4{alu_ctl == `INST_LWU}}& 4'b1111 ;


//output to wb signal 
assign wb_ctl = 2'b00 | 
				{2{inst_type[7]}} & 2'b10 | //system指令
				{2{inst_type[6]}} & 2'b10 | //op32指令
				{2{inst_type[5]}} & 2'b10 | //opimm32指令
				{2{inst_type[4]}} & 2'b10 | //opimm指令
				{2{inst_type[3]}} & 2'b10 | //op指令
				{2{inst_type[1]}} & 2'b01 | //load指令
				{2{inst_lui}}     & 2'b10 | //lui指令
				{2{inst_auipc}}   & 2'b10 | //auipc指令
				{2{inst_jal}}     & 2'b10 |	//jal指令
				{2{inst_jalr}}    & 2'b10 ; //jalr指令

//output to exu singal
wire imm_ena ;
wire imm_en	 ;
assign imm_ena = inst_type[0] | inst_type[1]  | inst_type[4] | inst_type[5] | inst_type[7] |  inst_lui | inst_auipc  ;

assign imm_en = imm_ena & ~csr_inst;
assign op1_sel = 2'b00 | 
				{2{inst_jal}} 		& 2'b10 | 	//jal
				{2{inst_jalr}} 		& 2'b10 | 	//jalr
				{2{(inst_auipc)}} 	& 2'b10 | 	//auipc
				{2{(rs1_ena)}} 		& 2'b01 ; 	//rs1

assign op2_sel = 3'b000 |
				{3{inst_jal}} 		& 3'b010 | 	//jal
				{3{inst_jalr}} 		& 3'b010 | 	//jalr
				{3{imm_en}}	 		& 3'b100 | 	//imm
				{3{rs2_ena}} 		& 3'b001 | 	//rs2
				{3{csr_inst}}		& 3'b011 ;  //csr寄存器中的值
/*
assign op1 = `ysyx_25060170_ZERO32 |
             {32{op1_sel_i == 2'b01}} & op1_i |
             {32{op1_sel_i == 2'b10}} & pc_i  ;

assign op2 = `ysyx_25060170_ZERO32 |
             {32{op2_sel_i == 3'b001}} & op2_i |
             {32{op2_sel_i == 3'b010}} & 32'b100|
             {32{op2_sel_i == 3'b100}} & imm_i ;  
*/
endmodule

