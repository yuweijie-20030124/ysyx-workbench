// 导入 DPI-C 函数

import "DPI-C" function int addr_to_instruction(int addr);

module ysyx_25060170_MEM (
    input  [31:0] addr_i,
    output [31:0] inst_o    
);

    assign inst_o = addr_to_instruction(addr_i);

endmodule

