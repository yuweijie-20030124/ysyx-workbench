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

    parameter RESET_PC = 32'h8000_0000;

    wire [31:0] pc_plus_4;
    wire [31:0] pc_plus_or_jump;
    
    assign pc_plus_4 = pc_o + 4;
    assign ready_o = ready_i && !rst;

    // PC寄存器
    Reg #(32, RESET_PC) pc_reg (
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


    always @(posedge clk) begin
        if (Jump_en && ready_i) 
            $display("IFU: Jump to 0x%h at cycle %t", Jump_addr, $time);
    end
    
endmodule
