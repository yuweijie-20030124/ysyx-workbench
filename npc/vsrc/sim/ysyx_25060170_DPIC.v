//专门为了拓展出这么个DPI-C文件 让整个core可综合，避免后续要一直屏蔽掉DPI-C功能 太麻烦了
 `include "define.v"

 module ysyx_25060170_DPIC(
	/* verilator lint_off UNUSEDSIGNAL */
	 input  wire							 	clk			//<<i<<
	,input  wire 						 		rst			//<<i<<
	/* verilator lint_on UNUSEDSIGNAL */
 	,input  wire	[`ysyx_25060170_PC]			DPIC_pc_i		//<<i<<
	,output reg     [`ysyx_25060170_INST]	 	DPIC_inst_o		//>>o>>
	//for ftrace
	,input wire     [`ysyx_25060170_PC]			DPIC_ftrace_pc	//<<i<<
	,input wire 	[`ysyx_25060170_REGADDR] 	DPIC_rd_addr		//<<i<<
	,input wire 	[`ysyx_25060170_IMM]	 	DPIC_imm			//<<i<<
	//for difftest
	,input  wire	[`ysyx_25060170_REG]		DPIC_regs0 		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		DPIC_regs1 		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		DPIC_regs2 		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		DPIC_regs3 		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		DPIC_regs4 		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		DPIC_regs5 		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		DPIC_regs6 		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		DPIC_regs7 		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		DPIC_regs8 		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		DPIC_regs9 		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		DPIC_regs10		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		DPIC_regs11		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		DPIC_regs12		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		DPIC_regs13		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		DPIC_regs14		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		DPIC_regs15		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		DPIC_regs16		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		DPIC_regs17		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		DPIC_regs18		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		DPIC_regs19		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		DPIC_regs20		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		DPIC_regs21		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		DPIC_regs22		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		DPIC_regs23		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		DPIC_regs24		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		DPIC_regs25		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		DPIC_regs26		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		DPIC_regs27		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		DPIC_regs28		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		DPIC_regs29		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		DPIC_regs30		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		DPIC_regs31		//<<i<<
	,input  wire	[`ysyx_25060170_REG] 		DPIC_mstatus		//<<i<<
	,input  wire	[`ysyx_25060170_REG] 		DPIC_mtvec		//<<i<<
	,input  wire	[`ysyx_25060170_REG] 		DPIC_mepc		//<<i<<
	,input  wire	[`ysyx_25060170_REG] 		DPIC_mcause		//<<i<<
	,input  wire	[`ysyx_25060170_REG] 		DPIC_mhartid		//<<i<<
	,input  wire	[`ysyx_25060170_REG] 		DPIC_mscratch	//<<i<<


	//from wbu 表示已经完成一条指令
	,input wire     [`ysyx_25060170_DATA]		DPIC_wbu_DPIC_difftest_skip_flag //<<i<<
	,input wire		[`ysyx_25060170_INST]	    DPIC_wbu_dpic_inst		//<<i<<
	,input wire     [`ysyx_25060170_PC]	        DPIC_wbu_dpic_pc			//<<i<<
	,input wire     [`ysyx_25060170_PC]        	DPIC_wbu_dpic_next_pc	//<<i<<
	,input wire     							DPIC_wbu_dpic_valid		//<<i<<

	//from lsu
	/* verilator lint_off UNUSEDSIGNAL */
	,input wire 								DPIC_re			//<<i<<
	,input wire 								DPIC_we			//<<i<<
	/* verilator lint_on UNUSEDSIGNAL */
	,input wire 	[`ysyx_25060170_DATA] 		DPIC_data_i		//<<i<<
	,input wire 	[7:0] 						DPIC_wlen		//<<i<<
	,input wire 	[7:0] 						DPIC_rlen		//<<i<<
	,output reg 	[`ysyx_25060170_DATA]		DPIC_dpic_difftest_skip_flag//>>o>>
	
	//to lsu
	,output reg   [`ysyx_25060170_DATA]     		DPIC_data_o		//>>o>>
	,input  wire  [`ysyx_25060170_DATAADDR] 		DPIC_raddr		//<<i<<
	,input  wire  [`ysyx_25060170_DATAADDR] 		DPIC_waddr		//<<i<<

 	//for magic number
	,input  wire                           		DPIC_magic_flag	//<<i<<
);

 //--------------------DPI-C----------------------//

import "DPI-C" function void pc_inst_end(input int thepc_data, input int the_inst, input int diff_skip_flag);

import "DPI-C" function void pmem_read(input int raddr, output int rdata, input byte rlen, input int mode, output int dpic_difftest_skip_flag);

import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wlen, output int dpic_difftest_skip_flag);

import "DPI-C" function void set_npc_exit(int pc, int halt_ret);

import "DPI-C" function void magic_instruction();

import "DPI-C" function void difftest_dut_csr(
	input int csr_mstatus,
	input int csr_mtvec,
	input int csr_mepc,
	input int csr_mcause,
	input int csr_mhartid,	
	input int csr_mscratch
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

/***********************************use dpic*************************************/

reg	    [`ysyx_25060170_INST]	 	DPIC_inst_reg;

always @(posedge clk) begin
	// delay_count <=
	DPIC_inst_o <= DPIC_inst_reg;
end
always@(*)begin
	pmem_read(DPIC_pc_i,DPIC_inst_reg,DPIC_rlen,dpic_fetch,DPIC_dpic_difftest_skip_flag);
	// delay_value
end
wire [31:0] dpic_loadread = 32'd2;
//DPIC最好用组合逻辑
//用时序逻辑的话可能会导致赋值顺序的问题
// always @(posedge clk) begin
// always @(posedge clk) begin
//     if (re) begin
//         pmem_read(raddr, data_o, rlen, dpic_loadread);
//     end
//     if (we) begin
//         pmem_write(waddr, data_i, wlen);
//     end
// end

// always @(*) begin
// 	pmem_read(raddr, data_o, rlen, dpic_loadread);
// end

reg [`ysyx_25060170_DATA]	mem_data;//for delay
// reg [`ysyx_25060170_DATA]	dpic_difftest_skip_flag;
//读改成组合逻辑，写时序
//取指，从pc_i中获取inst_o
wire [31:0] dpic_fetch = 32'd1;

//dpic同一时钟周期多读几次没啥关系
always @(*) begin
	//mem访存读
	if(DPIC_re) begin
	pmem_read(DPIC_raddr, mem_data, DPIC_rlen, dpic_loadread,DPIC_dpic_difftest_skip_flag);	
	end
	else begin
	mem_data 					 = 0;
	DPIC_dpic_difftest_skip_flag = 0;
	end
end

// reg [`ysyx_25060170_INST] DPIC_inst;

//********************************************lfsr随机数生成器**********************************//
reg [15:0] delay_value;	//具体随机的访存延时 可能 5 10 20
reg [15:0] delay_count; 
ysyx_25060170_lfsr u_ysyx_25060170_lfsr(
	 .clk			(clk)
	,.rst			(rst)
	,.en			(1'b1)
	,.delay_value	(delay_value)
);

// always @(posedge clk) begin
// 	DPIC_inst_o <= DPIC_inst;
// end

always @(posedge clk) begin
	if(DPIC_we) begin
	pmem_write(DPIC_waddr, DPIC_data_i, DPIC_wlen,DPIC_dpic_difftest_skip_flag);
	end
end

always@(posedge clk) begin
	DPIC_data_o <= mem_data ;
end

//  always @(posedge clk) begin
//    if(rst ==`ysyx_25060170_RSTABLE) begin
//      pc_inst_end(`ysyx_25060170_STARTPC, DPIC_inst_o);
// 	$strobe("rst dpic DPIC_pc_i = 0x%08x",DPIC_pc_i);
// 		 pmem_read(DPIC_pc_i,DPIC_inst_o,rlen);
//   	$strobe("rst dpic DPIC_inst_o = 0x%08x",DPIC_inst_o);
//    end
//    else begin
// 	 pmem_read(DPIC_pc_i,DPIC_inst_o,rlen);
//      pc_inst_end(DPIC_pc_i, DPIC_inst_o);
// 	// $display("else DPIC_pc_i = 0x%08x",DPIC_pc_i);
//   	// $display("else DPIC_inst_o = 0x%08x",DPIC_inst_o);
//    end
//  end

/********************************difftest****************************************/
 always@(*)begin
	// pmem_read(DPIC_pc_i,DPIC_inst_o,rlen);
 	difftest_dut_regs(
 		DPIC_regs0 ,
 		DPIC_regs1 ,
 		DPIC_regs2 ,
 		DPIC_regs3 ,
 		DPIC_regs4 ,
 		DPIC_regs5 ,
 		DPIC_regs6 ,
 		DPIC_regs7 ,
 		DPIC_regs8 ,
 		DPIC_regs9 ,
 		DPIC_regs10,
 		DPIC_regs11,
 		DPIC_regs12,
 		DPIC_regs13,
 		DPIC_regs14,
 		DPIC_regs15,
 		DPIC_regs16,
 		DPIC_regs17,
 		DPIC_regs18,
 		DPIC_regs19,
 		DPIC_regs20,
 		DPIC_regs21,
 		DPIC_regs22,
 		DPIC_regs23,
 		DPIC_regs24,
 		DPIC_regs25,
 		DPIC_regs26,
 		DPIC_regs27,
 		DPIC_regs28,
 		DPIC_regs29,
 		DPIC_regs30,
 		DPIC_regs31
 	);
 end

always@(*) begin
   difftest_dut_csr(
   	DPIC_mstatus,
   	DPIC_mtvec,
   	DPIC_mepc,
   	DPIC_mcause,
	DPIC_mhartid,	
	DPIC_mscratch
   );
end



/********************************FTRACE****************************************/

wire jal;
wire jalr;

assign jal  	= DPIC_inst_o[6:0]  == 7'b1101111 ? 1 : 0;
assign jalr 	= DPIC_inst_o[6:0]  == 7'b1100111 ? 1 : 0;

export "DPI-C" task IDU_SEND_CALL_FLAG;

task IDU_SEND_CALL_FLAG(
    output int call_flag,
    output int pc,
    output int dnpc
);

    call_flag = ((DPIC_rd_addr == 1 && jal == 1 | jalr == 1 ) || (DPIC_rd_addr == 0 && DPIC_imm == 0 && jalr == 1)) ? 1 : 0;
    // $display("DPIC_rd_addr = 0x%08x", DPIC_rd_addr);
    // $display("jump_en = %d", jump_en);
    // $display("jalr = %d", PCx1);
    // $display("jal = %d", jal);
    // $display("DPIC_imm = 0x%08x", DPIC_imm);
    // $display("PCx1 = %d", PCx1);
    dnpc =  DPIC_ftrace_pc + DPIC_imm;

endtask

export "DPI-C" task IDU_SEND_RET_FLAG;

task IDU_SEND_RET_FLAG(
    output int ret_flag,
    output int pc,
);

    ret_flag = DPIC_inst_o == 32'h00008067 ? 1 : 0;
    //pc  = DPIC_pc_i;
    pc = jalr ? {DPIC_pc_i[31:1],1'b0} : DPIC_pc_i ;
endtask

// reg [999:0] count;
// reg [999:0] countcount;
// always @(posedge clk) begin
//         if (rst == `ysyx_25060170_RSTABLE) begin
//             count <= 1000'd0;
// 			countcount <= 1000'd0;
//         end else begin
//             count <= count + 1;
//             if (count == 100000) begin
//                 count <= 0;
// 				countcount <= countcount + 1;
//                 $display("output 10000 inst");
// 				$display("has gone %d times",countcount);
//             end
//         end
//     end
/***********************************ebreak*************************************/


// always@(*) begin
// 	  	// $display("DPIC_pc_i = 0x%08x",DPIC_pc_i);
//   		// $display("DPIC_inst_o = 0x%08x",DPIC_inst_o);
// 	if(DPIC_inst_o == `EBREAK_TRAP)begin
//   		set_npc_exit(DPIC_pc_i,0);
//   	end
// 	else if(magic_flag) begin
// 		magic_instruction();
//   		//set_npc_exit(DPIC_pc_i,1);

//   	end
//   end

/*************************************finish inst & ebreak***********************************/
// reg delay;
// reg [`ysyx_25060170_PC] last_pc;

// always @(posedge clk) begin
// 	if (rst == `ysyx_25060170_RSTABLE) begin
// 		delay <= 1'b0;
// 		last_pc <= `ysyx_25060170_ZERO32;
// 	end
// 	else begin
// 		if (rst) begin
// 			last_pc <= 32'b0;
// 			delay <= 1'b0;
// 		end
// 		else if (wbu_dpic_id_stall & ~wbu_dpic_ls_valid) begin
// 			delay <= 1'b1;
// 			last_pc <= wbu_dpic_pc;
// 		end
// 		else begin
// 			last_pc <= 32'b0;
// 			delay <= 0;
// 		end
// 	end
// end

// reg delay_pipeline_id_stall;
// always@(posedge clk)begin
// 	if(pipeline_id_stall) begin
// 		delay_pipeline_id_stall <= pipeline_id_stall;
// 	end
// 	else begin
// 		delay_pipeline_id_stall <= 0;
// 	end
// end

// export "DPI-C" task difftest_skip_ref;

	//提交并不包含写，用时序应该没问题。
	always @(posedge clk) begin
		// if(~wbu_dpic_id_stall & ~wbu_dpic_ls_valid) begin
		// if(~wbu_dpic_ls_valid && ~delay_pipeline_id_stall) begin
		if(~DPIC_wbu_dpic_valid) begin	
			// $display("inst = 0x%08x",DPIC_inst_o);
			// $display("DPIC_pc_i = 0x%08x",DPIC_pc_i);
			// $display("pc_finish = 0x%08x",wbu_dpic_pc);
			// $display("inst_finish = 0x%08x",wbu_dpic_inst);
			pc_inst_end(DPIC_wbu_dpic_next_pc, DPIC_wbu_dpic_inst, DPIC_wbu_DPIC_difftest_skip_flag);
			// difftest_skip_ref();
		end
		// if(delay) begin
		// 	// $display("pc_inst_end2/n");
		// 	pc_inst_end(last_pc, wbu_dpic_inst);
		// end
		if(DPIC_wbu_dpic_inst == `EBREAK_TRAP) begin //32'b00000000000100000000000001110011
			// $display("jinlailo/n");
			set_npc_exit(DPIC_wbu_dpic_pc,0);
		end
		if(DPIC_magic_flag) begin
			magic_instruction();
		end
		// $display("delay = %d",delay);
end


// memory AXI4-Lite 1.send instructions to ifu 2.data transactions with idu
// 还要带仲裁器 从IFU和LSU中选择一个master与存储器通信，按理来说优先级LSU > IFU
//**************************************带仲裁器的AXI4-Lite存储器******************************************//
ysyx_25060170_memory u_ysyx_25060170_memory(

);

 endmodule

