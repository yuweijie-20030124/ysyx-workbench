// 导入 DPI-C 函数


module ysyx_25060170_MEM (
    input  [31:0] addr_i,
    output [31:0] inst_o    
);

import "DPI-C" function void pmem_read(input int raddr, output int rdata, input byte rlen);
reg [7:0] rlen = 8'd4;
always @(*) begin
    pmem_read(addr_i,inst_o,rlen);
    $display("raddr = 0x%08x", addr_i);
    $display("inst_o = 0x%08x", inst_o);
end


endmodule

