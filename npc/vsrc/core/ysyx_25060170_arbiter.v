`include "define.v"

// 2-master AXI4 arbiter: LSU 优先于 IFU
// IFU = master0 (只读, AW/W/B 通道不使用)
// LSU = master1 (读写)
// master = 面向 slave memory 的输出端
module ysyx_25060170_arbiter(
     input wire         clk
    ,input wire         rst

    //================== IFU 侧 (master0, 仲裁器作为 slave) ==================
    // AW 通道 (IFU 不写, 全部忽略)
    ,input  wire                            io_ifu_awvalid
    ,output wire                            io_ifu_awready
    ,input  wire [31:0]                     io_ifu_awaddr
    ,input  wire [3:0]                      io_ifu_awid
    ,input  wire [7:0]                      io_ifu_awlen
    ,input  wire [2:0]                      io_ifu_awsize
    ,input  wire [1:0]                      io_ifu_awburst

    // W 通道 (IFU 不写)
    ,input  wire                            io_ifu_wvalid
    ,output wire                            io_ifu_wready
    ,input  wire [31:0]                     io_ifu_wdata
    ,input  wire [3:0]                      io_ifu_wstrb
    ,input  wire                            io_ifu_wlast

    // B 通道 (IFU 不写)
    ,output wire                            io_ifu_bvalid
    ,input  wire                            io_ifu_bready
    ,output wire [1:0]                      io_ifu_bresp
    ,output wire [3:0]                      io_ifu_bid

    // AR 通道
    ,input  wire                            io_ifu_arvalid
    ,output wire                            io_ifu_arready
    ,input  wire [31:0]                     io_ifu_araddr
    ,input  wire [3:0]                      io_ifu_arid
    ,input  wire [7:0]                      io_ifu_arlen
    ,input  wire [2:0]                      io_ifu_arsize
    ,input  wire [1:0]                      io_ifu_arburst

    // R 通道
    ,output wire                            io_ifu_rvalid
    ,input  wire                            io_ifu_rready
    ,output wire [1:0]                      io_ifu_rresp
    ,output wire [31:0]                     io_ifu_rdata
    ,output wire                            io_ifu_rlast
    ,output wire [3:0]                      io_ifu_rid

    //================== LSU 侧 (master1, 仲裁器作为 slave) ==================
    // AW 通道
    ,input  wire                            io_lsu_awvalid
    ,output wire                            io_lsu_awready
    ,input  wire [31:0]                     io_lsu_awaddr
    ,input  wire [3:0]                      io_lsu_awid
    ,input  wire [7:0]                      io_lsu_awlen
    ,input  wire [2:0]                      io_lsu_awsize
    ,input  wire [1:0]                      io_lsu_awburst

    // W 通道
    ,input  wire                            io_lsu_wvalid
    ,output wire                            io_lsu_wready
    ,input  wire [31:0]                     io_lsu_wdata
    ,input  wire [3:0]                      io_lsu_wstrb
    ,input  wire                            io_lsu_wlast

    // B 通道
    ,output wire                            io_lsu_bvalid
    ,input  wire                            io_lsu_bready
    ,output wire [1:0]                      io_lsu_bresp
    ,output wire [3:0]                      io_lsu_bid

    // AR 通道
    ,input  wire                            io_lsu_arvalid
    ,output wire                            io_lsu_arready
    ,input  wire [31:0]                     io_lsu_araddr
    ,input  wire [3:0]                      io_lsu_arid
    ,input  wire [7:0]                      io_lsu_arlen
    ,input  wire [2:0]                      io_lsu_arsize
    ,input  wire [1:0]                      io_lsu_arburst

    // R 通道
    ,output wire                            io_lsu_rvalid
    ,input  wire                            io_lsu_rready
    ,output wire [1:0]                      io_lsu_rresp
    ,output wire [31:0]                     io_lsu_rdata
    ,output wire                            io_lsu_rlast
    ,output wire [3:0]                      io_lsu_rid

    //================== Memory 侧 (仲裁器作为 master) ==================
    // AW 通道
    ,output wire                            io_master_awvalid
    ,input  wire                            io_master_awready
    ,output wire [31:0]                     io_master_awaddr
    ,output wire [3:0]                      io_master_awid
    ,output wire [7:0]                      io_master_awlen
    ,output wire [2:0]                      io_master_awsize
    ,output wire [1:0]                      io_master_awburst

    // W 通道
    ,output wire                            io_master_wvalid
    ,input  wire                            io_master_wready
    ,output wire [31:0]                     io_master_wdata
    ,output wire [3:0]                      io_master_wstrb
    ,output wire                            io_master_wlast

    // B 通道
    ,input  wire                            io_master_bvalid
    ,output wire                            io_master_bready
    ,input  wire [1:0]                      io_master_bresp
    ,input  wire [3:0]                      io_master_bid

    // AR 通道
    ,output wire                            io_master_arvalid
    ,input  wire                            io_master_arready
    ,output wire [31:0]                     io_master_araddr
    ,output wire [3:0]                      io_master_arid
    ,output wire [7:0]                      io_master_arlen
    ,output wire [2:0]                      io_master_arsize
    ,output wire [1:0]                      io_master_arburst

    // R 通道
    ,input  wire                            io_master_rvalid
    ,output wire                            io_master_rready
    ,input  wire [1:0]                      io_master_rresp
    ,input  wire [31:0]                     io_master_rdata
    ,input  wire                            io_master_rlast
    ,input  wire [3:0]                      io_master_rid
);

//==========================================================================
// 仲裁状态机
// IDLE: 空闲, 等待请求
// LSU_READ:  LSU 读事务进行中
// LSU_WRITE: LSU 写事务进行中
// IFU_READ:  IFU 读事务进行中
//==========================================================================
localparam [1:0] S_IDLE      = 2'd0;
localparam [1:0] S_LSU_READ  = 2'd1;
localparam [1:0] S_LSU_WRITE = 2'd2;
localparam [1:0] S_IFU_READ  = 2'd3;

reg [1:0] state;
reg [1:0] next_state;

// LSU 有任何请求 (读或写)
wire lsu_req = io_lsu_arvalid | io_lsu_awvalid;
// IFU 只有读请求
wire ifu_req = io_ifu_arvalid;

// 读事务结束: R 通道最后一拍握手成功
wire rd_done  = io_master_rvalid & io_master_rready & io_master_rlast;
// 写事务结束: B 通道握手成功
wire wr_done  = io_master_bvalid & io_master_bready;

//----------------------- 状态转移 -----------------------
always @(posedge clk) begin
    if (rst)
        state <= S_IDLE;
    else
        state <= next_state;
end

always @(*) begin
    next_state = state;
    case (state)
        S_IDLE: begin
            // LSU 优先
            if (io_lsu_awvalid)
                next_state = S_LSU_WRITE;
            else if (io_lsu_arvalid)
                next_state = S_LSU_READ;
            else if (io_ifu_arvalid)
                next_state = S_IFU_READ;
        end
        S_LSU_READ: begin
            if (rd_done) next_state = S_IDLE;
        end
        S_LSU_WRITE: begin
            if (wr_done) next_state = S_IDLE;
        end
        S_IFU_READ: begin
            if (rd_done) next_state = S_IDLE;
        end
        default: next_state = S_IDLE;
    endcase
end

//==========================================================================
// 选择信号
//==========================================================================
wire sel_lsu_rd  = (state == S_LSU_READ);
wire sel_lsu_wr  = (state == S_LSU_WRITE);
wire sel_ifu_rd  = (state == S_IFU_READ);
wire sel_lsu     = sel_lsu_rd | sel_lsu_wr;

//==========================================================================
// AW 通道: 仅 LSU 写时连接, 其余时刻拉低
//==========================================================================
assign io_master_awvalid = sel_lsu_wr ? io_lsu_awvalid : 1'b0;
assign io_master_awaddr  = sel_lsu_wr ? io_lsu_awaddr  : 32'b0;
assign io_master_awid    = sel_lsu_wr ? io_lsu_awid    : 4'b0;
assign io_master_awlen   = sel_lsu_wr ? io_lsu_awlen   : 8'b0;
assign io_master_awsize  = sel_lsu_wr ? io_lsu_awsize  : 3'b0;
assign io_master_awburst = sel_lsu_wr ? io_lsu_awburst : 2'b0;

assign io_lsu_awready    = sel_lsu_wr ? io_master_awready : 1'b0;
assign io_ifu_awready    = 1'b0; // IFU 永远不写

//==========================================================================
// W 通道: 仅 LSU 写时连接
//==========================================================================
assign io_master_wvalid  = sel_lsu_wr ? io_lsu_wvalid  : 1'b0;
assign io_master_wdata   = sel_lsu_wr ? io_lsu_wdata   : 32'b0;
assign io_master_wstrb   = sel_lsu_wr ? io_lsu_wstrb   : 4'b0;
assign io_master_wlast   = sel_lsu_wr ? io_lsu_wlast   : 1'b0;

assign io_lsu_wready     = sel_lsu_wr ? io_master_wready : 1'b0;
assign io_ifu_wready     = 1'b0; // IFU 永远不写

//==========================================================================
// B 通道: 仅 LSU 写时连接
//==========================================================================
assign io_lsu_bvalid     = sel_lsu_wr ? io_master_bvalid : 1'b0;
assign io_lsu_bresp      = sel_lsu_wr ? io_master_bresp  : 2'b0;
assign io_lsu_bid        = sel_lsu_wr ? io_master_bid    : 4'b0;
assign io_master_bready  = sel_lsu_wr ? io_lsu_bready    : 1'b0;

// IFU B 通道: 永远无效
assign io_ifu_bvalid     = 1'b0;
assign io_ifu_bresp      = 2'b0;
assign io_ifu_bid        = 4'b0;

//==========================================================================
// AR 通道: LSU 读或 IFU 读时连接
//==========================================================================
assign io_master_arvalid = sel_lsu_rd  ? io_lsu_arvalid :
                           sel_ifu_rd  ? io_ifu_arvalid :
                           1'b0;
assign io_master_araddr  = sel_lsu_rd  ? io_lsu_araddr  :
                           sel_ifu_rd  ? io_ifu_araddr  :
                           32'b0;
assign io_master_arid    = sel_lsu_rd  ? io_lsu_arid    :
                           sel_ifu_rd  ? io_ifu_arid    :
                           4'b0;
assign io_master_arlen   = sel_lsu_rd  ? io_lsu_arlen   :
                           sel_ifu_rd  ? io_ifu_arlen   :
                           8'b0;
assign io_master_arsize  = sel_lsu_rd  ? io_lsu_arsize  :
                           sel_ifu_rd  ? io_ifu_arsize  :
                           3'b0;
assign io_master_arburst = sel_lsu_rd  ? io_lsu_arburst :
                           sel_ifu_rd  ? io_ifu_arburst :
                           2'b0;

assign io_lsu_arready    = sel_lsu_rd  ? io_master_arready : 1'b0;
assign io_ifu_arready    = sel_ifu_rd  ? io_master_arready : 1'b0;

//==========================================================================
// R 通道: 把 slave 的读响应路由回对应 master
//==========================================================================
assign io_lsu_rvalid     = sel_lsu_rd  ? io_master_rvalid : 1'b0;
assign io_lsu_rdata      = sel_lsu_rd  ? io_master_rdata  : 32'b0;
assign io_lsu_rresp      = sel_lsu_rd  ? io_master_rresp  : 2'b0;
assign io_lsu_rlast      = sel_lsu_rd  ? io_master_rlast  : 1'b0;
assign io_lsu_rid        = sel_lsu_rd  ? io_master_rid    : 4'b0;

assign io_ifu_rvalid     = sel_ifu_rd  ? io_master_rvalid : 1'b0;
assign io_ifu_rdata      = sel_ifu_rd  ? io_master_rdata  : 32'b0;
assign io_ifu_rresp      = sel_ifu_rd  ? io_master_rresp  : 2'b0;
assign io_ifu_rlast      = sel_ifu_rd  ? io_master_rlast  : 1'b0;
assign io_ifu_rid        = sel_ifu_rd  ? io_master_rid    : 4'b0;

assign io_master_rready  = sel_lsu_rd  ? io_lsu_rready    :
                           sel_ifu_rd  ? io_ifu_rready    :
                           1'b0;

endmodule
