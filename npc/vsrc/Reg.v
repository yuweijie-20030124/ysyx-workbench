`ifndef YSYX_25060170_REG_V
`define YSYX_25060170_REG_V

module Reg #(WIDTH = 1, RESET_VAL = 0) (
  input clk,
  input rst,
  input [WIDTH-1:0] din,
  output reg [WIDTH-1:0] dout,
  input wen
);
  always @(posedge clk or posedge rst) begin
  if (rst) begin
    dout <= RESET_VAL;
    $display("!!!Reg Reset dout = 0x%08x", dout);
  end
  else if (wen) begin
    dout <= din;
    $display("!!!Reg Update dout = 0x%08x, din = 0x%08x", dout, din);
  end
end

endmodule

`endif
