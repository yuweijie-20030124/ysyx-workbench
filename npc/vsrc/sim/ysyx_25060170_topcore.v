`include "define.v"

module ysyx_25060170_topcore(
 input wire     clock			
,input wire     reset
,input wire     io_interrupt

//接入总线
//AXI4 Master总线
//AW
,input  wire                            io_master_awready 
,output wire                            io_master_awvalid 
,output wire [31:0]                     io_master_awaddr  
,output wire [3:0]                      io_master_awid    
,output wire [7:0]                      io_master_awlen   
,output wire [2:0]                      io_master_awsize  
,output wire [1:0]                      io_master_awburst 
//W
,input  wire                            io_master_wready  
,output wire                            io_master_wvalid  
,output wire [31:0]                     io_master_wdata   
,output wire [3:0]                      io_master_wstrb   
,output wire                            io_master_wlast   
//B
,output wire                            io_master_bready  
,input  wire                            io_master_bvalid  
,input  wire [1:0]                      io_master_bresp   
,input  wire [3:0]                      io_master_bid     
//AR
,input  wire                            io_master_arready 
,output wire                            io_master_arvalid 
,output wire [31:0]                     io_master_araddr  
,output wire [3:0]                      io_master_arid    
,output wire [7:0]                      io_master_arlen   
,output wire [2:0]                      io_master_arsize  
,output wire [1:0]                      io_master_arburst 
//R
,output wire                            io_master_rready  
,input  wire                            io_master_rvalid  
,input  wire [1:0]                      io_master_rresp   
,input  wire [31:0]                     io_master_rdata   
,input  wire                            io_master_rlast   
,input  wire                            io_master_rid     

//AXI4 Slave总线
//AW
,output wire                            io_slave_awready  //unused
,input  wire                            io_slave_awvalid  
,input  wire [31:0]                     io_slave_awaddr   
,input  wire [3:0]                      io_slave_awid     
,input  wire [7:0]                      io_slave_awlen    
,input  wire [2:0]                      io_slave_awsize   
,input  wire [1:0]                      io_slave_awburst  
//W
,output wire                            io_slave_wready   //unused
,input  wire                            io_slave_wvalid   
,input  wire [31:0]                     io_slave_wdata    
,input  wire [3:0]                      io_slave_wstrb    
,input  wire                            io_slave_wlast    
//B
,input  wire                            io_slave_bready   
,output wire                            io_slave_bvalid   //unused
,output wire [1:0]                      io_slave_bresp    //unused
,output wire [3:0]                      io_slave_bid      //unused
//AR
,output wire                            io_slave_arready  //unused
,input  wire                            io_slave_arvalid  
,input  wire [31:0]                     io_slave_araddr   
,input  wire [3:0]                      io_slave_arid     
,input  wire [7:0]                      io_slave_arlen    
,input  wire [2:0]                      io_slave_arsize   
,input  wire [1:0]                      io_slave_arburst  
//R
,input  wire                            io_slave_rready      
,output wire                            io_slave_rvalid   //unused
,output wire [1:0]                      io_slave_rresp    //unused
,output wire [31:0]                     io_slave_rdata    //unused
,output wire                            io_slave_rlast    //unused
,output wire [3:0]                      io_slave_rid      //unused
);

wire [`ysyx_25060170_PC]        DPIC_if_id_pc             ;  
reg  [`ysyx_25060170_INST]      DPIC_dpic_ifu_inst        ;
wire  	                        DPIC_ls_mem_re            ;
wire  					        DPIC_ls_dpic_we           ;
wire [`ysyx_25060170_DATA]      DPIC_ls_dpic_data         ;
wire [7:0]                      DPIC_ls_dpic_wlen         ;
wire [7:0]                      DPIC_ls_dpic_rlen         ;
wire [`ysyx_25060170_INST]      DPIC_wbu_dpic_inst	      ;
wire [`ysyx_25060170_PC]        DPIC_wbu_dpic_pc	      ;
wire [`ysyx_25060170_PC]        DPIC_wbu_dpic_next_pc	  ;     
wire                            DPIC_wbu_dpic_valid       ;
wire [`ysyx_25060170_DATA]      DPIC_DPIC_MEM_data        ;
wire [`ysyx_25060170_DATAADDR]  DPIC_ls_dpic_raddr        ;
wire [`ysyx_25060170_DATAADDR]  DPIC_ls_dpic_waddr        ;

ysyx_25060170_fishtailcore u_ysyx_25060170_fishtailcore (
     .clock                    (clock                     )
    ,.reset                    (reset                     )
    ,.io_interrupt             (io_interrupt              )
    ,.DPIC_if_id_pc            (DPIC_if_id_pc             )
    ,.DPIC_dpic_ifu_inst       (DPIC_dpic_ifu_inst        )
    ,.DPIC_ls_mem_re           (DPIC_ls_mem_re     )
    ,.DPIC_ls_dpic_we          (DPIC_ls_dpic_we    )
    ,.DPIC_ls_dpic_data        (DPIC_ls_dpic_data         )
    ,.DPIC_ls_dpic_wlen        (DPIC_ls_dpic_wlen         )
    ,.DPIC_ls_dpic_rlen        (DPIC_ls_dpic_rlen         )
    ,.DPIC_wbu_dpic_inst	   (DPIC_wbu_dpic_inst	      )//
    ,.DPIC_wbu_dpic_pc	       (DPIC_wbu_dpic_pc	      )//
    ,.DPIC_wbu_dpic_next_pc	   (DPIC_wbu_dpic_next_pc	  )//
    ,.DPIC_wbu_dpic_valid      (DPIC_wbu_dpic_valid)//
    ,.DPIC_DPIC_MEM_data       (DPIC_DPIC_MEM_data        )
    ,.DPIC_ls_dpic_raddr       (DPIC_ls_dpic_raddr        )//
    ,.DPIC_ls_dpic_waddr       (DPIC_ls_dpic_waddr        )//
    //core bus
    ,.io_master_awready        (io_master_awready         )      
    ,.io_master_awvalid        (io_master_awvalid         )      
    ,.io_master_awaddr         (io_master_awaddr          )       
    ,.io_master_awid           (io_master_awid            )         
    ,.io_master_awlen          (io_master_awlen           )        
    ,.io_master_awsize         (io_master_awsize          )       
    ,.io_master_awburst        (io_master_awburst         )      
    ,.io_master_wready         (io_master_wready          )       
    ,.io_master_wvalid         (io_master_wvalid          )       
    ,.io_master_wdata          (io_master_wdata           )        
    ,.io_master_wstrb          (io_master_wstrb           )        
    ,.io_master_wlast          (io_master_wlast           )        
    ,.io_master_bready         (io_master_bready          )       
    ,.io_master_bvalid         (io_master_bvalid          )       
    ,.io_master_bresp          (io_master_bresp           )        
    ,.io_master_bid            (io_master_bid             )      
    ,.io_master_arready        (io_master_arready         )      
    ,.io_master_arvalid        (io_master_arvalid         )      
    ,.io_master_araddr         (io_master_araddr          )       
    ,.io_master_arid           (io_master_arid            )         
    ,.io_master_arlen          (io_master_arlen           )        
    ,.io_master_arsize         (io_master_arsize          )       
    ,.io_master_arburst        (io_master_arburst         )      
    ,.io_master_rready         (io_master_rready          )       
    ,.io_master_rvalid         (io_master_rvalid          )       
    ,.io_master_rresp          (io_master_rresp           )        
    ,.io_master_rdata          (io_master_rdata           )        
    ,.io_master_rlast          (io_master_rlast           )        
    ,.io_master_rid            (io_master_rid             )      
    ,.io_slave_awready         (io_slave_awready          )//unused)       //unused
    ,.io_slave_awvalid         (io_slave_awvalid          )       
    ,.io_slave_awaddr          (io_slave_awaddr           )        
    ,.io_slave_awid            (io_slave_awid             )      
    ,.io_slave_awlen           (io_slave_awlen            )         
    ,.io_slave_awsize          (io_slave_awsize           )        
    ,.io_slave_awburst         (io_slave_awburst          )       
    ,.io_slave_wready          (io_slave_wready           )//unused)        //unused
    ,.io_slave_wvalid          (io_slave_wvalid           )        
    ,.io_slave_wdata           (io_slave_wdata            )         
    ,.io_slave_wstrb           (io_slave_wstrb            )         
    ,.io_slave_wlast           (io_slave_wlast            )         
    ,.io_slave_bready          (io_slave_bready           )        
    ,.io_slave_bvalid          (io_slave_bvalid           )//unused)        //unused
    ,.io_slave_bresp           (io_slave_bresp            )//unused)         //unused
    ,.io_slave_bid             (io_slave_bid              )//unused)       //unused
    ,.io_slave_arready         (io_slave_arready          )//unused)       //unused
    ,.io_slave_arvalid         (io_slave_arvalid          )       
    ,.io_slave_araddr          (io_slave_araddr           )        
    ,.io_slave_arid            (io_slave_arid             )      
    ,.io_slave_arlen           (io_slave_arlen            )         
    ,.io_slave_arsize          (io_slave_arsize           )        
    ,.io_slave_arburst         (io_slave_arburst          )       
    ,.io_slave_rready          (io_slave_rready           )           
    ,.io_slave_rvalid          (io_slave_rvalid           )//unused)        //unused
    ,.io_slave_rresp           (io_slave_rresp            )//unused)         //unused
    ,.io_slave_rdata           (io_slave_rdata            )//unused)         //unused
    ,.io_slave_rlast           (io_slave_rlast            )//unused)         //unused
    ,.io_slave_rid             (io_slave_rid              )//unused)       //unused

);

// //ls_mem
// wire [`ysyx_25060170_DATA] DPIC_dpi_ls_mem_skip_flag;

reg [`ysyx_25060170_DATA] diff_test_skip_o;
// always@(posedge clock) begin//todo
//     if(reset | ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_ls_wb_reg.flush) begin
//         diff_test_skip_o    <=   `ysyx_25060170_ZERO32  ;
//     end
//     else if (ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_ls__reg.mem_ready_i & ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_ls_mem_reg.ls_valid_i) begin
//     end
//     else if(ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_ls_mem_reg.stall) begin
//         diff_test_skip_o    <=   diff_test_skip_o       ;  
//     end
//     else begin
//         diff_test_skip_o    <=   DPIC_dpi_ls_mem_skip_flag       ;
//     end
// end

//mls_wb

reg  [`ysyx_25060170_DATA] dpic_diff_skip_flag_o;
    always@(posedge clock) begin
        if(reset | ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_ls_wb_reg.flush) begin
            dpic_diff_skip_flag_o <= `ysyx_25060170_ZERO32;
    end
        else if (ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_ls_wb_reg.wb_ready_i & ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_ls_wb_reg.ls_valid_i) begin
        end
        else if(ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_ls_wb_reg.stall) begin
            dpic_diff_skip_flag_o <= dpic_diff_skip_flag_o;
    end    
        else begin
            dpic_diff_skip_flag_o <= diff_test_skip_o;  
    end
end

//magicstop
wire magicstop = (ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_idu.inst_i == 32'b0100_0000_0000_0000_0000_0000_0011_0011);
// 实例化（复制粘贴）       
ysyx_25060170_DPIC u_ysyx_25060170_DPIC (       
     .clk                             ( clock                          )//<<i<<
    ,.rst                             ( reset                          )//<<i<<
    ,.DPIC_pc_i                       ( DPIC_if_id_pc                  )//<<i<<
    ,.DPIC_inst_i                     ( DPIC_dpic_ifu_inst             )//>>o>>
    ,.DPIC_ftrace_pc                  ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.ifu_ifidreg_current_pc          )//>>o>>
    ,.DPIC_rd_addr                    ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_idu.rd           )//<<i<<
    ,.DPIC_imm                        ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.idu_imm            )//<<i<<
    ,.DPIC_regs0                      ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[0]                     )//<<i<<
    ,.DPIC_regs1                      ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[1]                     )//<<i<<
    ,.DPIC_regs2                      ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[2]                     )//<<i<<
    ,.DPIC_regs3                      ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[3]                     )//<<i<<
    ,.DPIC_regs4                      ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[4]                     )//<<i<<
    ,.DPIC_regs5                      ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[5]                     )//<<i<<
    ,.DPIC_regs6                      ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[6]                     )//<<i<<
    ,.DPIC_regs7                      ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[7]                     )//<<i<<
    ,.DPIC_regs8                      ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[8]                     )//<<i<<
    ,.DPIC_regs9                      ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[9]                     )//<<i<<
    ,.DPIC_regs10                     ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[10]                    )//<<i<<
    ,.DPIC_regs11                     ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[11]                    )//<<i<<
    ,.DPIC_regs12                     ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[12]                    )//<<i<<
    ,.DPIC_regs13                     ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[13]                    )//<<i<<
    ,.DPIC_regs14                     ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[14]                    )//<<i<<
    ,.DPIC_regs15                     ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[15]                    )//<<i<<
    ,.DPIC_regs16                     ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[16]                    )//<<i<<
    ,.DPIC_regs17                     ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[17]                    )//<<i<<
    ,.DPIC_regs18                     ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[18]                    )//<<i<<
    ,.DPIC_regs19                     ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[19]                    )//<<i<<
    ,.DPIC_regs20                     ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[20]                    )//<<i<<
    ,.DPIC_regs21                     ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[21]                    )//<<i<<
    ,.DPIC_regs22                     ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[22]                    )//<<i<<
    ,.DPIC_regs23                     ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[23]                    )//<<i<<
    ,.DPIC_regs24                     ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[24]                    )//<<i<<
    ,.DPIC_regs25                     ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[25]                    )//<<i<<
    ,.DPIC_regs26                     ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[26]                    )//<<i<<
    ,.DPIC_regs27                     ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[27]                    )//<<i<<
    ,.DPIC_regs28                     ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[28]                    )//<<i<<
    ,.DPIC_regs29                     ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[29]                    )//<<i<<
    ,.DPIC_regs30                     ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[30]                    )//<<i<<
    ,.DPIC_regs31                     ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[31]                    )//<<i<<
    ,.DPIC_mstatus                    ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_csr.mstatus            )//<<i<<
    ,.DPIC_mtvec                      ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_csr.mtvec            )//<<i<<
    ,.DPIC_mepc                       ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_csr.mepc            )//<<i<<
    ,.DPIC_mcause                     ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_csr.mcause            )//<<i<<
    ,.DPIC_mhartid                    ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_csr.mhartid            )//<<i<<      
    ,.DPIC_mscratch                   ( ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_csr.mscratch            )//<<i<<      
    ,.DPIC_wbu_DPIC_difftest_skip_flag( dpic_diff_skip_flag_o      )//<<i<<
    ,.DPIC_wbu_dpic_inst	          ( DPIC_wbu_dpic_inst	            )//<<i<<
    ,.DPIC_wbu_dpic_pc		          ( DPIC_wbu_dpic_pc	            )//<<i<<
    ,.DPIC_wbu_dpic_next_pc	          ( DPIC_wbu_dpic_next_pc	        )//<<i<<
    ,.DPIC_wbu_dpic_valid             ( DPIC_wbu_dpic_valid            )//<<i<<
    // ,.DPIC_re                         ( DPIC_ls_mem_re                 )//<<i<<
    // ,.DPIC_we                         ( DPIC_ls_dpic_we                )//<<i<<
    // ,.DPIC_data_i                     ( DPIC_ls_dpic_data              )//<<i<<
    // ,.DPIC_wlen                       ( DPIC_ls_dpic_wlen              )//<<i<<
    // ,.DPIC_rlen                       ( DPIC_ls_dpic_rlen              )//<<i<<
    // ,.DPIC_dpic_difftest_skip_flag    ( DPIC_dpi_ls_mem_skip_flag      )//>>o>>
    // ,.DPIC_data_o                     ( DPIC_DPIC_MEM_data             )//>>o>>
    // ,.DPIC_raddr                      ( DPIC_ls_dpic_raddr             )//<<i<<
    // ,.DPIC_waddr                      ( DPIC_ls_dpic_waddr             )//<<i<<
    ,.DPIC_magic_flag                 ( magicstop                   )//<<i<<
);

//方便看寄存器名字
/* verilator lint_off UNUSEDSIGNAL */
reg [`ysyx_25060170_REG] reg0_zero  = ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[0 ];
reg [`ysyx_25060170_REG] reg1_ra    = ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[1 ];
reg [`ysyx_25060170_REG] reg2_sp    = ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[2 ];
reg [`ysyx_25060170_REG] reg3_gp    = ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[3 ];
reg [`ysyx_25060170_REG] reg4_tp    = ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[4 ];
reg [`ysyx_25060170_REG] reg5_t0    = ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[5 ];
reg [`ysyx_25060170_REG] reg6_t1    = ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[6 ];
reg [`ysyx_25060170_REG] reg7_t2    = ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[7 ];
reg [`ysyx_25060170_REG] reg8_s0    = ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[8 ];
reg [`ysyx_25060170_REG] reg9_s1    = ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[9 ];
reg [`ysyx_25060170_REG] reg10_a0   = ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[10];
reg [`ysyx_25060170_REG] reg11_a1   = ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[11];
reg [`ysyx_25060170_REG] reg12_a2   = ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[12];
reg [`ysyx_25060170_REG] reg13_a3   = ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[13];
reg [`ysyx_25060170_REG] reg14_a4   = ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[14];
reg [`ysyx_25060170_REG] reg15_a5   = ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[15];
reg [`ysyx_25060170_REG] reg16_a6   = ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[16];
reg [`ysyx_25060170_REG] reg17_a7   = ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[17];
reg [`ysyx_25060170_REG] reg18_s2   = ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[18];
reg [`ysyx_25060170_REG] reg19_s3   = ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[19];
reg [`ysyx_25060170_REG] reg20_s4   = ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[20];
reg [`ysyx_25060170_REG] reg21_s5   = ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[21];
reg [`ysyx_25060170_REG] reg22_s6   = ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[22];
reg [`ysyx_25060170_REG] reg23_s7   = ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[23];
reg [`ysyx_25060170_REG] reg24_s8   = ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[24];
reg [`ysyx_25060170_REG] reg25_s9   = ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[25];
reg [`ysyx_25060170_REG] reg26_s10  = ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[26];
reg [`ysyx_25060170_REG] reg27_s11  = ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[27];
reg [`ysyx_25060170_REG] reg28_t3   = ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[28];
reg [`ysyx_25060170_REG] reg29_t4   = ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[29];
reg [`ysyx_25060170_REG] reg30_t5   = ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[30];
reg [`ysyx_25060170_REG] reg31_t6   = ysyxSoCFull.asic.cpu.cpu.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[31];
/* verilator lint_on UNUSEDSIGNAL */
endmodule


 
