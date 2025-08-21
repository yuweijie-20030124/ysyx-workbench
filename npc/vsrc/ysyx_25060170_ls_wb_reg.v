 `include "define.v"

 module ysyx_25060170_ls_wb_reg(
	//front stage input
	input	wire                                clk		            ,
	input	wire                                rst		            ,
	input	wire	[`ysyx_25060170_INST]		ls_inst	            ,
	input	wire	[`ysyx_25060170_PC]		    ls_pc		        ,
	input	wire 	[1:0]				        ls_wbctl    	    ,
	input 	wire 	[`ysyx_25060170_DATA]		ls_exu_res	        ,
	input	wire 	[`ysyx_25060170_DATA]		ls_wbdata	        ,
	input	wire					            ls_rd_ena	        ,
	input	wire	[`ysyx_25060170_REGADDR]	ls_rd_addr	        ,   
	input	wire 	[`ysyx_25060170_DATA]		ls_data_forward	    ,

	//ctl   
	input	wire					            ls_valid	        ,
	input	wire					            wb_ready	        ,
	input	wire					            ie_flush	        ,	

	//output to next stage      
	output	reg	    [`ysyx_25060170_INST]		wb_inst		        ,
	output	reg	    [`ysyx_25060170_PC]		    wb_pc		        ,
	output	reg 	[1:0]				        wb_wbctl    	    ,
	output 	reg 	[`ysyx_25060170_DATA]		wb_exu_res	        ,
	output	reg 	[`ysyx_25060170_DATA]     	wb_wbdata	        ,
	output	reg                                 wb_rd_ena	        ,
	output	reg	    [`ysyx_25060170_REGADDR]	wb_rd_addr	        ,
	
    	//ls forward to idu
	output	wire	[`ysyx_25060170_REGADDR]	ls_rd_addr_forward	,
	output	wire	[`ysyx_25060170_DATA]		ls_rd_data_forward	
);
wire flush = ie_flush;
 wire stall = ls_valid | wb_ready;

always@(posedge clk) begin
	if(rst == `ysyx_25060170_RSTABLE)begin 
		wb_inst		<= 32'd0;
		wb_pc		<= `ysyx_25060170_ZERO32;
		wb_wbctl	<= 2'b0;
		wb_exu_res	<= `ysyx_25060170_ZERO32;
		wb_wbdata	<= `ysyx_25060170_ZERO32;
		wb_rd_ena	<= 1'b0;
		wb_rd_addr	<= 5'd0;    
	end
	else if(stall) begin
		wb_inst		<= wb_inst;
		wb_pc 		<= wb_pc ;
		wb_wbctl	<= wb_wbctl;
		wb_exu_res	<= wb_exu_res;
		wb_wbdata	<= wb_wbdata;
		wb_rd_ena	<= wb_rd_ena ;
		wb_rd_addr	<= wb_rd_addr;
	end 
	else if(flush)begin 
		wb_inst		<= 32'd0;
		wb_pc		<= `ysyx_25060170_ZERO32;
		wb_wbctl	<= 2'b0;
		wb_exu_res	<= `ysyx_25060170_ZERO32;
		wb_wbdata	<= `ysyx_25060170_ZERO32;
		wb_rd_ena	<= 1'b0;
		wb_rd_addr	<= 5'd0;    
	end
	else begin
		wb_inst		<= ls_inst;
		wb_pc		<= ls_pc ;
		wb_wbctl	<= ls_wbctl;
		wb_exu_res	<= ls_exu_res;
		wb_wbdata	<= ls_wbdata;
		wb_rd_ena	<= ls_rd_ena;
		wb_rd_addr	<= ls_rd_addr;
	end
end

assign ls_rd_addr_forward = ls_rd_addr	;
assign ls_rd_data_forward = ls_data_forward	;

endmodule
