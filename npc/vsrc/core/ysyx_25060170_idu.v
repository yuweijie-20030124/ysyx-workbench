 `include "define.v"
module ysyx_25060170_idu(
	//system input
	 input	wire		       					rst					//<<i<<					
	//from if_id signal	
	,input	wire [`ysyx_25060170_INST]			inst_i				//<<i<<
	,input	wire [`ysyx_25060170_PC]			pc_i				//<<i<<
	,input  wire [`ysyx_25060170_PC]			next_pc_i			//<<i<<
	//from bpu
	,input 	wire 								bp_jump_i			//<<i<<
	//data forward
	,input	wire [`ysyx_25060170_REGADDR]		ex_addr_forward		//<<i<<	
	,input	wire [`ysyx_25060170_DATA]			ex_data_forward		//<<i<<	
	,input	wire [`ysyx_25060170_REGADDR]		ls_addr_forward		//<<i<<	
	,input	wire [`ysyx_25060170_DATA]			ls_data_forward		//<<i<<	
	,input	wire [`ysyx_25060170_REGADDR]		wb_addr_forward		//<<i<<	
	,input	wire [`ysyx_25060170_DATA]			wb_data_forward		//<<i<<	
	,input 	wire								ex_load_ena			//<<i<<
	,input	wire								ex_csr_ena			//<<i<<
	,input	wire								ls_csr_ena			//<<i<<
	//regfile signal
	,input  wire [`ysyx_25060170_REG]     		rs1_data 			//<<i<<
	,input  wire [`ysyx_25060170_REG]     		rs2_data 			//<<i<<
	,output wire [`ysyx_25060170_REGADDR] 		rs1_addr 			//>>o>>
	,output wire				 				rs1_ena  			//>>o>>	
	,output wire [`ysyx_25060170_REGADDR] 		rs2_addr 			//>>o>>
	,output wire						 		rs2_ena  			//>>o>>
	,output wire				 				rd_ena  			//>>o>>
  	,output wire [`ysyx_25060170_REGADDR] 		rd_addr 			//>>o>>
	//to exu out signal
	,output wire [`ysyx_25060170_PC]            pc_o				//>>o>>
	,output wire [`ysyx_25060170_PC]            next_pc_o			//>>o>>	
	,output wire [7:0]         					alusrc_o  			//>>o>>
	,output wire [3:0]      					lsctl_o   			//>>o>>
	,output wire [1:0]     						wbctl_o    			//>>o>>
	,output wire [1:0]							op1_sel				//>>o>>
	,output wire [2:0]							op2_sel				//>>o>>
	,output wire 								load_flag_o			//>>o>>
    ,output wire                             	csr_ena_o    		//>>o>>
	//id out signal	
	,output reg  [`ysyx_25060170_DATA]  		op1 				//>>o>>
	,output reg  [`ysyx_25060170_DATA]  		op2 			 	//>>o>>
	,output reg  [`ysyx_25060170_IMM]     		imm 				//>>o>>
	,output	wire [`ysyx_25060170_REGADDR] 		idu_dpic_rd_addr	//>>o>>
	,output wire [`ysyx_25060170_INST]       	inst_o				//>>o>>
	,output wire [4:0] 							csr_imm				//>>o>>
	//to ifu
	,output wire								jump_ena_o			//>>o>>
	,output wire [`ysyx_25060170_PC]			jump_pc_o			//>>o>>
	,output wire     							ex_branch			//>>o>>
	//竞争冒险
	,input 	wire 								if_valid_i			//<<i<<
	,input 	wire 								ex_ready_i			//<<i<<
	,output wire								id_flush_o			//>>o>>
	,output wire								id_stall_o		   //>>o>>
	,output wire								id_ready_o			//>>o>>
	,output wire								id_valid_o			//>>o>>
	//magic flag for NEMU_STOP
	,output wire 								magic_flag			//>>o>>
);

assign idu_dpic_rd_addr = rd;

//**************************************decoder***********************************//
wire   [4:0]   	rd     							;
wire   [4:0]   	rs1    							;
wire   [4:0]   	rs2    							;
wire  			branch							;
assign  		rd       	=  inst_i [11:7]    ;
assign  		rs1      	=  inst_i [19:15]   ;
assign  		rs2      	=  inst_i [24:20]   ;
assign  		magic_flag  = (inst_i == 32'b0100_0000_0000_0000_0000_0000_0011_0011);

ysyx_25060170_idu_decoder decoder(
	.rst(rst)	,
	.inst(inst_i),
	.rs1_ena(rs1_ena),
	.rs2_ena(rs2_ena),
	.csr_inst(csr_ena_o),
	.wb_ctl (wbctl_o) ,
 	.mem_ctl(lsctl_o) ,
 	.branch(branch) ,
	.ext_imm(imm)	,
 	.load(load_flag_o),
	.op1_sel(op1_sel),
 	.op2_sel(op2_sel),
	.alu_ctl(alusrc_o)
);

//*************************************dataforward*************************************//
//stall
wire op1_relate ;//load inst
wire op2_relate ;
wire csr_op1_stall;
wire csr_op2_stall;
wire id_stall_ena;

assign op1_relate = ((rst == 1) & (rs1_addr == 5'd0)) ? 1'b0 : rs1_ena & ex_load_ena & (rs1_addr == ex_addr_forward) ;
assign op2_relate = ((rst == 1) & (rs2_addr == 5'd0)) ? 1'b0 : rs2_ena & ex_load_ena & (rs2_addr == ex_addr_forward) ;

assign csr_op1_stall = (ex_op1_forward & ex_csr_ena) | (ls_op1_forward & ls_csr_ena);
assign csr_op2_stall = (ex_op2_forward & ex_csr_ena) | (ls_op2_forward & ls_csr_ena);

assign id_stall_ena = (rst == 1) ? 1'b0 : op1_relate | op2_relate | csr_op1_stall | csr_op2_stall;

//forward
wire ex_op1_forward ;
wire ls_op1_forward;  
wire wb_op1_forward;

assign ex_op1_forward  = (ex_load_ena | ~rs1_ena | (rs1_addr == 5'd0)) ? 1'b0 : (ex_addr_forward == rs1_addr);
assign ls_op1_forward  = (~rs1_ena | (rs1_addr == 5'd0)) ? 1'b0 : (ls_addr_forward == rs1_addr);
assign wb_op1_forward  = (~rs1_ena | (rs1_addr == 5'd0)) ? 1'b0 : (wb_addr_forward == rs1_addr);

wire ex_op2_forward ;
wire ls_op2_forward;  
wire wb_op2_forward;

assign ex_op2_forward  = (ex_load_ena | ~rs2_ena | (rs2_addr == 5'd0)) ? 1'b0 : (ex_addr_forward == rs2_addr);
assign ls_op2_forward  = (~rs2_ena | (rs2_addr == 5'd0)) ? 1'b0 : (ls_addr_forward == rs2_addr);
assign wb_op2_forward  = (~rs2_ena | (rs2_addr == 5'd0)) ? 1'b0 : (wb_addr_forward == rs2_addr);

wire op1_forward_ena = (ex_op1_forward | ls_op1_forward | wb_op1_forward) & rs1_ena;
wire op2_forward_ena = (ex_op2_forward | ls_op2_forward | wb_op2_forward) & rs2_ena;

wire [`ysyx_25060170_DATA] op1_forward_data;
wire [`ysyx_25060170_DATA] op2_forward_data;

// assign op1_forward_data = 	ex_op1_forward ? ex_data_forward :
// 				ls_op1_forward ? ls_data_forward :
// 				wb_op1_forward ? wb_data_forward :
// 				`ysyx_25060170_ZERO32;

assign op1_forward_data = `ysyx_25060170_ZERO32 |
					{32{ex_op1_forward}} & ex_data_forward |
					{32{ls_op1_forward & (~ex_op1_forward)}} & ls_data_forward |
					{32{wb_op1_forward & (~ex_op1_forward)   & (~ls_op1_forward)}} & wb_data_forward ;

// assign op2_forward_data = 	ex_op2_forward ? ex_data_forward :
// 				ls_op2_forward ? ls_data_forward :
// 				wb_op2_forward ? wb_data_forward :
// 				`ysyx_25060170_ZERO32;

assign op2_forward_data = `ysyx_25060170_ZERO32 |
					{32{ex_op2_forward}} & ex_data_forward |
					{32{ls_op2_forward & (~ex_op2_forward)}} & ls_data_forward |
					{32{wb_op2_forward & (~ex_op2_forward)   & (~ls_op2_forward)}} & wb_data_forward ;

//*************************************output*************************************//
//out to id_ex_reg
// assign next_pc_o = next_pc_i |
// 				  ({32{jump_ena_o}} & (imm)) ;
assign next_pc_o = jump_ena_o ? (pc_i + imm) : next_pc_i;

assign pc_o = pc_i	;
assign inst_o = inst_i	;
assign csr_imm = rs1;

//rs1
assign op1 = `ysyx_25060170_ZERO32 							|
			 {32{op1_forward_ena}} & op1_forward_data 		|
			 {32{rs1_ena & (~op1_forward_ena)}}	& rs1_data;

//rs2  
assign op2 = `ysyx_25060170_ZERO32 							|
			 {32{op2_forward_ena}} & op2_forward_data 		|
			 {32{rs2_ena & (~op2_forward_ena)}}	 & rs2_data;

 
assign pc_o = rst == `ysyx_25060170_RSTABLE ? `ysyx_25060170_STARTPC : pc_i	;
//*************************************branch calculate*************************************//
wire diff_sign = op1[31] ^ op2[31];

wire op_ltu_op2 = op1 <  op2;

wire op1_lt_op2 = diff_sign ? op1[31] : op_ltu_op2;

assign ex_branch =  1'b0 |
				(rst      |  (~branch)   & (1'b0)) |
				(alusrc_o == `INST_BEQ   & (op1 == op2)) |
				(alusrc_o == `INST_BNE   & (op1 != op2)) |
				(alusrc_o == `INST_BLTU  & (op_ltu_op2)) |
				(alusrc_o == `INST_BGEU  & (~op_ltu_op2)) |
				(alusrc_o == `INST_BLT   & (op1_lt_op2)) |
				(alusrc_o == `INST_BGE   & (~op1_lt_op2)) ;


//*************************************竞争冒险*************************************//
assign id_flush_o 	 = ex_branch ^ bp_jump_i;
assign id_ready_o 	 = ex_ready_i 	;
assign id_valid_o 	 = if_valid_i 	; 
assign id_stall_o    = id_stall_ena ;

//*************************************out to ifu*************************************//
assign jump_ena_o =((alusrc_o == `INST_JALR) | (alusrc_o == `INST_JAL)) | (ex_branch ^ bp_jump_i);
// assign jump_ena_o = (ex_branch ^ bp_jump_i);

wire [`ysyx_25060170_DATA] o1;
wire [`ysyx_25060170_DATA] o2;

assign o1 = 	(alusrc_o == `INST_JALR) ? op1 : pc_i ; 
		
assign o2 =	bp_jump_i ? `ysyx_25060170_PLUS4 : imm;

assign jump_pc_o = jump_ena_o ? (o1 + o2) :
		 `ysyx_25060170_ZERO32;

//*************************************regfile*************************************//
//output to regfile
assign rs1_addr = rs1_ena ? rs1 : 5'd0 ;
assign rs2_addr = rs2_ena ? rs2 : 5'd0 ;
assign rd_ena  = (rd == 5'd0) ? 1'b0 : (wbctl_o == 2'b00) ? 1'b0 : 1'b1 ;
assign rd_addr = rd_ena ? rd : 5'd0 ;


endmodule

