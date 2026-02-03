`include "define.v"

module ysyx_25060170_topcore(
 input wire     clk			
,input wire     rst		    		
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
     .clk                      (clk                       )
    ,.rst                      (rst                       )
    ,.DPIC_if_id_pc            (DPIC_if_id_pc             )
    ,.DPIC_dpic_ifu_inst       (DPIC_dpic_ifu_inst        )
    ,.DPIC_ls_mem_re           (DPIC_ls_mem_re            )
    ,.DPIC_ls_dpic_we          (DPIC_ls_dpic_we           )
    ,.DPIC_ls_dpic_data        (DPIC_ls_dpic_data         )
    ,.DPIC_ls_dpic_wlen        (DPIC_ls_dpic_wlen         )
    ,.DPIC_ls_dpic_rlen        (DPIC_ls_dpic_rlen         )
    ,.DPIC_wbu_dpic_inst	   (DPIC_wbu_dpic_inst	      )//
    ,.DPIC_wbu_dpic_pc	       (DPIC_wbu_dpic_pc	      )//
    ,.DPIC_wbu_dpic_next_pc	   (DPIC_wbu_dpic_next_pc	  )//
    ,.DPIC_wbu_dpic_valid      (DPIC_wbu_dpic_valid       )//
    ,.DPIC_DPIC_MEM_data       (DPIC_DPIC_MEM_data        )
    ,.DPIC_ls_dpic_raddr       (DPIC_ls_dpic_raddr        )//
    ,.DPIC_ls_dpic_waddr       (DPIC_ls_dpic_waddr        )//
);

//ls_mem
wire [`ysyx_25060170_DATA] DPIC_dpi_ls_mem_skip_flag;

reg [`ysyx_25060170_DATA] diff_test_skip_o;
always@(posedge clk) begin
    if(rst | ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_ls_mem_reg.flush) begin
        diff_test_skip_o    <=   `ysyx_25060170_ZERO32  ;
    end
    else if (ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_ls_mem_reg.mem_ready_i & ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_ls_mem_reg.ls_valid_i) begin
    end
    else if(ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_ls_mem_reg.stall) begin
        diff_test_skip_o    <=   diff_test_skip_o       ;  
    end
    else begin
        diff_test_skip_o    <=   DPIC_dpi_ls_mem_skip_flag       ;
    end
end

//mem_wb

reg  [`ysyx_25060170_DATA] dpic_diff_skip_flag_o;
    always@(posedge clk) begin
        if(rst | ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_mem_wb_reg.flush) begin
            dpic_diff_skip_flag_o <= `ysyx_25060170_ZERO32;
    end
        else if (ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_mem_wb_reg.wb_ready_i & ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_mem_wb_reg.mem_valid_i) begin
        end
        else if(ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_mem_wb_reg.stall) begin
            dpic_diff_skip_flag_o <= dpic_diff_skip_flag_o;
    end    
        else begin
            dpic_diff_skip_flag_o <= diff_test_skip_o;  
    end
end

//magicstop
wire magicstop = (ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_idu.inst_i == 32'b0100_0000_0000_0000_0000_0000_0011_0011);
// 实例化（复制粘贴）       
ysyx_25060170_DPIC u_ysyx_25060170_DPIC (       
     .clk                             ( clk                            )//<<i<<
    ,.rst                             ( rst                            )//<<i<<
    ,.DPIC_pc_i                       ( DPIC_if_id_pc                  )//<<i<<
    ,.DPIC_inst_o                     ( DPIC_dpic_ifu_inst             )//>>o>>
    ,.DPIC_ftrace_pc                  ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.ifu2_if2idreg_currentpc           )//>>o>>
    ,.DPIC_rd_addr                    ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_idu.rd           )//<<i<<
    ,.DPIC_imm                        ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.idu_imm            )//<<i<<
    ,.DPIC_regs0                      ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[0]                     )//<<i<<
    ,.DPIC_regs1                      ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[1]                     )//<<i<<
    ,.DPIC_regs2                      ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[2]                     )//<<i<<
    ,.DPIC_regs3                      ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[3]                     )//<<i<<
    ,.DPIC_regs4                      ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[4]                     )//<<i<<
    ,.DPIC_regs5                      ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[5]                     )//<<i<<
    ,.DPIC_regs6                      ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[6]                     )//<<i<<
    ,.DPIC_regs7                      ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[7]                     )//<<i<<
    ,.DPIC_regs8                      ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[8]                     )//<<i<<
    ,.DPIC_regs9                      ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[9]                     )//<<i<<
    ,.DPIC_regs10                     ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[10]                    )//<<i<<
    ,.DPIC_regs11                     ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[11]                    )//<<i<<
    ,.DPIC_regs12                     ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[12]                    )//<<i<<
    ,.DPIC_regs13                     ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[13]                    )//<<i<<
    ,.DPIC_regs14                     ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[14]                    )//<<i<<
    ,.DPIC_regs15                     ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[15]                    )//<<i<<
    ,.DPIC_regs16                     ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[16]                    )//<<i<<
    ,.DPIC_regs17                     ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[17]                    )//<<i<<
    ,.DPIC_regs18                     ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[18]                    )//<<i<<
    ,.DPIC_regs19                     ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[19]                    )//<<i<<
    ,.DPIC_regs20                     ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[20]                    )//<<i<<
    ,.DPIC_regs21                     ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[21]                    )//<<i<<
    ,.DPIC_regs22                     ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[22]                    )//<<i<<
    ,.DPIC_regs23                     ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[23]                    )//<<i<<
    ,.DPIC_regs24                     ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[24]                    )//<<i<<
    ,.DPIC_regs25                     ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[25]                    )//<<i<<
    ,.DPIC_regs26                     ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[26]                    )//<<i<<
    ,.DPIC_regs27                     ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[27]                    )//<<i<<
    ,.DPIC_regs28                     ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[28]                    )//<<i<<
    ,.DPIC_regs29                     ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[29]                    )//<<i<<
    ,.DPIC_regs30                     ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[30]                    )//<<i<<
    ,.DPIC_regs31                     ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[31]                    )//<<i<<
    ,.DPIC_mstatus                    ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_csr.mstatus            )//<<i<<
    ,.DPIC_mtvec                      ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_csr.mtvec            )//<<i<<
    ,.DPIC_mepc                       ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_csr.mepc            )//<<i<<
    ,.DPIC_mcause                     ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_csr.mcause            )//<<i<<
    ,.DPIC_mhartid                    ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_csr.mhartid            )//<<i<<      
    ,.DPIC_mscratch                   ( ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_csr.mscratch            )//<<i<<      
    ,.DPIC_re                         ( DPIC_ls_mem_re                 )//<<i<<
    ,.DPIC_we                         ( DPIC_ls_dpic_we                )//<<i<<
    ,.DPIC_data_i                     ( DPIC_ls_dpic_data              )//<<i<<
    ,.DPIC_wlen                       ( DPIC_ls_dpic_wlen              )//<<i<<
    ,.DPIC_rlen                       ( DPIC_ls_dpic_rlen              )//<<i<<
    ,.DPIC_dpic_difftest_skip_flag    ( DPIC_dpi_ls_mem_skip_flag      )//>>o>>
    ,.DPIC_wbu_DPIC_difftest_skip_flag( dpic_diff_skip_flag_o      )//<<i<<
    ,.DPIC_wbu_dpic_inst	             ( DPIC_wbu_dpic_inst	            )//<<i<<
    ,.DPIC_wbu_dpic_pc		         ( DPIC_wbu_dpic_pc	            )//<<i<<
    ,.DPIC_wbu_dpic_next_pc	         ( DPIC_wbu_dpic_next_pc	        )//<<i<<
    ,.DPIC_wbu_dpic_valid             ( DPIC_wbu_dpic_valid            )//<<i<<
    ,.DPIC_data_o                     ( DPIC_DPIC_MEM_data             )//>>o>>
    ,.DPIC_raddr                      ( DPIC_ls_dpic_raddr             )//<<i<<
    ,.DPIC_waddr                      ( DPIC_ls_dpic_waddr             )//<<i<<
    ,.DPIC_magic_flag                 ( magicstop                   )//<<i<<
);

//方便看寄存器名字
/* verilator lint_off UNUSEDSIGNAL */
reg [`ysyx_25060170_REG] reg0_zero  = ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[0 ];
reg [`ysyx_25060170_REG] reg1_ra    = ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[1 ];
reg [`ysyx_25060170_REG] reg2_sp    = ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[2 ];
reg [`ysyx_25060170_REG] reg3_gp    = ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[3 ];
reg [`ysyx_25060170_REG] reg4_tp    = ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[4 ];
reg [`ysyx_25060170_REG] reg5_t0    = ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[5 ];
reg [`ysyx_25060170_REG] reg6_t1    = ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[6 ];
reg [`ysyx_25060170_REG] reg7_t2    = ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[7 ];
reg [`ysyx_25060170_REG] reg8_s0    = ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[8 ];
reg [`ysyx_25060170_REG] reg9_s1    = ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[9 ];
reg [`ysyx_25060170_REG] reg10_a0   = ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[10];
reg [`ysyx_25060170_REG] reg11_a1   = ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[11];
reg [`ysyx_25060170_REG] reg12_a2   = ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[12];
reg [`ysyx_25060170_REG] reg13_a3   = ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[13];
reg [`ysyx_25060170_REG] reg14_a4   = ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[14];
reg [`ysyx_25060170_REG] reg15_a5   = ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[15];
reg [`ysyx_25060170_REG] reg16_a6   = ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[16];
reg [`ysyx_25060170_REG] reg17_a7   = ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[17];
reg [`ysyx_25060170_REG] reg18_s2   = ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[18];
reg [`ysyx_25060170_REG] reg19_s3   = ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[19];
reg [`ysyx_25060170_REG] reg20_s4   = ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[20];
reg [`ysyx_25060170_REG] reg21_s5   = ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[21];
reg [`ysyx_25060170_REG] reg22_s6   = ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[22];
reg [`ysyx_25060170_REG] reg23_s7   = ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[23];
reg [`ysyx_25060170_REG] reg24_s8   = ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[24];
reg [`ysyx_25060170_REG] reg25_s9   = ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[25];
reg [`ysyx_25060170_REG] reg26_s10  = ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[26];
reg [`ysyx_25060170_REG] reg27_s11  = ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[27];
reg [`ysyx_25060170_REG] reg28_t3   = ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[28];
reg [`ysyx_25060170_REG] reg29_t4   = ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[29];
reg [`ysyx_25060170_REG] reg30_t5   = ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[30];
reg [`ysyx_25060170_REG] reg31_t6   = ysyx_25060170_topcore.u_ysyx_25060170_fishtailcore.u_ysyx_25060170_regfile.regs[31];
/* verilator lint_on UNUSEDSIGNAL */
endmodule


 
