// 触发器模板
module Reg #(WIDTH = 1, RESET_VAL = 0) (
  input clk,
  input rst,
  input [WIDTH-1:0] din,
  output reg [WIDTH-1:0] dout,
  input wen
);
  always @(posedge clk) begin
    if (rst) dout <= RESET_VAL;
    else if (wen) dout <= din;
  end
endmodule

module IFU(
    input clk,
    input rst,
    input [31:0] pc_i,
    
    output [31:0] mem_rdata,
    output [31:0] inst_o,
    output [31:0] mem_addr,
    output mem_read,
)

    assign mem_addr = pc_i;
    assign mem_read = 1'b1;
    assign inst_o = mem_rdata;

    Reg #()

endmodule
