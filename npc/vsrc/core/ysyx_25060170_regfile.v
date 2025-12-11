`include "define.v"

module ysyx_25060170_regfile (
     input   wire             					 clk   		//>>i>>
    ,input   wire             					 rst   		//>>i>>
    ,input   wire   [`ysyx_25060170_REGADDR]     waddr 		//>>i>>
    ,input   wire   [`ysyx_25060170_REG]    	 wdata 		//>>i>>
    ,input   wire             				     wen   		//>>i>>
	,input	 wire             					 ren1  		//>>i>>
	,input	 wire             					 ren2  		//>>i>>
	,input   wire   [`ysyx_25060170_REGADDR]	 raddr1		//>>i>>
	,input   wire   [`ysyx_25060170_REGADDR]	 raddr2		//>>i>>
	,output	 wire   [`ysyx_25060170_REG]	  	 rdata1		//<<o<<
	,output	 wire   [`ysyx_25060170_REG]	  	 rdata2		//<<o<<

	//to dpi-c for difftest
	,output  wire	[`ysyx_25060170_REG]		 regs0_zero 		//<<o<<
	,output  wire	[`ysyx_25060170_REG]		 regs1_ra   		//<<o<<
	,output  wire	[`ysyx_25060170_REG]		 regs2_sp   		//<<o<<
	,output  wire	[`ysyx_25060170_REG]		 regs3_gp   		//<<o<<
	,output  wire	[`ysyx_25060170_REG]		 regs4_tp   		//<<o<<
	,output  wire	[`ysyx_25060170_REG]		 regs5_t0   		//<<o<<
	,output  wire	[`ysyx_25060170_REG]		 regs6_t1   		//<<o<<
	,output  wire	[`ysyx_25060170_REG]		 regs7_t2   		//<<o<<
	,output  wire	[`ysyx_25060170_REG]		 regs8_s0   		//<<o<<
	,output  wire	[`ysyx_25060170_REG]		 regs9_s1   		//<<o<<
	,output  wire	[`ysyx_25060170_REG]		 regs10_a0  		//<<o<<
	,output  wire	[`ysyx_25060170_REG]		 regs11_a1  		//<<o<<
	,output  wire	[`ysyx_25060170_REG]		 regs12_a2  		//<<o<<
	,output  wire	[`ysyx_25060170_REG]		 regs13_a3  		//<<o<<
	,output  wire	[`ysyx_25060170_REG]		 regs14_a4  		//<<o<<
	,output  wire	[`ysyx_25060170_REG]		 regs15_a5  		//<<o<<
	,output  wire	[`ysyx_25060170_REG]		 regs16_a6  		//<<o<<
	,output  wire	[`ysyx_25060170_REG]		 regs17_a7  		//<<o<<
	,output  wire	[`ysyx_25060170_REG]		 regs18_s2  		//<<o<<
	,output  wire	[`ysyx_25060170_REG]		 regs19_s3  		//<<o<<
	,output  wire	[`ysyx_25060170_REG]		 regs20_s4  		//<<o<<
	,output  wire	[`ysyx_25060170_REG]		 regs21_s5  		//<<o<<
	,output  wire	[`ysyx_25060170_REG]		 regs22_s6  		//<<o<<
	,output  wire	[`ysyx_25060170_REG]		 regs23_s7  		//<<o<<
	,output  wire	[`ysyx_25060170_REG]		 regs24_t3  		//<<o<<
	,output  wire	[`ysyx_25060170_REG]		 regs25_t4  		//<<o<<
	,output  wire	[`ysyx_25060170_REG]		 regs26_t5  		//<<o<<
	,output  wire	[`ysyx_25060170_REG]		 regs27_t6  		//<<o<<
	,output  wire	[`ysyx_25060170_REG]		 regs28_t3  		//<<o<<
	,output  wire	[`ysyx_25060170_REG]		 regs29_t4  		//<<o<<
	,output  wire	[`ysyx_25060170_REG]		 regs30_t5  		//<<o<<
	,output  wire	[`ysyx_25060170_REG]		 regs31_t6  		//<<o<<
	//bpu jalr获取rs1操作
	,input   wire   [`ysyx_25060170_REGADDR]     bp_rs1_addr_i//<<i<<
	,input   wire   							 bp_rs1_ena_i//<<i<<
	,output  wire   [`ysyx_25060170_REG]		 bp_rs1_data_o//>>o>>
);

//***********************************bpu jalr获取rs1*************************************//

assign bp_rs1_data_o = ((rst != `ysyx_25060170_RSTABLE) && ( bp_rs1_ena_i== `ysyx_25060170_RENABLE)) ? regs[bp_rs1_addr_i] : `ysyx_25060170_ZERO32;
 

//***********************************寄存器堆操作****************************************//
    reg [`ysyx_25060170_REG] regs [0:31];
 
 always@(posedge clk) begin
	 if(rst == `ysyx_25060170_RSTABLE) begin
		regs[0] <= `ysyx_25060170_ZERO32; 
 		regs[1] <= `ysyx_25060170_ZERO32; 
 		regs[2] <= `ysyx_25060170_ZERO32; 
 		regs[3] <= `ysyx_25060170_ZERO32; 
 		regs[4] <= `ysyx_25060170_ZERO32; 
 		regs[5] <= `ysyx_25060170_ZERO32; 
 		regs[6] <= `ysyx_25060170_ZERO32; 
 		regs[7] <= `ysyx_25060170_ZERO32; 
 		regs[8] <= `ysyx_25060170_ZERO32; 
 		regs[9] <= `ysyx_25060170_ZERO32; 
 		regs[10] <= `ysyx_25060170_ZERO32; 
 		regs[11] <= `ysyx_25060170_ZERO32; 
 		regs[12] <= `ysyx_25060170_ZERO32; 
 		regs[13] <= `ysyx_25060170_ZERO32; 
 		regs[14] <= `ysyx_25060170_ZERO32; 
 		regs[15] <= `ysyx_25060170_ZERO32; 
 		regs[16] <= `ysyx_25060170_ZERO32; 
 		regs[17] <= `ysyx_25060170_ZERO32; 
 		regs[18] <= `ysyx_25060170_ZERO32; 
 		regs[19] <= `ysyx_25060170_ZERO32; 
 		regs[20] <= `ysyx_25060170_ZERO32; 
 		regs[21] <= `ysyx_25060170_ZERO32; 
 		regs[22] <= `ysyx_25060170_ZERO32; 
 		regs[23] <= `ysyx_25060170_ZERO32; 
 		regs[24] <= `ysyx_25060170_ZERO32; 
 		regs[25] <= `ysyx_25060170_ZERO32; 
 		regs[26] <= `ysyx_25060170_ZERO32; 
 		regs[27] <= `ysyx_25060170_ZERO32; 
 		regs[28] <= `ysyx_25060170_ZERO32; 
 		regs[29] <= `ysyx_25060170_ZERO32; 
 		regs[30] <= `ysyx_25060170_ZERO32; 
 		regs[31] <= `ysyx_25060170_ZERO32;
	 end
   else begin
		 if(wen == `ysyx_25060170_WENABLE && waddr != 5'd0)begin
			 regs[waddr]<=wdata;
		 end
	 end
 end

 assign rdata1 = ((rst != `ysyx_25060170_RSTABLE) && (ren1 == `ysyx_25060170_RENABLE)) ? regs[raddr1] : `ysyx_25060170_ZERO32;
 assign rdata2 = ((rst != `ysyx_25060170_RSTABLE) && (ren2 == `ysyx_25060170_RENABLE)) ? regs[raddr2] : `ysyx_25060170_ZERO32;

assign regs0_zero  = regs[0] ;
assign regs1_ra    = regs[1] ;
assign regs2_sp    = regs[2] ;
assign regs3_gp    = regs[3] ;
assign regs4_tp    = regs[4] ;
assign regs5_t0    = regs[5] ;
assign regs6_t1    = regs[6] ;
assign regs7_t2    = regs[7] ;
assign regs8_s0    = regs[8] ;
assign regs9_s1    = regs[9] ;
assign regs10_a0   = regs[10];
assign regs11_a1   = regs[11];
assign regs12_a2   = regs[12];
assign regs13_a3   = regs[13];
assign regs14_a4   = regs[14];
assign regs15_a5   = regs[15];
assign regs16_a6   = regs[16];
assign regs17_a7   = regs[17];
assign regs18_s2   = regs[18];
assign regs19_s3   = regs[19];
assign regs20_s4   = regs[20];
assign regs21_s5   = regs[21];
assign regs22_s6   = regs[22];
assign regs23_s7   = regs[23];
assign regs24_t3   = regs[24];
assign regs25_t4   = regs[25];
assign regs26_t5   = regs[26];
assign regs27_t6   = regs[27];
assign regs28_t3   = regs[28];
assign regs29_t4   = regs[29];
assign regs30_t5   = regs[30];
assign regs31_t6   = regs[31];

 endmodule


