//专门为了拓展出这么个DPI-C文件 让整个core可综合，避免后续要一直屏蔽掉DPI-C功能 太麻烦了
 `include "define.v"

 module ysyx_25060170_DPIC(
	/* verilator lint_off UNUSEDSIGNAL */
	 input  wire							 	clk			//<<i<<
	,input  wire 						 		rst			//<<i<<
	/* verilator lint_on UNUSEDSIGNAL */
 	,input  wire	[`ysyx_25060170_INST]		pc_i		//<<i<<
	,output reg	    [`ysyx_25060170_PC]		 	inst_o		//>>o>>
	//for ftrace
	,input wire     [`ysyx_25060170_PC]			ftrace_pc	//<<i<<
	,input wire 	[`ysyx_25060170_REGADDR] 	rd_addr		//<<i<<
	,input wire 	[`ysyx_25060170_IMM]	 	imm			//<<i<<
	//for difftest
	,input  wire	[`ysyx_25060170_REG]		regs0 		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		regs1 		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		regs2 		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		regs3 		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		regs4 		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		regs5 		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		regs6 		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		regs7 		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		regs8 		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		regs9 		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		regs10		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		regs11		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		regs12		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		regs13		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		regs14		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		regs15		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		regs16		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		regs17		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		regs18		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		regs19		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		regs20		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		regs21		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		regs22		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		regs23		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		regs24		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		regs25		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		regs26		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		regs27		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		regs28		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		regs29		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		regs30		//<<i<<
	,input  wire	[`ysyx_25060170_REG]		regs31		//<<i<<
	,input  wire	[`ysyx_25060170_REG] 		mstatus		//<<i<<
	,input  wire	[`ysyx_25060170_REG] 		mtvec		//<<i<<
	,input  wire	[`ysyx_25060170_REG] 		mepc		//<<i<<
	,input  wire	[`ysyx_25060170_REG] 		mcause		//<<i<<

	//from lsu
	,input wire 								re			//<<i<<
	,input wire 								we			//<<i<<
	,input wire [`ysyx_25060170_DATA] 			data_i		//<<i<<
	,input wire [7:0] 							wlen		//<<i<<
	,input wire [7:0] 							rlen		//<<i<<
	
	//from wbu 表示已经完成一条指令
	,input wire		[`ysyx_25060170_INST]	    wbu_dpic_inst		//<<i<<
	,input wire     [`ysyx_25060170_PC]	        wbu_dpic_pc			//<<i<<
	,input wire     [`ysyx_25060170_PC]        	wbu_dpic_next_pc	//<<i<<
	,input wire     							wbu_dpic_valid		//<<i<<
	/* verilator lint_off UNUSEDSIGNAL */
	,input wire                                	wbu_dpic_id_stall	//<<i<<
	,input wire 								pipeline_id_stall	//<<i<<
	,input wire                                	wbu_dpic_ls_valid	//<<i<<
	/* verilator lint_on UNUSEDSIGNAL */
	//to lsu
	,output reg  [`ysyx_25060170_DATA]     		data_o		//>>o>>
	,input  wire [`ysyx_25060170_DATAADDR] 		raddr		//<<i<<
	,input  wire [`ysyx_25060170_DATAADDR] 		waddr		//<<i<<

	//for dpic difftest pc
	/* verilator lint_off UNUSEDSIGNAL */
	,input  wire [`ysyx_25060170_PC]            ex_ls_reg_DPIC_pc_i	//<<i<< 
	/* verilator lint_on UNUSEDSIGNAL */

	//for magic number
	,input  wire                           		magic_flag	//<<i<<
);

 //--------------------DPI-C----------------------//

import "DPI-C" function void pc_inst_end(input int thepc_data, input int the_inst);

import "DPI-C" function void pmem_read(input int raddr, output int rdata, input byte rlen);

import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wlen);

import "DPI-C" function void set_npc_exit(int pc, int halt_ret);

import "DPI-C" function void magic_instruction();

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

/***********************************use dpic*************************************/

always @(negedge clk) begin
    if (re) begin
        pmem_read(raddr, data_o, rlen);
    end
    if (we) begin
        pmem_write(waddr, data_i, wlen);
    end
end

always @(*) begin
    pmem_read(pc_i,inst_o,rlen);
    
end

//  always @(posedge clk) begin
//    if(rst ==`ysyx_25060170_RSTABLE) begin
//      pc_inst_end(`ysyx_25060170_STARTPC, inst_o);
// 	$strobe("rst dpic pc_i = 0x%08x",pc_i);
// 		 pmem_read(pc_i,inst_o,rlen);
//   	$strobe("rst dpic inst_o = 0x%08x",inst_o);
//    end
//    else begin
// 	 pmem_read(pc_i,inst_o,rlen);
//      pc_inst_end(pc_i, inst_o);
// 	// $display("else pc_i = 0x%08x",pc_i);
//   	// $display("else inst_o = 0x%08x",inst_o);
//    end
//  end

/********************************difftest****************************************/
 always@(*)begin
	// pmem_read(pc_i,inst_o,rlen);
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

always@(*) begin
   difftest_dut_csr(
   	mstatus,
   	mtvec,
   	mepc,
   	mcause
   );
end



/********************************FTRACE****************************************/

wire jal;
wire jalr;

assign jal  	= inst_o[6:0]  == 7'b1101111 ? 1 : 0;
assign jalr 	= inst_o[6:0]  == 7'b1100111 ? 1 : 0;

export "DPI-C" task IDU_SEND_CALL_FLAG;

task IDU_SEND_CALL_FLAG(
    output int call_flag,
    output int pc,
    output int dnpc
);

    call_flag = ((rd_addr == 1 && jal == 1 | jalr == 1 ) || (rd_addr == 0 && imm == 0 && jalr == 1)) ? 1 : 0;
    // $display("rd_addr = 0x%08x", rd_addr);
    // $display("jump_en = %d", jump_en);
    // $display("jalr = %d", PCx1);
    // $display("jal = %d", jal);
    // $display("imm = 0x%08x", imm);
    // $display("PCx1 = %d", PCx1);
    dnpc =  ftrace_pc + imm;

endtask

export "DPI-C" task IDU_SEND_RET_FLAG;

task IDU_SEND_RET_FLAG(
    output int ret_flag,
    output int pc
);

    ret_flag = inst_o == 32'h00008067 ? 1 : 0;
    //pc  = pc_i;
    pc = jalr ? {pc_i[31:1],1'b0} : pc_i ;

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
// 	  	// $display("pc_i = 0x%08x",pc_i);
//   		// $display("inst_o = 0x%08x",inst_o);
// 	if(inst_o == `EBREAK_TRAP)begin
//   		set_npc_exit(pc_i,0);
//   	end
// 	else if(magic_flag) begin
// 		magic_instruction();
//   		//set_npc_exit(pc_i,1);

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

	always @(posedge clk) begin
		// if(~wbu_dpic_id_stall & ~wbu_dpic_ls_valid) begin
		// if(~wbu_dpic_ls_valid && ~delay_pipeline_id_stall) begin
		if(~wbu_dpic_valid) begin	
			// $display("inst = 0x%08x",inst_o);
			// $display("pc_i = 0x%08x",pc_i);
			// $display("pc_finish = 0x%08x",wbu_dpic_pc);
			// $display("inst_finish = 0x%08x",wbu_dpic_inst);
			pc_inst_end(wbu_dpic_next_pc, wbu_dpic_inst);
		end
		// if(delay) begin
		// 	// $display("pc_inst_end2/n");
		// 	pc_inst_end(last_pc, wbu_dpic_inst);
		// end
		if(wbu_dpic_inst == `EBREAK_TRAP) begin //32'b00000000000100000000000001110011
			// $display("jinlailo/n");
			set_npc_exit(wbu_dpic_pc,0);
		end
		if(magic_flag) begin
			magic_instruction();
		end
		// $display("delay = %d",delay);
end


 endmodule

