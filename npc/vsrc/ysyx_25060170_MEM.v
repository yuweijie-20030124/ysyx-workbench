// 导入 DPI-C 函数

import "DPI-C" function int addr_to_instruction(int addr);

module ysyx_25060170_MEM (

    input  [31:0] addr_i,
    output [31:0] inst_o, 
    input         MEM_ready_i,
    output        MEM_ready_o
    
);

    assign inst_o = addr_to_instruction(addr_i);
    assign MEM_ready_o = MEM_ready_i;

endmodule

