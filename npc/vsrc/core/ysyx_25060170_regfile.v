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

);

//***********************************寄存器堆操作****************************************//
    reg [`ysyx_25060170_REG] regs [0:31];
 
 always@(posedge clk) begin
	 if(rst == `ysyx_25060170_RSTABLE) begin
		regs[0]  <= `ysyx_25060170_ZERO32; 
 		regs[1]  <= `ysyx_25060170_ZERO32; 
 		regs[2]  <= `ysyx_25060170_ZERO32; 
 		regs[3]  <= `ysyx_25060170_ZERO32; 
 		regs[4]  <= `ysyx_25060170_ZERO32; 
 		regs[5]  <= `ysyx_25060170_ZERO32; 
 		regs[6]  <= `ysyx_25060170_ZERO32; 
 		regs[7]  <= `ysyx_25060170_ZERO32; 
 		regs[8]  <= `ysyx_25060170_ZERO32; 
 		regs[9]  <= `ysyx_25060170_ZERO32; 
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


 endmodule


