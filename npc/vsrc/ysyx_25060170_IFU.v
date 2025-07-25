`include "Reg.v"
`include "MuxKeyInternal.v"

module ysyx_25060170_IFU (
    input  clk,
    input  rst,
    input  [31:0] PCin,
    input  [31:0] imm,
    input  [31:0] res,
    input  br, isx,
    input  ready_i,
    output ready_o,
    output reg [31:0] PCout,
    output [31:0] PC_imm,
    output [31:0] PC4
);
    parameter RESET_PC = 32'h8000_0000;

    assign PC_imm = PCin + imm;
    assign PC4 = PCin + 4;
    assign ready_o = ready_i;

    wire [31:0] PC_temp;

    // PC寄存器
    Reg #(32, RESET_PC) pc_reg (
        .clk(clk),
        .rst(rst),
        .din(PC_temp),
        .dout(PCout),
        .wen(ready_i)
    );

    assign PC_temp = (isx) ?     res      :  
                     (br)  ? (PCin + imm) : 
                                 PCin + 4 ;

/*
    always @(posedge clk) begin
        if (Jump_en && ready_i) 
            $display("IFU: Jump to 0x%h at cycle %t", Jump_addr, $time);
    end
*/  

endmodule

