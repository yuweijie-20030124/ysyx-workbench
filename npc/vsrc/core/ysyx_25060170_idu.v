 `include "define.v"
module ysyx_25060170_idu(
	//system input
	 input	  wire		       					rst					//<<i<<					
	//from if_id signal	
	,input	  wire [`ysyx_25060170_INST]		inst_i				//<<i<<
	,input	  wire [`ysyx_25060170_PC]			pc_i				//<<i<<		
	//from bpu
	,input 	  wire 								bp_jump_i			//<<i<<
	//data forward
	,input	wire	[`ysyx_25060170_REGADDR]	ex_addr_forward		//<<i<<	
	,input	wire	[`ysyx_25060170_DATA]		ex_data_forward		//<<i<<	
	,input	wire	[`ysyx_25060170_REGADDR]	ls_addr_forward		//<<i<<	
	,input	wire	[`ysyx_25060170_DATA]		ls_data_forward		//<<i<<	
	,input	wire	[`ysyx_25060170_REGADDR]	wb_addr_forward		//<<i<<	
	,input	wire	[`ysyx_25060170_DATA]		wb_data_forward		//<<i<<	
	,input 	wire								ex_load_ena			//<<i<<
	,input	wire								ex_csr_ena			//<<i<<
	,input	wire								ls_csr_ena			//<<i<<
	//regfile signal
	,input     wire [`ysyx_25060170_REG]     	rs1_data 			//<<i<<
	,input     wire [`ysyx_25060170_REG]     	rs2_data 			//<<i<<
	,output    wire [`ysyx_25060170_REGADDR] 	rs1_addr 			//>>o>>
	,output    wire				 				rs1_ena  			//>>o>>	
	,output    wire [`ysyx_25060170_REGADDR] 	rs2_addr 			//>>o>>
	,output    wire						 		rs2_ena  			//>>o>>
	,output    wire				 				rd_ena  			//>>o>>
  	,output    wire [`ysyx_25060170_REGADDR] 	rd_addr 			//>>o>>
	//to exu out signal		
	,output    wire [7:0]         				alusrc_o  			//>>o>>
	,output    wire [3:0]      					lsctl_o   			//>>o>>
	,output    wire [1:0]     					wbctl_o    			//>>o>>
	,output    wire            					branch_o   			//>>o>>
	,output    wire            					jump_o     			//>>o>>
	,output    wire [3:0]                    	csr_ctl    		   	//>>o>>	{csr_wr_ena, csr_rd_ena,ecall_ena, mret_ena}
    ,output    wire                             csr_rd_ena_o    	//>>o>>
	//id out signal	
	,output    reg  [`ysyx_25060170_DATA]  		op1 				//>>o>>
	,output    reg  [`ysyx_25060170_DATA]  		op2 			 	//>>o>>
	,output    reg  [`ysyx_25060170_IMM]     	imm 				//>>o>>
	,output	  wire [`ysyx_25060170_REGADDR] 	idu_dpic_rd_addr	//>>o>>
	,output	  wire [`ysyx_25060170_PC]			pc_o				//>>o>>
	//to ifu
	,output   wire								jump_ena_o			//>>o>>
	,output   wire	[`ysyx_25060170_PC]			jump_pc_o			//>>o>>
	
	//竞争冒险
	,input 	  wire 								if_valid_i,			//<<i<<
	,input 	  wire 								ex_ready_i,			//<<i<<
	,output   wire								id_flush_o			//>>o>>
	,output   wire								id_ex_flush_o		//>>o>>
	,output   wire								id_ready_o			//>>o>>
	,output   wire								id_valid_o			//>>o>>


	//magic flag for NEMU_STOP
	,output    wire 							magic_flag			//>>o>>
);

assign idu_dpic_rd_addr = rd;

//----------------------------------decoder---------------------------//
wire   [4:0]   	rd     							;
wire   [4:0]   	rs1    							;
wire   [4:0]   	rs2    							;
wire 			imm_ena 						;
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
	.csr_inst(csr_ena),
	.wb_ctl (wbctl_o) ,
 	.mem_ctl(lsctl_o) ,
 	.branch(branch) ,
	.ext_imm(imm)	,
 	.load(load_flag),
	.op1_sel(op1_sel),
 	.op2_sel(op2_sel),
	.alu_ctl(alusrc_o)
);

//-------------------------------dataforward--------------------------//
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

wire op1_forward_ena = ex_op1_forward | ls_op1_forward | wb_op1_forward;
wire op2_forward_ena = ex_op2_forward | ls_op2_forward | wb_op2_forward;

wire [`ysyx_25060170_DATA] op1_forward_data;
wire [`ysyx_25060170_DATA] op2_forward_data;

assign op1_forward_data = 	ex_op1_forward ? ex_data_forward :
				ls_op1_forward ? ls_data_forward :
				wb_op1_forward ? wb_data_forward :
				`ysyx_25060170_ZERO32;
				
assign op2_forward_data = 	ex_op2_forward ? ex_data_forward :
				ls_op2_forward ? ls_data_forward :
				wb_op2_forward ? wb_data_forward :
				`ysyx_25060170_ZERO32;


//-------------------------------output--------------------------//

//output to regfile
assign rs1_addr = rs1_ena ? rs1 : 5'd0 ;
assign rs2_addr = rs2_ena ? rs2 : 5'd0 ;
assign rd_ena  = (rd == 5'd0) ? 1'b0 : (wbctl_o == 2'b00) ? 1'b0 : 1'b1 ;
assign rd_addr = rd_ena ? rd : 5'd0 ;

//out to exu
//rs1
always @(*) begin
  if(rst == `ysyx_25060170_RSTABLE) begin  op1 = `ysyx_25060170_ZERO32   ;   end
  else if(rs1_ena) begin op1 = rs1_data ; end
  else if (alusrc_o == `INST_AUIPC | alusrc_o == `INST_JAL) begin  op1 = pc_i ;  end
	else if (alusrc_o == `INST_CSRRWI | alusrc_o == `INST_CSRRSI | alusrc_o == `INST_CSRRCI) begin op1 ={{27{1'b0}},rs1};end
  else begin op1 = `ysyx_25060170_ZERO32; end
  end
//rs2  
always @(*) begin
  if(rst == `ysyx_25060170_RSTABLE) begin  op2 = `ysyx_25060170_ZERO32   ;   end
  else if(rs2_ena) begin op2 = rs2_data ; end
  else if(imm_ena) begin op2 = imm ; end
  else begin op2 = `ysyx_25060170_ZERO32; end
 end

reg csr_wr_ena;
reg csr_rd_ena;
reg mret_ena;		//机器模式异常返回
reg ecall_ena;		//环境调用，调用异常请求执行环境

always @(*) begin
	csr_wr_ena = 1'b0;
	csr_rd_ena = 1'b0;
	mret_ena =  1'b0;
	ecall_ena = 1'b0;
	case(alusrc_o)
	`INST_ECALL : begin  ecall_ena = 1'b1;end
		
	`INST_MRET :  begin  mret_ena = 1'b1 ;end
		
	`INST_CSRRW, `INST_CSRRWI : begin
		csr_wr_ena = `ysyx_25060170_WENABLE;
		csr_rd_ena = (rd == 5'd0) ? `ysyx_25060170_RDISABLE : `ysyx_25060170_RENABLE;end
		
	`INST_CSRRS, `INST_CSRRC,
	`INST_CSRRSI, `INST_CSRRCI :  begin 
		csr_wr_ena = (rs1 == 5'd0) ? `ysyx_25060170_WDISABLE : `ysyx_25060170_WENABLE;
		csr_rd_ena = `ysyx_25060170_RENABLE;	end
	default : 	begin
		csr_wr_ena = 1'b0;
		csr_rd_ena = 1'b0;
		mret_ena =  1'b0;
		ecall_ena = 1'b0;
	end
	endcase 
end

assign csr_ctl = {csr_wr_ena, csr_rd_ena ,ecall_ena, mret_ena};//{csr_wr_ena, ecall_ena, mret_ena}
assign csr_rd_ena_o = csr_rd_ena;
 
assign pc_o = rst == `ysyx_25060170_RSTABLE ? `ysyx_25060170_ZERO32 : pc_i	;
//---------------------------------------------branch calculate-------------------------------------------------------//

reg ex_branch ;

wire diff_sign = op1[31] ^ op2[31];

wire op_ltu_op2 = op1 <  op2;

wire op1_lt_op2 = diff_sign ? op1[31] : op_ltu_op2;


// always @(*) begin jhkhkhohohohohohoh
// 	if(rst == `ysyx_25060170_RSTABLE) bimmegin
// 		ex_branch = `ysyx_25060170_BRANCHDISABLE  ;    
// 	endimm
// 	else if(~branch)  begin 
// 		ex_branch = `ysyx_25060170_BRANCHDISABLE  ;    
// 	end
// 	else begin
// 		case (alusrc_o) 
// 			`INST_BEQ     : begin  ex_branch = (op1 == op2) ? `ysyx_25060170_BRANCHABLE : `ysyx_25060170_BRANCHDISABLE ;  end
// 			`INST_BNE     : begin  ex_branch = (op1 != op2) ? `ysyx_25060170_BRANCHABLE : `ysyx_25060170_BRANCHDISABLE ;  end
// 			`INST_BLTU    : begin  ex_branch = (op_ltu_op2) ? `ysyx_25060170_BRANCHABLE : `ysyx_25060170_BRANCHDISABLE ;  end
// 			`INST_BGEU    : begin  ex_branch = (~op_ltu_op2) ? `ysyx_25060170_BRANCHABLE : `ysyx_25060170_BRANCHDISABLE ;  end
// 			`INST_BLT     : begin  ex_branch = ( op1_lt_op2 ) ? `ysyx_25060170_BRANCHABLE : `ysyx_25060170_BRANCHDISABLE ;  end
// 			`INST_BGE     : begin  ex_branch = (~op1_lt_op2 ) ? `ysyx_25060170_BRANCHABLE : `ysyx_25060170_BRANCHDISABLE ;  end
// 			default:        begin  ex_branch = `ysyx_25060170_BRANCHDISABLE  ;    end 
// 		endcase
// 	end
// end

assign ex_branch =  1'b0 |
				(alusrc_o == `INST_BEQ   & (op1 == op2)) |
				(alusrc_o == `INST_BNE   & (op1 != op2)) |
				(alusrc_o == `INST_BLTU  & (op_ltu_op2)) |
				(alusrc_o == `INST_BGEU  & (~op_ltu_op2)) |
				(alusrc_o == `INST_BLT   & (op1_lt_op2)) |
				(alusrc_o == `INST_BGE   & (~op1_lt_op2)) ;


//-------------------------------竞争冒险--------------------------//
assign id_flush_o 	 = jump_ena 	;
assign id_ready_o 	 = ex_ready_i 	;
assign id_valid_o 	 = if_valid_i 	; 
assign id_ex_flush_o = id_stall_ena;

//-------------------------------out to ifu--------------------------//
assign jump_ena =((alusrc_o == `INST_JALR)) | (ex_branch ^ bp_jump_i);

wire [`ysyx_25060170_DATA] o1;
wire [`ysyx_25060170_DATA] o2;

assign o1 = 	(alusrc_o == `INST_JALR) ? op1 : pc_i ; 
		
assign o2 =	bp_jump_i ? `ysyx_25060170_PLUS4 : imm;

assign jump_pc = jump_ena ? (o1 + o2) :
		 `ysyx_25060170_ZERO32;

endmodule

