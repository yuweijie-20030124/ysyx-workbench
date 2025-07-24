`include "Reg.v"
`include "MuxKeyInternal.v"

module ysyx_25060170_IFU (
    input clk,
    input rst,
    input [31:0] Jump_addr,
    input Jump_en,
    output [31:0] pc_o,     
    input        ready_i,
    output       ready_o
);
    wire [31:0] pc_plus_4;
    wire [31:0] pc_plus_or_jump;
    
    assign pc_plus_4 = pc + 4;
    assign ready_o = ready_i;

    // PC寄存器
    Reg #(32, 32'h8000_0000) pc_reg (
        .clk(clk),
        .rst(rst),
        .din(pc_plus_or_jump),
        .dout(pc_o),
        .wen(ready_i)
    );

    //Mux多路数据选择器
    MuxKey #(2, 1, 32) Mux_pc(pc_plus_or_jump, Jump_en ,{
        1'b0, pc_plus_4,
        1'b1, Jump_addr
    });

endmodule
