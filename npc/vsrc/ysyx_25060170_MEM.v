// 导入 DPI-C 函数
`include "Reg.v"

import "DPI-C" function int addr_to_instruction(int addr);

module ysyx_25060170_MEM (
    input        clk,
    input        rst,
    input [31:0] addr,
    output [31:0] data_out,   // 改为 wire 类型
    input        ready_i,
    output       ready_o
);

// 使用 DPI-C 函数获取地址对应的指令
Reg #(32, 32'h0) mem_data_reg (
    .clk(clk),
    .rst(rst),
    .din(addr_to_instruction(addr)),
    .dout(data_out),
    .wen(ready_i)
);

assign ready_o = ready_i;

endmodule

