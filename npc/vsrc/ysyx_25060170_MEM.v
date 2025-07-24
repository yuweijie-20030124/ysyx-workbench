// 导入 DPI-C 函数
`include "Reg.v"

import "DPI-C" function int addr_to_instruction(int addr);

module ysyx_25060170_MEM (
    input         clk,
    input         rst,
    input  [31:0] addr_i,
    output [31:0] inst_o, 
    input         ready_i,
    output        ready_o
);

    assign data_out = addr_to_instruction(addr);
    assign ready_o = ready_i;

endmodule

