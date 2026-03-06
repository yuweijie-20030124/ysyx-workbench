`include "define.v"

module ysyx_25060170_arbiter(
     input  wire         clk
    ,input  wire         rst

    //==================== IFU side ====================
    // AR
    ,input  wire         ifu_arb_arvalid
    ,output wire         arb_ifu_arready
    ,input  wire [31:0]  ifu_arb_araddr

    // R
    ,output wire [2:0]   arb_ifu_rresp
    ,output wire         arb_ifu_rvalid
    ,input  wire         ifu_arb_rready
    ,output wire [31:0]  arb_ifu_rdata

    //==================== LSU side ====================
    // AW
    ,input  wire         lsu_arb_awvalid
    ,output wire         arb_lsu_awready
    ,input  wire [31:0]  lsu_arb_awaddr

    // W
    ,input  wire         lsu_arb_wvalid
    ,output wire         arb_lsu_wready
    ,input  wire [31:0]  lsu_arb_wdata
    ,input  wire [3:0]   lsu_arb_wstrb

    // B
    ,output wire         arb_lsu_bvalid
    ,input  wire         lsu_arb_bready
    ,output wire [1:0]   arb_lsu_bresp

    // AR
    ,input  wire         lsu_arb_arvalid
    ,output wire         arb_lsu_arready
    ,input  wire [31:0]  lsu_arb_araddr

    // R
    ,output wire         arb_lsu_rvalid
    ,input  wire         lsu_arb_rready
    ,output wire [1:0]   arb_lsu_rresp
    ,output wire [31:0]  arb_lsu_rdata

    //==================== AXI4-Lite slave side ====================
    // AW
    ,output wire         arb_axi_awvalid
    ,input  wire         axi_arb_awready
    ,output wire [31:0]  arb_axi_awaddr

    // W
    ,output wire         arb_axi_wvalid
    ,input  wire         axi_arb_wready
    ,output wire [31:0]  arb_axi_wdata
    ,output wire [3:0]   arb_axi_wstrb

    // B
    ,input  wire         axi_arb_bvalid
    ,output wire         arb_axi_bready
    ,input  wire [1:0]   axi_arb_bresp

    // AR
    ,output wire         arb_axi_arvalid
    ,input  wire         axi_arb_arready
    ,output wire [31:0]  arb_axi_araddr

    // R
    ,input  wire         axi_arb_rvalid
    ,output wire         arb_axi_rready
    ,input  wire [1:0]   axi_arb_rresp
    ,input  wire [31:0]  axi_arb_rdata
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
            arb_ifu_rresp_r   = {1'b0, axi_arb_rresp}; // 兼容你 IFU 里 [2:0] 的定义
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

//==========================================================================
// 连线输出
//==========================================================================
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
