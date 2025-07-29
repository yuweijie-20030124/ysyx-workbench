`include "Reg.v"

module ysyx_25060170_GPR (
    input clk,
    input rst,
    input [4:0] GPR_r1,
    //input [4:0] GPR_r2,     
    input GPR_we,          //写回使能
    input [4:0] GPR_writer,//写回地址
    input [31:0] GPR_wd,    //写回数据

    output [31:0] GPR_rd1//下面是读出的数据
    //output [31:0] GPR_rd2
);
 
    // 32个32位寄存器（x0硬连线为0）
    wire [31:0] rf [0:31];

    genvar i;
    generate
        for (i = 1; i < 32; i = i + 1) begin : reg_gen
            Reg #(32, 0) reg_x (
                .clk(clk),
                .rst(rst),
                .din(GPR_wd),
                .dout(rf[i]),
                .wen(GPR_we & (GPR_writer == i))
            );
        end
    endgenerate
    assign rf[0] = 32'b0;

    assign GPR_rd1 = rf[GPR_r1];
    //assign GPR_rd2 = rf[GPR_r2];

always @(*) begin
    /*
    $display("ra   = 0x%08x", rf[1 ]);
    $display("sp   = 0x%08x", rf[2 ]);
    $display("gp   = 0x%08x", rf[3 ]);
    $display("tp   = 0x%08x", rf[4 ]);
    $display("t0   = 0x%08x", rf[5 ]);
    $display("t1   = 0x%08x", rf[6 ]);
    $display("t2   = 0x%08x", rf[7 ]);
    $display("s0   = 0x%08x", rf[8 ]);
    $display("s1   = 0x%08x", rf[9 ]);
    $display("a0   = 0x%08x", rf[10]);
    $display("a1   = 0x%08x", rf[11]);
    $display("a2   = 0x%08x", rf[12]);
    $display("a3   = 0x%08x", rf[13]);
    $display("a4   = 0x%08x", rf[14]);
    $display("a5   = 0x%08x", rf[15]);
    $display("a6   = 0x%08x", rf[16]);
    $display("a7   = 0x%08x", rf[17]);
    $display("s2   = 0x%08x", rf[18]);
    $display("s3   = 0x%08x", rf[19]);
    $display("s4   = 0x%08x", rf[20]);
    $display("s5   = 0x%08x", rf[21]);
    $display("s6   = 0x%08x", rf[22]);
    $display("s7   = 0x%08x", rf[23]);
    $display("s8   = 0x%08x", rf[24]);
    $display("s9   = 0x%08x", rf[25]);
    $display("s10  = 0x%08x", rf[26]);
    $display("s11  = 0x%08x", rf[27]);
    $display("t3   = 0x%08x", rf[28]);
    $display("t4   = 0x%08x", rf[29]);
    $display("t5   = 0x%08x", rf[30]);
    $display("t6   = 0x%08x", rf[31]);
    */
end

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

