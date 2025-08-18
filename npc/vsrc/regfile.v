`include "Reg.v"

module ysyx_25060170_regfile (
    input    wire             clk   ,
    input    wire             rst   ,

    input    wire   [4:0]     waddr ,
    input    wire   [31:0]    wdata ,
    input    wire             wen   ,
   
	input    wire   [4:0]	  raddr1,
	output	 wire   [31:0]	  rdata1,
	input	 wire             ren1  ,

	input    wire   [4:0]	  raddr2,
	output	 wire   [31:0]	  rdata2,
	input	 wire             ren2  
);
 
    reg[31:0] regs [0:31];

     always@(posedge clk) begin
	 if(rst) begin
		regs[0]  <=  0  ;
 		regs[1]  <=  0  ;
 		regs[2]  <=  0  ;
 		regs[3]  <=  0  ;
 		regs[4]  <=  0  ;
 		regs[5]  <=  0  ;
 		regs[6]  <=  0  ;
 		regs[7]  <=  0  ;
 		regs[8]  <=  0  ;
 		regs[9]  <=  0  ;
 		regs[10] <=  0  ; 
 		regs[11] <=  0  ; 
 		regs[12] <=  0  ; 
 		regs[13] <=  0  ; 
 		regs[14] <=  0  ; 
 		regs[15] <=  0  ; 
 		regs[16] <=  0  ; 
 		regs[17] <=  0  ; 
 		regs[18] <=  0  ; 
 		regs[19] <=  0  ; 
 		regs[20] <=  0  ; 
 		regs[21] <=  0  ; 
 		regs[22] <=  0  ; 
 		regs[23] <=  0  ; 
 		regs[24] <=  0  ; 
 		regs[25] <=  0  ; 
 		regs[26] <=  0  ; 
 		regs[27] <=  0  ; 
 		regs[28] <=  0  ; 
 		regs[29] <=  0  ; 
 		regs[30] <=  0  ; 
 		regs[31] <=  0  ;
	 end 
    else begin
		 if(wen == 1 && waddr != 5'd0)begin //0号寄存器不写
			 regs[waddr] <= wdata;
		 end
	 end
 end

 assign rdata1 = ((!rst) && (ren1)) ? regs[raddr1] : 32'b0;
 assign rdata2 = ((!rst) && (ren2)) ? regs[raddr2] : 32'b0;




//import "DPI-C" function void  get_reg_value(output r1, output r2, output r3, output r4, output r5, output r6, output r7, output r8, output r9, output r10, output r11, output r12, output r13, output r14, output r15, output r16, output r17, output r18, output r19, output r20, output r21, output r22, output r23, output r24, output r25, output r26, output r27, output r28, output r29, output r30, output r31, output r32);
export "DPI-C" task GPR_SEND_VALUE;

task GPR_SEND_VALUE(
    output int r1,  output int r2,  output int r3,  output int r4,
    output int r5,  output int r6,  output int r7,  output int r8,
    output int r9,  output int r10, output int r11, output int r12,
    output int r13, output int r14, output int r15, output int r16,
    output int r17, output int r18, output int r19, output int r20,
    output int r21, output int r22, output int r23, output int r24,
    output int r25, output int r26, output int r27, output int r28,
    output int r29, output int r30, output int r31
);

    r1  = rf[1];  r2  = rf[2];  r3  = rf[3];  r4  = rf[4];
    r5  = rf[5];  r6  = rf[6];  r7  = rf[7];  r8  = rf[8];
    r9  = rf[9];  r10 = rf[10]; r11 = rf[11]; r12 = rf[12];
    r13 = rf[13]; r14 = rf[14]; r15 = rf[15]; r16 = rf[16];
    r17 = rf[17]; r18 = rf[18]; r19 = rf[19]; r20 = rf[20];
    r21 = rf[21]; r22 = rf[22]; r23 = rf[23]; r24 = rf[24];
    r25 = rf[25]; r26 = rf[26]; r27 = rf[27]; r28 = rf[28];
    r29 = rf[29]; r30 = rf[30]; r31 = rf[31];

endtask

endmodule

