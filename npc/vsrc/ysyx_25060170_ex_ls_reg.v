 `include "define.v"

 module ysyx_25060170_ex_ls_reg(
	//front stage input
	input	wire					            clk		            ,
	input	wire					            rst		            ,
	input	wire	[`ysyx_25060170_INST]		ex_inst 	        ,
	input	wire	[`ysyx_25060170_PC]		    ex_pc		        ,
	input	wire	[`ysyx_25060170_REG] 		ex_store_data	    ,
	input 	wire 	[`ysyx_25060170_DATA] 		ex_exu_res	        ,
	input	wire 	[3:0]      			        ex_lsctl	        ,
	input	wire 	[1:0]     			        ex_wbctl	        ,	
	input	wire                                ex_rd_ena	        ,
	input	wire	[`ysyx_25060170_REGADDR]	ex_rd_addr	        ,

 	//ctl       
	input	wire					            ex_valid	        ,	
	input	wire					            ls_ready	        ,
	input	wire					            ie_flush	        ,
	input	wire					            ls_flush	        ,

	//output to next stage      
	output	reg	    [`ysyx_25060170_INST]		ls_inst		        ,
	output	reg	    [`ysyx_25060170_PC]		    ls_pc		        ,
	output	reg 	[`ysyx_25060170_REG] 		ls_store_data 	    ,
	output 	reg 	[`ysyx_25060170_DATA] 		ls_exu_res	        ,
	output	reg 	[3:0]      			        ls_lsctl	        ,
	output	reg 	[1:0]		     		    ls_wbctl   	        , 
	output	reg                                 ls_rd_ena	        ,
	output	reg	    [`ysyx_25060170_REGADDR]	ls_rd_addr	        ,
    
	//ex forward to idu
	output	wire	[`ysyx_25060170_REGADDR]	ex_rd_addr_forward	,
	output	wire	[`ysyx_25060170_DATA]		ex_rd_data_forward	
);

 wire flush = ie_flush | ls_flush;
 wire stall = ex_valid | ls_ready;

always@(posedge clk) begin
	if(rst == `ysyx_25060170_RSTABLE)begin 
		ls_inst		<= 32'd0;
		ls_pc		<= `ysyx_25060170_ZERO32;
		ls_store_data	<= `ysyx_25060170_ZERO32;	
		ls_exu_res	<= `ysyx_25060170_ZERO32;	
		ls_lsctl	<= 4'b0;
		ls_wbctl	<= 2'b0;
		ls_rd_ena	<= 1'b0;
		ls_rd_addr	<= 5'd0;
	end
	else if(stall) begin 
		ls_inst		<= ls_inst;
		ls_pc		<= ls_pc;
		ls_store_data	<= ls_store_data;		
		ls_exu_res	<= ls_exu_res;
		ls_lsctl	<= ls_lsctl;
		ls_wbctl	<= ls_wbctl;
		ls_rd_ena	<= ls_rd_ena;
		ls_rd_addr	<= ls_rd_addr;
	end
	else if(flush)begin 
		ls_inst		<= 32'd0;
		ls_pc		<= `ysyx_25060170_ZERO32;
		ls_store_data	<= `ysyx_25060170_ZERO32;	
		ls_exu_res	<= `ysyx_25060170_ZERO32;	
		ls_lsctl	<= 4'b0;
		ls_wbctl	<= 2'b0;
		ls_rd_ena	<= 1'b0;
		ls_rd_addr	<= 5'd0;
	end
	else begin
		ls_inst		<= ex_inst;
		ls_pc		<= ex_pc;
		ls_store_data	<= ex_store_data;		
		ls_exu_res	<= ex_exu_res;
		ls_lsctl	<= ex_lsctl;
		ls_wbctl	<= ex_wbctl;
		ls_rd_ena	<= ex_rd_ena;
		ls_rd_addr	<= ex_rd_addr;
	end
end

assign ex_rd_addr_forward = ex_rd_addr	;
assign ex_rd_data_forward = ex_exu_res	;

endmodule
