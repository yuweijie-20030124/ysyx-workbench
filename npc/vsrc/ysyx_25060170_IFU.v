`include "Reg.v"
//`include "MuxKeyInternal.v"

module ysyx_25060170_IFU (
    input clk,
    input rst,
    output [31:0] pc,     
    input        ready_i,
    output       ready_o
);
    wire [31:0] pc_plus_4;
    assign pc_plus_4 = pc + 4;
    assign ready_o = ready_i;

    // PC寄存器
    Reg #(32, 32'h8000_0000) pc_reg (
        .clk(clk),
        .rst(rst),
        .din(pc_plus_4),
        .dout(pc),
        .wen(ready_i)
    );

endmodule
