//专门为了拓展出这么个DPI-C文件 让整个core可综合，避免后续要一直屏蔽掉DPI-C功能 太麻烦了
 `include "define.v"

 module ysyx_25060170_DPIC(
	input  wire	clk,
	input  wire	rst,

 	input  wire	[`ysyx_25060170_INST]	pc_i,
	input  wire	[`ysyx_25060170_REG]	regs0,
	input  wire	[`ysyx_25060170_REG]	regs1,
	input  wire	[`ysyx_25060170_REG]	regs2,
	input  wire	[`ysyx_25060170_REG]	regs3,
	input  wire	[`ysyx_25060170_REG]	regs4,
	input  wire	[`ysyx_25060170_REG]	regs5,
	input  wire	[`ysyx_25060170_REG]	regs6,
	input  wire	[`ysyx_25060170_REG]	regs7,
	input  wire	[`ysyx_25060170_REG]	regs8,
	input  wire	[`ysyx_25060170_REG]	regs9,
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
	input  wire	[`ysyx_25060170_REG]	regs32,
	
	output wire	[`ysyx_25060170_PC]		inst_o,
);

 //--------------------DPI-C----------------------//

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

import "DPI-C" function void pmem_read(input int raddr, output int rdata, input byte rlen);
reg [7:0] rlen = 8'd4;
reg [31:0] rinst;
always @(posedge clk) begin
    pmem_read(pc_next,rinst,rlen);
end

import "DPI-C" function void pc_inst_end(input longint thepc_data, input bit[31:0] the_inst);

 always @(posedge clk) begin
   if(rst ==`ysyx_25060170_RSTABLE) begin
     pc_inst_end(`ysyx_25060170_STARTPC, inst_o);
   end
   else begin
     pc_inst_end(pc_o, inst_o);
   end
 end

 import "DPI-C" function void ebreak (input bit ebreak_ena);
 
always@(*) begin
  ebreak(inst_ebreak);
  end

wire _unused_ok = &{opcode[1:0],funct7[6],funct7[4:1]};

import "DPI-C" function void difftest_dut_csr(
	input longint csr_mstatus,
	input longint csr_mtvec,
	input longint csr_mepc,
	input longint csr_mcause
);

always@(*) begin
   difftest_dut_csr(
   	mstatus,
   	mtvec,
   	mepc,
   	mcause
   );
end

 endmodule
