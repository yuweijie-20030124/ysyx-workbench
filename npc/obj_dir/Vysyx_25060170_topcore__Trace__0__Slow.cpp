// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_25060170_topcore__Syms.h"


VL_ATTR_COLD void Vysyx_25060170_topcore___024root__trace_init_sub__TOP__0(Vysyx_25060170_topcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->pushNamePrefix("ysyx_25060170_topcore ");
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+179,"DPIC_if_id_pc", false,-1, 31,0);
    tracep->declBus(c+180,"DPIC_dpic_ifu_inst", false,-1, 31,0);
    tracep->declBit(c+2,"DPIC_ls_mem_re", false,-1);
    tracep->declBit(c+3,"DPIC_ls_dpic_we", false,-1);
    tracep->declBus(c+4,"DPIC_ls_dpic_data", false,-1, 31,0);
    tracep->declBus(c+5,"DPIC_ls_dpic_wlen", false,-1, 7,0);
    tracep->declBus(c+454,"DPIC_ls_dpic_rlen", false,-1, 7,0);
    tracep->declBus(c+181,"DPIC_wbu_dpic_inst", false,-1, 31,0);
    tracep->declBus(c+182,"DPIC_wbu_dpic_pc", false,-1, 31,0);
    tracep->declBus(c+183,"DPIC_wbu_dpic_next_pc", false,-1, 31,0);
    tracep->declBit(c+184,"DPIC_wbu_dpic_valid", false,-1);
    tracep->declBus(c+185,"DPIC_DPIC_MEM_data", false,-1, 31,0);
    tracep->declBus(c+6,"DPIC_ls_dpic_raddr", false,-1, 31,0);
    tracep->declBus(c+6,"DPIC_ls_dpic_waddr", false,-1, 31,0);
    tracep->declBus(c+7,"DPIC_dpi_ls_mem_skip_flag", false,-1, 31,0);
    tracep->declBus(c+186,"diff_test_skip_o", false,-1, 31,0);
    tracep->declBus(c+187,"dpic_diff_skip_flag_o", false,-1, 31,0);
    tracep->declBit(c+188,"magicstop", false,-1);
    tracep->declBus(c+189,"reg0_zero", false,-1, 31,0);
    tracep->declBus(c+190,"reg1_ra", false,-1, 31,0);
    tracep->declBus(c+191,"reg2_sp", false,-1, 31,0);
    tracep->declBus(c+192,"reg3_gp", false,-1, 31,0);
    tracep->declBus(c+193,"reg4_tp", false,-1, 31,0);
    tracep->declBus(c+194,"reg5_t0", false,-1, 31,0);
    tracep->declBus(c+195,"reg6_t1", false,-1, 31,0);
    tracep->declBus(c+196,"reg7_t2", false,-1, 31,0);
    tracep->declBus(c+197,"reg8_s0", false,-1, 31,0);
    tracep->declBus(c+198,"reg9_s1", false,-1, 31,0);
    tracep->declBus(c+199,"reg10_a0", false,-1, 31,0);
    tracep->declBus(c+200,"reg11_a1", false,-1, 31,0);
    tracep->declBus(c+201,"reg12_a2", false,-1, 31,0);
    tracep->declBus(c+202,"reg13_a3", false,-1, 31,0);
    tracep->declBus(c+203,"reg14_a4", false,-1, 31,0);
    tracep->declBus(c+204,"reg15_a5", false,-1, 31,0);
    tracep->declBus(c+205,"reg16_a6", false,-1, 31,0);
    tracep->declBus(c+206,"reg17_a7", false,-1, 31,0);
    tracep->declBus(c+207,"reg18_s2", false,-1, 31,0);
    tracep->declBus(c+208,"reg19_s3", false,-1, 31,0);
    tracep->declBus(c+209,"reg20_s4", false,-1, 31,0);
    tracep->declBus(c+210,"reg21_s5", false,-1, 31,0);
    tracep->declBus(c+211,"reg22_s6", false,-1, 31,0);
    tracep->declBus(c+212,"reg23_s7", false,-1, 31,0);
    tracep->declBus(c+213,"reg24_s8", false,-1, 31,0);
    tracep->declBus(c+214,"reg25_s9", false,-1, 31,0);
    tracep->declBus(c+215,"reg26_s10", false,-1, 31,0);
    tracep->declBus(c+216,"reg27_s11", false,-1, 31,0);
    tracep->declBus(c+217,"reg28_t3", false,-1, 31,0);
    tracep->declBus(c+218,"reg29_t4", false,-1, 31,0);
    tracep->declBus(c+219,"reg30_t5", false,-1, 31,0);
    tracep->declBus(c+220,"reg31_t6", false,-1, 31,0);
    tracep->pushNamePrefix("u_ysyx_25060170_DPIC ");
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+179,"DPIC_pc_i", false,-1, 31,0);
    tracep->declBus(c+180,"DPIC_inst_o", false,-1, 31,0);
    tracep->declBus(c+221,"DPIC_ftrace_pc", false,-1, 31,0);
    tracep->declBus(c+222,"DPIC_rd_addr", false,-1, 4,0);
    tracep->declBus(c+8,"DPIC_imm", false,-1, 31,0);
    tracep->declBus(c+189,"DPIC_regs0", false,-1, 31,0);
    tracep->declBus(c+190,"DPIC_regs1", false,-1, 31,0);
    tracep->declBus(c+191,"DPIC_regs2", false,-1, 31,0);
    tracep->declBus(c+192,"DPIC_regs3", false,-1, 31,0);
    tracep->declBus(c+193,"DPIC_regs4", false,-1, 31,0);
    tracep->declBus(c+194,"DPIC_regs5", false,-1, 31,0);
    tracep->declBus(c+195,"DPIC_regs6", false,-1, 31,0);
    tracep->declBus(c+196,"DPIC_regs7", false,-1, 31,0);
    tracep->declBus(c+197,"DPIC_regs8", false,-1, 31,0);
    tracep->declBus(c+198,"DPIC_regs9", false,-1, 31,0);
    tracep->declBus(c+199,"DPIC_regs10", false,-1, 31,0);
    tracep->declBus(c+200,"DPIC_regs11", false,-1, 31,0);
    tracep->declBus(c+201,"DPIC_regs12", false,-1, 31,0);
    tracep->declBus(c+202,"DPIC_regs13", false,-1, 31,0);
    tracep->declBus(c+203,"DPIC_regs14", false,-1, 31,0);
    tracep->declBus(c+204,"DPIC_regs15", false,-1, 31,0);
    tracep->declBus(c+205,"DPIC_regs16", false,-1, 31,0);
    tracep->declBus(c+206,"DPIC_regs17", false,-1, 31,0);
    tracep->declBus(c+207,"DPIC_regs18", false,-1, 31,0);
    tracep->declBus(c+208,"DPIC_regs19", false,-1, 31,0);
    tracep->declBus(c+209,"DPIC_regs20", false,-1, 31,0);
    tracep->declBus(c+210,"DPIC_regs21", false,-1, 31,0);
    tracep->declBus(c+211,"DPIC_regs22", false,-1, 31,0);
    tracep->declBus(c+212,"DPIC_regs23", false,-1, 31,0);
    tracep->declBus(c+213,"DPIC_regs24", false,-1, 31,0);
    tracep->declBus(c+214,"DPIC_regs25", false,-1, 31,0);
    tracep->declBus(c+215,"DPIC_regs26", false,-1, 31,0);
    tracep->declBus(c+216,"DPIC_regs27", false,-1, 31,0);
    tracep->declBus(c+217,"DPIC_regs28", false,-1, 31,0);
    tracep->declBus(c+218,"DPIC_regs29", false,-1, 31,0);
    tracep->declBus(c+219,"DPIC_regs30", false,-1, 31,0);
    tracep->declBus(c+220,"DPIC_regs31", false,-1, 31,0);
    tracep->declBus(c+223,"DPIC_mstatus", false,-1, 31,0);
    tracep->declBus(c+224,"DPIC_mtvec", false,-1, 31,0);
    tracep->declBus(c+225,"DPIC_mepc", false,-1, 31,0);
    tracep->declBus(c+226,"DPIC_mcause", false,-1, 31,0);
    tracep->declBus(c+455,"DPIC_mhartid", false,-1, 31,0);
    tracep->declBus(c+227,"DPIC_mscratch", false,-1, 31,0);
    tracep->declBit(c+2,"DPIC_re", false,-1);
    tracep->declBit(c+3,"DPIC_we", false,-1);
    tracep->declBus(c+4,"DPIC_data_i", false,-1, 31,0);
    tracep->declBus(c+5,"DPIC_wlen", false,-1, 7,0);
    tracep->declBus(c+454,"DPIC_rlen", false,-1, 7,0);
    tracep->declBus(c+7,"DPIC_dpic_difftest_skip_flag", false,-1, 31,0);
    tracep->declBus(c+187,"DPIC_wbu_DPIC_difftest_skip_flag", false,-1, 31,0);
    tracep->declBus(c+181,"DPIC_wbu_dpic_inst", false,-1, 31,0);
    tracep->declBus(c+182,"DPIC_wbu_dpic_pc", false,-1, 31,0);
    tracep->declBus(c+183,"DPIC_wbu_dpic_next_pc", false,-1, 31,0);
    tracep->declBit(c+184,"DPIC_wbu_dpic_valid", false,-1);
    tracep->declBus(c+185,"DPIC_data_o", false,-1, 31,0);
    tracep->declBus(c+6,"DPIC_raddr", false,-1, 31,0);
    tracep->declBus(c+6,"DPIC_waddr", false,-1, 31,0);
    tracep->declBit(c+188,"DPIC_magic_flag", false,-1);
    tracep->declBus(c+456,"dpic_loadread", false,-1, 31,0);
    tracep->declBus(c+9,"mem_data", false,-1, 31,0);
    tracep->declBus(c+457,"dpic_fetch", false,-1, 31,0);
    tracep->declBus(c+228,"DPIC_inst", false,-1, 31,0);
    tracep->declBit(c+229,"jal", false,-1);
    tracep->declBit(c+230,"jalr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_fishtailcore ");
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+179,"DPIC_if_id_pc", false,-1, 31,0);
    tracep->declBus(c+180,"DPIC_dpic_ifu_inst", false,-1, 31,0);
    tracep->declBit(c+2,"DPIC_ls_mem_re", false,-1);
    tracep->declBit(c+3,"DPIC_ls_dpic_we", false,-1);
    tracep->declBus(c+4,"DPIC_ls_dpic_data", false,-1, 31,0);
    tracep->declBus(c+5,"DPIC_ls_dpic_wlen", false,-1, 7,0);
    tracep->declBus(c+454,"DPIC_ls_dpic_rlen", false,-1, 7,0);
    tracep->declBus(c+181,"DPIC_wbu_dpic_inst", false,-1, 31,0);
    tracep->declBus(c+182,"DPIC_wbu_dpic_pc", false,-1, 31,0);
    tracep->declBus(c+183,"DPIC_wbu_dpic_next_pc", false,-1, 31,0);
    tracep->declBit(c+184,"DPIC_wbu_dpic_valid", false,-1);
    tracep->declBus(c+185,"DPIC_DPIC_MEM_data", false,-1, 31,0);
    tracep->declBus(c+6,"DPIC_ls_dpic_raddr", false,-1, 31,0);
    tracep->declBus(c+6,"DPIC_ls_dpic_waddr", false,-1, 31,0);
    tracep->declBit(c+10,"btb_valid", false,-1);
    tracep->declBus(c+11,"btb_target", false,-1, 31,0);
    tracep->declBit(c+12,"btb_predictedTaken", false,-1);
    tracep->declBit(c+458,"ls_pc_jump", false,-1);
    tracep->declBus(c+231,"ls_jump_pc", false,-1, 31,0);
    tracep->declBit(c+13,"id_ready", false,-1);
    tracep->declBit(c+14,"id_stall", false,-1);
    tracep->declBus(c+179,"ifu1_ifu2_current_pc", false,-1, 31,0);
    tracep->declBit(c+15,"ifu1_ifu2_valid", false,-1);
    tracep->declBus(c+232,"ifu1_if1if2reg_next_pc", false,-1, 31,0);
    tracep->declBit(c+12,"ifu1_if1if2reg_bpupredict", false,-1);
    tracep->declBit(c+10,"ifu1_if1if2reg_bpuvalid", false,-1);
    tracep->declBus(c+221,"if1if2reg_ifu2_currentpc", false,-1, 31,0);
    tracep->declBus(c+233,"if1if2reg_ifu2_nextpc", false,-1, 31,0);
    tracep->declBit(c+234,"if1if2reg_ifu2_bpupredict", false,-1);
    tracep->declBit(c+235,"if1if2reg_ifu2_valid", false,-1);
    tracep->declBit(c+236,"if1if2reg_ifu2_bpuvalid", false,-1);
    tracep->declBus(c+221,"ifu2_if2idreg_currentpc", false,-1, 31,0);
    tracep->declBus(c+233,"ifu2_if2idreg_nextpc", false,-1, 31,0);
    tracep->declBit(c+234,"ifu2_if2idreg_bpupredict", false,-1);
    tracep->declBit(c+16,"ifu2_valid", false,-1);
    tracep->declBit(c+13,"ifu2_ready", false,-1);
    tracep->declBit(c+458,"ifu2_stall", false,-1);
    tracep->declBus(c+180,"ifu2_if2idreg_inst", false,-1, 31,0);
    tracep->declBit(c+236,"ifu2_if2idreg_bpuvalid", false,-1);
    tracep->declBus(c+237,"if2idureg_idu_currentpc", false,-1, 31,0);
    tracep->declBus(c+238,"if2idureg_idu_inst", false,-1, 31,0);
    tracep->declBus(c+239,"if2idureg_idu_nextpc", false,-1, 31,0);
    tracep->declBit(c+240,"if2idureg_idu_bpupredict", false,-1);
    tracep->declBit(c+241,"if2idureg_idu_bpuvalid", false,-1);
    tracep->declBit(c+242,"if2idureg_idu_valid", false,-1);
    tracep->declBit(c+243,"ex_csr_ena", false,-1);
    tracep->declBit(c+244,"ls_csr_ena", false,-1);
    tracep->declBus(c+448,"rf_id_rs1_data", false,-1, 31,0);
    tracep->declBus(c+449,"rf_id_rs2_data", false,-1, 31,0);
    tracep->declBit(c+1,"ex_ready", false,-1);
    tracep->declBus(c+17,"idu_rs1_addr", false,-1, 4,0);
    tracep->declBit(c+18,"idu_rs1_ena", false,-1);
    tracep->declBus(c+19,"idu_rs2_addr", false,-1, 4,0);
    tracep->declBit(c+20,"idu_rs2_ena", false,-1);
    tracep->declBus(c+21,"idu_csr_addr", false,-1, 11,0);
    tracep->declBit(c+22,"idu_rd_ena", false,-1);
    tracep->declBus(c+23,"idu_rd_addr", false,-1, 4,0);
    tracep->declBus(c+24,"idu_alusrc", false,-1, 7,0);
    tracep->declBus(c+25,"idu_lsctl", false,-1, 3,0);
    tracep->declBus(c+26,"idu_wbctl", false,-1, 1,0);
    tracep->declBus(c+27,"idu_op1_sel", false,-1, 1,0);
    tracep->declBus(c+28,"idu_op2_sel", false,-1, 2,0);
    tracep->declBit(c+29,"idu_load_flag", false,-1);
    tracep->declBit(c+30,"idu_csr_ena", false,-1);
    tracep->declBus(c+31,"idu_op1", false,-1, 31,0);
    tracep->declBus(c+32,"idu_op2", false,-1, 31,0);
    tracep->declBus(c+8,"idu_imm", false,-1, 31,0);
    tracep->declBus(c+237,"idu_pc", false,-1, 31,0);
    tracep->declBus(c+33,"idu_next_pc", false,-1, 31,0);
    tracep->declBus(c+238,"idu_inst", false,-1, 31,0);
    tracep->declBus(c+245,"idu_csr_imm", false,-1, 4,0);
    tracep->declBit(c+34,"id_flush", false,-1);
    tracep->declBit(c+35,"idu_BPU_update", false,-1);
    tracep->declBus(c+237,"idu_btb_updatePC", false,-1, 31,0);
    tracep->declBus(c+36,"idu_btb_updateTarget", false,-1, 31,0);
    tracep->declBit(c+37,"idu_btb_mispredicted", false,-1);
    tracep->declBus(c+38,"idu_ifu1_jump_pc", false,-1, 31,0);
    tracep->declBit(c+39,"idu_ifu1_jump", false,-1);
    tracep->declBus(c+246,"id_ex_reg_alusrc", false,-1, 7,0);
    tracep->declBit(c+40,"id_valid", false,-1);
    tracep->declBus(c+247,"id_ex_reg_pc", false,-1, 31,0);
    tracep->declBus(c+248,"id_ex_reg_inst", false,-1, 31,0);
    tracep->declBus(c+249,"id_ex_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+250,"id_ex_reg_op1", false,-1, 31,0);
    tracep->declBus(c+251,"id_ex_reg_op2", false,-1, 31,0);
    tracep->declBus(c+252,"id_ex_reg_op1_sel", false,-1, 1,0);
    tracep->declBus(c+253,"id_ex_reg_op2_sel", false,-1, 2,0);
    tracep->declBit(c+254,"id_ex_reg_rd_ena", false,-1);
    tracep->declBus(c+255,"id_ex_reg_rd_addr", false,-1, 4,0);
    tracep->declBus(c+256,"id_ex_reg_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+257,"id_ex_reg_imm", false,-1, 31,0);
    tracep->declBus(c+258,"id_ex_reg_lsctl", false,-1, 3,0);
    tracep->declBus(c+259,"id_ex_reg_wbctl", false,-1, 1,0);
    tracep->declBit(c+260,"id_ex_reg_load_flag", false,-1);
    tracep->declBit(c+261,"id_ex_valid", false,-1);
    tracep->declBit(c+1,"ls_ready", false,-1);
    tracep->declBus(c+248,"exu_inst", false,-1, 31,0);
    tracep->declBus(c+247,"exu_pc", false,-1, 31,0);
    tracep->declBus(c+249,"exu_next_pc", false,-1, 31,0);
    tracep->declBit(c+261,"ex_valid", false,-1);
    tracep->declBus(c+251,"exu_store_data", false,-1, 31,0);
    tracep->declBus(c+41,"exu_res", false,-1, 31,0);
    tracep->declBus(c+42,"exu_csr_addr", false,-1, 11,0);
    tracep->declBus(c+43,"exu_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+251,"exu_csr_data", false,-1, 31,0);
    tracep->declBus(c+262,"ex_ls_reg_inst", false,-1, 31,0);
    tracep->declBus(c+263,"ex_ls_reg_store_data", false,-1, 31,0);
    tracep->declBus(c+231,"ex_ls_reg_exu_res", false,-1, 31,0);
    tracep->declBus(c+264,"ex_ls_reg_ls_ctl", false,-1, 3,0);
    tracep->declBus(c+265,"ex_ls_reg_wb_ctl", false,-1, 1,0);
    tracep->declBus(c+266,"ex_ls_reg_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+267,"ex_ls_reg_csr_data", false,-1, 31,0);
    tracep->declBit(c+268,"ex_ls_reg_rd_ena", false,-1);
    tracep->declBus(c+269,"ex_ls_reg_rd_addr", false,-1, 4,0);
    tracep->declBit(c+243,"ex_ls_reg_ls_csr_ena", false,-1);
    tracep->declBus(c+270,"ex_ls_reg_csr_addr", false,-1, 11,0);
    tracep->declBus(c+271,"ex_ls_reg_pc", false,-1, 31,0);
    tracep->declBus(c+272,"ex_ls_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+255,"ex_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+41,"ex_rd_data_forward", false,-1, 31,0);
    tracep->declBit(c+273,"ex_ls_valid", false,-1);
    tracep->declBit(c+274,"ex_ls_reg_load_flag", false,-1);
    tracep->declBit(c+458,"ls_flush", false,-1);
    tracep->declBit(c+44,"ls_valid", false,-1);
    tracep->declBus(c+272,"ls_next_pc", false,-1, 31,0);
    tracep->declBus(c+262,"ls_inst", false,-1, 31,0);
    tracep->declBus(c+275,"ls_mem_reg_inst", false,-1, 31,0);
    tracep->declBus(c+276,"ls_mem_reg_pc", false,-1, 31,0);
    tracep->declBus(c+277,"ls_mem_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+278,"ls_mem_reg_ls_ctl", false,-1, 3,0);
    tracep->declBus(c+279,"ls_mem_reg_wb_ctl", false,-1, 1,0);
    tracep->declBit(c+280,"ls_mem_reg_rd_ena", false,-1);
    tracep->declBus(c+281,"ls_mem_reg_rd_addr", false,-1, 4,0);
    tracep->declBus(c+282,"ls_mem_reg_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+283,"ls_mem_reg_csr_addr", false,-1, 11,0);
    tracep->declBus(c+284,"ls_mem_reg_csr_data", false,-1, 31,0);
    tracep->declBit(c+285,"ls_mem_valid", false,-1);
    tracep->declBus(c+269,"ls_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+231,"ls_rd_data_forward", false,-1, 31,0);
    tracep->declBit(c+286,"ls_mem_reg_re", false,-1);
    tracep->declBus(c+287,"ls_mem_reg_alu_res", false,-1, 31,0);
    tracep->declBit(c+288,"ls_mem_reg_load_flag", false,-1);
    tracep->declBus(c+275,"mem_inst", false,-1, 31,0);
    tracep->declBus(c+276,"mem_pc", false,-1, 31,0);
    tracep->declBus(c+277,"mem_next_pc", false,-1, 31,0);
    tracep->declBus(c+287,"mem_alu_res", false,-1, 31,0);
    tracep->declBit(c+280,"mem_rd_ena", false,-1);
    tracep->declBus(c+281,"mem_rd_addr", false,-1, 4,0);
    tracep->declBus(c+282,"mem_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+283,"mem_csr_addr", false,-1, 11,0);
    tracep->declBus(c+279,"mem_wbctl", false,-1, 1,0);
    tracep->declBit(c+289,"mem_valid", false,-1);
    tracep->declBit(c+459,"mem_ready", false,-1);
    tracep->declBus(c+45,"mem_data", false,-1, 31,0);
    tracep->declBus(c+181,"mem_wb_inst", false,-1, 31,0);
    tracep->declBus(c+182,"mem_wb_pc", false,-1, 31,0);
    tracep->declBus(c+183,"mem_wb_next_pc", false,-1, 31,0);
    tracep->declBus(c+290,"mem_wb_lsu_res", false,-1, 31,0);
    tracep->declBus(c+291,"mem_wb_alures_data", false,-1, 31,0);
    tracep->declBus(c+292,"mem_wb_wb_ctl", false,-1, 1,0);
    tracep->declBit(c+293,"mem_wb_rd_ena", false,-1);
    tracep->declBus(c+294,"mem_wb_rd_addr", false,-1, 4,0);
    tracep->declBus(c+295,"mem_wb_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+296,"mem_wb_csr_addr", false,-1, 11,0);
    tracep->declBus(c+297,"mem_wb_csr_data", false,-1, 31,0);
    tracep->declBit(c+184,"mem_valid_o", false,-1);
    tracep->declBus(c+281,"mem_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+46,"mem_rd_data_forward", false,-1, 31,0);
    tracep->declBit(c+298,"mem_wb_reg_load_flag", false,-1);
    tracep->declBus(c+299,"wb_rf_data", false,-1, 31,0);
    tracep->declBit(c+459,"wb_ready", false,-1);
    tracep->declBit(c+293,"wb_rf_rd_ena", false,-1);
    tracep->declBus(c+294,"wb_rf_rd_addr", false,-1, 4,0);
    tracep->declBus(c+294,"wb_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+300,"wb_rd_data_forward", false,-1, 31,0);
    tracep->declBus(c+295,"wb_csr_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+296,"wb_csr_csr_addr", false,-1, 11,0);
    tracep->declBus(c+301,"wb_csr_mcause_value", false,-1, 31,0);
    tracep->declBus(c+302,"wb_csr_write_csr_data", false,-1, 31,0);
    tracep->declBus(c+303,"csr_wbu_read_csr_data", false,-1, 31,0);
    tracep->declBus(c+224,"mtvec", false,-1, 31,0);
    tracep->declBus(c+225,"mepc", false,-1, 31,0);
    tracep->declBus(c+47,"csr_idu_data", false,-1, 31,0);
    tracep->pushNamePrefix("u_ysyx_25060170_btb ");
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+179,"if1_btb_PC", false,-1, 31,0);
    tracep->declBit(c+35,"idu_btb_update", false,-1);
    tracep->declBus(c+237,"idu_btb_updatePC", false,-1, 31,0);
    tracep->declBus(c+36,"idu_btb_updateTarget", false,-1, 31,0);
    tracep->declBit(c+37,"idu_btb_mispredicted", false,-1);
    tracep->declBit(c+10,"btb_valid", false,-1);
    tracep->declBus(c+11,"btb_target", false,-1, 31,0);
    tracep->declBit(c+12,"btb_predictedTaken", false,-1);
    tracep->declBus(c+304,"index", false,-1, 2,0);
    tracep->declBus(c+305,"tag", false,-1, 26,0);
    tracep->declArray(c+48,"read_set", false,-1, 127,0);
    tracep->declArray(c+306,"update_set", false,-1, 127,0);
    tracep->declBus(c+310,"update_index", false,-1, 2,0);
    tracep->declBus(c+311,"update_tag", false,-1, 26,0);
    tracep->declArray(c+52,"write_set", false,-1, 127,0);
    tracep->declBus(c+310,"write_index", false,-1, 2,0);
    tracep->declBit(c+56,"check_branch1", false,-1);
    tracep->declBit(c+57,"check_branch2", false,-1);
    tracep->declBit(c+312,"update_branch1", false,-1);
    tracep->declBit(c+313,"update_branch2", false,-1);
    tracep->declBit(c+314,"lru_read", false,-1);
    tracep->declBit(c+315,"lru_write", false,-1);
    tracep->declBus(c+316,"unused0", false,-1, 1,0);
    tracep->declBus(c+317,"unused1", false,-1, 1,0);
    tracep->pushNamePrefix("u_ysyx_25060170_lru ");
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+304,"read_index", false,-1, 2,0);
    tracep->declBit(c+56,"branch1_used", false,-1);
    tracep->declBit(c+57,"branch2_used", false,-1);
    tracep->declBit(c+35,"update", false,-1);
    tracep->declBus(c+310,"update_index", false,-1, 2,0);
    tracep->declBit(c+312,"update_branch1", false,-1);
    tracep->declBit(c+313,"update_branch2", false,-1);
    tracep->declBit(c+314,"lru_read_bit", false,-1);
    tracep->declBit(c+315,"lru_write_bit", false,-1);
    tracep->declBus(c+318,"lru_reg", false,-1, 7,0);
    tracep->declBit(c+58,"new_entry", false,-1);
    tracep->declBit(c+59,"insert_branch1", false,-1);
    tracep->declBit(c+60,"insert_branch2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_read ");
    tracep->declArray(c+48,"set_data", false,-1, 127,0);
    tracep->declBus(c+305,"pc_tag", false,-1, 26,0);
    tracep->declBit(c+56,"hit1", false,-1);
    tracep->declBit(c+57,"hit2", false,-1);
    tracep->declBus(c+11,"target", false,-1, 31,0);
    tracep->declBit(c+10,"valid", false,-1);
    tracep->declBit(c+12,"predictedTaken", false,-1);
    tracep->declBit(c+61,"valid1", false,-1);
    tracep->declBit(c+62,"valid2", false,-1);
    tracep->declBus(c+63,"tag1", false,-1, 26,0);
    tracep->declBus(c+64,"tag2", false,-1, 26,0);
    tracep->declBus(c+65,"target1", false,-1, 31,0);
    tracep->declBus(c+66,"target2", false,-1, 31,0);
    tracep->declBus(c+67,"fsm1", false,-1, 1,0);
    tracep->declBus(c+68,"fsm2", false,-1, 1,0);
    tracep->declBus(c+69,"fsm_state", false,-1, 1,0);
    tracep->declBus(c+70,"unused0", false,-1, 3,0);
    tracep->declBit(c+71,"unused1", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_update_read ");
    tracep->declArray(c+306,"set_data", false,-1, 127,0);
    tracep->declBus(c+311,"pc_tag", false,-1, 26,0);
    tracep->declBit(c+312,"hit1", false,-1);
    tracep->declBit(c+313,"hit2", false,-1);
    tracep->declBus(c+319,"target", false,-1, 31,0);
    tracep->declBit(c+320,"valid", false,-1);
    tracep->declBit(c+321,"predictedTaken", false,-1);
    tracep->declBit(c+322,"valid1", false,-1);
    tracep->declBit(c+323,"valid2", false,-1);
    tracep->declBus(c+324,"tag1", false,-1, 26,0);
    tracep->declBus(c+325,"tag2", false,-1, 26,0);
    tracep->declBus(c+326,"target1", false,-1, 31,0);
    tracep->declBus(c+327,"target2", false,-1, 31,0);
    tracep->declBus(c+328,"fsm1", false,-1, 1,0);
    tracep->declBus(c+329,"fsm2", false,-1, 1,0);
    tracep->declBus(c+330,"fsm_state", false,-1, 1,0);
    tracep->declBus(c+331,"unused0", false,-1, 3,0);
    tracep->declBit(c+332,"unused1", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_write_logic ");
    tracep->declArray(c+306,"old_set", false,-1, 127,0);
    tracep->declBus(c+311,"new_tag", false,-1, 26,0);
    tracep->declBus(c+36,"new_target", false,-1, 31,0);
    tracep->declBit(c+37,"mispredicted", false,-1);
    tracep->declBit(c+35,"update", false,-1);
    tracep->declBit(c+312,"update_branch1", false,-1);
    tracep->declBit(c+313,"update_branch2", false,-1);
    tracep->declBit(c+315,"lru_write", false,-1);
    tracep->declArray(c+52,"write_set", false,-1, 127,0);
    tracep->declBit(c+322,"valid1", false,-1);
    tracep->declBit(c+323,"valid2", false,-1);
    tracep->declBus(c+324,"tag1", false,-1, 26,0);
    tracep->declBus(c+325,"tag2", false,-1, 26,0);
    tracep->declBus(c+326,"target1", false,-1, 31,0);
    tracep->declBus(c+327,"target2", false,-1, 31,0);
    tracep->declBus(c+328,"fsm1", false,-1, 1,0);
    tracep->declBus(c+329,"fsm2", false,-1, 1,0);
    tracep->declBus(c+331,"unused", false,-1, 3,0);
    tracep->declBit(c+72,"write_valid1", false,-1);
    tracep->declBit(c+73,"write_valid2", false,-1);
    tracep->declBus(c+74,"write_tag1", false,-1, 26,0);
    tracep->declBus(c+75,"write_tag2", false,-1, 26,0);
    tracep->declBus(c+76,"write_target1", false,-1, 31,0);
    tracep->declBus(c+77,"write_target2", false,-1, 31,0);
    tracep->declBit(c+58,"new_entry", false,-1);
    tracep->declBit(c+59,"insert_branch1", false,-1);
    tracep->declBit(c+60,"insert_branch2", false,-1);
    tracep->declBit(c+78,"take_branch1", false,-1);
    tracep->declBit(c+79,"take_branch2", false,-1);
    tracep->declBus(c+80,"next_fsm1", false,-1, 1,0);
    tracep->declBus(c+81,"next_fsm2", false,-1, 1,0);
    tracep->declBus(c+82,"fsm1_input", false,-1, 1,0);
    tracep->declBus(c+83,"fsm2_input", false,-1, 1,0);
    tracep->pushNamePrefix("u_ysyx_25060170_fsm1 ");
    tracep->declBus(c+82,"currentState", false,-1, 1,0);
    tracep->declBit(c+37,"mispredicted", false,-1);
    tracep->declBus(c+80,"nextState", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_fsm2 ");
    tracep->declBus(c+83,"currentState", false,-1, 1,0);
    tracep->declBit(c+37,"mispredicted", false,-1);
    tracep->declBus(c+81,"nextState", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_25060170_u_btb_file ");
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBus(c+304,"read_index", false,-1, 2,0);
    tracep->declBus(c+310,"write_index", false,-1, 2,0);
    tracep->declArray(c+52,"write_set", false,-1, 127,0);
    tracep->declBit(c+35,"write_enable", false,-1);
    tracep->declBus(c+310,"update_index", false,-1, 2,0);
    tracep->declArray(c+48,"read_set", false,-1, 127,0);
    tracep->declArray(c+306,"update_set", false,-1, 127,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declArray(c+333+i*4,"btb_mem", true,(i+0), 127,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_25060170_csr ");
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBit(c+30,"idu_read_csr_en", false,-1);
    tracep->declBus(c+21,"idu_read_csr_addr", false,-1, 11,0);
    tracep->declBus(c+365,"csr_ctl", false,-1, 3,0);
    tracep->declBus(c+296,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+301,"mcause_value", false,-1, 31,0);
    tracep->declBus(c+302,"write_csr_data", false,-1, 31,0);
    tracep->declBus(c+303,"read_csr_data", false,-1, 31,0);
    tracep->declBus(c+47,"idu_read_csr_data", false,-1, 31,0);
    tracep->declBus(c+224,"mtvec", false,-1, 31,0);
    tracep->declBus(c+225,"mepc", false,-1, 31,0);
    tracep->declBit(c+366,"mstatus_rd", false,-1);
    tracep->declBit(c+367,"mstatus_wr", false,-1);
    tracep->declBit(c+368,"mstatus_mie", false,-1);
    tracep->declBit(c+369,"mstatus_mpie", false,-1);
    tracep->declBus(c+370,"mstatus_mpp", false,-1, 1,0);
    tracep->declBus(c+223,"mstatus", false,-1, 31,0);
    tracep->declBit(c+371,"mstatus_ie_ena", false,-1);
    tracep->declBit(c+372,"mie_set", false,-1);
    tracep->declBit(c+373,"mpie_set", false,-1);
    tracep->declBus(c+374,"mpp_set", false,-1, 1,0);
    tracep->declBit(c+375,"mtvec_rd", false,-1);
    tracep->declBit(c+376,"mtvec_wr", false,-1);
    tracep->declBus(c+377,"mtvec_base", false,-1, 31,2);
    tracep->declBus(c+460,"mtvec_mode", false,-1, 1,0);
    tracep->declBit(c+378,"mepc_rd", false,-1);
    tracep->declBit(c+379,"mepc_wr", false,-1);
    tracep->declBit(c+380,"mcause_rd", false,-1);
    tracep->declBit(c+381,"mcause_wr", false,-1);
    tracep->declBus(c+226,"mcause", false,-1, 31,0);
    tracep->declBit(c+382,"mhartid_rd", false,-1);
    tracep->declBus(c+455,"mhartid", false,-1, 31,0);
    tracep->declBit(c+383,"mscratch_rd", false,-1);
    tracep->declBit(c+384,"mscratch_wr", false,-1);
    tracep->declBus(c+227,"mscratch", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_ex_ls_reg ");
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+248,"inst_i", false,-1, 31,0);
    tracep->declBus(c+247,"pc_i", false,-1, 31,0);
    tracep->declBus(c+249,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+251,"store_data_i", false,-1, 31,0);
    tracep->declBus(c+41,"exu_res_i", false,-1, 31,0);
    tracep->declBit(c+260,"load_flag_i", false,-1);
    tracep->declBus(c+258,"ls_ctl_i", false,-1, 3,0);
    tracep->declBus(c+259,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+43,"csr_ctl_i", false,-1, 6,0);
    tracep->declBit(c+254,"rd_ena_i", false,-1);
    tracep->declBus(c+255,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+243,"ex_csr_ena_i", false,-1);
    tracep->declBus(c+42,"csr_addr_i", false,-1, 11,0);
    tracep->declBus(c+251,"csr_data_i", false,-1, 31,0);
    tracep->declBit(c+261,"ex_valid_i", false,-1);
    tracep->declBit(c+1,"ls_ready_i", false,-1);
    tracep->declBit(c+458,"ls_flush_i", false,-1);
    tracep->declBit(c+273,"ex_valid_o", false,-1);
    tracep->declBus(c+262,"inst_o", false,-1, 31,0);
    tracep->declBus(c+271,"pc_o", false,-1, 31,0);
    tracep->declBus(c+272,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+263,"store_data_o", false,-1, 31,0);
    tracep->declBus(c+231,"exu_res_o", false,-1, 31,0);
    tracep->declBit(c+274,"load_flag_o", false,-1);
    tracep->declBus(c+264,"ls_ctl_o", false,-1, 3,0);
    tracep->declBus(c+265,"wb_ctl_o", false,-1, 1,0);
    tracep->declBus(c+266,"csr_ctl_o", false,-1, 6,0);
    tracep->declBit(c+268,"rd_ena_o", false,-1);
    tracep->declBus(c+269,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+270,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+267,"csr_data_o", false,-1, 31,0);
    tracep->declBit(c+244,"ls_csr_ena_o", false,-1);
    tracep->declBus(c+255,"ex_rd_addr_forward_o", false,-1, 4,0);
    tracep->declBit(c+243,"ex_csr_o", false,-1);
    tracep->declBus(c+41,"ex_rd_data_forward_o", false,-1, 31,0);
    tracep->declBit(c+458,"flush", false,-1);
    tracep->declBit(c+385,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_exu ");
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+250,"op1_i", false,-1, 31,0);
    tracep->declBus(c+251,"op2_i", false,-1, 31,0);
    tracep->declBus(c+252,"op1_sel_i", false,-1, 1,0);
    tracep->declBus(c+253,"op2_sel_i", false,-1, 2,0);
    tracep->declBus(c+255,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+256,"rs1_addr_i", false,-1, 4,0);
    tracep->declBus(c+257,"imm_i", false,-1, 31,0);
    tracep->declBus(c+247,"pc_i", false,-1, 31,0);
    tracep->declBus(c+249,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+248,"inst_i", false,-1, 31,0);
    tracep->declBus(c+246,"alu_sel_i", false,-1, 7,0);
    tracep->declBit(c+1,"ls_ready_i", false,-1);
    tracep->declBit(c+261,"id_valid_i", false,-1);
    tracep->declBit(c+261,"ex_valid_o", false,-1);
    tracep->declBit(c+1,"ex_ready_o", false,-1);
    tracep->declBus(c+248,"inst_o", false,-1, 31,0);
    tracep->declBus(c+247,"pc_o", false,-1, 31,0);
    tracep->declBus(c+249,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+251,"store_data_o", false,-1, 31,0);
    tracep->declBus(c+41,"exu_res_o", false,-1, 31,0);
    tracep->declBus(c+42,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+43,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+251,"csr_data_o", false,-1, 31,0);
    tracep->declBus(c+386,"op1", false,-1, 31,0);
    tracep->declBus(c+387,"op2", false,-1, 31,0);
    tracep->declBus(c+388,"op1_add_op2", false,-1, 31,0);
    tracep->declBus(c+389,"op1_sub_op2", false,-1, 31,0);
    tracep->declBit(c+390,"op1_lt_op2", false,-1);
    tracep->declBus(c+391,"op1_sra_op2", false,-1, 31,0);
    tracep->declQuad(c+392,"mul", false,-1, 63,0);
    tracep->declBus(c+394,"op1_mul_op2", false,-1, 31,0);
    tracep->declBus(c+395,"op1_mulh_op2", false,-1, 31,0);
    tracep->declBus(c+396,"div", false,-1, 31,0);
    tracep->declBus(c+397,"rem", false,-1, 31,0);
    tracep->declBus(c+84,"alu_res", false,-1, 31,0);
    tracep->declBit(c+85,"csr_wr_ena", false,-1);
    tracep->declBit(c+86,"csr_rd_ena", false,-1);
    tracep->declBit(c+87,"mret_ena", false,-1);
    tracep->declBit(c+88,"ecall_ena", false,-1);
    tracep->declBit(c+89,"csrrw_ena", false,-1);
    tracep->declBit(c+90,"csrrs_ena", false,-1);
    tracep->declBit(c+91,"csrrc_ena", false,-1);
    tracep->declBus(c+398,"csr_op", false,-1, 31,0);
    tracep->declBit(c+399,"csrrxi_ena", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_id_ex_reg ");
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+238,"inst_i", false,-1, 31,0);
    tracep->declBus(c+237,"pc_i", false,-1, 31,0);
    tracep->declBus(c+33,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+31,"op1_i", false,-1, 31,0);
    tracep->declBus(c+32,"op2_i", false,-1, 31,0);
    tracep->declBus(c+27,"op1_sel_i", false,-1, 1,0);
    tracep->declBus(c+28,"op2_sel_i", false,-1, 2,0);
    tracep->declBit(c+22,"rd_ena_i", false,-1);
    tracep->declBus(c+23,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+245,"rs1_addr_i", false,-1, 4,0);
    tracep->declBus(c+8,"imm_i", false,-1, 31,0);
    tracep->declBus(c+24,"alusrc_i", false,-1, 7,0);
    tracep->declBus(c+25,"lsctl_i", false,-1, 3,0);
    tracep->declBus(c+26,"wbctl_i", false,-1, 1,0);
    tracep->declBit(c+30,"csr_ena_i", false,-1);
    tracep->declBit(c+29,"load_flag_i", false,-1);
    tracep->declBit(c+40,"id_valid_i", false,-1);
    tracep->declBit(c+34,"id_flush_i", false,-1);
    tracep->declBit(c+14,"id_stall_i", false,-1);
    tracep->declBit(c+458,"ls_flush_i", false,-1);
    tracep->declBit(c+1,"ex_ready_i", false,-1);
    tracep->declBus(c+248,"inst_o", false,-1, 31,0);
    tracep->declBus(c+247,"pc_o", false,-1, 31,0);
    tracep->declBus(c+249,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+250,"op1_o", false,-1, 31,0);
    tracep->declBus(c+251,"op2_o", false,-1, 31,0);
    tracep->declBus(c+252,"op1_sel_o", false,-1, 1,0);
    tracep->declBus(c+253,"op2_sel_o", false,-1, 2,0);
    tracep->declBit(c+254,"rd_ena_o", false,-1);
    tracep->declBus(c+255,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+256,"rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+257,"imm_o", false,-1, 31,0);
    tracep->declBus(c+246,"alusrc_o", false,-1, 7,0);
    tracep->declBus(c+258,"lsctl_o", false,-1, 3,0);
    tracep->declBus(c+259,"wbctl_o", false,-1, 1,0);
    tracep->declBit(c+243,"csr_ena_o", false,-1);
    tracep->declBit(c+260,"load_flag_o", false,-1);
    tracep->declBit(c+261,"id_valid_o", false,-1);
    tracep->declBit(c+458,"flush", false,-1);
    tracep->declBit(c+92,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_idu ");
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+221,"if2_idu_futurePC", false,-1, 31,0);
    tracep->declBus(c+238,"inst_i", false,-1, 31,0);
    tracep->declBus(c+237,"pc_i", false,-1, 31,0);
    tracep->declBus(c+239,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+224,"mtvec", false,-1, 31,0);
    tracep->declBus(c+225,"mepc", false,-1, 31,0);
    tracep->declBus(c+47,"csr_data_i", false,-1, 31,0);
    tracep->declBit(c+240,"bp_jump_i", false,-1);
    tracep->declBit(c+241,"ifu2_if2idureg_bpuvalid", false,-1);
    tracep->declBus(c+255,"ex_addr_forward", false,-1, 4,0);
    tracep->declBus(c+41,"ex_data_forward", false,-1, 31,0);
    tracep->declBus(c+269,"ls_addr_forward", false,-1, 4,0);
    tracep->declBus(c+231,"ls_data_forward", false,-1, 31,0);
    tracep->declBus(c+281,"mem_addr_forward", false,-1, 4,0);
    tracep->declBus(c+46,"mem_data_forward", false,-1, 31,0);
    tracep->declBus(c+294,"wb_addr_forward", false,-1, 4,0);
    tracep->declBus(c+300,"wb_data_forward", false,-1, 31,0);
    tracep->declBit(c+260,"ex_load_ena", false,-1);
    tracep->declBit(c+274,"ls_load_ena", false,-1);
    tracep->declBit(c+288,"mem_load_ena", false,-1);
    tracep->declBit(c+298,"wb_load_ena", false,-1);
    tracep->declBit(c+261,"ex_valid_i", false,-1);
    tracep->declBit(c+44,"ls_valid_i", false,-1);
    tracep->declBit(c+243,"ex_csr_ena", false,-1);
    tracep->declBit(c+244,"ls_csr_ena", false,-1);
    tracep->declBus(c+448,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+449,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+17,"rs1_addr", false,-1, 4,0);
    tracep->declBit(c+18,"rs1_ena", false,-1);
    tracep->declBus(c+19,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+20,"rs2_ena", false,-1);
    tracep->declBus(c+21,"csr_addr", false,-1, 11,0);
    tracep->declBit(c+22,"rd_ena", false,-1);
    tracep->declBus(c+23,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+237,"pc_o", false,-1, 31,0);
    tracep->declBus(c+33,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+24,"alusrc_o", false,-1, 7,0);
    tracep->declBus(c+25,"lsctl_o", false,-1, 3,0);
    tracep->declBus(c+26,"wbctl_o", false,-1, 1,0);
    tracep->declBus(c+27,"op1_sel", false,-1, 1,0);
    tracep->declBus(c+28,"op2_sel", false,-1, 2,0);
    tracep->declBit(c+29,"load_flag_o", false,-1);
    tracep->declBit(c+30,"csr_ena_o", false,-1);
    tracep->declBit(c+35,"idu_BPU_update", false,-1);
    tracep->declBus(c+237,"idu_btb_updatePC", false,-1, 31,0);
    tracep->declBus(c+36,"idu_btb_updateTarget", false,-1, 31,0);
    tracep->declBit(c+37,"idu_btb_mispredicted", false,-1);
    tracep->declBus(c+38,"idu_ifu1_jump_pc", false,-1, 31,0);
    tracep->declBit(c+39,"idu_ifu1_jump", false,-1);
    tracep->declBus(c+31,"op1", false,-1, 31,0);
    tracep->declBus(c+32,"op2", false,-1, 31,0);
    tracep->declBus(c+8,"imm", false,-1, 31,0);
    tracep->declBus(c+238,"inst_o", false,-1, 31,0);
    tracep->declBus(c+245,"csr_imm_o", false,-1, 4,0);
    tracep->declBit(c+242,"if_valid_i", false,-1);
    tracep->declBit(c+1,"ex_ready_i", false,-1);
    tracep->declBit(c+34,"id_flush_o", false,-1);
    tracep->declBit(c+14,"id_stall_o", false,-1);
    tracep->declBit(c+13,"id_ready_o", false,-1);
    tracep->declBit(c+40,"id_valid_o", false,-1);
    tracep->declBus(c+222,"rd", false,-1, 4,0);
    tracep->declBus(c+245,"rs1", false,-1, 4,0);
    tracep->declBus(c+400,"rs2", false,-1, 4,0);
    tracep->declBit(c+93,"branch", false,-1);
    tracep->declBit(c+450,"op1_relate", false,-1);
    tracep->declBit(c+451,"op2_relate", false,-1);
    tracep->declBit(c+94,"csr_op1_stall", false,-1);
    tracep->declBit(c+95,"csr_op2_stall", false,-1);
    tracep->declBit(c+14,"id_stall_ena", false,-1);
    tracep->declBit(c+96,"ex_op1_forward", false,-1);
    tracep->declBit(c+97,"ls_op1_forward", false,-1);
    tracep->declBit(c+98,"mem_op1_forward", false,-1);
    tracep->declBit(c+99,"wb_op1_forward", false,-1);
    tracep->declBit(c+100,"ex_op2_forward", false,-1);
    tracep->declBit(c+101,"ls_op2_forward", false,-1);
    tracep->declBit(c+102,"mem_op2_forward", false,-1);
    tracep->declBit(c+103,"wb_op2_forward", false,-1);
    tracep->declBit(c+104,"op1_forward_ena", false,-1);
    tracep->declBit(c+105,"op2_forward_ena", false,-1);
    tracep->declBus(c+106,"op1_forward_data", false,-1, 31,0);
    tracep->declBus(c+107,"op2_forward_data", false,-1, 31,0);
    tracep->declBit(c+108,"diff_sign", false,-1);
    tracep->declBit(c+109,"op_ltu_op2", false,-1);
    tracep->declBit(c+110,"op1_lt_op2", false,-1);
    tracep->declBit(c+111,"now_bxx_jump_yes", false,-1);
    tracep->declBit(c+112,"inst_bxx", false,-1);
    tracep->declBit(c+113,"inst_jxx", false,-1);
    tracep->declBit(c+114,"PC_error", false,-1);
    tracep->pushNamePrefix("decoder ");
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+238,"inst", false,-1, 31,0);
    tracep->declBit(c+18,"rs1_ena", false,-1);
    tracep->declBit(c+20,"rs2_ena", false,-1);
    tracep->declBit(c+30,"csr_inst", false,-1);
    tracep->declBus(c+26,"wb_ctl", false,-1, 1,0);
    tracep->declBus(c+25,"mem_ctl", false,-1, 3,0);
    tracep->declBit(c+93,"branch", false,-1);
    tracep->declBus(c+8,"ext_imm", false,-1, 31,0);
    tracep->declBit(c+29,"load", false,-1);
    tracep->declBus(c+27,"op1_sel", false,-1, 1,0);
    tracep->declBus(c+28,"op2_sel", false,-1, 2,0);
    tracep->declBus(c+24,"alu_ctl", false,-1, 7,0);
    tracep->declBus(c+401,"opcode", false,-1, 6,0);
    tracep->declBus(c+402,"funct3", false,-1, 2,0);
    tracep->declBus(c+403,"funct7", false,-1, 6,0);
    tracep->declBus(c+404,"i_imm", false,-1, 11,0);
    tracep->declBus(c+405,"j_imm", false,-1, 20,1);
    tracep->declBus(c+406,"u_imm", false,-1, 19,0);
    tracep->declBus(c+407,"s_imm", false,-1, 11,0);
    tracep->declBus(c+408,"b_imm", false,-1, 12,1);
    tracep->declBus(c+115,"inst_type", false,-1, 7,0);
    tracep->declBit(c+116,"inst_lui", false,-1);
    tracep->declBit(c+117,"inst_auipc", false,-1);
    tracep->declBit(c+118,"inst_jal", false,-1);
    tracep->declBit(c+119,"inst_jalr", false,-1);
    tracep->declBit(c+120,"inst_sb", false,-1);
    tracep->declBit(c+121,"inst_sh", false,-1);
    tracep->declBit(c+122,"inst_sw", false,-1);
    tracep->declBit(c+123,"inst_sd", false,-1);
    tracep->declBit(c+124,"inst_lb", false,-1);
    tracep->declBit(c+125,"inst_lh", false,-1);
    tracep->declBit(c+126,"inst_lw", false,-1);
    tracep->declBit(c+127,"inst_ld", false,-1);
    tracep->declBit(c+128,"inst_lbu", false,-1);
    tracep->declBit(c+129,"inst_lhu", false,-1);
    tracep->declBit(c+130,"inst_lwu", false,-1);
    tracep->declBit(c+131,"inst_beq", false,-1);
    tracep->declBit(c+132,"inst_bne", false,-1);
    tracep->declBit(c+133,"inst_blt", false,-1);
    tracep->declBit(c+134,"inst_bge", false,-1);
    tracep->declBit(c+135,"inst_bltu", false,-1);
    tracep->declBit(c+136,"inst_bgeu", false,-1);
    tracep->declBit(c+137,"inst_add", false,-1);
    tracep->declBit(c+138,"inst_sub", false,-1);
    tracep->declBit(c+139,"inst_sll", false,-1);
    tracep->declBit(c+140,"inst_slt", false,-1);
    tracep->declBit(c+141,"inst_sltu", false,-1);
    tracep->declBit(c+142,"inst_xor", false,-1);
    tracep->declBit(c+143,"inst_srl", false,-1);
    tracep->declBit(c+144,"inst_sra", false,-1);
    tracep->declBit(c+145,"inst_or", false,-1);
    tracep->declBit(c+146,"inst_and", false,-1);
    tracep->declBit(c+147,"inst_div", false,-1);
    tracep->declBit(c+148,"inst_divu", false,-1);
    tracep->declBit(c+149,"inst_mul", false,-1);
    tracep->declBit(c+150,"inst_mulh", false,-1);
    tracep->declBit(c+151,"inst_mulhsu", false,-1);
    tracep->declBit(c+152,"inst_mulhu", false,-1);
    tracep->declBit(c+153,"inst_rem", false,-1);
    tracep->declBit(c+154,"inst_remu", false,-1);
    tracep->declBit(c+155,"inst_addi", false,-1);
    tracep->declBit(c+156,"inst_slti", false,-1);
    tracep->declBit(c+157,"inst_sltiu", false,-1);
    tracep->declBit(c+158,"inst_xori", false,-1);
    tracep->declBit(c+159,"inst_ori", false,-1);
    tracep->declBit(c+160,"inst_andi", false,-1);
    tracep->declBit(c+161,"inst_slli", false,-1);
    tracep->declBit(c+162,"inst_srli", false,-1);
    tracep->declBit(c+163,"inst_srai", false,-1);
    tracep->declBit(c+164,"inst_ecall", false,-1);
    tracep->declBit(c+165,"inst_mret", false,-1);
    tracep->declBit(c+166,"inst_csrrw", false,-1);
    tracep->declBit(c+167,"inst_csrrs", false,-1);
    tracep->declBit(c+168,"inst_csrrc", false,-1);
    tracep->declBit(c+169,"inst_csrrwi", false,-1);
    tracep->declBit(c+170,"inst_csrrsi", false,-1);
    tracep->declBit(c+171,"inst_csrrci", false,-1);
    tracep->declBit(c+172,"inst_ebreak", false,-1);
    tracep->declBit(c+173,"imm_ena", false,-1);
    tracep->declBit(c+174,"imm_en", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_25060170_if1if2reg ");
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBus(c+179,"ifu1_if1if2reg_currentpc", false,-1, 31,0);
    tracep->declBus(c+232,"ifu1_if1if2reg_nextpc", false,-1, 31,0);
    tracep->declBit(c+12,"ifu1_if1if2reg_bpupredict", false,-1);
    tracep->declBit(c+10,"ifu1_if1if2reg_bpuvalid", false,-1);
    tracep->declBit(c+15,"ifu1_if1if2reg_valid", false,-1);
    tracep->declBit(c+13,"ifu2_if1if2reg_ready", false,-1);
    tracep->declBit(c+458,"ifu2_if1if2reg_stall", false,-1);
    tracep->declBit(c+14,"idu_if1if2reg_stall", false,-1);
    tracep->declBit(c+34,"idu_if1if2reg_flush", false,-1);
    tracep->declBit(c+458,"lsu_if1if2reg_stall", false,-1);
    tracep->declBit(c+458,"lsu_if1if2reg_flush", false,-1);
    tracep->declBus(c+221,"if1if2reg_ifu2_currentpc", false,-1, 31,0);
    tracep->declBus(c+233,"if1if2reg_ifu2_nextpc", false,-1, 31,0);
    tracep->declBit(c+234,"if1if2reg_ifu2_bpupredict", false,-1);
    tracep->declBit(c+236,"if1if2reg_ifu2_bpuvalid", false,-1);
    tracep->declBit(c+235,"if1if2reg_ifu2_valid", false,-1);
    tracep->declBit(c+175,"stall", false,-1);
    tracep->declBit(c+176,"flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_if2idureg ");
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBus(c+221,"ifu2_if2idureg_currentpc", false,-1, 31,0);
    tracep->declBus(c+180,"ifu2_if2idureg_inst", false,-1, 31,0);
    tracep->declBus(c+233,"ifu2_if2idureg_nextpc", false,-1, 31,0);
    tracep->declBit(c+234,"ifu2_if2idureg_bpupredict", false,-1);
    tracep->declBit(c+236,"ifu2_if2idureg_bpuvalid", false,-1);
    tracep->declBit(c+16,"ifu2_if2idureg_valid", false,-1);
    tracep->declBit(c+13,"idu_if2idureg_ready", false,-1);
    tracep->declBit(c+14,"idu_if2idureg_stall", false,-1);
    tracep->declBit(c+34,"idu_if2idureg_flush", false,-1);
    tracep->declBit(c+458,"lsu_if2idureg_stall", false,-1);
    tracep->declBit(c+458,"lsu_if2idureg_flush", false,-1);
    tracep->declBus(c+237,"if2idureg_idu_currentpc", false,-1, 31,0);
    tracep->declBus(c+238,"if2idureg_idu_inst", false,-1, 31,0);
    tracep->declBus(c+239,"if2idureg_idu_nextpc", false,-1, 31,0);
    tracep->declBit(c+240,"if2idureg_idu_bpupredict", false,-1);
    tracep->declBit(c+241,"if2idureg_idu_bpuvalid", false,-1);
    tracep->declBit(c+242,"if2idureg_idu_valid", false,-1);
    tracep->declBit(c+177,"stall", false,-1);
    tracep->declBit(c+176,"flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_ifu1 ");
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBus(c+38,"idu_ifu1_jump_pc", false,-1, 31,0);
    tracep->declBit(c+39,"idu_ifu1_jump", false,-1);
    tracep->declBus(c+11,"bpu_ifu1_jump_pc", false,-1, 31,0);
    tracep->declBit(c+12,"btb_predictedTaken", false,-1);
    tracep->declBit(c+10,"bpu_ifu1_bpuvalid", false,-1);
    tracep->declBus(c+231,"lsu_ifu1_jump_pc", false,-1, 31,0);
    tracep->declBit(c+458,"lsu_ifu1_jump", false,-1);
    tracep->declBit(c+13,"ifu2_ifu1_ready", false,-1);
    tracep->declBit(c+458,"ifu2_ifu1_stall", false,-1);
    tracep->declBit(c+15,"ifu1_if1if2reg_valid", false,-1);
    tracep->declBus(c+179,"ifu1_if1if2reg_current_pc", false,-1, 31,0);
    tracep->declBus(c+232,"ifu1_if1if2reg_next_pc", false,-1, 31,0);
    tracep->declBit(c+12,"ifu1_if1if2reg_bpupredict", false,-1);
    tracep->declBit(c+10,"ifu1_if1if2reg_bpuvalid", false,-1);
    tracep->declBit(c+458,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_ifu2 ");
    tracep->declBus(c+221,"if1if2reg_ifu2_currentpc", false,-1, 31,0);
    tracep->declBus(c+233,"if1if2reg_ifu2_nextpc", false,-1, 31,0);
    tracep->declBit(c+234,"if1if2reg_ifu2_bpupredict", false,-1);
    tracep->declBit(c+236,"if1if2reg_ifu2_bpuvalid", false,-1);
    tracep->declBus(c+180,"ram_ifu2_inst", false,-1, 31,0);
    tracep->declBit(c+13,"idu_ready", false,-1);
    tracep->declBit(c+235,"ifu1_valid", false,-1);
    tracep->declBit(c+16,"ifu2_valid", false,-1);
    tracep->declBit(c+13,"ifu2_ready", false,-1);
    tracep->declBit(c+458,"ifu2_stall", false,-1);
    tracep->declBus(c+221,"ifu2_if2idreg_currentpc", false,-1, 31,0);
    tracep->declBus(c+233,"ifu2_if2idreg_nextpc", false,-1, 31,0);
    tracep->declBit(c+234,"ifu2_if2idreg_bpupredict", false,-1);
    tracep->declBit(c+236,"ifu2_if2idreg_bpuvalid", false,-1);
    tracep->declBus(c+180,"ifu2_if2idreg_inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_ls_mem_reg ");
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+262,"inst_i", false,-1, 31,0);
    tracep->declBus(c+271,"pc_i", false,-1, 31,0);
    tracep->declBus(c+272,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+264,"ls_ctl_i", false,-1, 3,0);
    tracep->declBus(c+265,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+231,"alu_res_i", false,-1, 31,0);
    tracep->declBit(c+274,"load_flag_i", false,-1);
    tracep->declBit(c+2,"re_i", false,-1);
    tracep->declBit(c+268,"rd_ena_i", false,-1);
    tracep->declBus(c+269,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+266,"csr_ctl_i", false,-1, 6,0);
    tracep->declBus(c+270,"csr_addr_i", false,-1, 11,0);
    tracep->declBus(c+267,"csr_data_i", false,-1, 31,0);
    tracep->declBit(c+44,"ls_valid_i", false,-1);
    tracep->declBit(c+459,"mem_ready_i", false,-1);
    tracep->declBit(c+285,"ls_valid_o", false,-1);
    tracep->declBus(c+275,"inst_o", false,-1, 31,0);
    tracep->declBus(c+276,"pc_o", false,-1, 31,0);
    tracep->declBus(c+277,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+278,"ls_ctl_o", false,-1, 3,0);
    tracep->declBus(c+279,"wb_ctl_o", false,-1, 1,0);
    tracep->declBus(c+287,"alu_res_o", false,-1, 31,0);
    tracep->declBit(c+288,"load_flag_o", false,-1);
    tracep->declBit(c+286,"re_o", false,-1);
    tracep->declBit(c+280,"rd_ena_o", false,-1);
    tracep->declBus(c+281,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+282,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+283,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+284,"csr_data_o", false,-1, 31,0);
    tracep->declBus(c+269,"ls_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+231,"ls_rd_data_forward", false,-1, 31,0);
    tracep->declBit(c+458,"flush", false,-1);
    tracep->declBit(c+44,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_lsu ");
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+272,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+262,"inst_i", false,-1, 31,0);
    tracep->declBus(c+231,"alu_res_i", false,-1, 31,0);
    tracep->declBus(c+263,"store_data_i", false,-1, 31,0);
    tracep->declBus(c+264,"ls_ctl_i", false,-1, 3,0);
    tracep->declBit(c+459,"mem_ready_i", false,-1);
    tracep->declBit(c+273,"ex_valid_i", false,-1);
    tracep->declBit(c+1,"ls_ready_o", false,-1);
    tracep->declBit(c+44,"ls_valid_o", false,-1);
    tracep->declBit(c+458,"ls_flush_o", false,-1);
    tracep->declBit(c+458,"ls_jump_o", false,-1);
    tracep->declBus(c+231,"ls_jump_pc_o", false,-1, 31,0);
    tracep->declBit(c+2,"re", false,-1);
    tracep->declBit(c+3,"we", false,-1);
    tracep->declBus(c+4,"data_o", false,-1, 31,0);
    tracep->declBus(c+6,"raddr", false,-1, 31,0);
    tracep->declBus(c+6,"waddr", false,-1, 31,0);
    tracep->declBus(c+5,"wlen", false,-1, 7,0);
    tracep->declBus(c+454,"rlen", false,-1, 7,0);
    tracep->declBus(c+262,"inst_o", false,-1, 31,0);
    tracep->declBus(c+272,"next_pc_o", false,-1, 31,0);
    tracep->declBit(c+409,"data_ok", false,-1);
    tracep->declBus(c+410,"byte_sel", false,-1, 1,0);
    tracep->declBus(c+410,"half_sel", false,-1, 1,0);
    tracep->declBus(c+178,"sb_mask", false,-1, 3,0);
    tracep->declBus(c+452,"sh_mask", false,-1, 3,0);
    tracep->declBus(c+461,"sw_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_mem ");
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+275,"inst_i", false,-1, 31,0);
    tracep->declBus(c+276,"pc_i", false,-1, 31,0);
    tracep->declBus(c+277,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+279,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+287,"alu_res_i", false,-1, 31,0);
    tracep->declBit(c+286,"re", false,-1);
    tracep->declBit(c+280,"rd_ena_i", false,-1);
    tracep->declBus(c+281,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+282,"csr_ctl_i", false,-1, 6,0);
    tracep->declBus(c+283,"csr_addr_i", false,-1, 11,0);
    tracep->declBus(c+278,"ls_ctl_i", false,-1, 3,0);
    tracep->declBus(c+185,"mem_data_i", false,-1, 31,0);
    tracep->declBit(c+285,"ls_valid_i", false,-1);
    tracep->declBit(c+459,"wb_ready_i", false,-1);
    tracep->declBit(c+289,"mem_valid_o", false,-1);
    tracep->declBit(c+459,"mem_ready_o", false,-1);
    tracep->declBus(c+275,"inst_o", false,-1, 31,0);
    tracep->declBus(c+276,"pc_o", false,-1, 31,0);
    tracep->declBus(c+277,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+279,"wb_ctl_o", false,-1, 1,0);
    tracep->declBus(c+287,"alu_res_o", false,-1, 31,0);
    tracep->declBit(c+280,"rd_ena_o", false,-1);
    tracep->declBus(c+281,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+282,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+283,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+45,"mem_data_o", false,-1, 31,0);
    tracep->declBus(c+453,"load_data", false,-1, 31,0);
    tracep->declBit(c+411,"data_ok", false,-1);
    tracep->declBus(c+412,"data_byte", false,-1, 7,0);
    tracep->declBus(c+413,"data_half", false,-1, 15,0);
    tracep->declBus(c+185,"data_word", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_mem_wb_reg ");
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+275,"inst_i", false,-1, 31,0);
    tracep->declBus(c+276,"pc_i", false,-1, 31,0);
    tracep->declBus(c+277,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+279,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+45,"mem_data_i", false,-1, 31,0);
    tracep->declBit(c+288,"load_flag_i", false,-1);
    tracep->declBus(c+287,"alu_res_i", false,-1, 31,0);
    tracep->declBit(c+280,"rd_ena_i", false,-1);
    tracep->declBus(c+281,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+282,"csr_ctl_i", false,-1, 6,0);
    tracep->declBus(c+283,"csr_addr_i", false,-1, 11,0);
    tracep->declBus(c+284,"csr_data_i", false,-1, 31,0);
    tracep->declBit(c+289,"mem_valid_i", false,-1);
    tracep->declBit(c+459,"wb_ready_i", false,-1);
    tracep->declBit(c+184,"mem_valid_o", false,-1);
    tracep->declBus(c+181,"inst_o", false,-1, 31,0);
    tracep->declBus(c+182,"pc_o", false,-1, 31,0);
    tracep->declBus(c+183,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+291,"alu_res_o", false,-1, 31,0);
    tracep->declBus(c+290,"mem_data_o", false,-1, 31,0);
    tracep->declBit(c+298,"load_flag_o", false,-1);
    tracep->declBus(c+292,"wb_ctl_o", false,-1, 1,0);
    tracep->declBit(c+293,"rd_ena_o", false,-1);
    tracep->declBus(c+294,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+295,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+296,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+297,"csr_data_o", false,-1, 31,0);
    tracep->declBus(c+281,"mem_rd_addr_forward_o", false,-1, 4,0);
    tracep->declBus(c+46,"mem_rd_data_forward_o", false,-1, 31,0);
    tracep->declBit(c+458,"flush", false,-1);
    tracep->declBit(c+289,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_regfile ");
    tracep->declBit(c+446,"clk", false,-1);
    tracep->declBit(c+447,"rst", false,-1);
    tracep->declBus(c+294,"waddr", false,-1, 4,0);
    tracep->declBus(c+299,"wdata", false,-1, 31,0);
    tracep->declBit(c+293,"wen", false,-1);
    tracep->declBit(c+18,"ren1", false,-1);
    tracep->declBit(c+20,"ren2", false,-1);
    tracep->declBus(c+17,"raddr1", false,-1, 4,0);
    tracep->declBus(c+19,"raddr2", false,-1, 4,0);
    tracep->declBus(c+448,"rdata1", false,-1, 31,0);
    tracep->declBus(c+449,"rdata2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+414+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_wbu ");
    tracep->declBus(c+290,"ls_rd_data_i", false,-1, 31,0);
    tracep->declBus(c+292,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+291,"exu_res_i", false,-1, 31,0);
    tracep->declBus(c+182,"pc_i", false,-1, 31,0);
    tracep->declBus(c+183,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+181,"inst_i", false,-1, 31,0);
    tracep->declBus(c+294,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+293,"rd_ena_i", false,-1);
    tracep->declBus(c+295,"csr_ctl_i", false,-1, 6,0);
    tracep->declBus(c+296,"csr_addr_i", false,-1, 11,0);
    tracep->declBus(c+297,"csr_data_i", false,-1, 31,0);
    tracep->declBus(c+303,"read_csr_data_i", false,-1, 31,0);
    tracep->declBit(c+184,"ls_valid_i", false,-1);
    tracep->declBus(c+299,"wb_data_o", false,-1, 31,0);
    tracep->declBit(c+459,"wb_ready_o", false,-1);
    tracep->declBit(c+293,"wb_rd_ena_o", false,-1);
    tracep->declBus(c+294,"wb_rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+294,"wb_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+300,"wb_rd_data_forward", false,-1, 31,0);
    tracep->declBus(c+181,"wbu_dpic_inst_o", false,-1, 31,0);
    tracep->declBus(c+182,"wbu_dpic_pc_o", false,-1, 31,0);
    tracep->declBus(c+183,"wbu_dpic_next_pc_o", false,-1, 31,0);
    tracep->declBit(c+184,"wbu_dpic_valid_o", false,-1);
    tracep->declBus(c+295,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+296,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+301,"mcause_value_o", false,-1, 31,0);
    tracep->declBus(c+302,"write_csr_data_o", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vysyx_25060170_topcore___024root__trace_init_top(Vysyx_25060170_topcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root__trace_init_top\n"); );
    // Body
    Vysyx_25060170_topcore___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_25060170_topcore___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_25060170_topcore___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_25060170_topcore___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_25060170_topcore___024root__trace_register(Vysyx_25060170_topcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_25060170_topcore___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_25060170_topcore___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_25060170_topcore___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_25060170_topcore___024root__trace_full_sub_0(Vysyx_25060170_topcore___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_25060170_topcore___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_25060170_topcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25060170_topcore___024root*>(voidSelf);
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_25060170_topcore___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_25060170_topcore___024root__trace_full_sub_0(Vysyx_25060170_topcore___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ready));
    bufp->fullBit(oldp+2,(vlSelf->ysyx_25060170_topcore__DOT__DPIC_ls_mem_re));
    bufp->fullBit(oldp+3,(vlSelf->ysyx_25060170_topcore__DOT__DPIC_ls_dpic_we));
    bufp->fullIData(oldp+4,(vlSelf->ysyx_25060170_topcore__DOT__DPIC_ls_dpic_data),32);
    bufp->fullCData(oldp+5,(vlSelf->ysyx_25060170_topcore__DOT__DPIC_ls_dpic_wlen),8);
    bufp->fullIData(oldp+6,(vlSelf->ysyx_25060170_topcore__DOT__DPIC_ls_dpic_raddr),32);
    bufp->fullIData(oldp+7,(vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpi_ls_mem_skip_flag),32);
    bufp->fullIData(oldp+8,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_imm),32);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__mem_data),32);
    bufp->fullBit(oldp+10,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__btb_valid));
    bufp->fullIData(oldp+11,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__check_branch1)
                               ? ((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[3U] 
                                   << 0x1cU) | (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[2U] 
                                                >> 4U))
                               : ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__check_branch2)
                                   ? ((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[1U] 
                                       << 0x1cU) | 
                                      (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[0U] 
                                       >> 4U)) : 0U))),32);
    bufp->fullBit(oldp+12,((1U & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_read__DOT__fsm_state) 
                                  >> 1U))));
    bufp->fullBit(oldp+13,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ready));
    bufp->fullBit(oldp+14,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_stall));
    bufp->fullBit(oldp+15,((1U & (~ (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ready)))));
    bufp->fullBit(oldp+16,((1U & ((~ (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ready)) 
                                  | (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_valid)))));
    bufp->fullCData(oldp+17,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_addr),5);
    bufp->fullBit(oldp+18,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_ena));
    bufp->fullCData(oldp+19,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_addr),5);
    bufp->fullBit(oldp+20,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_ena));
    bufp->fullSData(oldp+21,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_addr),12);
    bufp->fullBit(oldp+22,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rd_ena));
    bufp->fullCData(oldp+23,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rd_ena)
                               ? (0x1fU & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                           >> 7U)) : 0U)),5);
    bufp->fullCData(oldp+24,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc),8);
    bufp->fullCData(oldp+25,((0xfU & ((1U & (- (IData)(
                                                       (0x41U 
                                                        == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                      | ((2U & (- (IData)(
                                                          (0x82U 
                                                           == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                         | ((4U & (- (IData)(
                                                             (0x81U 
                                                              == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                            | ((5U 
                                                & (- (IData)(
                                                             (7U 
                                                              == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                               | ((9U 
                                                   & (- (IData)(
                                                                (0x1aU 
                                                                 == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                                  | ((0xaU 
                                                      & (- (IData)(
                                                                   (0x34U 
                                                                    == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                                     | ((0xbU 
                                                         & (- (IData)(
                                                                      (0x68U 
                                                                       == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                                        | ((0xcU 
                                                            & (- (IData)(
                                                                         (0xd0U 
                                                                          == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                                           | ((0xdU 
                                                               & (- (IData)(
                                                                            (0xbU 
                                                                             == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                                              | ((0xeU 
                                                                  & (- (IData)(
                                                                               (0x16U 
                                                                                == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                                                 | (- (IData)(
                                                                              (0x2cU 
                                                                               == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc)))))))))))))))),4);
    bufp->fullCData(oldp+26,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_wbctl),2);
    bufp->fullCData(oldp+27,(((2U & ((- (IData)((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                                     | ((- (IData)((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr))) 
                                        | (- (IData)((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc)))))) 
                              | (1U & (- (IData)((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_ena)))))),2);
    bufp->fullCData(oldp+28,(((2U & ((- (IData)((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                                     | (- (IData)((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr))))) 
                              | ((4U & (- (IData)((
                                                   (~ (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_ena)) 
                                                   & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77eb01fa__0) 
                                                      | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                                                         | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0) 
                                                            | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70f4116c__0) 
                                                               | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
                                                                  | (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd9b03bc2__0)))))))))) 
                                 | ((1U & (- (IData)((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_ena)))) 
                                    | (3U & (- (IData)((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_ena)))))))),3);
    bufp->fullBit(oldp+29,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_load_flag));
    bufp->fullBit(oldp+30,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_ena));
    bufp->fullIData(oldp+31,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_op1),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_op2),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_next_pc),32);
    bufp->fullBit(oldp+34,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_btb_mispredicted) 
                            | (((~ (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_bpupredict)) 
                                & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__inst_jxx)) 
                               | (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__PC_error)))));
    bufp->fullBit(oldp+35,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_BPU_update));
    bufp->fullIData(oldp+36,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_btb_updateTarget),32);
    bufp->fullBit(oldp+37,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_btb_mispredicted));
    bufp->fullIData(oldp+38,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__PC_error)
                               ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_next_pc
                               : ((0x42U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                                   ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_op1
                                   : ((0x21U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                                       ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h71cc746e__0
                                       : (((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__inst_bxx) 
                                           & ((~ (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__now_bxx_jump_yes)) 
                                              & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_bpupredict)))
                                           ? ((IData)(4U) 
                                              + vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc)
                                           : vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h5d5844c8__0))))),32);
    bufp->fullBit(oldp+39,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__inst_jxx) 
                            | (((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__inst_bxx) 
                                & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_btb_mispredicted)) 
                               | (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__PC_error)))));
    bufp->fullBit(oldp+40,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_valid));
    bufp->fullIData(oldp+41,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__exu_res),32);
    bufp->fullSData(oldp+42,(((0U != (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_he71b3f47__0))
                               ? (0xfffU & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm)
                               : 0U)),12);
    bufp->fullCData(oldp+43,((((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena) 
                               << 6U) | (((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena) 
                                          << 5U) | 
                                         (((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena) 
                                           << 4U) | (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_he71b3f47__0))))),7);
    bufp->fullBit(oldp+44,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_valid));
    bufp->fullIData(oldp+45,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_data),32);
    bufp->fullIData(oldp+46,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_rd_data_forward),32);
    bufp->fullIData(oldp+47,((((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_ena) 
                               & (0x300U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_addr)))
                               ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus
                               : (((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_ena) 
                                   & (0x305U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_addr)))
                                   ? (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
                                      << 2U) : (((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_ena) 
                                                 & (0x341U 
                                                    == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_addr)))
                                                 ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mepc
                                                 : 
                                                (((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_ena) 
                                                  & (0x342U 
                                                     == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_addr)))
                                                  ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mcause
                                                  : 
                                                 (((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_ena) 
                                                   & (0xf12U 
                                                      == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_addr)))
                                                   ? 0U
                                                   : 
                                                  (((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_ena) 
                                                    & (0x340U 
                                                       == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_addr)))
                                                    ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mscratch
                                                    : 0U))))))),32);
    bufp->fullWData(oldp+48,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set),128);
    bufp->fullWData(oldp+52,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__write_set),128);
    bufp->fullBit(oldp+56,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__check_branch1));
    bufp->fullBit(oldp+57,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__check_branch2));
    bufp->fullBit(oldp+58,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__new_entry));
    bufp->fullBit(oldp+59,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__insert_branch1));
    bufp->fullBit(oldp+60,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__insert_branch2));
    bufp->fullBit(oldp+61,((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[3U] 
                            >> 0x1fU)));
    bufp->fullBit(oldp+62,((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[1U] 
                            >> 0x1fU)));
    bufp->fullIData(oldp+63,((0x7ffffffU & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[3U] 
                                            >> 4U))),27);
    bufp->fullIData(oldp+64,((0x7ffffffU & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[1U] 
                                            >> 4U))),27);
    bufp->fullIData(oldp+65,(((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[3U] 
                               << 0x1cU) | (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[2U] 
                                            >> 4U))),32);
    bufp->fullIData(oldp+66,(((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[1U] 
                               << 0x1cU) | (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[0U] 
                                            >> 4U))),32);
    bufp->fullCData(oldp+67,((3U & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[2U] 
                                    >> 2U))),2);
    bufp->fullCData(oldp+68,((3U & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[0U] 
                                    >> 2U))),2);
    bufp->fullCData(oldp+69,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_read__DOT__fsm_state),2);
    bufp->fullCData(oldp+70,(((8U & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[0U] 
                                     << 3U)) | ((4U 
                                                 & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[0U] 
                                                    << 1U)) 
                                                | (3U 
                                                   & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[2U])))),4);
    bufp->fullBit(oldp+71,((1U & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_read__DOT__fsm_state))));
    bufp->fullBit(oldp+72,(((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[3U] 
                             >> 0x1fU) | (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__take_branch1))));
    bufp->fullBit(oldp+73,(((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[1U] 
                             >> 0x1fU) | (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__take_branch2))));
    bufp->fullIData(oldp+74,((0x7ffffffU & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__insert_branch1)
                                             ? (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                                                >> 5U)
                                             : ((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[3U] 
                                                 << 0x1cU) 
                                                | (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[3U] 
                                                   >> 4U))))),27);
    bufp->fullIData(oldp+75,((0x7ffffffU & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__insert_branch2)
                                             ? (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                                                >> 5U)
                                             : ((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[1U] 
                                                 << 0x1cU) 
                                                | (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[1U] 
                                                   >> 4U))))),27);
    bufp->fullIData(oldp+76,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__take_branch1)
                               ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_btb_updateTarget
                               : ((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[3U] 
                                   << 0x1cU) | (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[2U] 
                                                >> 4U)))),32);
    bufp->fullIData(oldp+77,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__take_branch2)
                               ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_btb_updateTarget
                               : ((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[1U] 
                                   << 0x1cU) | (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[0U] 
                                                >> 4U)))),32);
    bufp->fullBit(oldp+78,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__take_branch1));
    bufp->fullBit(oldp+79,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__take_branch2));
    bufp->fullCData(oldp+80,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__next_fsm1),2);
    bufp->fullCData(oldp+81,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__next_fsm2),2);
    bufp->fullCData(oldp+82,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__insert_branch1)
                               ? 0U : (3U & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[2U] 
                                             >> 2U)))),2);
    bufp->fullCData(oldp+83,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__insert_branch2)
                               ? 0U : (3U & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[0U] 
                                             >> 2U)))),2);
    bufp->fullIData(oldp+84,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res),32);
    bufp->fullBit(oldp+85,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena));
    bufp->fullBit(oldp+86,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena));
    bufp->fullBit(oldp+87,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena));
    bufp->fullBit(oldp+88,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena));
    bufp->fullBit(oldp+89,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena));
    bufp->fullBit(oldp+90,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena));
    bufp->fullBit(oldp+91,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena));
    bufp->fullBit(oldp+92,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_id_ex_reg__DOT__stall));
    bufp->fullBit(oldp+93,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__branch));
    bufp->fullBit(oldp+94,((((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward) 
                             & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_hf3b640d6__0)) 
                            | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward) 
                               & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h5ab066c6__0)))));
    bufp->fullBit(oldp+95,((((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward) 
                             & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_hf3b640d6__0)) 
                            | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward) 
                               & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h5ab066c6__0)))));
    bufp->fullBit(oldp+96,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward));
    bufp->fullBit(oldp+97,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward));
    bufp->fullBit(oldp+98,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op1_forward));
    bufp->fullBit(oldp+99,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward));
    bufp->fullBit(oldp+100,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward));
    bufp->fullBit(oldp+101,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward));
    bufp->fullBit(oldp+102,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op2_forward));
    bufp->fullBit(oldp+103,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward));
    bufp->fullBit(oldp+104,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_forward_ena));
    bufp->fullBit(oldp+105,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op2_forward_ena));
    bufp->fullIData(oldp+106,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward)
                                ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__exu_res
                                : ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward)
                                    ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
                                    : ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op1_forward)
                                        ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_rd_data_forward
                                        : ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward)
                                            ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward
                                            : 0U))))),32);
    bufp->fullIData(oldp+107,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward)
                                ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__exu_res
                                : ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward)
                                    ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
                                    : ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op2_forward)
                                        ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_rd_data_forward
                                        : ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward)
                                            ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward
                                            : 0U))))),32);
    bufp->fullBit(oldp+108,(((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_op1 
                              ^ vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_op2) 
                             >> 0x1fU)));
    bufp->fullBit(oldp+109,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2));
    bufp->fullBit(oldp+110,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2));
    bufp->fullBit(oldp+111,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__now_bxx_jump_yes));
    bufp->fullBit(oldp+112,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__inst_bxx));
    bufp->fullBit(oldp+113,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__inst_jxx));
    bufp->fullBit(oldp+114,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__PC_error));
    bufp->fullCData(oldp+115,((((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
                                << 7U) | (((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7773c72a__0) 
                                           << 6U) | 
                                          (((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70f4116c__0) 
                                            << 5U) 
                                           | (((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0) 
                                               << 4U) 
                                              | (((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77488b95__0) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__branch) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77eb01fa__0))))))))),8);
    bufp->fullBit(oldp+116,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui));
    bufp->fullBit(oldp+117,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc));
    bufp->fullBit(oldp+118,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal));
    bufp->fullBit(oldp+119,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr));
    bufp->fullBit(oldp+120,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h489c6f46__0))));
    bufp->fullBit(oldp+121,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h489c6f46__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+122,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he80da865__0))));
    bufp->fullBit(oldp+123,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he80da865__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+124,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc65f4c50__0))));
    bufp->fullBit(oldp+125,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc65f4c50__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+126,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h1167153d__0))));
    bufp->fullBit(oldp+127,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h1167153d__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+128,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h29152e89__0))));
    bufp->fullBit(oldp+129,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h29152e89__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+130,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_heac6e652__0) 
                             & (IData)((0x2000U == 
                                        (0x3000U & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst))))));
    bufp->fullBit(oldp+131,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7855af38__0))));
    bufp->fullBit(oldp+132,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7855af38__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+133,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2bc0716a__0))));
    bufp->fullBit(oldp+134,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2bc0716a__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+135,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h6fd23990__0))));
    bufp->fullBit(oldp+136,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h6fd23990__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+137,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                             & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h03cab0f1__0))));
    bufp->fullBit(oldp+138,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                             & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7b49f5a3__0))));
    bufp->fullBit(oldp+139,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h36e9ef3c__0))));
    bufp->fullBit(oldp+140,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he2955f6b__0))));
    bufp->fullBit(oldp+141,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h4c825e07__0))));
    bufp->fullBit(oldp+142,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h3b427111__0))));
    bufp->fullBit(oldp+143,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                             & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h03cab0f1__0))));
    bufp->fullBit(oldp+144,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                             & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7b49f5a3__0))));
    bufp->fullBit(oldp+145,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd7439362__0))));
    bufp->fullBit(oldp+146,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7a82fdcc__0))));
    bufp->fullBit(oldp+147,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h3b427111__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+148,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+149,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+150,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h36e9ef3c__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+151,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he2955f6b__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+152,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h4c825e07__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+153,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd7439362__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+154,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7a82fdcc__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+155,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h41ceee20__0))));
    bufp->fullBit(oldp+156,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc1b77381__0))));
    bufp->fullBit(oldp+157,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc1b77381__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+158,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_ha08c85bd__0))));
    bufp->fullBit(oldp+159,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5a06bcf6__0))));
    bufp->fullBit(oldp+160,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5a06bcf6__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+161,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h41ceee20__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+162,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                 >> 0x1eU)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2e86cea5__0))));
    bufp->fullBit(oldp+163,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2e86cea5__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                >> 0x1eU))));
    bufp->fullBit(oldp+164,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall));
    bufp->fullBit(oldp+165,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h84595378__0) 
                             & (IData)((0x30000000U 
                                        == (0x30000000U 
                                            & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst))))));
    bufp->fullBit(oldp+166,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw));
    bufp->fullBit(oldp+167,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs));
    bufp->fullBit(oldp+168,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc));
    bufp->fullBit(oldp+169,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi));
    bufp->fullBit(oldp+170,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi));
    bufp->fullBit(oldp+171,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci));
    bufp->fullBit(oldp+172,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h84595378__0) 
                             & (1U == (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                       >> 0x14U)))));
    bufp->fullBit(oldp+173,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77eb01fa__0) 
                             | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                                | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0) 
                                   | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70f4116c__0) 
                                      | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
                                         | (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd9b03bc2__0))))))));
    bufp->fullBit(oldp+174,(((~ (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_ena)) 
                             & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77eb01fa__0) 
                                | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                                   | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0) 
                                      | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70f4116c__0) 
                                         | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
                                            | (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd9b03bc2__0)))))))));
    bufp->fullBit(oldp+175,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if1if2reg__DOT__stall));
    bufp->fullBit(oldp+176,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if1if2reg__DOT__flush));
    bufp->fullBit(oldp+177,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if2idureg__DOT__stall));
    bufp->fullCData(oldp+178,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask),4);
    bufp->fullIData(oldp+179,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc),32);
    bufp->fullIData(oldp+180,(vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst),32);
    bufp->fullIData(oldp+181,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_inst),32);
    bufp->fullIData(oldp+182,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_pc),32);
    bufp->fullIData(oldp+183,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc),32);
    bufp->fullBit(oldp+184,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_valid_o));
    bufp->fullIData(oldp+185,(vlSelf->ysyx_25060170_topcore__DOT__DPIC_DPIC_MEM_data),32);
    bufp->fullIData(oldp+186,(vlSelf->ysyx_25060170_topcore__DOT__diff_test_skip_o),32);
    bufp->fullIData(oldp+187,(vlSelf->ysyx_25060170_topcore__DOT__dpic_diff_skip_flag_o),32);
    bufp->fullBit(oldp+188,((0x40000033U == vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst)));
    bufp->fullIData(oldp+189,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0U]),32);
    bufp->fullIData(oldp+190,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [1U]),32);
    bufp->fullIData(oldp+191,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [2U]),32);
    bufp->fullIData(oldp+192,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [3U]),32);
    bufp->fullIData(oldp+193,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [4U]),32);
    bufp->fullIData(oldp+194,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [5U]),32);
    bufp->fullIData(oldp+195,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [6U]),32);
    bufp->fullIData(oldp+196,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [7U]),32);
    bufp->fullIData(oldp+197,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [8U]),32);
    bufp->fullIData(oldp+198,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [9U]),32);
    bufp->fullIData(oldp+199,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xaU]),32);
    bufp->fullIData(oldp+200,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xbU]),32);
    bufp->fullIData(oldp+201,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xcU]),32);
    bufp->fullIData(oldp+202,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xdU]),32);
    bufp->fullIData(oldp+203,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xeU]),32);
    bufp->fullIData(oldp+204,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xfU]),32);
    bufp->fullIData(oldp+205,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x10U]),32);
    bufp->fullIData(oldp+206,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x11U]),32);
    bufp->fullIData(oldp+207,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x12U]),32);
    bufp->fullIData(oldp+208,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x13U]),32);
    bufp->fullIData(oldp+209,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x14U]),32);
    bufp->fullIData(oldp+210,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x15U]),32);
    bufp->fullIData(oldp+211,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x16U]),32);
    bufp->fullIData(oldp+212,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x17U]),32);
    bufp->fullIData(oldp+213,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x18U]),32);
    bufp->fullIData(oldp+214,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x19U]),32);
    bufp->fullIData(oldp+215,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1aU]),32);
    bufp->fullIData(oldp+216,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1bU]),32);
    bufp->fullIData(oldp+217,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1cU]),32);
    bufp->fullIData(oldp+218,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1dU]),32);
    bufp->fullIData(oldp+219,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1eU]),32);
    bufp->fullIData(oldp+220,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1fU]),32);
    bufp->fullIData(oldp+221,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_currentpc),32);
    bufp->fullCData(oldp+222,((0x1fU & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                        >> 7U))),5);
    bufp->fullIData(oldp+223,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus),32);
    bufp->fullIData(oldp+224,((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
                               << 2U)),32);
    bufp->fullIData(oldp+225,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mepc),32);
    bufp->fullIData(oldp+226,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mcause),32);
    bufp->fullIData(oldp+227,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mscratch),32);
    bufp->fullIData(oldp+228,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__DPIC_inst),32);
    bufp->fullBit(oldp+229,((0x6fU == (0x7fU & vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst))));
    bufp->fullBit(oldp+230,((0x67U == (0x7fU & vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst))));
    bufp->fullIData(oldp+231,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res),32);
    bufp->fullIData(oldp+232,(((IData)(4U) + vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc)),32);
    bufp->fullIData(oldp+233,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_nextpc),32);
    bufp->fullBit(oldp+234,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_bpupredict));
    bufp->fullBit(oldp+235,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_valid));
    bufp->fullBit(oldp+236,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_bpuvalid));
    bufp->fullIData(oldp+237,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc),32);
    bufp->fullIData(oldp+238,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst),32);
    bufp->fullIData(oldp+239,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_nextpc),32);
    bufp->fullBit(oldp+240,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_bpupredict));
    bufp->fullBit(oldp+241,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_bpuvalid));
    bufp->fullBit(oldp+242,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_valid));
    bufp->fullBit(oldp+243,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena));
    bufp->fullBit(oldp+244,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_csr_ena));
    bufp->fullCData(oldp+245,((0x1fU & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+246,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc),8);
    bufp->fullIData(oldp+247,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc),32);
    bufp->fullIData(oldp+248,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst),32);
    bufp->fullIData(oldp+249,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc),32);
    bufp->fullIData(oldp+250,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1),32);
    bufp->fullIData(oldp+251,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2),32);
    bufp->fullCData(oldp+252,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel),2);
    bufp->fullCData(oldp+253,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel),3);
    bufp->fullBit(oldp+254,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena));
    bufp->fullCData(oldp+255,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr),5);
    bufp->fullCData(oldp+256,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr),5);
    bufp->fullIData(oldp+257,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm),32);
    bufp->fullCData(oldp+258,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl),4);
    bufp->fullCData(oldp+259,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl),2);
    bufp->fullBit(oldp+260,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag));
    bufp->fullBit(oldp+261,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_valid));
    bufp->fullIData(oldp+262,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst),32);
    bufp->fullIData(oldp+263,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data),32);
    bufp->fullCData(oldp+264,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl),4);
    bufp->fullCData(oldp+265,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl),2);
    bufp->fullCData(oldp+266,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl),7);
    bufp->fullIData(oldp+267,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_data),32);
    bufp->fullBit(oldp+268,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena));
    bufp->fullCData(oldp+269,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr),5);
    bufp->fullSData(oldp+270,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr),12);
    bufp->fullIData(oldp+271,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc),32);
    bufp->fullIData(oldp+272,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc),32);
    bufp->fullBit(oldp+273,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_valid));
    bufp->fullBit(oldp+274,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag));
    bufp->fullIData(oldp+275,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst),32);
    bufp->fullIData(oldp+276,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc),32);
    bufp->fullIData(oldp+277,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc),32);
    bufp->fullCData(oldp+278,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl),4);
    bufp->fullCData(oldp+279,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl),2);
    bufp->fullBit(oldp+280,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena));
    bufp->fullCData(oldp+281,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr),5);
    bufp->fullCData(oldp+282,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl),7);
    bufp->fullSData(oldp+283,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr),12);
    bufp->fullIData(oldp+284,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_data),32);
    bufp->fullBit(oldp+285,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_valid));
    bufp->fullBit(oldp+286,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re));
    bufp->fullIData(oldp+287,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res),32);
    bufp->fullBit(oldp+288,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag));
    bufp->fullBit(oldp+289,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_valid));
    bufp->fullIData(oldp+290,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res),32);
    bufp->fullIData(oldp+291,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data),32);
    bufp->fullCData(oldp+292,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl),2);
    bufp->fullBit(oldp+293,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena));
    bufp->fullCData(oldp+294,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr),5);
    bufp->fullCData(oldp+295,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl),7);
    bufp->fullSData(oldp+296,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr),12);
    bufp->fullIData(oldp+297,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_data),32);
    bufp->fullBit(oldp+298,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_reg_load_flag));
    bufp->fullIData(oldp+299,((((- (IData)((1U & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl)))) 
                                & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res) 
                               | (((- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl) 
                                                >> 1U)))) 
                                   & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data) 
                                  | ((- (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))))) 
                                     & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_data)))),32);
    bufp->fullIData(oldp+300,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward),32);
    bufp->fullIData(oldp+301,(((2U & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                ? 0xbU : 0U)),32);
    bufp->fullIData(oldp+302,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_csr_write_csr_data),32);
    bufp->fullIData(oldp+303,((((0x300U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                   >> 2U)) ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus
                                : ((1U & (((0x341U 
                                            == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                           & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                              >> 2U)) 
                                          | (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl)))
                                    ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mepc
                                    : ((1U & (((0x305U 
                                                == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                               & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                                  >> 2U)) 
                                              | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                                 >> 1U)))
                                        ? (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
                                           << 2U) : 
                                       (((0x342U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                         & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                            >> 2U))
                                         ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mcause
                                         : (((0x340U 
                                              == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                             & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                                >> 2U))
                                             ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mscratch
                                             : (((0xf12U 
                                                  == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                                 & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                                    >> 2U))
                                                 ? 0U
                                                 : 0U))))))),32);
    bufp->fullCData(oldp+304,((7U & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc 
                                     >> 2U))),3);
    bufp->fullIData(oldp+305,((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc 
                               >> 5U)),27);
    bufp->fullWData(oldp+306,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set),128);
    bufp->fullCData(oldp+310,((7U & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                                     >> 2U))),3);
    bufp->fullIData(oldp+311,((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                               >> 5U)),27);
    bufp->fullBit(oldp+312,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch1));
    bufp->fullBit(oldp+313,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch2));
    bufp->fullBit(oldp+314,((1U & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_lru__DOT__lru_reg) 
                                   >> (7U & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc 
                                             >> 2U))))));
    bufp->fullBit(oldp+315,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__lru_write));
    bufp->fullCData(oldp+316,((3U & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc)),2);
    bufp->fullCData(oldp+317,((3U & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc)),2);
    bufp->fullCData(oldp+318,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_lru__DOT__lru_reg),8);
    bufp->fullIData(oldp+319,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch1)
                                ? ((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[3U] 
                                    << 0x1cU) | (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[2U] 
                                                 >> 4U))
                                : ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch2)
                                    ? ((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[1U] 
                                        << 0x1cU) | 
                                       (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[0U] 
                                        >> 4U)) : 0U))),32);
    bufp->fullBit(oldp+320,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch1) 
                             | (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch2))));
    bufp->fullBit(oldp+321,((1U & (((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch1)
                                     ? ((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[2U] 
                                         << 0x1eU) 
                                        | (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[2U] 
                                           >> 2U)) : 
                                    ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch2)
                                      ? ((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[0U] 
                                          << 0x1eU) 
                                         | (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[0U] 
                                            >> 2U))
                                      : 0U)) >> 1U))));
    bufp->fullBit(oldp+322,((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[3U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+323,((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[1U] 
                             >> 0x1fU)));
    bufp->fullIData(oldp+324,((0x7ffffffU & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[3U] 
                                             >> 4U))),27);
    bufp->fullIData(oldp+325,((0x7ffffffU & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[1U] 
                                             >> 4U))),27);
    bufp->fullIData(oldp+326,(((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[3U] 
                                << 0x1cU) | (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[2U] 
                                             >> 4U))),32);
    bufp->fullIData(oldp+327,(((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[1U] 
                                << 0x1cU) | (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[0U] 
                                             >> 4U))),32);
    bufp->fullCData(oldp+328,((3U & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[2U] 
                                     >> 2U))),2);
    bufp->fullCData(oldp+329,((3U & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[0U] 
                                     >> 2U))),2);
    bufp->fullCData(oldp+330,((3U & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch1)
                                      ? ((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[2U] 
                                          << 0x1eU) 
                                         | (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[2U] 
                                            >> 2U))
                                      : ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch2)
                                          ? ((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[0U] 
                                              << 0x1eU) 
                                             | (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[0U] 
                                                >> 2U))
                                          : 0U)))),2);
    bufp->fullCData(oldp+331,(((8U & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[0U] 
                                      << 3U)) | ((4U 
                                                  & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[0U] 
                                                     << 1U)) 
                                                 | (3U 
                                                    & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[2U])))),4);
    bufp->fullBit(oldp+332,((1U & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch1)
                                    ? ((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[2U] 
                                        << 0x1eU) | 
                                       (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[2U] 
                                        >> 2U)) : ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch2)
                                                    ? 
                                                   ((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[0U] 
                                                     << 0x1eU) 
                                                    | (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[0U] 
                                                       >> 2U))
                                                    : 0U)))));
    bufp->fullWData(oldp+333,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem[0]),128);
    bufp->fullWData(oldp+337,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem[1]),128);
    bufp->fullWData(oldp+341,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem[2]),128);
    bufp->fullWData(oldp+345,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem[3]),128);
    bufp->fullWData(oldp+349,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem[4]),128);
    bufp->fullWData(oldp+353,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem[5]),128);
    bufp->fullWData(oldp+357,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem[6]),128);
    bufp->fullWData(oldp+361,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem[7]),128);
    bufp->fullCData(oldp+365,((0xfU & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))),4);
    bufp->fullBit(oldp+366,(((0x300U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 2U))));
    bufp->fullBit(oldp+367,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr));
    bufp->fullBit(oldp+368,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie));
    bufp->fullBit(oldp+369,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie));
    bufp->fullCData(oldp+370,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp),2);
    bufp->fullBit(oldp+371,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena));
    bufp->fullBit(oldp+372,((1U & ((~ ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 1U)) & ((1U 
                                                   & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                                   ? (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)
                                                   : 
                                                  ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                                    ? 
                                                   (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_csr_write_csr_data 
                                                    >> 3U)
                                                    : (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)))))));
    bufp->fullBit(oldp+373,((1U & ((2U & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                    ? (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)
                                    : ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                           ? (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_csr_write_csr_data 
                                              >> 7U)
                                           : (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)))))));
    bufp->fullCData(oldp+374,(((2U & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                ? 3U : ((1U & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                         ? 0U : (3U 
                                                 & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                                     ? 
                                                    (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_csr_write_csr_data 
                                                     >> 0xdU)
                                                     : (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp)))))),2);
    bufp->fullBit(oldp+375,((1U & (((0x305U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                    & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 2U)) | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+376,(((0x305U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 3U))));
    bufp->fullIData(oldp+377,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mtvec_base),30);
    bufp->fullBit(oldp+378,((1U & (((0x341U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                    & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 2U)) | (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl)))));
    bufp->fullBit(oldp+379,((1U & (((0x341U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                    & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 3U)) | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+380,(((0x342U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 2U))));
    bufp->fullBit(oldp+381,(((0x342U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 3U))));
    bufp->fullBit(oldp+382,(((0xf12U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 2U))));
    bufp->fullBit(oldp+383,(((0x340U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 2U))));
    bufp->fullBit(oldp+384,(((0x340U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 3U))));
    bufp->fullBit(oldp+385,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall));
    bufp->fullIData(oldp+386,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1),32);
    bufp->fullIData(oldp+387,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2),32);
    bufp->fullIData(oldp+388,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2),32);
    bufp->fullIData(oldp+389,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2),32);
    bufp->fullBit(oldp+390,((1U & (((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                        >> 0x1fU)) 
                                    & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                       >> 0x1fU)) | 
                                   (((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                         >> 0x1fU)) 
                                     & ((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                            >> 0x1fU)) 
                                        & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2 
                                           >> 0x1fU))) 
                                    | ((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                        & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                           & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2)) 
                                       >> 0x1fU))))));
    bufp->fullIData(oldp+391,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2),32);
    bufp->fullQData(oldp+392,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul),64);
    bufp->fullIData(oldp+394,((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul)),32);
    bufp->fullIData(oldp+395,((IData)((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+396,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div),32);
    bufp->fullIData(oldp+397,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__rem),32);
    bufp->fullIData(oldp+398,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr),32);
    bufp->fullBit(oldp+399,(((0x94U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                             | ((0xc8U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                | (0xa4U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))))));
    bufp->fullCData(oldp+400,((0x1fU & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+401,((0x7fU & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst)),7);
    bufp->fullCData(oldp+402,((7U & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+403,((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                               >> 0x19U)),7);
    bufp->fullSData(oldp+404,((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+405,(((0x80000U & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                            >> 0xcU)) 
                               | ((0x7f800U & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                               >> 1U)) 
                                  | ((0x400U & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                                >> 0xaU)) 
                                     | (0x3ffU & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                                  >> 0x15U)))))),20);
    bufp->fullIData(oldp+406,((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                               >> 0xcU)),20);
    bufp->fullSData(oldp+407,(((0xfe0U & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                           >> 7U)))),12);
    bufp->fullSData(oldp+408,(((0x800U & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                          >> 0x14U)) 
                               | ((0x400U & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                             << 3U)) 
                                  | ((0x3f0U & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                                >> 0x15U)) 
                                     | (0xfU & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                                >> 8U)))))),12);
    bufp->fullBit(oldp+409,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__data_ok));
    bufp->fullCData(oldp+410,((3U & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res)),2);
    bufp->fullBit(oldp+411,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_mem__DOT__data_ok));
    bufp->fullCData(oldp+412,((0xffU & vlSelf->ysyx_25060170_topcore__DOT__DPIC_DPIC_MEM_data)),8);
    bufp->fullSData(oldp+413,((0xffffU & vlSelf->ysyx_25060170_topcore__DOT__DPIC_DPIC_MEM_data)),16);
    bufp->fullIData(oldp+414,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0]),32);
    bufp->fullIData(oldp+415,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[1]),32);
    bufp->fullIData(oldp+416,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[2]),32);
    bufp->fullIData(oldp+417,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[3]),32);
    bufp->fullIData(oldp+418,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[4]),32);
    bufp->fullIData(oldp+419,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[5]),32);
    bufp->fullIData(oldp+420,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[6]),32);
    bufp->fullIData(oldp+421,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[7]),32);
    bufp->fullIData(oldp+422,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[8]),32);
    bufp->fullIData(oldp+423,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[9]),32);
    bufp->fullIData(oldp+424,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[10]),32);
    bufp->fullIData(oldp+425,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[11]),32);
    bufp->fullIData(oldp+426,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[12]),32);
    bufp->fullIData(oldp+427,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[13]),32);
    bufp->fullIData(oldp+428,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[14]),32);
    bufp->fullIData(oldp+429,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[15]),32);
    bufp->fullIData(oldp+430,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[16]),32);
    bufp->fullIData(oldp+431,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[17]),32);
    bufp->fullIData(oldp+432,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[18]),32);
    bufp->fullIData(oldp+433,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[19]),32);
    bufp->fullIData(oldp+434,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[20]),32);
    bufp->fullIData(oldp+435,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[21]),32);
    bufp->fullIData(oldp+436,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[22]),32);
    bufp->fullIData(oldp+437,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[23]),32);
    bufp->fullIData(oldp+438,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[24]),32);
    bufp->fullIData(oldp+439,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[25]),32);
    bufp->fullIData(oldp+440,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[26]),32);
    bufp->fullIData(oldp+441,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[27]),32);
    bufp->fullIData(oldp+442,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[28]),32);
    bufp->fullIData(oldp+443,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[29]),32);
    bufp->fullIData(oldp+444,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[30]),32);
    bufp->fullIData(oldp+445,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[31]),32);
    bufp->fullBit(oldp+446,(vlSelf->clk));
    bufp->fullBit(oldp+447,(vlSelf->rst));
    bufp->fullIData(oldp+448,((((~ (IData)(vlSelf->rst)) 
                                & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_ena))
                                ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                               [vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_addr]
                                : 0U)),32);
    bufp->fullIData(oldp+449,((((~ (IData)(vlSelf->rst)) 
                                & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_ena))
                                ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                               [vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_addr]
                                : 0U)),32);
    bufp->fullBit(oldp+450,(((~ ((IData)(vlSelf->rst) 
                                 & (0U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)))) 
                             & (((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_ena) 
                                 & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h5a345cf6__0) 
                                    & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_addr) 
                                       == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))) 
                                | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_ha77af658__0) 
                                   & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_addr) 
                                      == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr)))))));
    bufp->fullBit(oldp+451,(((~ ((IData)(vlSelf->rst) 
                                 & (0U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)))) 
                             & (((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_ena) 
                                 & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h5a345cf6__0) 
                                    & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_addr) 
                                       == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))) 
                                | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_ha77af658__0) 
                                   & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_addr) 
                                      == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr)))))));
    bufp->fullCData(oldp+452,(((IData)(vlSelf->rst)
                                ? 0U : ((0U == (3U 
                                                & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                         ? 3U : ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                                  ? 0xcU
                                                  : 0U)))),4);
    bufp->fullIData(oldp+453,(((IData)(vlSelf->rst)
                                ? 0U : ((8U & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                         ? ((4U & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                             ? ((2U 
                                                 & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                  ? 0U
                                                  : 
                                                 (0xffffU 
                                                  & vlSelf->ysyx_25060170_topcore__DOT__DPIC_DPIC_MEM_data))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                  ? 
                                                 (0xffU 
                                                  & vlSelf->ysyx_25060170_topcore__DOT__DPIC_DPIC_MEM_data)
                                                  : 0U))
                                             : ((2U 
                                                 & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                  ? vlSelf->ysyx_25060170_topcore__DOT__DPIC_DPIC_MEM_data
                                                  : 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_25060170_topcore__DOT__DPIC_DPIC_MEM_data 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->ysyx_25060170_topcore__DOT__DPIC_DPIC_MEM_data)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_25060170_topcore__DOT__DPIC_DPIC_MEM_data 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelf->ysyx_25060170_topcore__DOT__DPIC_DPIC_MEM_data))
                                                  : 0U)))
                                         : 0U))),32);
    bufp->fullCData(oldp+454,(4U),8);
    bufp->fullIData(oldp+455,(0U),32);
    bufp->fullIData(oldp+456,(2U),32);
    bufp->fullIData(oldp+457,(1U),32);
    bufp->fullBit(oldp+458,(0U));
    bufp->fullBit(oldp+459,(1U));
    bufp->fullCData(oldp+460,(0U),2);
    bufp->fullCData(oldp+461,(0xfU),4);
}
