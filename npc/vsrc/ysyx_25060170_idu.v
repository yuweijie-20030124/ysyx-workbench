 `include "define.v"
module ysyx_25060170_idu(
	//ifu input
	input	wire		       			        rst	            ,
	input	wire	[`ysyx_25060170_INST]		inst_i	        ,
	input	wire	[`ysyx_25060170_PC]		    pc_i	        ,
	
	
	//data forward
	input	wire	[`ysyx_25060170_REGADDR]	ex_addr_forward	,
	input	wire	[`ysyx_25060170_DATA]		ex_data_forward	,
	input	wire	[`ysyx_25060170_REGADDR]	ls_addr_forward	,
	input	wire	[`ysyx_25060170_DATA]		ls_data_forward	,
	input	wire	[`ysyx_25060170_REGADDR]	wb_addr_forward	,
	input	wire	[`ysyx_25060170_DATA]		wb_data_forward	,
	input 	wire					            ex_load_ena	    ,
	
	//regfile signal
	output	wire	[`ysyx_25060170_REGADDR]	rs1_addr        ,
	output	wire				 	            rs1_ena         ,
	input	wire	[`ysyx_25060170_REG]     	rs1_data        ,

	output	wire	[`ysyx_25060170_REGADDR] 	rs2_addr        ,
	output	wire				 	            rs2_ena         ,
	input	wire	[`ysyx_25060170_REG]     	rs2_data        ,
    
	output	wire					            rd_ena          ,
	output	wire	[`ysyx_25060170_REGADDR] 	rd_addr         ,

	//control out signal    
	output  wire	[7:0]         			    alusrc_o	    ,
	output  wire	[3:0]      		            lsctl_o		    ,
	output  wire	[1:0]     		            wbctl_o		    ,
	output	wire	[1:0]			            op1_sel		    ,
	output	wire	[2:0]			            op2_sel		    ,
	output	wire 					            load_flag	    ,
	
	//data out signal
	output  wire 	[`ysyx_25060170_DATA]  		op1             ,
	output  wire 	[`ysyx_25060170_DATA]  		op2             , 
	output  wire 	[`ysyx_25060170_IMM]      	imm             ,
	output	wire 	[`ysyx_25060170_INST]		inst_o	        ,
	output	wire 	[`ysyx_25060170_PC]		    pc_o	        ,
	output  wire								branch			,
	
	//hzd
	input	wire					            ex_ready        ,
	input	wire					            if_valid        ,
	output	wire					            id_flush        ,
	output	wire					            id_ex_flush     ,
	output	wire					            id_ready        ,
	output	wire					            id_valid        
	
);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//---------------------------------------------hzd_ctl-------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// assign id_flush = jump_ena ;
assign id_flush = 1'b0 ;
assign id_ready = ex_ready ;
assign id_valid = if_valid; 
assign id_ex_flush = id_stall_ena;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//---------------------------------------------decode-------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

wire   [ 4:0]   rd     ;
wire   [ 4:0]   rs1    ;
wire   [ 4:0]   rs2    ;
assign  rd       =  inst_i [11:7]   ;
assign  rs1      =  inst_i [19:15]  ;
assign  rs2      =  inst_i [24:20]  ;


ysyx_25060170_idu_decode u_decode(
	.rst(rst)	,
	.inst(inst_i),
	.rs1_ena(rs1_ena),
	.rs2_ena(rs2_ena),
	.ext_imm(imm)	,
	.wb_ctl (wbctl_o) ,
 	.mem_ctl(lsctl_o) ,
 	.op1_sel(op1_sel),
 	.op2_sel(op2_sel),
 	.branch(branch) ,
 	.load(load_flag),
	.alu_ctl(alusrc_o)
);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//---------------------------------------------ctl/out sign generate-------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//---------------------------------------------data forward-------------------------------------------------------//
//stall
wire op1_relate ;//load inst
wire op2_relate ;
wire id_stall_ena;
assign op1_relate = ((rst == `ysyx_25060170_RSTABLE) & (rs1_addr == 5'd0)) ? 1'b0 : rs1_ena & ex_load_ena & (rs1_addr == ex_addr_forward) ;
assign op2_relate = ((rst == `ysyx_25060170_RSTABLE) & (rs2_addr == 5'd0)) ? 1'b0 : rs2_ena & ex_load_ena & (rs2_addr == ex_addr_forward) ;


assign id_stall_ena = (rst == `ysyx_25060170_RSTABLE) ? 1'b0 : op1_relate | op2_relate;

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
				
//---------------------------------------------regfile-------------------------------------------------------//

//output to regfile
assign rs1_addr = rs1_ena ? rs1 : 5'd0 ;
assign rs2_addr = rs2_ena ? rs2 : 5'd0 ;
assign rd_ena  = (rd == 5'd0) ? 1'b0 : (wbctl_o == 2'b00) ? 1'b0 : 1'b1 ;
assign rd_addr = rd_ena ? rd : 5'd0 ;


//data out singal
assign op1 = rs1_ena & op1_forward_ena ? op1_forward_data : rs1_ena ? rs1_data : `ysyx_25060170_ZERO32;
assign op2 = rs2_ena & op2_forward_ena ? op2_forward_data : rs2_ena ? rs2_data : `ysyx_25060170_ZERO32;

assign pc_o = rst == `ysyx_25060170_RSTABLE ? `ysyx_25060170_ZERO32 : pc_i	;
assign inst_o = rst == `ysyx_25060170_RSTABLE ? 32'd0 : inst_i	;



endmodule
