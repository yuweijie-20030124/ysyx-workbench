`include "define.v"

module ysyx_25060170_csr(
   input  wire                        clk              //<<i<<
  ,input  wire                        rst              //<<i<<
  ,input  wire [3:0]                  csr_ctl          //<<i<<  {csr_wr_ena, csr_rd_ena, ecall_ena, mret_ena}
  ,input  wire [11:0]                 csr_addr         //<<i<<
  ,input  wire [`ysyx_25060170_REG]   mcause_value     //<<i<<
  ,input  wire [`ysyx_25060170_DATA]  write_csr_data   //<<i<<
  ,output wire [`ysyx_25060170_DATA]  read_csr_data    //>>o>>
  //fordifftest to DPIC
  ,output wire [`ysyx_25060170_REG]   mhartid_o        //>>o>>
  ,output wire [`ysyx_25060170_REG]   mstatus_o        //>>o>>
  ,output wire [`ysyx_25060170_REG]   mepc_o           //>>o>>
  ,output wire [`ysyx_25060170_REG]   mtvec_o          //>>o>>
  ,output wire [`ysyx_25060170_REG]   mcause_o         //>>o>>
  ,output wire [`ysyx_25060170_REG]   mscratch_o        //>>o>>

);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 0X300 mstatus 用于记录并控制核心当前的运行状态，在S级指令集中，mstatus的简化视图表现为sstatus寄存器 RV32 最复杂的一个csr寄存器
// 31 30-25 24  23    22  21 20  19  18  17   16-15   14-13   12-11    10-9    8   7    6   5    4    3   2    1   0
// SD WPRI  SDT SPELP TSR TW TVM MXR SUM MPRV XS[1:0] FS[1:0] MPP[1:0] VS[1:0] SPP MPIE UBE SPIE WPRI MIE WPRI SIE WPRI
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

wire mstatus_rd = (csr_addr == 12'h300) && csr_ctl[2];
wire mstatus_wr = (csr_addr == 12'h300) && csr_ctl[3];
reg mstatus_mie;
reg mstatus_mpie;
reg [1:0] mstatus_mpp;
reg [`ysyx_25060170_REG] mstatus;  // 删除初始赋值

wire mstatus_ie_ena = mstatus_wr | csr_ctl[1] | csr_ctl[0];

wire mie_set = csr_ctl[1] ? 1'b0 : 
               csr_ctl[0] ? mstatus_mpie : 
                            mstatus_wr ? write_csr_data[3] :
                            mstatus_mie;

wire mpie_set = csr_ctl[1] ? mstatus_mie :
                csr_ctl[0] ? 1'b1 :
                            mstatus_wr ? write_csr_data[7] :
                            mstatus_mpie;

wire [1:0] mpp_set =  csr_ctl[1] ? 2'b11 : 
                      csr_ctl[0] ? 2'b00 :
                                   mstatus_wr ? write_csr_data[14:13] :
                                   mstatus_mpp;

always@(posedge clk) begin
  if(rst == `ysyx_25060170_RSTABLE) begin 
    mstatus <= `ysyx_25060170_ZERO32;  // 复位时初始化
  end
  else if(mstatus_ie_ena) begin 
    mstatus_mie <= mie_set;
    mstatus_mpie <= mpie_set;
    mstatus_mpp <= mpp_set; 
  end
  else begin 
    mstatus <= mstatus;
  end
end

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 0x305 mtvec
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
wire mtvec_rd = ((csr_addr  == 12'h305) && csr_ctl[2]) | csr_ctl[1];
wire mtvec_wr = ((csr_addr == 12'h305) && csr_ctl[3]);

reg [31:2] mtvec_base;  // 修改为32位寄存器
always@(posedge clk) begin
  if(rst == `ysyx_25060170_RSTABLE) begin 
    mtvec_base <= 30'd0;  // 32位
  end
  else if(mtvec_wr) begin 
    mtvec_base <= write_csr_data[31:2];  // 修改为32位基址
  end
  else begin 
    mtvec_base <= mtvec_base; 
  end
end

wire [1:0] mtvec_mode;
assign mtvec_mode = 2'b00;
wire [`ysyx_25060170_REG] mtvec = {mtvec_base, mtvec_mode};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 0x341 mepc
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
wire mepc_rd = ((csr_addr  == 12'h341) && csr_ctl[2]) | csr_ctl[0];
wire mepc_wr = ((csr_addr == 12'h341) && csr_ctl[3]) | csr_ctl[1];

reg [`ysyx_25060170_REG] mepc;
always@(posedge clk) begin
  if(rst == `ysyx_25060170_RSTABLE) begin 
    mepc <= `ysyx_25060170_ZERO32; 
  end
  else if(mepc_wr) begin 
    mepc <= write_csr_data; 
  end
  else begin 
    mepc <= mepc;
  end
end

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 0x342 mcause
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
wire mcause_rd = ((csr_addr  == 12'h342) && csr_ctl[2]);
wire mcause_wr = ((csr_addr == 12'h342) && csr_ctl[3]);
reg [`ysyx_25060170_REG] mcause;

always@(posedge clk) begin
  if(rst == `ysyx_25060170_RSTABLE) begin 
    mcause <= `ysyx_25060170_ZERO32; 
  end
  else if(mcause_wr) begin 
    mcause <= write_csr_data; 
  end
  else if(csr_ctl[1]) begin 
    mcause <= mcause_value; 
  end
  else begin 
    mcause <= mcause;
  end
end

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 0xf12 存放hart编号 存储着正在执行代码的硬件线程的整数标识符
// 由于现在只有单核，他永远是0，只读寄存器，代表核的编号
// 操作系统启动的时候先唤醒0编号的cpu，再唤醒其他cpu
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// wire mhartid_wr = ((write_csr_addr == 12'hf12) && csr_ctl[3]);
// reg [`ysyx_25060170_REG] mhartid;

// always@(posedge clk) begin
//   if(rst == `ysyx_25060170_RSTABLE) begin 
//     mhartid <= `ysyx_25060170_ZERO32; 
//   end
//   else if(mcause_wr) begin 
//     mhartid <= write_csr_data; 
//   end
//   else begin 
//     mhartid <= mhartid;
//   end
// end

wire mhartid_rd = ((csr_addr  == 12'hf12) && csr_ctl[2]);

reg [`ysyx_25060170_REG] mhartid = 0;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 临时寄存器可读可写            0x340 mscratch
// 用于保存指向机器模式 hart 本地上下文空间的指针，并在进入 M 模式陷阱处理程序时与用户寄存器进行交换。
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
wire mscratch_rd = ((csr_addr  == 12'h340) && csr_ctl[2]);
wire mscratch_wr = ((csr_addr == 12'h340) && csr_ctl[3]);
reg [`ysyx_25060170_REG] mscratch;

always@(posedge clk) begin
  if(rst == `ysyx_25060170_RSTABLE) begin 
    mscratch <= `ysyx_25060170_ZERO32; 
  end
  else if(mscratch_wr) begin 
    mscratch <= write_csr_data; 
  end
  else begin 
    mscratch <= mscratch;
  end
end




///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Read CSR Data
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
assign read_csr_data = mstatus_rd ? mstatus :
                       mepc_rd    ? mepc    :
                       mtvec_rd   ? mtvec   : 
                       mcause_rd  ? mcause  :
                       mscratch_rd? mscratch:
                       mhartid_rd ? mhartid :
                       `ysyx_25060170_ZERO32;


//difftest to DPIC
assign mstatus_o  = mstatus  ;
assign mepc_o     = mepc     ;
assign mtvec_o    = mtvec    ;
assign mcause_o   = mcause   ;
assign mhartid_o  = mhartid  ;
assign mscratch_o = mscratch ;

endmodule

