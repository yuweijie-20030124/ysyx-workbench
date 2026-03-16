 `include "define.v"
module ysyx_25060170_idu(
	//system input
	 input	wire		       					rst					//<<i<<		
	//from ifu 直接给 idu 你下一条会跳到哪里去？
	,input  wire [`ysyx_25060170_PC]			ifu_idu_futurePC	//<<i<<			
	//from if_id signal	
	,input	wire [`ysyx_25060170_INST]			inst_i				//<<i<<
	,input	wire [`ysyx_25060170_PC]			pc_i				//<<i<<
	,input  wire [`ysyx_25060170_PC]			next_pc_i			//<<i<<
	,input  wire [`ysyx_25060170_REG]			mtvec				//<<i<<
	,input  wire [`ysyx_25060170_REG]  			mepc				//<<i<<
	,input  wire [`ysyx_25060170_REG]			csr_data_i			//<<i<<
	// ,input  wire [`ysyx_25060170_PC]			bpu_jalr_pc_i		//<<i<<
	//from bpu
	,input 	wire 								bp_jump_i			//<<i<<	我们当时是否预测跳转
	/* verilator lint_off UNUSEDSIGNAL */
	,input  wire                                ifu_ifuidureg_bpuvalid//<<i<< 当时bpu是否查询的到条目
	// ,input  wire                                inst_bxx_i			//<<i<<	是否有bxx指令
	/* verilator lint_on  UNUSEDSIGNAL */
	//data forward
	,input	wire [`ysyx_25060170_REGADDR]		ex_addr_forward		//<<i<<	
	,input	wire [`ysyx_25060170_DATA]			ex_data_forward		//<<i<<
	// ,input  wire [`ysyx_25060170_REGADDR]		ex_op2_addr_forward //<<I<<
	// ,input  wire [`ysyx_25060170_DATA]			ex_op2_data_forward	//<<I<<
	,input	wire [`ysyx_25060170_REGADDR]		ls_addr_forward		//<<i<<	
	,input	wire [`ysyx_25060170_DATA]			ls_data_forward		//<<i<<
	,input	wire [`ysyx_25060170_REGADDR]		mem_addr_forward	//<<i<<	
	,input	wire [`ysyx_25060170_DATA]			mem_data_forward	//<<i<<	
	,input	wire [`ysyx_25060170_REGADDR]		wb_addr_forward		//<<i<<	
	,input	wire [`ysyx_25060170_DATA]			wb_data_forward		//<<i<<	
	,input 	wire								ex_load_ena			//<<i<<	判断exu中的指令是不是load
	,input  wire      							ls_load_ena			//<<i<< 判断lsu中的指令是不是load
	/* verilator lint_off UNUSEDSIGNAL */
	,input  wire                                mem_load_ena		//<<i<< 判断mem的指令是不是load
	,input  wire                                wb_load_ena         //<<i<< 判断wbu的指令是不是load
	/* verilator lint_on  UNUSEDSIGNAL */
	,input  wire								ex_valid_i			//<<i<< 
	,input  wire								ls_valid_i			//<<i<< 
	,input	wire								ex_csr_ena			//<<i<<
	,input	wire								ls_csr_ena			//<<i<<
	//regfile signal
	,input  wire [`ysyx_25060170_REG]     		rs1_data 			//<<i<<
	,input  wire [`ysyx_25060170_REG]     		rs2_data 			//<<i<<
	// ,input  wire [`ysyx_25060170_REG]			csr_read_data		//<<i<<
	,output wire [`ysyx_25060170_REGADDR] 		rs1_addr 			//>>o>>
	,output wire				 				rs1_ena  			//>>o>>	
	,output wire [`ysyx_25060170_REGADDR] 		rs2_addr 			//>>o>>
	,output wire						 		rs2_ena  			//>>o>>
	// ,output wire [`ysyx_25060170_REGADDR] 		csr_addr 			//>>o>>
	// ,output wire						 		csr_ena  			//>>o>>
	//to csr signal
	,output wire [11:0]				     		csr_addr 			//>>o>> 
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
    ,output wire                             	csr_ena_o    		//>>o>> 是不是csr操作指令

	//output to BPU
	,output wire								idu_BPU_update		//>>o>>
	,output wire [`ysyx_25060170_PC]			idu_btb_updatePC	//>>o>>
	,output wire [`ysyx_25060170_PC]			idu_btb_updateTarget//>>o>>
	,output wire 								idu_btb_mispredicted//>>o>>
	//output to ifu 修正pc
	,output wire [`ysyx_25060170_PC]			idu_ifu1_jump_pc	//>>o>>
	,output wire 								idu_ifu1_jump		//>>o>>
	//id out signal	
	,output reg  [`ysyx_25060170_DATA]  		op1 				//>>o>>
	,output reg  [`ysyx_25060170_DATA]  		op2 			 	//>>o>>
	,output reg  [`ysyx_25060170_IMM]     		imm 				//>>o>>
	,output wire [`ysyx_25060170_INST]       	inst_o				//>>o>>
	,output wire [4:0] 							csr_imm_o			//>>o>>
	// ,output wire [`ysyx_25060170_REGADDR]		store_addr_o		//>>o>>

	//竞争冒险
	,input 	wire 								if_valid_i			//<<i<<
	,input 	wire 								ex_ready_i			//<<i<<
	,output wire								id_flush_o			//>>o>>	如果预测的与行为不一致则冲刷
	,output wire								id_stall_o		   //>>o>>
	,output wire								id_ready_o			//>>o>>
	,output wire								id_valid_o			//>>o>>
);


//**************************************decoder***********************************//
wire   [4:0]   	rd     							;
wire   [4:0]   	rs1    							;
wire   [4:0]   	rs2    							;
wire  			branch							;
assign  		rd       	=  inst_i [11:7]    ;
assign  		rs1      	=  inst_i [19:15]   ;
assign  		rs2      	=  inst_i [24:20]   ;


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
	// .INST_ecall(inst_ecall_o)
);

//*************************************dataforward*************************************//
//stall
wire op1_relate ;//load inst
wire op2_relate ;
wire csr_op1_stall;
wire csr_op2_stall;
wire id_stall_ena;

//forward
wire  ex_op1_forward;
wire  ls_op1_forward;
wire mem_op1_forward;  
wire  wb_op1_forward;

assign  ex_op1_forward  = (ex_load_ena | ~rs1_ena | (rs1_addr == 5'd0)) ? 1'b0 : (ex_addr_forward == rs1_addr);
assign  ls_op1_forward  = (ls_load_ena | ~rs1_ena | (rs1_addr == 5'd0)) ? 1'b0 : ( ls_addr_forward == rs1_addr);
assign mem_op1_forward  = (~rs1_ena | (rs1_addr == 5'd0)) ? 1'b0 : (mem_addr_forward == rs1_addr);
assign  wb_op1_forward  = (~rs1_ena | (rs1_addr == 5'd0)) ? 1'b0 : ( wb_addr_forward == rs1_addr);

wire  ex_op2_forward;
wire  ls_op2_forward;
wire mem_op2_forward;  
wire  wb_op2_forward;

assign  ex_op2_forward  = (ex_load_ena | ~rs2_ena | (rs2_addr == 5'd0)) ? 1'b0 : (ex_addr_forward == rs2_addr);
assign  ls_op2_forward  = (ls_load_ena | ~rs2_ena | (rs2_addr == 5'd0)) ? 1'b0 : ( ls_addr_forward == rs2_addr);
assign mem_op2_forward  = (~rs2_ena | (rs2_addr == 5'd0)) ? 1'b0 : (mem_addr_forward == rs2_addr);
assign  wb_op2_forward  = (~rs2_ena | (rs2_addr == 5'd0)) ? 1'b0 : ( wb_addr_forward == rs2_addr);

wire op1_forward_ena = (ex_op1_forward | ls_op1_forward | mem_op1_forward | wb_op1_forward) & rs1_ena;
wire op2_forward_ena = (ex_op2_forward | ls_op2_forward | mem_op2_forward | wb_op2_forward) & rs2_ena;

//译码取操作数的时候 当前处于执行中的指令是要晚发射的，于是优先取ex中的操作数

wire [`ysyx_25060170_DATA] op1_forward_data;
wire [`ysyx_25060170_DATA] op2_forward_data;

// assign op1_forward_data = 	ex_op1_forward ? ex_data_forward :
// 				ls_op1_forward ? ls_data_forward :
// 				wb_op1_forward ? wb_data_forward :
// 				`ysyx_25060170_ZERO32;

// assign op1_forward_data = `ysyx_25060170_ZERO32 |
// 					{32{ex_op1_forward}} & ex_data_forward |
// 					{32{ls_op1_forward & (~ex_op1_forward)}} & ls_data_forward 							   		          |
// 					{32{ls_op1_forward & (~ex_op1_forward)   & (~mem_op1_forward)}} 				   & mem_data_forward |
// 					{32{wb_op1_forward & (~ex_op1_forward)   & (~mem_op1_forward) &(~ls_op1_forward)}} &  wb_data_forward ;

assign op1_forward_data =  ex_op1_forward ?  ex_data_forward :
						   ls_op1_forward ?  ls_data_forward :
						  mem_op1_forward ? mem_data_forward :
						   wb_op1_forward ?  wb_data_forward :	`ysyx_25060170_ZERO32 ;

// assign op2_forward_data = 	ex_op2_forward ? ex_data_forward :
// 				ls_op2_forward ? ls_data_forward :
// 				wb_op2_forward ? wb_data_forward :
// 				`ysyx_25060170_ZERO32;

// assign op2_forward_data = `ysyx_25060170_ZERO32 |
// 					{32{ex_op2_forward}} & ex_data_forward |
// 					{32{ls_op2_forward & (~ex_op2_forward)}} & ls_data_forward |
// 					{32{wb_op2_forward & (~ex_op2_forward)   & (~ls_op2_forward)}} & wb_data_forward ;
// assign op2_forward_data = `ysyx_25060170_ZERO32 |
// 					{32{ex_op2_forward}} & ex_data_forward |
// 					{32{ls_op2_forward & (~ex_op2_forward)}} & ls_data_forward 							   		          |
// 					{32{ls_op2_forward & (~ex_op2_forward)   & (~mem_op2_forward)}} 				   & mem_data_forward |
// 					{32{wb_op2_forward & (~ex_op2_forward)   & (~mem_op2_forward) &(~ls_op1_forward)}} & wb_data_forward  ;

assign op2_forward_data =  ex_op2_forward ?  ex_data_forward :
						   ls_op2_forward ?  ls_data_forward :
						  mem_op2_forward ? mem_data_forward :
						   wb_op2_forward ?  wb_data_forward :	`ysyx_25060170_ZERO32 ;

// wire jalr_bpu_jump_error = (alusrc_o == `INST_JALR) & (next_pc_i != ((op1 + imm)&(~1)));

//*************************************output*************************************//
//out to id_ex_reg
// assign next_pc_o = next_pc_i |
// 				  ({32{predict_error_o}} & (imm)) ;
// assign next_pc_o = ((alusrc_o == `INST_JALR) | (alusrc_o == `INST_JAL) | predict_error_o) ? (pc_i + imm) : next_pc_i;
assign next_pc_o = ((alusrc_o == `INST_JAL) ) 				?  (pc_i + imm)  		:
				   (alusrc_o == `INST_JALR)                 ?  ((op1 + imm)&(~1))	:
				   inst_bxx & now_bxx_jump_yes				?  (pc_i + imm)         :
				   inst_bxx & ~now_bxx_jump_yes				?  (pc_i + 32'b100)		:
				   inst_i == 32'b00000000000000000000000001110011 ?       (mtvec)	:
				   inst_i == 32'h30_20_00_73				?	mepc				:
				   next_pc_i;

assign pc_o 	 	= id_valid_o ? pc_i : 0		;
assign inst_o 	 	= id_valid_o ? inst_i : 0	;
assign csr_imm_o 	= rs1		;
// assign store_addr_o = rs2		;

//rs1
assign op1 = `ysyx_25060170_ZERO32 														|
			 {32{op1_forward_ena}} 				& op1_forward_data 						|
			 {32{rs1_ena & (~op1_forward_ena)}}	& rs1_data;				

//rs2  				
//特殊情况，如果				
assign op2 = `ysyx_25060170_ZERO32 														|
			 {32{op2_forward_ena}} 				    			& op2_forward_data 		|
			 {32{rs2_ena & (~op2_forward_ena)}}	    			& rs2_data 				|
			 {32{csr_ena_o & (~rs2_ena) & (~op2_forward_ena)}}  & csr_data_i;

 
assign pc_o = rst == `ysyx_25060170_RSTABLE ? `ysyx_25060170_STARTPC : pc_i	;
//*************************************branch calculate*************************************//
wire diff_sign = op1[31] ^ op2[31];

wire op_ltu_op2 = op1 <  op2;

wire op1_lt_op2 = diff_sign ? op1[31] : op_ltu_op2;

wire now_bxx_jump_yes; //确实应该跳转 确实1 不该0

assign now_bxx_jump_yes =  1'b0 |
				  (rst      |  (~branch)   & (1'b0)) |
				  (alusrc_o == `INST_BEQ   & (op1 == op2)) |
				  (alusrc_o == `INST_BNE   & (op1 != op2)) |
				  (alusrc_o == `INST_BLTU  & (op_ltu_op2)) |
				  (alusrc_o == `INST_BGEU  & (~op_ltu_op2)) |
				  (alusrc_o == `INST_BLT   & (op1_lt_op2)) |
				  (alusrc_o == `INST_BGE   & (~op1_lt_op2)) ;


//*************************************竞争冒险*************************************//
//若上一条指令是load访存后将值给通用寄存器，当前指令是add/store，此时产生数据依赖

// assign op1_relate = ((rst == 1) & (rs1_addr == 5'd0)) ? 1'b0 : rs1_ena & (ex_load_ena & (rs1_addr == ex_addr_forward)) | (ls_load_ena & (rs1_addr == ls_addr_forward)) | (mem_load_ena & (rs1_addr == mem_addr_forward)) | (wb_load_ena & (rs1_addr == wb_addr_forward));
// assign op2_relate = ((rst == 1) & (rs2_addr == 5'd0)) ? 1'b0 : rs2_ena & (ex_load_ena & (rs2_addr == ex_addr_forward)) | (ls_load_ena & (rs2_addr == ls_addr_forward)) | (mem_load_ena & (rs2_addr == mem_addr_forward)) | (wb_load_ena & (rs2_addr == wb_addr_forward));
assign op1_relate = ((rst == 1) & (rs1_addr == 5'd0)) ? 1'b0 : rs1_ena & (ex_load_ena & ~ex_valid_i & (rs1_addr == ex_addr_forward)) | (ls_load_ena & ~ls_valid_i & (rs1_addr == ls_addr_forward)) ;
// | (mem_load_ena & (rs1_addr == mem_addr_forward)) | (wb_load_ena & (rs1_addr == wb_addr_forward));
assign op2_relate = ((rst == 1) & (rs2_addr == 5'd0)) ? 1'b0 : rs2_ena & (ex_load_ena & ~ex_valid_i & (rs2_addr == ex_addr_forward)) | (ls_load_ena & ~ls_valid_i & (rs2_addr == ls_addr_forward)) ;
// | (mem_load_ena & (rs2_addr == mem_addr_forward)) | (wb_load_ena & (rs2_addr == wb_addr_forward));


// assign csr_op1_stall = (ex_op1_forward & ex_csr_ena) | (ls_op1_forward & ls_csr_ena) | (mem_op1_forward & mem_csr_ena);
// assign csr_op2_stall = (ex_op2_forward & ex_csr_ena) | (ls_op2_forward & ls_csr_ena) | (mem_op2_forward & mem_csr_ena);
assign csr_op1_stall = (ex_op1_forward & ex_csr_ena & ~ex_valid_i ) | (ls_op1_forward & ls_csr_ena & ~ls_valid_i );
assign csr_op2_stall = (ex_op2_forward & ex_csr_ena & ~ex_valid_i ) | (ls_op2_forward & ls_csr_ena & ~ls_valid_i );

assign id_stall_ena  = (rst == 1) ? 1'b0 : op1_relate | op2_relate | csr_op1_stall | csr_op2_stall;

assign id_flush_o 	 = (bp_jump_i ^ now_bxx_jump_yes) | (~bp_jump_i & inst_jxx) | PC_error;
assign id_ready_o 	 = ex_ready_i & ~id_stall_o ;
assign id_valid_o 	 = if_valid_i & ~id_stall_o	; 
assign id_stall_o    = id_stall_ena 		  	;

//*************************************out to ifu*************************************//
// wire [`ysyx_25060170_DATA] o1;
// wire [`ysyx_25060170_DATA] o2;

// assign o1 = (alusrc_o == `INST_JALR) ? op1 : pc_i ; 
		
// assign o2 =	bp_jump_i ? `ysyx_25060170_PLUS4 : imm;

// assign predict_revise_pc = predict_error_ctl[0] ? pc_i + 4 : pc_i 
// wire jalr_bpu_jump_error = (alusrc_o == `INST_JALR) & (next_pc_i != ((op1 + imm)&(~1)));

// wire [1:0] predict_error_ctl;
// assign predict_error_o = predict_error_ctl[1] | jalr_bpu_jump_error;
// assign predict_revise_pc = `ysyx_25060170_ZERO32 						   |	
// 						   {32{predict_error_ctl==2'b11}} & pc_i + 32'b100 |
// 						   {32{predict_error_ctl==2'b10}} & pc_i + imm 	   |
// 						   {32{jalr_bpu_jump_error}}      & ((op1 + imm)&(~1));

		 

//*************************************out to bpu*************************************//
// assign bp_predict_success   = predict_error_ctl[1];	//bpu预测成功与否 来改变二位饱和状态机
// assign predict_error_ctl  = 2'b00		|	//预测
// 							{2{( now_bxx_jump_yes & ~bp_jump_i)}} & 2'b10 |	//bxx该跳转但是当时预测没跳
// 							{2{(~now_bxx_jump_yes &  bp_jump_i)}} & 2'b11 ; //bxx不该跳转但是当时预测跳了

// assign predict_error_o = (id_branch ^ bp_jump_i);



//*************************************regfile*************************************//
//output to regfile
assign rs1_addr = rs1_ena 		? rs1 	: 5'd0 								;
assign rs2_addr = rs2_ena 		? rs2 	: 5'd0 								;
assign rd_ena  = (rd == 5'd0) 	? 1'b0 	: (wbctl_o == 2'b00) ? 1'b0 : 1'b1  ;
assign rd_addr = rd_ena 		? rd 	: 5'd0 								;

//*************************************CSR*************************************//
assign csr_addr = csr_ena_o ? inst_i[31:20] : 12'b0;

//**************************************BPU******************************************//
wire inst_bxx = alusrc_o == `INST_BEQ  	|
				alusrc_o == `INST_BNE  	|
				alusrc_o == `INST_BLTU 	|
				alusrc_o == `INST_BGEU 	|
				alusrc_o == `INST_BLT  	|
				alusrc_o == `INST_BGE  	;

wire inst_jxx = alusrc_o == `INST_JAL | alusrc_o == `INST_JALR;

assign idu_BPU_update = inst_jxx | inst_bxx;

assign idu_btb_updateTarget = alusrc_o == `INST_JALR          		         ? 	 	  op1   :
						  	  alusrc_o == `INST_JAL           		         ? pc_i + imm   :
						  	//   inst_bxx & (bp_jump_i  & ~now_bxx_jump_yes)    ? pc_i + 32'd4 : //
						  	  inst_bxx & (~bp_jump_i &  now_bxx_jump_yes)    ? pc_i + imm   : //
						  	  `ysyx_25060170_ZERO32;
//bp_jump_i当时bpu预测是否跳 跳1 不跳0
assign idu_btb_mispredicted = bp_jump_i ^ now_bxx_jump_yes;

assign idu_btb_updatePC = pc_i;

//**************************************IFU***********************************************//

wire PC_error;
assign PC_error = 0;
// assign PC_error = (ifu_idu_futurePC != next_pc_o);

assign idu_ifu1_jump_pc = PC_error										 ? next_pc_o	:
						  alusrc_o == `INST_JALR          		         ? 	 	  op1   :
						  alusrc_o == `INST_JAL           		         ? pc_i + imm   :
						  inst_bxx & (bp_jump_i  & ~now_bxx_jump_yes)    ? pc_i + 32'd4 : 
						  inst_bxx & (~bp_jump_i &  now_bxx_jump_yes)    ? pc_i + imm   : 
						  `ysyx_25060170_ZERO32;
// //bpu预测跳但实际不跳		|       bpu预测不跳但实际跳		|		pc纠正
assign idu_ifu1_jump	=  id_valid_o ? inst_jxx | (inst_bxx & (bp_jump_i ^ now_bxx_jump_yes)) : 0 ; 

endmodule

