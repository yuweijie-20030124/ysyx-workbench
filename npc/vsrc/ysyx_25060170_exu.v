 `include "define.v"

module ysyx_25060170_exu(
	input	wire					            clk	        ,
	input	wire					            rst	        ,
	input	wire	[`ysyx_25060170_DATA]		reg_op1	    ,
	input	wire	[`ysyx_25060170_DATA]		reg_op2	    ,
	input	wire	[1:0]				        op1_sel	    ,
	input	wire	[2:0]				        op2_sel	    ,
	input	wire	[`ysyx_25060170_REGADDR]	rd_addr	    ,
	input	wire	[`ysyx_25060170_REGADDR]	rs1_addr    ,
	input	wire	[`ysyx_25060170_IMM]		imm	        ,
	input	wire	[`ysyx_25060170_PC]		    pc_i	    ,
	input	wire	[7:0]				        alu_sel	    ,
    
    
	input 	wire			 	                ls_ready    ,
	input 	wire			 	                id_valid    ,
	output	wire			 	                ex_valid    ,
	output	wire			 	                ex_ready    ,
	
	output	wire	[`ysyx_25060170_REG]	    store_data 	,
	output	wire	[`ysyx_25060170_DATA]	    exu_res
);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------------------------------hzd_ctl--------------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

assign ex_valid = id_valid | mul_stall | div_stall;
assign ex_ready = ls_ready | mul_stall | div_stall; 

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//------------------------------------------------------alu--------------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//------------------------------------------------------op sel--------------------------------------------------------------//

wire [`ysyx_25060170_DATA] op1;
wire [`ysyx_25060170_DATA] op2;

assign op1 = 	(op1_sel == 2'b01) ? reg_op1 : 
		(op1_sel == 2'b10) ? pc_i : 
		`ysyx_25060170_ZERO32;
		
assign op2 = 	(op2_sel == 3'b001) ? reg_op2 : 
		(op2_sel == 3'b010) ? `ysyx_25060170_PLUS4 : 
		(op2_sel == 3'b100) ? imm :
		`ysyx_25060170_ZERO32;

//------------------------------------------------------alu calculate--------------------------------------------------------------//

// add addi
wire     [`ysyx_25060170_DATA]  op1_add_op2   = op1 + op2 ;

// sub subw
wire     [`ysyx_25060170_DATA]  op1_sub_op2	 = op1 - op2; 


//slt slti sltiu sltu
wire     op1_lt_op2 = (op1[31] && ~op2[31]) || (~op1[31] && ~op2[31] && op1_sub_op2[31]) || (op1[31] && op2[31] && op1_sub_op2[31]) ;

//sra srai
wire	 [`ysyx_25060170_DATA] op1_sra_op2 = $signed(op1) >>> op2[5:0] ;

//sllw slliw
wire     [31:0]     sllw  = op1[31:0] << op2[4:0]          ;
wire     [`ysyx_25060170_DATA] op1_sllw_op2 = {{32{sllw[31]}} , sllw} ;

//srlw srliw 
wire     [31:0]     srlw  = op1[31:0] >> op2[4:0]          ;
wire     [`ysyx_25060170_DATA] op1_srlw_op2 = {{32{srlw[31]}} , srlw} ;

//sraiw sraw
wire	 [31:0]     sraw = $signed(op1[31:0]) >>> op2[4:0] ;
wire	 [`ysyx_25060170_DATA] op1_sraw_op2 = {{32{sraw[31]}} , sraw} ;

reg [`ysyx_25060170_DATA] alu_res ;


always@(*)begin
	if(rst == `ysyx_25060170_RSTABLE) begin
		alu_res = `ysyx_25060170_ZERO32;
	end
	else begin
		case(alu_sel)
			`INST_ADDI ,  `INST_ADD,
			`INST_LUI  ,  `INST_AUIPC, 
			`INST_JAL  ,  `INST_JALR,
			`INST_LB   ,  `INST_LH,
			`INST_LW   ,  
			`INST_SB   ,  `INST_SH,
			`INST_SW   ,  
			`INST_LBU  ,  `INST_LHU,  
			`INST_LWU               	:  begin alu_res = op1_add_op2			;end

			`INST_SUB                	:  begin alu_res = op1_sub_op2			;end
  
			`INST_SLTI ,  `INST_SLT  	:  begin alu_res = {31'd0 , op1_lt_op2}		;end
			`INST_SLTIU , `INST_SLTU 	:  begin alu_res = {31'd0 , (op1 < op2)}	;end
			`INST_SRAI ,  `INST_SRA  	:  begin alu_res = op1_sra_op2			;end
			`INST_SLLIW,  `INST_SLLW 	:  begin alu_res = op1_sllw_op2			;end
			`INST_SRLIW,  `INST_SRLW 	:  begin alu_res = op1_srlw_op2			;end
			`INST_SRAIW,  `INST_SRAW 	:  begin alu_res = op1_sraw_op2			;end
			`INST_XORI ,  `INST_XOR  	:  begin alu_res = op1 ^ op2			;end
			`INST_ORI  ,  `INST_OR   	:  begin alu_res = op1 | op2			;end
			`INST_ANDI ,  `INST_AND  	:  begin alu_res = op1 & op2			;end
			`INST_SLLI ,  `INST_SLL  	:  begin alu_res = op1 << op2 [5:0]		;end
			`INST_SRLI ,  `INST_SRL  	:  begin alu_res = op1 >> op2 [5:0]		;end
			`INST_EBREAK             	:  begin alu_res = op1				    ;end
	  
			default				        :  begin alu_res = `ysyx_25060170_ZERO32;end
		endcase
	end
end

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//-----------------------------------------------------output--------------------------------------------------------------//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//out to lsu		     

assign exu_res = alu_res ;
assign store_data = reg_op2 ;


endmodule
