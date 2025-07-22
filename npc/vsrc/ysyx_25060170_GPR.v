`include "Reg.v"

module ysyx_25060170_GPR (
    input clk,
    input rst,
    // 写端口
    input [31:0] wdata,
    input [4:0]  waddr,
    input        wen,
    // 读端口
    input  [4:0]  raddr1,
    input  [4:0]  raddr2,
    output [31:0] rdata1,
    output [31:0] rdata2,
    input        ready_i,
    output       ready_o
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
                .din(wdata),
                .dout(rf[i]),
                .wen(wen & (waddr == i))
            );
        end
    endgenerate
    assign rf[0] = 32'b0;

    // 读端口，带前递
    assign rdata1 = (raddr1 == 0) ? 32'b0 :
                    (wen && (waddr == raddr1)) ? wdata : rf[raddr1];
    assign rdata2 = (raddr2 == 0) ? 32'b0 :
                    (wen && (waddr == raddr2)) ? wdata : rf[raddr2];

    

endmodule

