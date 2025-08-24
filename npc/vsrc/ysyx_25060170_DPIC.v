//专门为了拓展出这么个DPI-C文件 让整个core可综合，避免后续要一直屏蔽掉DPI-C功能 太麻烦了
 `include "define.v"

 module ysyx_25060170_DPIC(
	input  wire	clk,

 	input  wire	[`ysyx_25060170_INST]	pc_i,
	input  wire	[`ysyx_25060170_REG]	regs0 ,
	input  wire	[`ysyx_25060170_REG]	regs1 ,
	input  wire	[`ysyx_25060170_REG]	regs2 ,
	input  wire	[`ysyx_25060170_REG]	regs3 ,
	input  wire	[`ysyx_25060170_REG]	regs4 ,
	input  wire	[`ysyx_25060170_REG]	regs5 ,
	input  wire	[`ysyx_25060170_REG]	regs6 ,
	input  wire	[`ysyx_25060170_REG]	regs7 ,
	input  wire	[`ysyx_25060170_REG]	regs8 ,
	input  wire	[`ysyx_25060170_REG]	regs9 ,
	input  wire	[`ysyx_25060170_REG]	regs10,
	input  wire	[`ysyx_25060170_REG]	regs11,
	input  wire	[`ysyx_25060170_REG]	regs12,
	input  wire	[`ysyx_25060170_REG]	regs13,
	input  wire	[`ysyx_25060170_REG]	regs14,
	input  wire	[`ysyx_25060170_REG]	regs15,
	input  wire	[`ysyx_25060170_REG]	regs16,
	input  wire	[`ysyx_25060170_REG]	regs17,
	input  wire	[`ysyx_25060170_REG]	regs18,
	input  wire	[`ysyx_25060170_REG]	regs19,
	input  wire	[`ysyx_25060170_REG]	regs20,
	input  wire	[`ysyx_25060170_REG]	regs21,
	input  wire	[`ysyx_25060170_REG]	regs22,
	input  wire	[`ysyx_25060170_REG]	regs23,
	input  wire	[`ysyx_25060170_REG]	regs24,
	input  wire	[`ysyx_25060170_REG]	regs25,
	input  wire	[`ysyx_25060170_REG]	regs26,
	input  wire	[`ysyx_25060170_REG]	regs27,
	input  wire	[`ysyx_25060170_REG]	regs28,
	input  wire	[`ysyx_25060170_REG]	regs29,
	input  wire	[`ysyx_25060170_REG]	regs30,
	input  wire	[`ysyx_25060170_REG]	regs31,
	input  wire	[`ysyx_25060170_REG] 	mstatus,
	input  wire	[`ysyx_25060170_REG] 	mtvec,
	input  wire	[`ysyx_25060170_REG] 	mepc,
	input  wire	[`ysyx_25060170_REG] 	mcause,
	
	output reg	[`ysyx_25060170_PC]		inst_o
);

 //--------------------DPI-C----------------------//
import "DPI-C" function void pmem_read(input int raddr, output int rdata, input int rlen);

import "DPI-C" function void set_npc_exit(int pc, int halt_ret);

import "DPI-C" function void difftest_dut_csr(
	input int csr_mstatus,
	input int csr_mtvec,
	input int csr_mepc,
	input int csr_mcause
);

import "DPI-C" function void difftest_dut_regs(
 	input int regs0  ,
 	input int regs1  ,
 	input int regs2  ,
 	input int regs3  ,
 	input int regs4  ,
 	input int regs5  ,
 	input int regs6  ,
 	input int regs7  ,
 	input int regs8  ,
 	input int regs9  ,
 	input int regs10 ,
 	input int regs11 ,
 	input int regs12 ,
 	input int regs13 ,
 	input int regs14 ,
 	input int regs15 ,
 	input int regs16 ,
 	input int regs17 ,
 	input int regs18 ,
 	input int regs19 ,
 	input int regs20 ,
 	input int regs21 ,
 	input int regs22 ,
 	input int regs23 ,
 	input int regs24 ,
 	input int regs25 ,
 	input int regs26 ,
 	input int regs27 ,
    input int regs28 ,
 	input int regs29 ,
 	input int regs30 ,
 	input int regs31 
 );

wire ebreak_ena;

assign ebreak_ena = inst_o == `EBREAK_TRAP ? 1'b1 : 1'b0;
 
 always@(posedge clk)begin
 	difftest_dut_regs(
 		regs0  ,
 		regs1  ,
 		regs2  ,
 		regs3  ,
 		regs4  ,
 		regs5  ,
 		regs6  ,
 		regs7  ,
 		regs8  ,
 		regs9  ,
 		regs10,
 		regs11,
 		regs12,
 		regs13,
 		regs14,
 		regs15,
 		regs16,
 		regs17,
 		regs18,
 		regs19,
 		regs20,
 		regs21,
 		regs22,
 		regs23,
 		regs24,
 		regs25,
 		regs26,
 		regs27,
 		regs28,
 		regs29,
 		regs30,
 		regs31
 	);
 end


reg [31:0] rlen = 32'd4;
always @(posedge clk) begin
    pmem_read(pc_i,inst_o,rlen);
end

always@(ebreak_ena == 1) begin
  set_npc_exit(pc_i,-1);
  end

always@(*) begin
   difftest_dut_csr(
   	mstatus,
   	mtvec,
   	mepc,
   	mcause
   );
end

 endmodule
