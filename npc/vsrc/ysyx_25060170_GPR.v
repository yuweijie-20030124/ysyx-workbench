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
    $display("ra = 0x%08x", rf[1]);
    $display("sp = 0x%08x", rf[2]);
    $display("gp = 0x%08x", rf[3]);
    $display("tp = 0x%08x", rf[4]);
    $display("haox = 0x%08x", rf[5]);
    $display("t1 = 0x%08x", rf[6]);
    $display("t2 = 0x%08x", rf[7]);
    $display("s0 = 0x%08x", rf[8]);
    $display("s1 = 0x%08x", rf[9]);
    $display("a0 = 0x%08x", rf[10]);
    $display("a1 = 0x%08x", rf[11]);
    $display("a2 = 0x%08x", rf[12]);
    $display("a3 = 0x%08x", rf[13]);
    $display("a4 = 0x%08x", rf[14]);
    $display("a5 = 0x%08x", rf[15]);
    $display("a6 = 0x%08x", rf[16]);
    $display("a7 = 0x%08x", rf[17]);
    $display("s2 = 0x%08x", rf[18]);
    $display("s3 = 0x%08x", rf[19]);
    $display("s4 = 0x%08x", rf[20]);
    $display("s5 = 0x%08x", rf[21]);
    $display("s6 = 0x%08x", rf[22]);
    $display("s7 = 0x%08x", rf[23]);
    $display("s8 = 0x%08x", rf[24]);
    $display("s9 = 0x%08x", rf[25]);
    $display("s10 =0x%08x", rf[26]);
    $display("s11 =0x%08x", rf[27]);
    $display("t3 = 0x%08x", rf[28]);
    $display("t4 = 0x%08x", rf[29]);
    $display("t5 = 0x%08x", rf[30]);
    $display("t6 = 0x%08x", rf[31]);
    */
end
    

endmodule

