//信号一般小写 参数一般大写
// memory AXI4-Lite 1.send instructions to ifu 2.data transactions with idu
// 还要带仲裁器 从IFU和LSU中选择一个master与存储器通信，按理来说优先级LSU > IFU
//**************************************带仲裁器的AXI4-Lite存储器******************************************//
// 这里只是实现能够接上存储器的AXI-4 Lite "slave接口"
module ysyx_25060170_memory(
    // 全局信号     Global
     input  logic        aclk       // 时钟信号
    ,input  logic        aresetn    // 异步复位信号，低有效
    
    // 写地址通道   Write address channel
    ,input  logic        awvalid    // 写地址有效信号
    ,output logic        awready    // 从机准备好接收地址
    ,input  logic [31:0] awaddr     // 写地址
    /* verilator lint_off UNUSEDSIGNAL */
    ,input  logic [2:0]  awprot     // 写保护类型（通常不用）
    /* verilator lint_on  UNUSEDSIGNAL */
    // 写数据通道   Write data channel
    ,input  logic        wvalid     // 写数据有效信号
    ,output logic        wready     // 从机准备好接收数据
    ,input  logic [31:0] wdata      // 写数据
    ,input  logic [3:0]  wstrb      // 写数据字节使能信号 
    // 写响应通道 Write response channel
    ,output logic        bvalid     // 响应有效
    ,input  logic        bready     // 主机准备好接受响应
    ,output logic [1:0]  bresp      // 写响应（00成功，其他不成功）
    // 读地址通道 Read address channel
    ,input  logic        arvalid    // 读地址有效
    ,output logic        arready    // 从机准备好接收地址
    ,input  logic [31:0] araddr     // 读地址
    /* verilator lint_off UNUSEDSIGNAL */
    ,input  logic [2:0]  arprot     // 保护类型
    /* verilator lint_on  UNUSEDSIGNAL */
    // 读数据通道 Read data channel
    ,output logic        rvalid     // 读数据有效
    ,input  logic        rready     // 主机准备好接收数据
    ,output logic [31:0] rdata      // 读数据
    /* verilator lint_off UNDRIVEN */
    ,output logic [1:0]  rresp      // 读响应
    /* verilator lint_on  UNDRIVEN */
    ,output logic [31:0] dpic_difftest_skip_flag//difftest 跳过比较 
);
//***************************************************DPIC*****************************************************//

import "DPI-C" function void pmem_read(input int raddr, output int rdata, input byte rlen, input int mode, output int dpic_difftest_skip_flag);

import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wlen, output int dpic_difftest_skip_flag);

//***************************************************掩码转换*****************************************************//
logic [7:0] wlen;
logic [7:0] rlen = 8'hff;

assign wlen = {8{wstrb==4'b0001}} & 8'b00000011 |
              {8{wstrb==4'b0011}} & 8'b00001111 |
              {8{wstrb==4'b0111}} & 8'b00111111 |
              {8{wstrb==4'b1111}} & 8'b11111111 |
              8'b0;
//***************************************************复位*****************************************************//
//a slave interface must drive RVALID and BVALID LOW 内存是从机 要复位RVALID and BVALID

// always_ff @(posedge aclk or negedge aresetn) begin
//     if(!aresetn) begin
//         bvalid <= 1'b0;
//         rvalid <= 1'b0;
//     end
// end

//********************************************中间变量***************************************************//
// logic write_hit;
// logic [31:0]write_data;
logic [31:0] mode = (awprot[2] == 1'b0) ?  32'd2 : //LSU读
                    (awprot[2] == 1'b1) ?  32'd1 :
                    32'd99;

//*************************************从机准备好接收地址 awready***************************************************//
//这样面向对象赋值逻辑比较好写。
always_ff @(posedge aclk) begin
    if(aresetn) begin
        awready <= 1'b0;     
    end
    else if(awvalid) begin
        awready <= 1'b0;
    end
    else begin
        awready <= 1'b1;
    end
end

//*************************************从机准备好接收数据 wready***************************************************//

always_ff @(posedge aclk) begin
    if(aresetn) begin
        wready <= 1'b0;     
    end
    else if(wvalid & bready) begin
        wready <= 1'b0;
    end
    else begin
        wready <= 1'b1;
    end
end

//*************************************响应有效 bvalid***************************************************//

always_ff @(posedge aclk) begin
    if(aresetn) begin
        bvalid <= 1'b0;     
    end
    else if(~wvalid) begin
        bvalid <= 1'b1;
    end
    else begin
        bvalid <= 1'b0;
    end
end

//*************************************写响应 00成功其他不成功***************************************************//

always_ff @(posedge aclk) begin
    if(aresetn) begin
        bresp <= 2'b11;     
    end
    else if(~wready) begin
        bresp <= 2'b00;  
    end
    else begin
        bresp <= 2'b11;  
    end
end

//*************************************从机准备好接收地址***************************************************//

always_ff @(posedge aclk) begin
    if(aresetn) begin
        arready <= 1'b0;     
    end
    else if(arvalid) begin
        arready <= 1'b1; 
    end
    else begin
        arready <= 1'b0;
    end
end

//*************************************读数据有效***************************************************//

always_ff @(posedge aclk) begin
    if(aresetn) begin
        rvalid <= 1'b0;     
    end
    else if(arready) begin
        rvalid <= 1'b1; 
    end
    else begin
        rvalid <= 1'b0;
    end
end

//********************************************写事务***************************************************//

always_ff @(posedge aclk) begin
    if(wvalid & wready) begin
        pmem_write(awaddr,wdata,wlen,dpic_difftest_skip_flag);
    end
end

//********************************************读事务***************************************************//
always_ff @(posedge aclk) begin
    if(rvalid & rready) begin
        pmem_read(araddr,rdata,rlen,mode,dpic_difftest_skip_flag);
    end
end

// //********************************************写地址通道***************************************************//

// always_ff @(posedge aclk or negedge aresetn) begin
//     if(!aresetn) begin
//         awready <= 1'b0;
//     end
//     else if(awvalid)begin
//         awready <= 1'b1;
//     end
// end

// //********************************************写数据通道***************************************************//

// always_ff @(posedge aclk or negedge aresetn) begin
//     if(!aresetn) begin
//         wready <= 1'b0;
//     end
//     else if(wvalid)begin
//         wready <= 1'b1;
//     end
// end

// //********************************************写响应通道***************************************************//

// always_ff @(posedge aclk or negedge aresetn) begin
//     if(!aresetn) begin
//         bvalid <= 1'b0;
//         bresp  <= 2'b11;
//     end
//     else if(bready & awready & awvalid & wvalid & wready) begin
//         bvalid <= 1'b1;
//         bresp  <= 2'b00;
//     end
    
// end

// //********************************************读地址通道***************************************************//

// always_ff @(posedge aclk or negedge aresetn) begin
//     if(!aresetn) begin
//         arready <= 1'b0;
//     end
//     else if(arvalid)begin
//         arready <= 1'b1;
//     end
//     else begin
//         arready <= 1'b0;
//     end
// end


// //********************************************读数据通道***************************************************//

// always_ff @(posedge aclk or negedge aresetn) begin
//     if(!aresetn) begin
//         rvalid <= 1'b0;
//     end
//     else if(rready)begin
//         rvalid <= 1'b1;
//     end
//     else begin
//         rvalid <= 1'b0;
//     end
// end

// //********************************************读写功能***************************************************//
// //同时满足ifu取指令 和 lsu的读写内存
// //写
// always_ff @(posedge aclk) begin
//     if(awready & awvalid) begin
//         pmem_write(awaddr,wdata,wlen,dpic_difftest_skip_flag);
//     end
// end

// always_ff @(posedge aclk) begin
//     if( arvalid & arready & rvalid & rready) begin
//         pmem_read(araddr,rdata,rlen,mode,dpic_difftest_skip_flag);
//     end
// end

endmodule
