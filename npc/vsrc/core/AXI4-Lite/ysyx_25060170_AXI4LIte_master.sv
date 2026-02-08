//信号一般小写 参数一般大写
    // 这里只是实现能够接上存储器的AXI-4 Lite "master接口"
module ysyx_25060170_AXI4LIte_master(
    // 全局信号     Global
     input  logic        aclk       // 时钟信号
    ,input  logic        aresetn    // 异步复位信号，低有效
    
    // 写地址通道   Write address channel
    ,output logic        awvalid    // 写地址有效信号
    ,input  logic        awready    // 从机准备好接收地址
    ,output logic [31:0] awaddr     // 写地址
    ,output logic [2:0]  awprot     // 写保护类型（通常不用）
    
    // 写数据通道   Write data channel
    ,output logic        wvalid     // 写数据有效信号
    ,input  logic        wready     // 从机准备好接收数据
    ,output logic [31:0] wdata      // 写数据
    ,output logic [3:0]  wstrb      // 写数据字节使能信号
    
    // 写响应通道 Write response channel
    ,input  logic        bvalid     // 相应有效
    ,output logic        bready     // 主机准备好接受响应
    ,input  logic [1:0]  bresp      // 写响应（00成功，其他不成功）
    
    // 读地址通道 Read address channel
    ,output logic        arvalid    // 读地址有效
    ,input  logic        arready    // 从机准备好接收地址
    ,output logic [31:0] araddr     // 读地址
    ,output logic [2:0]  arprot     // 保护类型
    
    // 读数据通道 Read data channel
    ,input  logic        rvalid     // 读数据有效
    ,output logic        rready     // 主机准备好接收数据
    ,input  logic [31:0] rdata      // 读数据
    ,input  logic [1:0]  rresp      // 读相应
);
/*
WSTRB[3:0] 对应 WDATA[31:0] 的四个字节：
  WSTRB[0] → WDATA[7:0]    (字节0)
  WSTRB[1] → WDATA[15:8]   (字节1)
  WSTRB[2] → WDATA[23:16]  (字节2)
  WSTRB[3] → WDATA[31:24]  (字节3)

例如：只写字节0和字节2
  WSTRB = 4'b0101


BRESP RRESP
2'b00 → OKAY    (成功)
2'b01 → EXOKAY  (独占访问成功，AXI-Lite不用)
2'b10 → SLVERR  (从机错误)
2'b11 → DECERR  (解码错误)

在最小示例中，我们只用 OKAY (2'b00)
*/

//***************************************************复位*****************************************************//
//a slave interface must drive RVALID and BVALID LOW 内存是从机 要复位RVALID and BVALID
always @(posedge aclk or negedge aresetn) begin
    if(!aresetn) begin
        arvalid  <=  1'b0;
        awvalid  <=  1'b0;
        wvalid   <=  1'b0;
    end
end


endmodule
