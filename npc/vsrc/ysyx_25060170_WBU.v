module ysyx_25060170_WBU(
    input [31:0] alu_result_i,   // EXU计算结果
    input [4:0]  rd_i,           // 目的寄存器号
    input        ready_i,
    output       ready_o,
    output [31:0] reg_write_data_o, // 写回寄存器的数据
    output [4:0]  reg_write_addr_o, // 写回寄存器的地址
    output        reg_write_en_o    // 写回使能
);

    // 只实现addi，直接将ALU结果写回
    assign reg_write_data_o = alu_result_i;
    assign reg_write_addr_o = rd_i;
    assign reg_write_en_o   = (rd_i != 0); // x0不写
    assign ready_o = ready_i;

endmodule

