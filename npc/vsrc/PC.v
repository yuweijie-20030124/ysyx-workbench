module PC #(WIDTH = 32, RESET_VAL = 8'h80000000) (
  input clk,
  input rst,
  output reg [WIDTH-1:0] PC,
);
  always @(posedge clk) begin
    if (rst) PC <= RESET_VAL;
    else if (wen) dout <= din;
  end
endmodule
