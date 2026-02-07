//信号一般小写 参数一般大写
// 这里只是实现能够接上存储器的AXI-4 Lite "slave接口"
module ysyx_25060170_memory(
    // 全局信号     Global
     input  logic        aclk
    ,input  logic        aresetn
    
    // 写地址通道   Write address channel
    ,input  logic        awvalid
    ,output logic        awready
    ,input  logic [31:0] awaddr
    ,input  logic [2:0]  awprot
    
    // 写数据通道   Write data channel
    ,input  logic        wvalid
    ,output logic        wready
    ,input  logic [31:0] wdata
    ,input  logic [3:0]  wstrb
    
    // 写响应通道 Write response channel
    ,output logic        bvalid
    ,input  logic        bready
    ,output logic [1:0]  bresp
    
    // 读地址通道 Read address channel
    ,input  logic        arvalid
    ,output logic        arready
    ,input  logic [31:0] araddr
    ,input  logic [2:0]  arprot
    
    // 读数据通道 Read data channel
    ,output logic        rvalid
    ,input  logic        rready
    ,output logic [31:0] rdata
    ,output logic [1:0]  rresp
);

//***************************************************复位*****************************************************//
//a slave interface must drive RVALID and BVALID LOW 内存是从机 要复位RVALID and BVALID
always @(posedge aclk or negedge aresetn) begin
    if(!aresetn) begin
        bvalid <= 1'b0;
        rvalid <= 1'b0;
    end
end

endmodule
