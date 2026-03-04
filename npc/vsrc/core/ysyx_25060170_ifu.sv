`include "define.v"

//获取正确pc，并传给inst ram 改造为AXI4-Lite总线的形式

//信号起名 什么模块传出_什么模块传进_信号名字

//之前我把valid写为0有效，现在全部改过来符合规范吧。

//很重要的一点 主机和从机的属性全部都要是reg，因此要用always_ff来操作
module ysyx_25060170_ifu(
     input  logic                           rst
    ,input  logic                           clk
    ,input  logic [`ysyx_25060170_PC]       idu_ifu_jump_pc
    ,input  logic                           idu_ifu_jump
    ,input  logic [`ysyx_25060170_PC]       bpu_ifu_jump_pc
    ,input  logic                           btb_predictedTaken      //bpu预测发生跳转
    ,input  logic                           bpu_ifu_bpuvalid       //bpu传进去的pctag找到了跳转的地址 有效为1
    ,input  logic [`ysyx_25060170_PC]       lsu_ifu_jump_pc
    ,input  logic                           lsu_ifu_jump

    //stage control signal
    ,input  logic                           idu_ifu_ready
    ,input  logic                           idu_ifu_stall
    ,output logic                           

    //output to inst ram
    ,output logic [`ysyx_25060170_PC]       ifu_if1if2reg_current_pc //既给ram又给idu

    //output to ifu_ifidreg
    ,output logic [`ysyx_25060170_PC]       ifu_if1if2reg_next_pc
    ,output logic [`ysyx_25060170_INST]     ifu_ididreg_inst
    ,output logic                           ifu_ifidreg_bpupredict
    ,output logic                           ifu_ifidreg_bpu_valid
    // ,output logic                           ifu


    //AXI4-Lite接口 to memory/总线
    // 写地址通道   Write address channel
    ,output logic        ifu_arb_awvalid    // 写地址有效信号
    ,input  logic        arb_ifu_awready    // 从机准备好接收地址
    ,output logic [31:0] ifu_arb_awaddr     // 写地址
    ,output logic [2:0]  ifu_arb_awprot     // 写保护类型（通常不用）
    
    // 写数据通道   Write data channel
    ,output logic        ifu_arb_wvalid     // 写数据有效信号
    ,input  logic        arb_ifu_wready     // 从机准备好接收数据
    ,output logic [31:0] ifu_arb_wdata      // 写数据
    ,output logic [3:0]  ifu_arb_wstrb      // 写数据字节使能信号
    
    // 写响应通道 Write response channel
    ,input  logic        arb_ifu_bvalid     // 响应有效
    ,output logic        ifu_arb_bready     // 主机准备好接受响应
    ,input  logic [1:0]  arb_ifu_bresp      // 写响应（00成功，其他不成功）
    
    // 读地址通道 Read address channel
    ,output logic        ifu_arb_arvalid    // 读地址有效
    ,input  logic        arb_ifu_arready    // 从机准备好接收地址
    ,output logic [31:0] ifu_arb_araddr     // 读地址
    ,output logic [2:0]  ifu_arb_arprot     // 保护类型
    
    // 读数据通道 Read data channel
    ,input  logic        arb_ifu_rvalid     // 读数据有效
    ,output logic        ifu_arb_rready     // 主机准备好接收数据
    ,input  logic [31:0] arb_ifu_rdata      // 读数据
    ,input  logic [1:0]  arb_ifu_rresp      // 读响应（00成功，其他不成功）


);


//流水线控制
wire stall = idu_ifu_stall ;
assign ifu_ifidreg_valid = 1'b0; //todo


always_ff @(posedge clk) begin
    if(rst) begin
        ifu_if1if2reg_current_pc <= `ysyx_25060170_STARTPC;
    end
    else begin
        if(stall) begin
            ifu_if1if2reg_current_pc <= ifu_if1if2reg_current_pc;
        end
        else if(idu_ifu_jump) begin
            ifu_if1if2reg_current_pc <= idu_ifu_jump_pc;
        end
        else if(lsu_ifu_jump) begin
            ifu_if1if2reg_current_pc <= lsu_ifu_jump_pc;
        end
        else if(bpu_ifu_bpuvalid & btb_predictedTaken) begin
            ifu_if1if2reg_current_pc <= bpu_ifu_jump_pc;
        end
        
        else begin
            ifu_if1if2reg_current_pc <= ifu_if1if2reg_current_pc + 32'd4;
        end
    end
end
//****************************************总线控制*****************************************************//



//output to next stage
assign ifu_if1if2reg_next_pc    = ifu_if1if2reg_current_pc + `ysyx_25060170_PLUS4;
assign ifu_ifidreg_ = btb_predictedTaken;
assign ifu_ifidreg_bpu_valid   = bpu_ifu_bpuvalid;
// assign ifu_ididreg_inst = arb_ifu_rdata; 
endmodule

