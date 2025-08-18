`include "define.v"
`include "DPI-C.v"
`include "ex_ls_reg.v"
`include "exu.v"
`include "id_ex_reg.v"
`include "if_id_reg.v"
`include "ifu.v"
`include "ls_wb_reg.v"
`include "lsu.v"
`include "regfile.v"
`include "wbu.v"


module ysyx_25060170_top (
    input clk,
    input rst
);
 
//if_id_reg
wire	[`ysyx_25060170_INST]  		ifid_if_inst 	;
wire	[`ysyx_25060170_PC]    		ifid_if_pc    	;
wire 	[`ysyx_25060170_INST]  		ifid_id_inst 	;
wire	[`ysyx_25060170_PC]    		ifid_id_pc    	;
  
wire								ifid_id_jump	;
//idu
wire	[`ysyx_25060170_REGADDR] 	id_reg_rs1_addr ;
wire	[`ysyx_25060170_REGADDR] 	id_reg_rs2_addr ;

wire								id_reg_rs1_ena	;
wire								id_reg_rs2_ena	;
wire	[`ysyx_25060170_PC]			id_if_pc 	   ;
wire								id_if_pc_sel  ;
wire								id_ifid_jumpflush;
wire								id_load_flag;

//id_ex_reg
wire	[`ysyx_25060170_INST]  		idex_id_inst 	 ;
wire 	[`ysyx_25060170_PC]    		idex_id_pc    	 ;   	   
wire 	[`ysyx_25060170_DATA] 		idex_id_op1 	;
wire 	[`ysyx_25060170_DATA] 		idex_id_op2 	;	
wire 	[`ysyx_25060170_IMM]     	idex_id_imm	;
wire                          		idex_id_rd_ena	;
wire 	[`ysyx_25060170_REGADDR] 	idex_id_rd_addr ;
wire 	[3:0]      					idex_id_lsctl  	;
wire 	[1:0]      					idex_id_wbctl   ;
wire 	[7:0]						idex_id_alu_sel	;
wire	[1:0]						idex_id_op1sel	;
wire	[2:0]						idex_id_op2sel	;
 
wire 	[`ysyx_25060170_INST]  		idex_ex_inst 	 ;
wire 	[`ysyx_25060170_PC]    		idex_ex_pc    	 ;
wire 	[`ysyx_25060170_DATA] 		idex_ex_op1 	;
wire 	[`ysyx_25060170_DATA] 		idex_ex_op2 	;	
wire 	[`ysyx_25060170_IMM]     	idex_ex_imm	;
wire 	                         	idex_ex_rd_ena	;
wire 	[`ysyx_25060170_REGADDR] 	idex_ex_rd_addr ;
wire 	[3:0]      					idex_ex_lsctl  	;
wire 	[1:0]      					idex_ex_wbctl   ;
wire 	[7:0]						idex_ex_alu_sel	;
wire	[1:0]						idex_ex_op1sel	;
wire	[2:0]						idex_ex_op2sel	;
wire 	[`ysyx_25060170_REGADDR]   	idex_ex_rs1_addr  ;
//exu

wire 	[`ysyx_25060170_REGADDR] 	ex_id_addr_forward;
wire 	[`ysyx_25060170_DATA] 		ex_id_data_forward;
wire								ex_load_ena;

wire  	[`ysyx_25060170_REG]      	exls_ex_aludata    ;
wire 	[`ysyx_25060170_DATA] 		exls_ex_store_data  ;

wire 	[`ysyx_25060170_INST]  		exls_ls_inst 	   ;
wire 	[`ysyx_25060170_PC]    		exls_ls_pc    	   ; 
wire  	[`ysyx_25060170_REG]      	exls_ls_aludata    ;
wire 	[`ysyx_25060170_DATA] 		exls_ls_store_data  ;
wire                          		exls_ls_rd_ena	;
wire 	[`ysyx_25060170_REGADDR] 	exls_ls_rd_addr ;
wire 	[3:0]      					exls_ls_lsctl  	;
wire 	[1:0]      					exls_ls_wbctl   ;


//lsu


wire 	[`ysyx_25060170_DATA] 		ls_lswb_data_forward;
wire 	[`ysyx_25060170_REGADDR] 	ls_id_addr_forward;
wire 	[`ysyx_25060170_DATA] 		ls_id_data_forward;
wire								ls_if_pc_sel	;
wire	[`ysyx_25060170_PC] 		ls_if_pc	;
wire								ls_flush	;


//is_wb_reg

wire 	[`ysyx_25060170_DATA]      	lswb_ls_wbdata        ;

wire 	[`ysyx_25060170_INST]  		lswb_wb_inst 	   ;
wire 	[`ysyx_25060170_PC]    		lswb_wb_pc    	   ; 
wire 	[1:0]      					lswb_wb_wbctl  	;
wire 	[`ysyx_25060170_DATA]      	lswb_wb_wbdata        ;
wire 	[`ysyx_25060170_REG]      	lswb_wb_aludata    ;
wire 	                         	lswb_wb_rd_ena	;
wire 	[`ysyx_25060170_REGADDR] 	lswb_wb_rd_addr ;

//wbu
wire 	[`ysyx_25060170_DATA]	  	wb_reg_rd_data     ;
wire                          		wb_reg_rd_ena	;
wire 	[`ysyx_25060170_REGADDR] 	wb_reg_rd_addr ;

wire 	[`ysyx_25060170_REGADDR] 	wb_id_addr_forward;
wire 	[`ysyx_25060170_DATA] 		wb_id_data_forward;

wire								ie_if_pc_sel	;
wire	[`ysyx_25060170_PC] 		ie_if_pc	;
wire								ie_flush	;

// regfile
wire 	[`ysyx_25060170_REG] 		reg_id_rs1_data ;
wire 	[`ysyx_25060170_REG] 		reg_id_rs2_data ;
wire 	[`ysyx_25060170_REG] 		reg_bpu_data ;

wire 								if_valid;
wire 								id_valid;
wire 								ex_valid;
wire 								ls_valid;

wire 								wb_ready;
wire 								ls_ready;
wire 								ex_ready;
wire 								id_ready;

wire 								ex_flush;
wire 								id_idex_flush;
wire 								id_ifid_flush;
wire 								ls_lswb_flush;
	
//--------------------------------------in core ---------------------------------//

ysyx_25060170_ifu ifu0(
		.id_pc_jump			(id_if_pc_sel)  ,
 		.id_pc_i			(id_if_pc)	,
 		.ie_pc_jump			(ie_if_pc_sel)  ,
 		.ie_pc_i			(ie_if_pc)	,
 		.ls_pc_jump			(ls_if_pc_sel)  ,
 		.ls_pc_i			(ls_if_pc)	,
 		.id_ready			(id_ready)	,
 		.id_stall			(),
 		.if_valid			(if_valid)	,
 		.core_ready			(),
 		.inst_i				()	,
 		.inst_o				(ifid_if_inst)	,	
 		.pc_i				()	,
 		.pc_o				(ifid_if_pc)	,	
		.pc_next			()
);

ysyx_25060170_reg_ifid reg_ifid1(
		.clk				(clk)	,
		.rst				(rst)	,
		.if_inst			(ifid_if_inst),
		.if_pc				(ifid_if_pc)	,
		
		.if_valid			(if_valid),
		.ls_flush			(ls_flush),
		.id_flush			(id_ifid_flush),
		.ie_flush			(ie_flush),
		.id_ready			(id_ready),

		.id_jump			(ifid_id_jump),		
		.id_inst			(ifid_id_inst)	,
		.id_pc				(ifid_id_pc)	
);

ysyx_25060170_idu idu2(
	.rst					(rst)	,
	.inst_i					(ifid_id_inst)	,
	.pc_i					(ifid_id_pc)	,
 	.pc_o					(idex_id_pc)	,
 	.inst_o					(idex_id_inst)	,
 	
	.rs1_addr				(id_reg_rs1_addr)	,
	.rs2_addr				(id_reg_rs2_addr)	,
	.rs1_ena				(id_reg_rs1_ena)	,
	.rs2_ena				(id_reg_rs2_ena)	,
	.rs1_data				(reg_id_rs1_data)	,
	.rs2_data				(reg_id_rs2_data)	,
	.rd_ena					(idex_id_rd_ena)		,
	.rd_addr				(idex_id_rd_addr)	,
	
	//forward
	.ex_addr_forward		(ex_id_addr_forward),
	.ls_addr_forward		(ls_id_addr_forward),
	.wb_addr_forward		(wb_id_addr_forward),
	.ex_data_forward		(ex_id_data_forward),
	.ls_data_forward		(ls_id_data_forward),
	.wb_data_forward		(wb_id_data_forward),
	.ex_load_ena			(ex_load_ena)	,
	
	.alusrc_o				(idex_id_alu_sel)	,
	.lsctl_o				(idex_id_lsctl)		,
 	.wbctl_o				(idex_id_wbctl)		,
 	.op1_sel				(idex_id_op1sel)	,
 	.op2_sel				(idex_id_op2sel)	,
 	.load_flag				(id_load_flag)	,
 	
 	.if_valid				(if_valid),
 	.id_valid				(id_valid),
	.id_flush				(id_ifid_flush),
	.id_ex_flush			(id_idex_flush),
	.ex_ready				(ex_ready),
	.id_ready				(id_ready),
 	
	.jump_pc				(id_if_pc)		,
	.jump_ena				(id_if_pc_sel)	,
	.imm					(idex_id_imm)		,
	.op1					(idex_id_op1)		,
	.op2					(idex_id_op2)
);

ysyx_25060170_reg_idex reg_idex3(
	.clk(clk)	,
	.rst(rst)	,
	.id_inst(idex_id_inst),
	.id_pc(idex_id_pc)	,
	.id_op1(idex_id_op1)	,
	.id_op2(idex_id_op2)	,
	.id_op1_sel(idex_id_op1sel)	,
	.id_op2_sel(idex_id_op2sel)	,
	.id_imm(idex_id_imm)	,
	.id_rd_ena(idex_id_rd_ena),
	.id_rd_addr(idex_id_rd_addr),
	.id_rs1_addr(id_reg_rs1_addr),
	.id_alusrc(idex_id_alu_sel),
	.id_lsctl(idex_id_lsctl),
	.id_wbctl(idex_id_wbctl),
	.id_load_flag(id_load_flag),
	
	.id_valid(id_valid),
	.id_flush(id_idex_flush),
	.ie_flush(ie_flush),
	.ls_flush(ls_flush),
	.ex_ready(ex_ready),

	.ex_inst(idex_ex_inst),
	.ex_pc(idex_ex_pc)	,
	.ex_op1(idex_ex_op1)	,
	.ex_op2(idex_ex_op2)	,
	.ex_imm(idex_ex_imm)	,
	.ex_rd_ena(idex_ex_rd_ena),
	.ex_rd_addr(idex_ex_rd_addr),
	.ex_op1_sel(idex_ex_op1sel)	,
	.ex_op2_sel(idex_ex_op2sel)	,
	.ex_alusrc(idex_ex_alu_sel),
	.ex_rs1_addr(idex_ex_rs1_addr),
	.ex_lsctl(idex_ex_lsctl),
	.ex_load_flag(ex_load_ena),
	.ex_wbctl(idex_ex_wbctl)
);


ysyx_25060170_exu exu4(
	.clk(clk)	,
	.rst(rst)	,
	.reg_op1(idex_ex_op1)	,
	.reg_op2(idex_ex_op2)	,
	.op1_sel(idex_ex_op1sel)	,
	.op2_sel(idex_ex_op2sel)	,
	.rd_addr(idex_ex_rd_addr)	,
	.rs1_addr(idex_ex_rs1_addr)	,
	.pc_i(idex_ex_pc)	,
	.imm(idex_ex_imm)	,
	.alu_sel(idex_ex_alu_sel)	,
	
	.id_valid(id_valid),
	.ex_valid(ex_valid),
	.ex_ready(ex_ready),
	.ls_ready(ls_ready),
	
	.exu_res(exls_ex_aludata)	,
	.store_data(exls_ex_store_data) 
	
);

ysyx_25060170_reg_exls reg_exls5(
	.clk(clk)	,
	.rst(rst)	,
	.ex_inst(idex_ex_inst),
	.ex_pc(idex_ex_pc)	,
	.ex_store_data(exls_ex_store_data),
	.ex_exu_res(exls_ex_aludata),
	.ex_rd_ena(idex_ex_rd_ena),
	.ex_rd_addr(idex_ex_rd_addr),
	.ex_lsctl(idex_ex_lsctl),
	.ex_wbctl(idex_ex_wbctl),
	
	.ex_rd_addr_forward(ex_id_addr_forward),
	.ex_rd_data_forward(ex_id_data_forward),
	
	.ex_valid(ex_valid),
	.ls_ready(ls_ready),
	.ie_flush(ie_flush),
	.ls_flush(ls_flush),

	.ls_inst(exls_ls_inst),
	.ls_pc(exls_ls_pc),
	.ls_store_data(exls_ls_store_data),
	.ls_exu_res(exls_ls_aludata),
	.ls_rd_ena(exls_ls_rd_ena),
	.ls_rd_addr(exls_ls_rd_addr),
	.ls_lsctl(exls_ls_lsctl),
	.ls_wbctl(exls_ls_wbctl)
);

ysyx_25060170_lsu lsu6(
 	.rst			(rst)		,
 	.clk			(clk)		,
 	.alu_res		(exls_ls_aludata)	,
 	.store_data		(exls_ls_store_data)	,
 	.ls_ctl			(exls_ls_lsctl) 	,
 	
 	.ex_valid(ex_valid),
 	.ls_valid(ls_valid),
	.ls_ready(ls_ready),
	.wb_ready(wb_ready),
	.ls_jump(ls_if_pc_sel),
	.ls_jump_pc(ls_if_pc),
	.ls_flush(ls_flush),
 	
 	.ls_data_forward(ls_lswb_data_forward),
 	.ls_data_o(lswb_ls_wbdata)	
 );
 
 ysyx_25060170_reg_lswb reg_lswb7(
	.clk(clk)	,
	.rst(rst)	,
	.ls_inst(exls_ls_inst),
	.ls_pc(exls_ls_pc)	,
	.ls_rd_ena(exls_ls_rd_ena),
	.ls_rd_addr(exls_ls_rd_addr),
	.ls_wbctl(exls_ls_wbctl),
	.ls_exu_res(exls_ls_aludata),
	.ls_wbdata(lswb_ls_wbdata),
	.ls_data_forward(ls_lswb_data_forward),

	.ls_rd_addr_forward(ls_id_addr_forward),
	.ls_rd_data_forward(ls_id_data_forward),
	
	.wb_ready(wb_ready),
	.ls_valid(ls_valid),
	.ie_flush(ie_flush),
	
	.wb_inst(lswb_wb_inst),
	.wb_pc(lswb_wb_pc)	,
	.wb_rd_ena(lswb_wb_rd_ena),
	.wb_rd_addr(lswb_wb_rd_addr),
	.wb_wbctl(lswb_wb_wbctl),
	.wb_exu_res(lswb_wb_aludata),
	.wb_wbdata(lswb_wb_wbdata)
);
	
	

ysyx_25060170_wbu wbu8(
	.clk(clk)	,
 	.rst(rst),
 	.inst_i(lswb_wb_inst)	,
 	.pc_i(lswb_wb_pc)	,
 	
 	.rd_ena(lswb_wb_rd_ena),
 	.rd_addr(lswb_wb_rd_addr),
	.wb_rd_addr_forward(wb_id_addr_forward),
	.wb_rd_data_forward(wb_id_data_forward), 	
 	.wb_rd_ena(wb_reg_rd_ena),
 	.wb_rd_addr(wb_reg_rd_addr),
 	
	.wb_ready(wb_ready),
	.id_stall(id_idex_flush),
	.ls_valid(ls_valid), 	
	
	
	.ie_jump(ie_if_pc_sel),
	.ie_jump_pc(ie_if_pc),
	.ie_flush(ie_flush),
 	
 	.ls_rd_data(lswb_wb_wbdata)	,
 	.wb_ctl(lswb_wb_wbctl)	,
 	.exu_res(lswb_wb_aludata)	,
 	.wb_data(wb_reg_rd_data )	
);

ysyx_25060170_regfile reg9(
	.clk(clk)	,
	.rst(rst)	,
	.waddr(wb_reg_rd_addr)	,
	.wdata(wb_reg_rd_data)	,
	.raddr1(id_reg_rs1_addr)	,
	.raddr2(id_reg_rs2_addr)	,
	.rdata1(reg_id_rs1_data)	,
	.rdata2(reg_id_rs2_data)	,
	.wen(wb_reg_rd_ena)	,
	.ren1(id_reg_rs1_ena)	,
	.ren2(id_reg_rs2_ena)	
);


endmodule


