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
    else if (wen) dout <= din + 4;
  end
endmodule


module pc (
	input clk,
	input rst,
	input [31:0] pc_i,
	output reg [31:0] pc_o,
)

	Reg #(32, 32'h8000_0000) pc_reg (clk, rst, pc_i + 4, pc_o, 1'b1);

endmodule


