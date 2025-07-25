`include "Reg.v"

module ysyx_25060170_GPR (
    input clk,
    input rst,
    input [4:0] r1,
    input [4:0] r2,
    input [4:0] r3,
    input we,
    input [4:0] writer,//目标寄存器
    input [31:0] wd,
    input ready_i,

    output ready_o,
    output [31:0] rd1,//下面是读出的数据
    output [31:0] rd2,
    output [31:0] rd3
);

    assign ready_o = ready_i;  
    // 32个32位寄存器（x0硬连线为0）
    wire [31:0] rf [0:31];

    genvar i;
    generate
        for (i = 1; i < 32; i = i + 1) begin : reg_gen
            Reg #(32, 0) reg_x (
                .clk(clk),
                .rst(rst),
                .din(wd),
                .dout(rf[i]),
                .wen(we & (writer == i))
            );
        end
    endgenerate
    assign rf[0] = 32'b0;

    assign rd1 = rf[r1];
    assign rd2 = rf[r2];
    assign rd3 = rf[r3];


    

endmodule

