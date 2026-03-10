`include "define.v"

module ysyx_25060170_arbiter(
     input  wire         clk
    ,input  wire         rst

    //==================== IFU side ====================
    // AR
    ,input  wire         ifu_arb_arvalid//IFU发送地址有效
    ,output wire         arb_ifu_arready//arbiter准备好接受读地址
    ,input  wire [31:0]  ifu_arb_araddr //IFU要发送的指令地址

    // R
    //2'b00正常访问 2'b01独占访问 2'b10从设备错误 2'b11解码错误
    ,output wire [2:0]   arb_ifu_rresp  //读响应状态(OKAY=2'b00, EXOKAY=2'b01, SLVERR=2'b10, DECERR=2'b11)
    ,output wire         arb_ifu_rvalid //返回的读数据有效
    ,input  wire         ifu_arb_rready //IFU准备好接受读数据
    ,output wire [31:0]  arb_ifu_rdata  //读取到的指令数据

    //==================== LSU side ====================
    // AW
    ,input  wire         lsu_arb_awvalid //LSU发送写地址有效
    ,output wire         arb_lsu_awready //arbiter准备好接收写地址
    ,input  wire [31:0]  lsu_arb_awaddr  //要写入的内存地址

    // W
    ,input  wire         lsu_arb_wvalid  //写数据有效
    ,output wire         arb_lsu_wready  //arbiter准备好接收写数据
    ,input  wire [31:0]  lsu_arb_wdata   //要写入的数据
    ,input  wire [3:0]   lsu_arb_wstrb   //写字节选通

    // B
    ,output wire         arb_lsu_bvalid  //写响应有效
    ,input  wire         lsu_arb_bready  //LSU准备好接收写响应
    ,output wire [1:0]   arb_lsu_bresp   //写响应状态

    // AR
    ,input  wire         lsu_arb_arvalid //LSU发送读地址有效
    ,output wire         arb_lsu_arready //arbiter准备好接收读地址
    ,input  wire [31:0]  lsu_arb_araddr  //要读取的数据地址

    // R
    ,output wire         arb_lsu_rvalid  //返回的读数据有效
    ,input  wire         lsu_arb_rready  //LSU准备好接收读数据
    ,output wire [1:0]   arb_lsu_rresp   //读响应状态
    ,output wire [31:0]  arb_lsu_rdata   //读取到的数据

    //==================== AXI4-Lite slave side ====================
    // AW
    ,output wire         arb_axi_awvalid //arbiter发送写地址有效
    ,input  wire         axi_arb_awready //arbiter准备好接收写地址
    ,output wire [31:0]  arb_axi_awaddr  //写入的地址

    // W
    ,output wire         arb_axi_wvalid  //写数据有效
    ,input  wire         axi_arb_wready  //AXI从设备准备好接收写数据
    ,output wire [31:0]  arb_axi_wdata   //写数据
    ,output wire [3:0]   arb_axi_wstrb   //写字节选通

    // B
    ,input  wire         axi_arb_bvalid  //AXI从设备返回写响应有效
    ,output wire         arb_axi_bready  //arbiter准备好接收写响应
    ,input  wire [1:0]   axi_arb_bresp   //写响应状态

    // AR
    ,output wire         arb_axi_arvalid //仲裁器发送读地址有效
    ,input  wire         axi_arb_arready //AXI从设备准备好接收读地址
    ,output wire [31:0]  arb_axi_araddr  //读地址

    // R
    ,input  wire         axi_arb_rvalid  //AXI从设备返回读数据有效
    ,output wire         arb_axi_rready  //仲裁器准备好接收读数据
    ,input  wire [1:0]   axi_arb_rresp   //读响应状态
    ,input  wire [31:0]  axi_arb_rdata   //读数据
);

//==========================================================================
// 状态机
// 单 outstanding：
//   LSU write > LSU read > IFU read
//==========================================================================
localparam [2:0] S_ARB_IDLE        = 3'd0;
localparam [2:0] S_ARB_LSU_RD_ADDR = 3'd1;
localparam [2:0] S_ARB_LSU_RD_DATA = 3'd2;
localparam [2:0] S_ARB_IFU_RD_ADDR = 3'd3;
localparam [2:0] S_ARB_IFU_RD_DATA = 3'd4;
localparam [2:0] S_ARB_LSU_WR_REQ  = 3'd5;
localparam [2:0] S_ARB_LSU_WR_RESP = 3'd6;

reg [2:0] arb_state;

// AXI4-Lite 的 AW / W 独立握手
reg aw_done;
reg w_done;

// 握手检测
wire aw_hs;
wire w_hs;
wire b_hs;
wire lsu_ar_hs;
wire ifu_ar_hs;
wire lsu_r_hs;
wire ifu_r_hs;

assign aw_hs     = arb_axi_awvalid & axi_arb_awready;
assign w_hs      = arb_axi_wvalid  & axi_arb_wready;
assign b_hs      = axi_arb_bvalid  & arb_axi_bready;
assign lsu_ar_hs = arb_axi_arvalid & axi_arb_arready & (arb_state == S_ARB_LSU_RD_ADDR);
assign ifu_ar_hs = arb_axi_arvalid & axi_arb_arready & (arb_state == S_ARB_IFU_RD_ADDR);
assign lsu_r_hs  = axi_arb_rvalid  & lsu_arb_rready  & (arb_state == S_ARB_LSU_RD_DATA);
assign ifu_r_hs  = axi_arb_rvalid  & ifu_arb_rready  & (arb_state == S_ARB_IFU_RD_DATA);

//==========================================================================
// 状态转移
//==========================================================================
always @(posedge clk) begin
    if (rst == `ysyx_25060170_RSTABLE) begin
        arb_state <= S_ARB_IDLE;
        aw_done   <= 1'b0;
        w_done    <= 1'b0;
    end
    else begin
        case (arb_state)
            S_ARB_IDLE: begin
                aw_done <= 1'b0;
                w_done  <= 1'b0;

                // LSU 优先
                if (lsu_arb_awvalid | lsu_arb_wvalid) begin
                    arb_state <= S_ARB_LSU_WR_REQ;
                end
                else if (lsu_arb_arvalid) begin
                    arb_state <= S_ARB_LSU_RD_ADDR;
                end
                else if (ifu_arb_arvalid) begin
                    arb_state <= S_ARB_IFU_RD_ADDR;
                end
            end

            //==================== LSU READ ====================
            S_ARB_LSU_RD_ADDR: begin
                if (lsu_ar_hs) begin
                    arb_state <= S_ARB_LSU_RD_DATA;
                end
            end

            S_ARB_LSU_RD_DATA: begin
                if (lsu_r_hs) begin
                    arb_state <= S_ARB_IDLE;
                end
            end

            //==================== IFU READ ====================
            S_ARB_IFU_RD_ADDR: begin
                if (ifu_ar_hs) begin
                    arb_state <= S_ARB_IFU_RD_DATA;
                end
            end

            S_ARB_IFU_RD_DATA: begin
                if (ifu_r_hs) begin
                    arb_state <= S_ARB_IDLE;
                end
            end

            //==================== LSU WRITE ====================
            S_ARB_LSU_WR_REQ: begin
                if (aw_hs)
                    aw_done <= 1'b1;
                if (w_hs)
                    w_done  <= 1'b1;

                if ( (aw_done | aw_hs) & (w_done | w_hs) ) begin
                    arb_state <= S_ARB_LSU_WR_RESP;
                end
            end

            S_ARB_LSU_WR_RESP: begin
                if (b_hs) begin
                    arb_state <= S_ARB_IDLE;
                end
            end

            default: begin
                arb_state <= S_ARB_IDLE;
                aw_done   <= 1'b0;
                w_done    <= 1'b0;
            end
        endcase
    end
end

//==========================================================================
// 输出仲裁
//==========================================================================
reg        arb_ifu_arready_r;
reg [2:0]  arb_ifu_rresp_r;
reg        arb_ifu_rvalid_r;
reg [31:0] arb_ifu_rdata_r;

reg        arb_lsu_awready_r;
reg        arb_lsu_wready_r;
reg        arb_lsu_bvalid_r;
reg [1:0]  arb_lsu_bresp_r;
reg        arb_lsu_arready_r;
reg        arb_lsu_rvalid_r;
reg [1:0]  arb_lsu_rresp_r;
reg [31:0] arb_lsu_rdata_r;

reg        arb_axi_awvalid_r;
reg [31:0] arb_axi_awaddr_r;
reg        arb_axi_wvalid_r;
reg [31:0] arb_axi_wdata_r;
reg [3:0]  arb_axi_wstrb_r;
reg        arb_axi_bready_r;
reg        arb_axi_arvalid_r;
reg [31:0] arb_axi_araddr_r;
reg        arb_axi_rready_r;

always @(*) begin
    // 默认值
    arb_ifu_arready_r = 1'b0;
    arb_ifu_rresp_r   = 3'b000;
    arb_ifu_rvalid_r  = 1'b0;
    arb_ifu_rdata_r   = 32'b0;

    arb_lsu_awready_r = 1'b0;
    arb_lsu_wready_r  = 1'b0;
    arb_lsu_bvalid_r  = 1'b0;
    arb_lsu_bresp_r   = 2'b00;
    arb_lsu_arready_r = 1'b0;
    arb_lsu_rvalid_r  = 1'b0;
    arb_lsu_rresp_r   = 2'b00;
    arb_lsu_rdata_r   = 32'b0;

    arb_axi_awvalid_r = 1'b0;
    arb_axi_awaddr_r  = 32'b0;
    arb_axi_wvalid_r  = 1'b0;
    arb_axi_wdata_r   = 32'b0;
    arb_axi_wstrb_r   = 4'b0000;
    arb_axi_bready_r  = 1'b0;
    arb_axi_arvalid_r = 1'b0;
    arb_axi_araddr_r  = 32'b0;
    arb_axi_rready_r  = 1'b0;

    case (arb_state)
        //==================== LSU READ ====================
        S_ARB_LSU_RD_ADDR: begin
            arb_axi_arvalid_r = lsu_arb_arvalid;
            arb_axi_araddr_r  = lsu_arb_araddr;
            arb_lsu_arready_r = axi_arb_arready;
        end

        S_ARB_LSU_RD_DATA: begin
            arb_lsu_rvalid_r  = axi_arb_rvalid;
            arb_lsu_rresp_r   = axi_arb_rresp;
            arb_lsu_rdata_r   = axi_arb_rdata;
            arb_axi_rready_r  = lsu_arb_rready;
        end

        //==================== IFU READ ====================
        S_ARB_IFU_RD_ADDR: begin
            arb_axi_arvalid_r = ifu_arb_arvalid;
            arb_axi_araddr_r  = ifu_arb_araddr;
            arb_ifu_arready_r = axi_arb_arready;
        end

        S_ARB_IFU_RD_DATA: begin
            arb_ifu_rvalid_r  = axi_arb_rvalid;
            arb_ifu_rresp_r   = {1'b0, axi_arb_rresp};
            arb_ifu_rdata_r   = axi_arb_rdata;
            arb_axi_rready_r  = ifu_arb_rready;
        end

        //==================== LSU WRITE ====================
        S_ARB_LSU_WR_REQ: begin
            arb_axi_awvalid_r = lsu_arb_awvalid & (~aw_done);
            arb_axi_awaddr_r  = lsu_arb_awaddr;
            arb_lsu_awready_r = axi_arb_awready & (~aw_done);

            arb_axi_wvalid_r  = lsu_arb_wvalid & (~w_done);
            arb_axi_wdata_r   = lsu_arb_wdata;
            arb_axi_wstrb_r   = lsu_arb_wstrb;
            arb_lsu_wready_r  = axi_arb_wready & (~w_done);
        end

        S_ARB_LSU_WR_RESP: begin
            arb_lsu_bvalid_r  = axi_arb_bvalid;
            arb_lsu_bresp_r   = axi_arb_bresp;
            arb_axi_bready_r  = lsu_arb_bready;
        end

        default: begin
        end
    endcase
end

//output signals
assign arb_ifu_arready = arb_ifu_arready_r;
assign arb_ifu_rresp   = arb_ifu_rresp_r;
assign arb_ifu_rvalid  = arb_ifu_rvalid_r;
assign arb_ifu_rdata   = arb_ifu_rdata_r;

assign arb_lsu_awready = arb_lsu_awready_r;
assign arb_lsu_wready  = arb_lsu_wready_r;
assign arb_lsu_bvalid  = arb_lsu_bvalid_r;
assign arb_lsu_bresp   = arb_lsu_bresp_r;
assign arb_lsu_arready = arb_lsu_arready_r;
assign arb_lsu_rvalid  = arb_lsu_rvalid_r;
assign arb_lsu_rresp   = arb_lsu_rresp_r;
assign arb_lsu_rdata   = arb_lsu_rdata_r;

assign arb_axi_awvalid = arb_axi_awvalid_r;
assign arb_axi_awaddr  = arb_axi_awaddr_r;
assign arb_axi_wvalid  = arb_axi_wvalid_r;
assign arb_axi_wdata   = arb_axi_wdata_r;
assign arb_axi_wstrb   = arb_axi_wstrb_r;
assign arb_axi_bready  = arb_axi_bready_r;
assign arb_axi_arvalid = arb_axi_arvalid_r;
assign arb_axi_araddr  = arb_axi_araddr_r;
assign arb_axi_rready  = arb_axi_rready_r;

endmodule
