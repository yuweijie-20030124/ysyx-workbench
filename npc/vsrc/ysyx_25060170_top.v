module ysyx_25060170_top (
    input clk,
    input rst,
    input ready_i,
    output ready_o
);

// outports wire
wire        	IFU_ready_o;
wire [31:0] 	PCout;
wire [4:0]  	rs1_raddr_o;
wire [4:0]  	rs2_raddr_o;
wire [3:0]  	ALUop;
//wire        	MemWr;
wire        	ALUsrc;
wire [4:0]  	rd_addr;
wire [31:0] 	pc_o;
wire [31:0] 	op_1;
wire [31:0] 	op_2;
wire [31:0] 	imm_o;
wire [31:0] 	rs1_data_o;
wire [31:0] 	rs2_data_o;
wire        	jal;
wire        	branch;
wire        	brlt;
wire [1:0]  	regS;
wire        	RegW;
wire        	PCx1;
wire        	IDU_ready_o;
wire [31:0] 	exu_res1;
wire        	exu_ready_o;
wire [31:0] 	MEM_inst_o;
wire [31:0] 	GPR_rd1;
wire [31:0] 	GPR_rd2;
wire [31:0] 	WBU_PC_o;
wire            GPR_ready_o;
wire        	WBU_ready_o;
wire [31:0] 	reg_write_data_o;
wire [4:0]  	reg_write_addr_o;
wire        	reg_write_en_o;

ysyx_25060170_IFU #(
	.RESET_PC 	( 8000_0000  ))
u_ysyx_25060170_IFU(
	.clk         	( clk          ),
	.rst         	( rst          ),
	.PCin        	( WBU_PC_o     ),
	.imm         	( imm_o        ),
	.res         	( exu_res1     ),
	.br          	( branch       ),
	.isx         	( PCx1         ),
	.IFU_ready_i 	( ready_i      ),
	.IFU_ready_o 	( IFU_ready_o  ),
	.PCout       	( PCout        )
);


ysyx_25060170_IDU u_ysyx_25060170_IDU(
	.pc_i         	( PCout         ),
	.inst_i       	( MEM_inst_o    ),
    .GPR_ready_i    ( GPR_ready_o   ),
	.reg1_rdata_i 	( GPR_rd1  ),
	.reg2_rdata_i 	( GPR_rd2  ),
	.rs1_raddr_o  	( rs1_raddr_o   ),
	.rs2_raddr_o  	( rs2_raddr_o   ),
	.ALUop        	( ALUop         ),
	//.MemWr        	( MemWr         ),
	.ALUsrc       	( ALUsrc        ),
	.rd_addr      	( rd_addr       ),
	.pc_o         	( pc_o          ),
	.op_1         	( op_1          ),
	.op_2         	( op_2          ),
	.imm_o        	( imm_o         ),
	.rs1_data_o   	( rs1_data_o    ),
	.rs2_data_o   	( rs2_data_o    ),
	.jal          	( jal           ),
	.branch       	( branch        ),
	.brlt         	( brlt          ),
	.regS         	( regS          ),
	.RegW         	( RegW          ),
	.PCx1         	( PCx1          ),
	.IDU_ready_i  	( IFU_ready_o   ),
	.IDU_ready_o  	( IDU_ready_o   )
);


ysyx_25060170_GPR u_ysyx_25060170_GPR(
	.clk         	( clk          ),
	.rst         	( rst          ),
	.GPR_r1      	( rs1_raddr_o       ),
	.GPR_r2      	( rs2_raddr_o       ),
	.GPR_we      	( reg_write_en_o       ),
	.GPR_writer  	( rd_addr   ),
	.GPR_wd      	( reg_write_data_o       ),
	.GPR_ready_i 	( IDU_ready_o  ),
	.GPR_ready_o 	( GPR_ready_o  ),
	.GPR_rd1     	( GPR_rd1      ),
	.GPR_rd2     	( GPR_rd2      )
);


ysyx_25060170_MEM u_ysyx_25060170_MEM(
	.addr_i      	( PCout        ),
	.inst_o      	( MEM_inst_o   )
);


ysyx_25060170_EXU u_ysyx_25060170_EXU(
    .ALUop          ( ALUop    ),
	.exu_op_1    	( op_1     ),
	.exu_op_2    	( op_2     ),
	.exu_is_jalr 	( PCx1           ),
	.exu_ready_i 	( IDU_ready_o  ),
	.exu_res1    	( exu_res1     ),
	.exu_ready_o 	( exu_ready_o  )
);



ysyx_25060170_WBU u_ysyx_25060170_WBU(
	.rst              	( rst               ),
	.exu_result_i     	( exu_res1      ),
	.WBU_ready_i      	( exu_ready_o       ),
	.PC_i             	( PCout              ),
	.rd_i             	( rd_addr              ),
	.regS             	( regS              ),
	.RegW             	( RegW              ),
	.PC_o             	( WBU_PC_o          ),
	.WBU_ready_o      	( ready_o       ),
	.reg_write_data_o 	( reg_write_data_o  ),
	.reg_write_addr_o 	( reg_write_addr_o  ),
	.reg_write_en_o   	( reg_write_en_o    )
);


endmodule

