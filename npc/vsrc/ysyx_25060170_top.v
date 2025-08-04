module ysyx_25060170_top (
    input clk,
    input rst
);

// outports wire
wire [31:0] 	PCout;
wire [4:0]  	rs1_raddr;
wire [4:0]  	rs2_raddr;
wire [3:0]  	ALUop;
wire        	MemWr;
wire [31:0]		memory_lenth;
wire [4:0]  	rd_addr;
wire [31:0] 	op_1;
wire [31:0] 	op_2;
wire [31:0] 	imm_o;
wire        	jal;
wire [31:0]     reg1_rdata;
wire [31:0]     reg2_rdata;
wire   			is_beq;
wire   			is_blt;
wire   			is_bne;
wire   			is_bge;
wire   			is_bltu;
wire   			is_bgeu;
//wire        	branch;
//wire        	brlt;
wire			beq_flag;
wire			blt_flag;
wire			bne_flag;
wire			bge_flag;
wire			bltu_flag;
wire			bgeu_flag;
wire [1:0]  	regS;
wire        	RegW;
wire        	jalr;
wire [31:0] 	exu_res1;
wire [31:0] 	MEM_inst_o;
wire [31:0] 	GPR_rd1;
wire [31:0] 	GPR_rd2;
//wire [31:0] 	WBU_PC_o;
wire [31:0] 	reg_write_data_o;
wire [4:0]  	reg_write_addr_o;
wire        	reg_write_en_o;
wire [31:0]     EXU_PC;
wire			jump_en;

assign jump_en = jalr | jal;
 
ysyx_25060170_IFU #(
	.RESET_PC 	( 32'h8000_0000  ))
u_ysyx_25060170_IFU(
	.clk         	( clk          ),
	.rst         	( rst          ),
	.jump_addr		( EXU_PC	   ),
	.jump_en		( jump_en	   ),
	.PCout       	( PCout        )
);


ysyx_25060170_IDU u_ysyx_25060170_IDU(
	.pc_i         	( PCout         ),
	.inst_i       	( MEM_inst_o    ),
	.reg1_rdata_i 	( GPR_rd1  		),
	.reg2_rdata_i 	( GPR_rd2  		),
	.rs1_raddr_o  	( rs1_raddr     ),
	.rs2_raddr_o  	( rs2_raddr     ),
	.ALUop        	( ALUop         ),
	.rd_addr      	( rd_addr       ),
	.op_1         	( op_1          ),
	.op_2         	( op_2          ),
	.imm_o        	( imm_o         ),
	.is_beq 		( is_beq		),
	.is_blt 		( is_blt		),
	.is_bne 		( is_bne		),
	.is_bge 		( is_bge		),
	.is_bltu		( is_bltu		),
	.is_bgeu		( is_bgeu		),
	.reg1_rdata_o	( reg1_rdata	),
	.reg2_rdata_o	( reg2_rdata	),
	.memory_lenth	( memory_lenth	),
	.MemWr        	( MemWr         ),	
	.is_jal         ( jal           ),
	.is_jalr        ( jalr          ),
	.regS         	( regS          ),
	.RegW         	( RegW          )
	

);


ysyx_25060170_GPR u_ysyx_25060170_GPR(
	.clk         	( clk          ),
	.rst         	( rst          ),
	.GPR_r1      	( rs1_raddr       ),
	.GPR_r2      	( rs2_raddr       ),
	.GPR_we      	( reg_write_en_o       ),
	.GPR_writer  	( reg_write_addr_o   ),
	.GPR_wd      	( reg_write_data_o       ),
	.GPR_rd1     	( GPR_rd1      ),
	.GPR_rd2     	( GPR_rd2      )
);


ysyx_25060170_MEM u_ysyx_25060170_MEM(
	.addr_i      	( PCout        ),
	.inst_o      	( MEM_inst_o   )
);


ysyx_25060170_EXU u_ysyx_25060170_EXU(
    .ALUop          ( ALUop		),
	.exu_op_1    	( op_1		),
	.exu_op_2    	( op_2		),
	.reg1_rdata_i	(reg1_rdata ),
	.reg2_rdata_i	(reg2_rdata ),
	.exu_is_jalr 	( jalr      ),   
    .exu_is_jal   	( jal		),
	.is_beq			(is_beq		),
	.is_blt			(is_blt		),
	.is_bne			(is_bne		),
	.is_bge			(is_bge		),
	.is_bltu		(is_bltu	),
	.is_bgeu		(is_bgeu	),
    .imm            ( imm_o		),
	.beq_flag		(beq_flag   ),
	.blt_flag		(blt_flag   ),
	.bne_flag		(bne_flag   ),
	.bge_flag		(bge_flag   ),
	.bltu_flag		(bltu_flag  ),
	.bgeu_flag		(bgeu_flag  ),
	.exu_res1    	( exu_res1	),
    .jump_Addr      ( EXU_PC	)
);



ysyx_25060170_WBU u_ysyx_25060170_WBU(
	.rst              	( rst				),
	.beq_flag 			( beq_flag 			),
	.blt_flag 			( blt_flag 			),
	.bne_flag 			( bne_flag 			),
	.bge_flag 			( bge_flag 			),
	.bltu_flag			( bltu_flag			),
	.bgeu_flag			( bgeu_flag			),
	.exu_result_i     	( exu_res1			),
	.PC_i             	( PCout				),
	.is_beq 			( is_beq 			),
	.is_blt 			( is_blt 			),
	.is_bne 			( is_bne 			),
 	.is_bge 			( is_bge 			),
	.is_bltu			( is_bltu			),
	.is_bgeu			( is_bgeu			),
	.rd_i             	( rd_addr			),
	.regS             	( regS              ),
	.RegW             	( RegW              ),
	.MemWr				( MemWr				),
	.reg2_rdata			( reg2_rdata		),
	.memory_lenth       ( memory_lenth		),
	.reg_write_data_o 	( reg_write_data_o  ),
	.reg_write_addr_o 	( reg_write_addr_o  ),
	.reg_write_en_o   	( reg_write_en_o    )
);


endmodule

