//专门为了拓展出这么个DPI-C文件 让整个core可综合，避免后续要一直屏蔽掉DPI-C功能 太麻烦了
 `include "define.v"

 module ysyx_25060170_DPIC(
	input  wire	clk,
	input  wire	rst,

	input  wire	ls_valid,
	input  wire	id_stall,
 	input  wire	[`ysyx_25060170_INST]	pc_i,
	output wire	[`ysyx_25060170_PC]		inst_o
);

 //--------------------DPI-C----------------------//

import "DPI-C" function void pc_inst_end(input int thepc_data, input int the_inst);

import "DPI-C" function void ebreak (input bit ebreak_ena);

import "DPI-C" function void pmem_read(input int raddr, output int rdata, input int rlen);

 import "DPI-C" function void difftest_dut_regs(
 	input int Z0 ,
 	input int ra ,
 	input int sp ,
 	input int gp ,
 	input int tp ,
 	input int t0 ,
 	input int t1 ,
 	input int t2 ,
 	input int fp ,
 	input int s1 ,
 	input int a0 ,
 	input int a1 ,
 	input int a2 ,
 	input int a3 ,
 	input int a4 ,
 	input int a5 ,
 	input int a6 ,
 	input int a7 ,
 	input int s2 ,
 	input int s3 ,
 	input int s4 ,
 	input int s5 ,
 	input int s6 ,
 	input int s7 ,
 	input int s8 ,
 	input int s9 ,
 	input int s10 ,
 	input int a11 ,
    input int t3 ,
 	input int t4 ,
 	input int t5 ,
 	input int t6 
 );
 
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

assign ebreak_ena = inst_o == `EBREAK_TRAP ? 1'b1 : 1'b0;

 always @(posedge clk) begin
   if(~ls_valid & ~id_stall) begin
   	pc_inst_end(pc_i, inst_o);
   end
   if(delay) begin
   pc_inst_end(pc_delay, inst_o);
   end
   ebreak(ebreak_ena);
 end
 
reg [7:0] rlen = 8'd4;
reg [31:0] rinst;
always @(posedge clk) begin
    pmem_read(pc_i,inst_o,rlen);
end



 always@(posedge clk)begin
 	difftest_dut_regs(
 		regs[0],
 		regs[1],
 		regs[2],
 		regs[3],
 		regs[4],
 		regs[5],
 		regs[6],
 		regs[7],
 		regs[8],
 		regs[9],
 		regs[10],
 		regs[11],
 		regs[12],
 		regs[13],
 		regs[14],
 		regs[15],
 		regs[16],
 		regs[17],
 		regs[18],
 		regs[19],
 		regs[20],
 		regs[21],
 		regs[22],
 		regs[23],
 		regs[24],
 		regs[25],
 		regs[26],
 		regs[27],
 		regs[28],
 		regs[29],
 		regs[30],
 		regs[31]
 	);
 end

 endmodule
