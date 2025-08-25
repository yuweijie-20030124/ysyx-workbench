 `include "define.v"

module ysyx_25060170_ifu (
 input  wire								clk			,
 input  wire								rst			,
 input	wire								pcsrc_i		,
 input	wire 	[`ysyx_25060170_PC]			ex_pc_i  	,
 input  wire	[`ysyx_25060170_INST]		inst_i		,
 
 output	reg 	[`ysyx_25060170_INST]		inst_o		,
 output reg		[`ysyx_25060170_PC]			pc_o	
 );

 reg [`ysyx_25060170_PC] pc_next;
 wire [`ysyx_25060170_PC] pc_plus4;
 
 assign pc_plus4=(rst==`ysyx_25060170_RSTABLE) ? `ysyx_25060170_STARTPC : (pc_o+`ysyx_25060170_PLUS4);
 assign pc_next = (rst == `ysyx_25060170_RSTABLE) ? `ysyx_25060170_STARTPC : ((pcsrc_i==0) ? pc_plus4 : ex_pc_i);

 always@(posedge clk) begin
	 if(rst == `ysyx_25060170_RSTABLE)begin
		pc_o <= `ysyx_25060170_STARTPC;
			$display("rst pc = 0x%08x",pc_o);
			$display("rst inst = 0x%08x",inst_o);			
	end
  else begin
	  pc_o<=pc_next;
	end
end
 
 assign inst_o = inst_i;
 
  
endmodule
