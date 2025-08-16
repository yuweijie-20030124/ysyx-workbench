`ifndef YSYX_25060170_REG_V
`define YSYX_25060170_REG_V

module Reg #(WIDTH = 1, RESET_VAL = 0) (
  input clk,
  input rst,
  input [WIDTH-1:0] din,
  output reg [WIDTH-1:0] dout,
  input wen
);
  always @(posedge clk) begin
    // $display("verilog reg_out_PC   = 0x%08x", dout);
    // $display("verilog reg_in_PC   = 0x%08x", din);
    if (rst) dout <= RESET_VAL;
    else if (wen) dout <= din;
  end

endmodule

`endif
