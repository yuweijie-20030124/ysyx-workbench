module ysyx_25060170_IFU (
    input  clk,
    input  rst,
    input  [31:0] jump_addr,      //执行单元结果，（用于JALR等指令时更新PC）。
    input  jump_en,         //跳转或分支的标志位
    //to IDU
    output reg [31:0] inst_o,
    output reg [31:0] PCout
    

);
    parameter RESET_PC = 32'h8000_0000;

    wire [31:0] PC_temp;

    // PC寄存器
    Reg #(32, RESET_PC) pc_reg (
        .clk(clk),
        .rst(rst),
        .din(PC_temp),
        .dout(PCout),
        .wen(1'b1)
    );

    assign PC_temp = jump_en ? jump_addr : PCout + 4;


/***************************************DPI-C*******************************************/
import "DPI-C" function void pc_inst_end(input int thepc_data, input int the_inst);
 
//  always @(posedge clk) begin
 always @(posedge clk) begin
   if(rst) begin
     pc_inst_end(PCout, inst_o);
   end
   else begin
     pc_inst_end(PCout, inst_o);
   end
 end

import "DPI-C" function void pmem_read(input int raddr, output int rdata, input byte rlen);
reg [7:0] rlen = 8'd4;
always @(*) begin
    pmem_read(PCout,inst_o,rlen);
    //$display("addr_i = 0x%08x", addr_i);
    //$display("inst_o = 0x%08x", inst_o);
end

endmodule

