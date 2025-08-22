 `include "define.v"

module ysyx_25060170_idu_decode(
	input	wire				            rst  	,
	input	wire	[`ysyx_25060170_INST]	inst	,		//指令
  
	output	wire				            rs1_ena	,		//寄存器r1读取使能
	output	wire				            rs2_ena	,		//寄存器r2读取使能
	output	wire	[1:0]			        wb_ctl  ,		//回写控制信号 00无写回	01写回内存 10写回register file
	output	reg	    [3:0]			        mem_ctl ,		//内存控制信号，用于控制存储器访问类型，sb字节储存，lw字储存
	output	wire				            branch  ,
	output	reg	    [`ysyx_25060170_IMM]	ext_imm ,
	output	wire				            load	,
    
	output	wire	[1:0]			        op1_sel	,
	output	wire	[2:0]			        op2_sel	,
	output	wire	[7:0]			        alu_ctl	
);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//---------------------------------------------decode-------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

wire [6:0] opcode ;
wire [2:0] funct3 ;
wire [6:0] funct7 ;

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
//dont understand
assign inst_type[7] = (rst == `ysyx_25060170_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_25060170_SYSTEM)       ;
assign inst_type[6] = (rst == `ysyx_25060170_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_25060170_OP32)   ;
assign inst_type[5] = (rst == `ysyx_25060170_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_25060170_OPIMM32)   ;
assign inst_type[4] = (rst == `ysyx_25060170_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_25060170_OPIMM)    ;
assign inst_type[3] = (rst == `ysyx_25060170_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_25060170_OP)    ;
assign inst_type[2] = (rst == `ysyx_25060170_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_25060170_BRANCH)    ;
assign inst_type[1] = (rst == `ysyx_25060170_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_25060170_LOAD)  & (opcode[1:0] == 2'b11)    ;
assign inst_type[0] = (rst == `ysyx_25060170_RSTABLE) ? 0 : (opcode[6:2] == `ysyx_25060170_STORE)     ;

//---------------------------------------------inst-------------------------------------------------------//

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
wire inst_and   = inst_type[3] &  funct3[2] &  funct3[1] &  funct3[0] & (funct7 ==  7'd0) ;
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
wire inst_ebreak = inst_type[7] & ~funct3[2] & ~funct3[1] & ~funct3[0] && (i_imm == 12'd1)         ;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//---------------------------------------------output signal-------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//---------------------------------------------ctl signal------------------------------------------------------//

assign alu_ctl[7] = (rst == `ysyx_25060170_RSTABLE) ? 1'b0 :   inst_srli | inst_xor | inst_auipc | inst_ebreak | inst_sh | inst_sw | inst_bltu | inst_ld | inst_mulh | inst_div ;

assign alu_ctl[6] = (rst == `ysyx_25060170_RSTABLE) ? 1'b0 :   inst_slli | inst_sltu | inst_xor | inst_lui | inst_jalr | inst_sb | inst_bge | inst_bltu | inst_lw | inst_ld | inst_mul | inst_rem | inst_mret  ;

assign alu_ctl[5] = (rst == `ysyx_25060170_RSTABLE) ? 1'b0 :   inst_andi | inst_slt | inst_sltu | inst_and |inst_auipc |  inst_jal | inst_blt | inst_bge | inst_bltu | inst_lh | inst_lw | inst_lwu | inst_mulh | inst_mulhu ;

assign alu_ctl[4] = (rst == `ysyx_25060170_RSTABLE) ? 1'b0 :   inst_ori | inst_sll | inst_slt | inst_or | inst_lui | inst_bne | inst_blt | inst_bge | inst_lb | inst_lh | inst_ld | inst_lhu | inst_mul | inst_mulh | inst_mulhu | inst_div | inst_mret ;

assign alu_ctl[3] = (rst == `ysyx_25060170_RSTABLE) ? 1'b0 :   inst_xori  | inst_sub | inst_sll  | inst_sra  | inst_and  | inst_beq | inst_bne   | inst_blt | inst_bgeu  | inst_lb  | inst_lw   | inst_lbu | inst_lwu | inst_mul | inst_div ;

assign alu_ctl[2] = (rst == `ysyx_25060170_RSTABLE) ? 1'b0 :   inst_sltiu   | inst_add | inst_sub | inst_srl  | inst_or  | inst_ebreak  | inst_sd | inst_beq | inst_bne | inst_bgeu   | inst_lh | inst_lhu | inst_lwu | inst_mulhu | inst_remu | inst_mret;

assign alu_ctl[1] = (rst == `ysyx_25060170_RSTABLE) ? 1'b0 :   inst_slti | inst_srai  | inst_add  | inst_sra | inst_jalr  | inst_sh  | inst_sd   | inst_beq   | inst_lb  | inst_lbu | inst_lhu | inst_mulhsu | inst_mulhu | inst_divu | inst_rem | inst_remu | inst_ecall ;

assign alu_ctl[0] = (rst == `ysyx_25060170_RSTABLE) ? 1'b0 :   inst_addi | inst_srai  | inst_srl | inst_jal | inst_sb | inst_sw   | inst_sd   | inst_bgeu    | inst_lbu | inst_mulhsu | inst_divu | inst_rem ;          

//output to regfile signal
assign rs1_ena =  inst_type[6] | inst_type[5] | inst_type[4] | inst_type[3] | inst_type[2] | inst_type[1] | inst_type[0] | inst_jalr;
assign rs2_ena =  inst_type[6] | inst_type[3] | inst_type[2] | inst_type[0] ;


//output to ifu singal
wire jump;
assign branch = inst_type[2];
assign jump = inst_jal | inst_jalr;
assign load = inst_type[1];

//output to exu singal
wire imm_ena;
assign imm_ena =  inst_type[0] | inst_type[1]  | inst_type[4] | inst_type[5] | inst_type[7] |  inst_lui | inst_auipc  ;
assign op1_sel = (jump | inst_auipc) ? 2'b10 : rs1_ena ? 2'b01 : 2'b00;
assign op2_sel = (jump) ? 3'b010 : imm_ena ? 3'b100 : rs2_ena ? 3'b001 : 3'b000;


//output to mem signal
always @(*) begin
	if(rst == `ysyx_25060170_RSTABLE) begin
		mem_ctl = 4'b0000; 
	end
	else begin
		case(alu_ctl) 
			`INST_SB : begin mem_ctl = 4'b0001; end
			`INST_SH : begin mem_ctl = 4'b0010; end
			`INST_SW : begin mem_ctl = 4'b0100; end
			`INST_SD : begin mem_ctl = 4'b0101; end
			`INST_LB : begin mem_ctl = 4'b1001; end
			`INST_LH : begin mem_ctl = 4'b1010; end
			`INST_LW : begin mem_ctl = 4'b1011; end
			`INST_LD : begin mem_ctl = 4'b1100; end
			`INST_LBU: begin mem_ctl = 4'b1101; end
			`INST_LHU: begin mem_ctl = 4'b1110; end
			`INST_LWU: begin mem_ctl = 4'b1111; end
			default : begin mem_ctl = 4'b0000; end
		endcase
	end
end


//output to wb signal 
assign wb_ctl = (inst_type[1] ) ? 2'b01 : (( inst_type[7] | inst_type[6] | inst_type[5] |inst_type[4] | inst_type[3] | inst_lui | inst_auipc | jump) ? 2'b10 : 2'b00 ) ;

//---------------------------------------------data signal------------------------------------------------------//

always @(*) begin
	if (rst == `ysyx_25060170_RSTABLE) begin
		ext_imm = `ysyx_25060170_ZERO32;
	end
	else if (inst_type[1] | inst_type[4] | inst_type[5] | inst_type[7] | inst_jalr) begin
		ext_imm = {{20{i_imm[11]}}, i_imm}; // i_imm扩展为32位
	end
	else if (inst_lui | inst_auipc) begin
		ext_imm = {u_imm, 12'b0}; // u_imm扩展为32位
	end
	else if (inst_jal) begin
		ext_imm = {{11{j_imm[20]}}, j_imm[20:1], 1'b0}; // j_imm扩展为32位，注意左移1位
	end
	else if (inst_type[0]) begin
		ext_imm = {{20{s_imm[11]}}, s_imm}; // s_imm扩展为32位
	end
	else if (inst_type[2]) begin
		ext_imm = {{20{b_imm[12]}}, b_imm}; // b_imm扩展为32位，注意左移1位
	end
	else begin
		ext_imm = `ysyx_25060170_ZERO32; // 默认值
	end
end

endmodule
