//专门为了拓展出这么个DPI-C文件 让整个core可综合，避免后续要一直屏蔽掉DPI-C功能 太麻烦了
 `include "define.v"

 module ysyx_25060170_DPI-C(

 //--------------------DPI-C----------------------//
import "DPI-C" function void pc_inst_end(input int thepc_data, input int the_inst);
import "DPI-C" function void ebreak (input bit ebreak_ena);
reg delay;
reg [31:0] pc_delay;
always@(posedge clk) begin
	if(rst == `ysyx_25060170_RSTABLE) begin
		delay <= 1'b0;
		pc_delay <= 32'd0;
	end
	else if(id_stall & ~ls_valid) begin 
		delay <= 1'b1;
		pc_delay <= pc_i;
	end
	else begin
		delay <= 1'b0;
		pc_delay <= 32'd0;
	end
end

wire ebreak_ena;
assign ebreak_ena = inst_i == `EBREAK_TRAP ? 1'b1 : 1'b0;

 always @(posedge clk) begin
   if(~ls_valid & ~id_stall & ~time_jump) begin
   	pc_inst_end(pc_i, inst_i);
   end
   if(delay & ~time_jump) begin
   pc_inst_end(pc_delay, inst_i);
   end
   ebreak(ebreak_ena);
 end
 
 endmodule