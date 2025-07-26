`include "Reg.v"

module ysyx_25060170_GPR (
    input clk,
    input rst,
    input [4:0] GPR_r1,
    input [4:0] GPR_r2,
    input [4:0] GPR_r3,
    input GPR_we,
    input [4:0] GPR_writer,//目标寄存器
    input [31:0] GPR_wd,
    input GPR_ready_i,

    output GPR_ready_o,
    output [31:0] GPR_rd1,//下面是读出的数据
    output [31:0] GPR_rd2,
    output [31:0] GPR_rd3
);

    assign GPR_ready_o = GPR_ready_i;  
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
    assign GPR_rd2 = rf[GPR_r2];
    assign GPR_rd3 = rf[GPR_r3];


    

endmodule

