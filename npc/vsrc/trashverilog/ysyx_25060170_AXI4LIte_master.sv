//信号一般小写 参数一般大写
// 这里只是实现能够接上存储器的AXI-4 Lite "master接口"
module ysyx_25060170_AXI4LIte_master(
    // 全局信号     Global
     input  logic        aclk       // 时钟信号
    ,input  logic        aresetn    // 异步复位信号，低有效
    
    // 写地址通道   Write address channel
    ,output logic        awvalid    // 写地址有效信号
    ,input  logic        awready    // 从机准备好接收地址
    ,output logic [31:0] awaddr
    ,output logic [2:0]  awprot
    
    // 写数据通道   Write data channel
    ,output logic        wvalid
    ,input  logic        wready
    ,output logic [31:0] wdata
    ,output logic [3:0]  wstrb
    
    // 写响应通道 Write response channel
    ,input  logic        bvalid
    ,output logic        bready
    ,input  logic [1:0]  bresp
    
    // 读地址通道 Read address channel
    ,output logic        arvalid
    ,input  logic        arready
    ,output logic [31:0] araddr
    ,output logic [2:0]  arprot
    
    // 读数据通道 Read data channel
    ,input  logic        rvalid
    ,output logic        rready
    ,input  logic [31:0] rdata
    ,input  logic [1:0]  rresp
);

    // ================================================
    // 内部状态定义
    // ================================================
    typedef enum logic [2:0] {
        IDLE        = 3'b000,
        WRITE_ADDR  = 3'b001,
        WRITE_DATA  = 3'b010,
        WRITE_RESP  = 3'b011,
        READ_ADDR   = 3'b100,
        READ_DATA   = 3'b101
    } state_t;

    state_t state_r, state_n;

/* verilator lint_off UNUSEDSIGNAL */
    // 地址和数据寄存器
    logic [31:0] awaddr_reg;
    logic [31:0] araddr_reg;
    logic [31:0] wdata_reg;
    logic [3:0]  wstrb_reg;
    logic [2:0]  awprot_reg;
    logic [2:0]  arprot_reg;
/* verilator lint_on  UNUSEDSIGNAL */

    // ================================================
    // 状态机更新
    // ================================================
    always_ff @(posedge aclk or negedge aresetn) begin
        if (!aresetn) begin
            state_r <= IDLE;
            awaddr_reg <= 32'h0;
            araddr_reg <= 32'h0;
            wdata_reg <= 32'h0;
            wstrb_reg <= 4'h0;
            awprot_reg <= 3'h0;
            arprot_reg <= 3'h0;
        end else begin
            state_r <= state_n;
            
            // 锁存地址和数据
            if (state_r == IDLE && awvalid && awready) begin
                awaddr_reg <= awaddr;
                awprot_reg <= awprot;
            end
            
            if (state_r == IDLE && arvalid && arready) begin
                araddr_reg <= araddr;
                arprot_reg <= arprot;
            end
            
            if (state_r == WRITE_ADDR && wvalid && wready) begin
                wdata_reg <= wdata;
                wstrb_reg <= wstrb;
            end
        end
    end

    // ================================================
    // 状态转移逻辑
    // ================================================
    always_comb begin
        state_n = state_r;
        
        case (state_r)
            IDLE: begin
                // 优先处理写请求（如果有）
                if (awvalid && wvalid) begin
                    // 写地址和写数据同时到达
                    state_n = WRITE_DATA;
                end else if (awvalid) begin
                    // 只有写地址到达
                    state_n = WRITE_ADDR;
                end else if (arvalid) begin
                    // 读请求到达
                    state_n = READ_ADDR;
                end
            end
            
            WRITE_ADDR: begin
                if (wvalid) begin
                    state_n = WRITE_DATA;
                end
            end
            
            WRITE_DATA: begin
                // 假设写数据操作立即完成
                state_n = WRITE_RESP;
            end
            
            WRITE_RESP: begin
                if (bready && bvalid) begin
                    state_n = IDLE;
                end
            end
            
            READ_ADDR: begin
                // 假设读数据操作立即完成
                state_n = READ_DATA;
            end
            
            READ_DATA: begin
                if (rready && rvalid) begin
                    state_n = IDLE;
                end
            end
            
            default: begin
                state_n = IDLE;
            end
        endcase
    end

    // ================================================
    // 握手信号生成
    // ================================================
    // 写地址就绪
    always_comb begin
        awready = 1'b0;
        if (state_r == IDLE) begin
            awready = 1'b1;
        end
    end

    // 写数据就绪
    always_comb begin
        wready = 1'b0;
        if (state_r == WRITE_ADDR || (state_r == IDLE && awvalid && awready)) begin
            wready = 1'b1;
        end
    end

    // 读地址就绪
    always_comb begin
        arready = 1'b0;
        if (state_r == IDLE && !awvalid) begin
            // 没有写请求时才接受读请求
            arready = 1'b1;
        end
    end

    // ================================================
    // 响应信号生成
    // ================================================
    // 写响应有效
    always_comb begin
        bvalid = 1'b0;
        bresp = 2'b00; // OKAY
        
        if (state_r == WRITE_RESP) begin
            bvalid = 1'b1;
            
            // 这里可以添加错误检查逻辑
            // 例如：检查地址对齐、访问权限等
            if (awaddr_reg[1:0] != 2'b00) begin
                bresp = 2'b10; // SLVERR: 地址未对齐
            end else if (awprot_reg[0] == 1'b1 && awprot_reg[1] == 1'b1) begin
                bresp = 2'b11; // DECERR: 非法访问权限
            end
        end
    end

    // 读数据有效和响应
    always_comb begin
        rvalid = 1'b0;
        rresp = 2'b00; // OKAY
        rdata = 32'h0;
        
        if (state_r == READ_DATA) begin
            rvalid = 1'b1;
            
            // 这里可以添加错误检查逻辑
            if (araddr_reg[1:0] != 2'b00) begin
                rresp = 2'b10; // SLVERR: 地址未对齐
            end else if (arprot_reg[0] == 1'b1 && arprot_reg[1] == 1'b1) begin
                rresp = 2'b11; // DECERR: 非法访问权限
            end else begin
                // 正常读取，这里应该连接到实际的存储器接口
                // 暂时返回一个固定的测试值
                rdata = 32'hDEAD_BEEF;
            end
        end
    end

endmodule
