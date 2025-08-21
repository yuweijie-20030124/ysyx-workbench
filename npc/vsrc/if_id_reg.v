 `include "define.v"
 module ysyx_25060170_if_id(
 	//front stage input
	input	wire				                clk	        ,
	input	wire				                rst	        ,
	input	wire	[`ysyx_25060170_INST]	    if_inst	    ,
	input	wire	[`ysyx_25060170_PC]	        if_pc	    ,
    
	//from DPI-C
	input 	wire	[`ysyx_25060170_INST]		first_inst	,

	//ctl   
	input	wire				                if_valid    ,
	input	wire				                id_flush    ,
	input	wire				                ie_flush    ,
	input	wire				                ls_flush    ,
	input	wire				                id_stall    ,
	input	wire				                id_ready    ,
    
	//output to next stage  
	output	reg				                    id_jump	    ,
	output	reg	    [`ysyx_25060170_INST]	    id_inst	    ,
	output	reg	    [`ysyx_25060170_PC]	        id_pc
 );
 
 wire flush =  (~id_stall & id_flush) | ie_flush | ls_flush;
 wire stall = if_valid | id_ready;
 
 always@(posedge clk) begin
	 if(rst) begin 
		 id_inst <= 	first_inst;
		 id_pc	 <= 	`ysyx_25060170_STARTPC;
		 id_jump <= 	1'd0;
	 end	 
	 else if(stall) begin
	 	 id_inst <= 	id_inst;
		 id_pc	 <= 	id_pc;
		 id_jump <= 	id_jump;
	 end
	 else if(flush) begin 
		 id_inst <= 	32'd0;
		 id_pc	 <= 	32'd0;
		 id_jump <= 	1'd0;
	 end
	 else if(id_stall) begin
	 	 id_inst <= 	id_inst;
		 id_pc	 <= 	id_pc;
		 id_jump <= 	id_jump;
	 end
	 else begin
		 id_inst <= 	if_inst;
	   	 id_pc	 <= 	if_pc;
		//  id_jump <= 	bpu_jump;
	 end
 end

 endmodule
