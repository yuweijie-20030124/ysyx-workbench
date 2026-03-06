`include "define.v"

// CLINT (Core Local INTerrupt controller)
// AXI4-Lite 接口
// 包含一个 64 位只读寄存器 mtime, 每周期加 1
// 地址映射 (与仿真环境一致):
//   RTC_ADDR     = 0xa0000048 : mtime 低 32 位 (只读)
//   RTC_ADDR + 4 = 0xa000004C : mtime 高 32 位 (只读)
// 写操作被忽略 (直接返回 OKAY 响应)

module ysyx_25060170_clint(
     input  wire        clk
    ,input  wire        rst

    //================== AXI4-Lite Slave 接口 ==================
    /* verilator lint_off UNUSEDSIGNAL */
    // AW 通道 (写地址)
    ,input  wire        awvalid
    ,output wire        awready
    ,input  wire [31:0] awaddr
    ,input  wire [2:0]  awprot

    // W 通道 (写数据)
    ,input  wire        wvalid
    ,output wire        wready
    ,input  wire [31:0] wdata
    ,input  wire [3:0]  wstrb
    /* verilator lint_on UNUSEDSIGNAL */

    // B 通道 (写响应)
    ,output reg         bvalid
    ,input  wire        bready
    ,output wire [1:0]  bresp

    // AR 通道 (读地址)
    ,input  wire        arvalid
    ,output wire        arready
    ,input  wire [31:0] araddr
    /* verilator lint_off UNUSEDSIGNAL */
    ,input  wire [2:0]  arprot
    /* verilator lint_on UNUSEDSIGNAL */

    // R 通道 (读数据)
    ,output reg         rvalid
    ,input  wire        rready
    ,output reg  [31:0] rdata
    ,output wire [1:0]  rresp
);

//==========================================================================
// 地址定义
//==========================================================================
localparam MTIME_LO_ADDR = 32'ha0000048;  // mtime 低 32 位
localparam MTIME_HI_ADDR = 32'ha000004C;  // mtime 高 32 位

//==========================================================================
// mtime 寄存器: 64 位, 每周期加 1
//==========================================================================
reg [63:0] mtime;

always @(posedge clk) begin
    if (rst) begin
        mtime <= 64'b0;
    end
    else begin
        mtime <= mtime + 64'b1;
    end
end

//==========================================================================
// 读通道状态机
// IDLE -> 接收地址 -> 返回数据 -> IDLE
//==========================================================================
localparam [1:0] R_IDLE    = 2'd0;
localparam [1:0] R_RESP    = 2'd1;

reg [1:0]  r_state;

// AR 握手: 在 IDLE 状态接受读地址
assign arready = (r_state == R_IDLE);

always @(posedge clk) begin
    if (rst) begin
        r_state    <= R_IDLE;
        rvalid     <= 1'b0;
        rdata      <= 32'b0;
    end
    else begin
        case (r_state)
            R_IDLE: begin
                if (arvalid & arready) begin
                    // 根据地址选择返回 mtime 低 32 位或高 32 位
                    case (araddr)
                        MTIME_LO_ADDR: rdata <= mtime[31:0];
                        MTIME_HI_ADDR: rdata <= mtime[63:32];
                        default:       rdata <= 32'b0;
                    endcase
                    rvalid  <= 1'b1;
                    r_state <= R_RESP;
                end
            end
            R_RESP: begin
                if (rvalid & rready) begin
                    rvalid  <= 1'b0;
                    r_state <= R_IDLE;
                end
            end
            default: r_state <= R_IDLE;
        endcase
    end
end

// 读响应始终 OKAY
assign rresp = 2'b00;

//==========================================================================
// 写通道: CLINT 的 mtime 是只读的, 写操作直接返回 OKAY
// 简单实现: 同时接受 AW 和 W, 然后返回 B 响应
//==========================================================================
localparam [1:0] W_IDLE    = 2'd0;
localparam [1:0] W_WAIT_W  = 2'd1;  // 已收到 AW, 等待 W
localparam [1:0] W_RESP    = 2'd2;

reg [1:0] w_state;

// AW 握手: 在 IDLE 状态接受写地址
assign awready = (w_state == W_IDLE);
// W  握手: 在 IDLE 或 WAIT_W 状态接受写数据
assign wready  = (w_state == W_IDLE) | (w_state == W_WAIT_W);

always @(posedge clk) begin
    if (rst) begin
        w_state <= W_IDLE;
        bvalid  <= 1'b0;
    end
    else begin
        case (w_state)
            W_IDLE: begin
                bvalid <= 1'b0;
                if (awvalid & awready & wvalid & wready) begin
                    // AW 和 W 同时到达, 直接给 B 响应
                    bvalid  <= 1'b1;
                    w_state <= W_RESP;
                end
                else if (awvalid & awready) begin
                    // 只收到 AW, 等待 W
                    w_state <= W_WAIT_W;
                end
            end
            W_WAIT_W: begin
                if (wvalid & wready) begin
                    bvalid  <= 1'b1;
                    w_state <= W_RESP;
                end
            end
            W_RESP: begin
                if (bvalid & bready) begin
                    bvalid  <= 1'b0;
                    w_state <= W_IDLE;
                end
            end
            default: w_state <= W_IDLE;
        endcase
    end
end

// 写响应始终 OKAY (mtime 只读, 写操作被忽略但不报错)
assign bresp = 2'b00;

endmodule
