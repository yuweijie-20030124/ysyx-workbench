module ysyx_25060170_arb(
     input logic clk
    ,input logic rst

    // 写地址通道   Write address channel
    ,input  logic        ifu_arb_awvalid
    ,input  logic [31:0] ifu_arb_awaddr
    ,input  logic [2:0]  ifu_arb_awprot
    ,input  logic        lsu_arb_awvalid
    ,input  logic [31:0] lsu_arb_awaddr
    ,input  logic [2:0]  lsu_arb_awprot
    ,output logic        arb_ifu_awready
    ,output logic        arb_lsu_awready
    
    // 写数据通道   Write data channel
    ,input  logic        ifu_arb_wvalid
    ,input  logic [31:0] ifu_arb_wdata
    ,input  logic [3:0]  ifu_arb_wstrb
    ,input  logic        lsu_arb_wvalid
    ,input  logic [31:0] lsu_arb_wdata
    ,input  logic [3:0]  lsu_arb_wstrb
    ,output logic        arb_ifu_wready
    ,output logic        arb_lsu_wready
    
    // 写响应通道 Write response channel
    ,input  logic        ifu_arb_bready
    ,input  logic        lsu_arb_bready
    ,output logic [1:0]  arb_ifu_bresp
    ,output logic [1:0]  arb_lsu_bresp
    ,output logic        arb_ifu_bvalid
    ,output logic        arb_lsu_bvalid
    
    // 读地址通道 Read address channel
    ,input  logic        ifu_arb_arvalid
    ,input  logic [31:0] ifu_arb_araddr
    ,input  logic [2:0]  ifu_arb_arprot
    ,input  logic        lsu_arb_arvalid
    ,input  logic [31:0] lsu_arb_araddr
    ,input  logic [2:0]  lsu_arb_arprot
    ,output logic        arb_ifu_arready
    ,output logic        arb_lsu_arready
    
    // 读数据通道 Read data channel
    ,input  logic        ifu_arb_rready
    ,input  logic        lsu_arb_rready
    ,output logic        arb_ifu_rvalid
    ,output logic        arb_lsu_rvalid
    ,output logic [31:0] arb_ifu_rdata
    ,output logic [31:0] arb_lsu_rdata
    ,output logic [1:0]  arb_ifu_rresp
    ,output logic [1:0]  arb_lsu_rresp

    //about memory
    // 写地址通道   Write address channel
    ,output logic        arb_memory_awvalid    // 写地址有效信号
    ,input  logic        memory_arg_awready    // 从机准备好接收地址
    ,output logic [31:0] arb_memory_awaddr     // 写地址
    ,output logic [2:0]  arb_memory_awprot     // 写保护类型（通常不用）
    
    // 写数据通道   Write data channel
    ,output logic        arb_memory_wvalid     // 写数据有效信号
    ,input  logic        memory_arb_wready     // 从机准备好接收数据
    ,output logic [31:0] arb_memory_wdata      // 写数据
    ,output logic [3:0]  arb_memory_wstrb      // 写数据字节使能信号
    
    // 写响应通道 Write response channel
    ,input  logic        memory_arb_bvalid     // 相应有效
    ,output logic        arb_memory_bready     // 主机准备好接受响应
    ,input  logic [1:0]  memory_arb_bresp      // 写响应（00成功，其他不成功）
    
    // 读地址通道 Read address channel
    ,output logic        arb_memory_arvalid    // 读地址有效
    ,input  logic        memory_arb_arready    // 从机准备好接收地址
    ,output logic [31:0] arb_memory_araddr     // 读地址
    ,output logic [2:0]  arb_memory_arprot     // 保护类型
    
    // 读数据通道 Read data channel
    ,input  logic        memory_arb_rvalid     // 读数据有效
    ,output logic        arb_memory_rready     // 主机准备好接收数据
    ,input  logic [31:0] memory_arb_rdata      // 读数据
    ,input  logic [1:0]  memory_arb_rresp      // 读相应
);







































//******************************************lsu和ifu同时读memory要进行仲裁**********************************//


endmodule
