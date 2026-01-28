// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_25060170_fishtailcore__Syms.h"


VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root__trace_init_sub__TOP__0(Vysyx_25060170_fishtailcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+290,"clk", false,-1);
    tracep->declBit(c+291,"rst", false,-1);
    tracep->declBus(c+292,"DPIC_if_id_pc", false,-1, 31,0);
    tracep->declBus(c+293,"DPIC_dpic_ifu_inst", false,-1, 31,0);
    tracep->declBus(c+294,"DPIC_if_id_reg_pc", false,-1, 31,0);
    tracep->declBus(c+295,"DPIC_idu_dpic_rd_addr", false,-1, 4,0);
    tracep->declBus(c+296,"DPIC_idu_imm", false,-1, 31,0);
    tracep->declBus(c+297,"DPIC_regs0", false,-1, 31,0);
    tracep->declBus(c+298,"DPIC_regs1", false,-1, 31,0);
    tracep->declBus(c+299,"DPIC_regs2", false,-1, 31,0);
    tracep->declBus(c+300,"DPIC_regs3", false,-1, 31,0);
    tracep->declBus(c+301,"DPIC_regs4", false,-1, 31,0);
    tracep->declBus(c+302,"DPIC_regs5", false,-1, 31,0);
    tracep->declBus(c+303,"DPIC_regs6", false,-1, 31,0);
    tracep->declBus(c+304,"DPIC_regs7", false,-1, 31,0);
    tracep->declBus(c+305,"DPIC_regs8", false,-1, 31,0);
    tracep->declBus(c+306,"DPIC_regs9", false,-1, 31,0);
    tracep->declBus(c+307,"DPIC_regs10", false,-1, 31,0);
    tracep->declBus(c+308,"DPIC_regs11", false,-1, 31,0);
    tracep->declBus(c+309,"DPIC_regs12", false,-1, 31,0);
    tracep->declBus(c+310,"DPIC_regs13", false,-1, 31,0);
    tracep->declBus(c+311,"DPIC_regs14", false,-1, 31,0);
    tracep->declBus(c+312,"DPIC_regs15", false,-1, 31,0);
    tracep->declBus(c+313,"DPIC_regs16", false,-1, 31,0);
    tracep->declBus(c+314,"DPIC_regs17", false,-1, 31,0);
    tracep->declBus(c+315,"DPIC_regs18", false,-1, 31,0);
    tracep->declBus(c+316,"DPIC_regs19", false,-1, 31,0);
    tracep->declBus(c+317,"DPIC_regs20", false,-1, 31,0);
    tracep->declBus(c+318,"DPIC_regs21", false,-1, 31,0);
    tracep->declBus(c+319,"DPIC_regs22", false,-1, 31,0);
    tracep->declBus(c+320,"DPIC_regs23", false,-1, 31,0);
    tracep->declBus(c+321,"DPIC_regs24", false,-1, 31,0);
    tracep->declBus(c+322,"DPIC_regs25", false,-1, 31,0);
    tracep->declBus(c+323,"DPIC_regs26", false,-1, 31,0);
    tracep->declBus(c+324,"DPIC_regs27", false,-1, 31,0);
    tracep->declBus(c+325,"DPIC_regs28", false,-1, 31,0);
    tracep->declBus(c+326,"DPIC_regs29", false,-1, 31,0);
    tracep->declBus(c+327,"DPIC_regs30", false,-1, 31,0);
    tracep->declBus(c+328,"DPIC_regs31", false,-1, 31,0);
    tracep->declBus(c+329,"DPIC_dpic_mhartid", false,-1, 31,0);
    tracep->declBus(c+330,"DPIC_dpic_mstatus", false,-1, 31,0);
    tracep->declBus(c+331,"DPIC_dpic_mepc", false,-1, 31,0);
    tracep->declBus(c+332,"DPIC_dpic_mtvec", false,-1, 31,0);
    tracep->declBus(c+333,"DPIC_dpic_mcause", false,-1, 31,0);
    tracep->declBus(c+334,"DPIC_dpic_mscratch", false,-1, 31,0);
    tracep->declBit(c+335,"DPIC_ls_mem_re", false,-1);
    tracep->declBit(c+336,"DPIC_ls_dpic_we", false,-1);
    tracep->declBus(c+337,"DPIC_ls_dpic_data", false,-1, 31,0);
    tracep->declBus(c+338,"DPIC_ls_dpic_wlen", false,-1, 7,0);
    tracep->declBus(c+339,"DPIC_ls_dpic_rlen", false,-1, 7,0);
    tracep->declBus(c+340,"DPIC_dpi_ls_mem_skip_flag", false,-1, 31,0);
    tracep->declBus(c+341,"DPIC_mem_wb_skip_flag", false,-1, 31,0);
    tracep->declBus(c+342,"DPIC_wbu_dpic_inst", false,-1, 31,0);
    tracep->declBus(c+343,"DPIC_wbu_dpic_pc", false,-1, 31,0);
    tracep->declBus(c+344,"DPIC_wbu_dpic_next_pc", false,-1, 31,0);
    tracep->declBit(c+345,"DPIC_wbu_dpic_valid", false,-1);
    tracep->declBus(c+346,"DPIC_DPIC_MEM_data", false,-1, 31,0);
    tracep->declBus(c+347,"DPIC_ls_dpic_raddr", false,-1, 31,0);
    tracep->declBus(c+348,"DPIC_ls_dpic_waddr", false,-1, 31,0);
    tracep->declBus(c+349,"DPIC_ex_ls_reg_pc", false,-1, 31,0);
    tracep->declBit(c+350,"DPIC_magic_flag", false,-1);
    tracep->pushNamePrefix("ysyx_25060170_fishtailcore ");
    tracep->declBit(c+290,"clk", false,-1);
    tracep->declBit(c+291,"rst", false,-1);
    tracep->declBus(c+292,"DPIC_if_id_pc", false,-1, 31,0);
    tracep->declBus(c+293,"DPIC_dpic_ifu_inst", false,-1, 31,0);
    tracep->declBus(c+294,"DPIC_if_id_reg_pc", false,-1, 31,0);
    tracep->declBus(c+295,"DPIC_idu_dpic_rd_addr", false,-1, 4,0);
    tracep->declBus(c+296,"DPIC_idu_imm", false,-1, 31,0);
    tracep->declBus(c+297,"DPIC_regs0", false,-1, 31,0);
    tracep->declBus(c+298,"DPIC_regs1", false,-1, 31,0);
    tracep->declBus(c+299,"DPIC_regs2", false,-1, 31,0);
    tracep->declBus(c+300,"DPIC_regs3", false,-1, 31,0);
    tracep->declBus(c+301,"DPIC_regs4", false,-1, 31,0);
    tracep->declBus(c+302,"DPIC_regs5", false,-1, 31,0);
    tracep->declBus(c+303,"DPIC_regs6", false,-1, 31,0);
    tracep->declBus(c+304,"DPIC_regs7", false,-1, 31,0);
    tracep->declBus(c+305,"DPIC_regs8", false,-1, 31,0);
    tracep->declBus(c+306,"DPIC_regs9", false,-1, 31,0);
    tracep->declBus(c+307,"DPIC_regs10", false,-1, 31,0);
    tracep->declBus(c+308,"DPIC_regs11", false,-1, 31,0);
    tracep->declBus(c+309,"DPIC_regs12", false,-1, 31,0);
    tracep->declBus(c+310,"DPIC_regs13", false,-1, 31,0);
    tracep->declBus(c+311,"DPIC_regs14", false,-1, 31,0);
    tracep->declBus(c+312,"DPIC_regs15", false,-1, 31,0);
    tracep->declBus(c+313,"DPIC_regs16", false,-1, 31,0);
    tracep->declBus(c+314,"DPIC_regs17", false,-1, 31,0);
    tracep->declBus(c+315,"DPIC_regs18", false,-1, 31,0);
    tracep->declBus(c+316,"DPIC_regs19", false,-1, 31,0);
    tracep->declBus(c+317,"DPIC_regs20", false,-1, 31,0);
    tracep->declBus(c+318,"DPIC_regs21", false,-1, 31,0);
    tracep->declBus(c+319,"DPIC_regs22", false,-1, 31,0);
    tracep->declBus(c+320,"DPIC_regs23", false,-1, 31,0);
    tracep->declBus(c+321,"DPIC_regs24", false,-1, 31,0);
    tracep->declBus(c+322,"DPIC_regs25", false,-1, 31,0);
    tracep->declBus(c+323,"DPIC_regs26", false,-1, 31,0);
    tracep->declBus(c+324,"DPIC_regs27", false,-1, 31,0);
    tracep->declBus(c+325,"DPIC_regs28", false,-1, 31,0);
    tracep->declBus(c+326,"DPIC_regs29", false,-1, 31,0);
    tracep->declBus(c+327,"DPIC_regs30", false,-1, 31,0);
    tracep->declBus(c+328,"DPIC_regs31", false,-1, 31,0);
    tracep->declBus(c+329,"DPIC_dpic_mhartid", false,-1, 31,0);
    tracep->declBus(c+330,"DPIC_dpic_mstatus", false,-1, 31,0);
    tracep->declBus(c+331,"DPIC_dpic_mepc", false,-1, 31,0);
    tracep->declBus(c+332,"DPIC_dpic_mtvec", false,-1, 31,0);
    tracep->declBus(c+333,"DPIC_dpic_mcause", false,-1, 31,0);
    tracep->declBus(c+334,"DPIC_dpic_mscratch", false,-1, 31,0);
    tracep->declBit(c+335,"DPIC_ls_mem_re", false,-1);
    tracep->declBit(c+336,"DPIC_ls_dpic_we", false,-1);
    tracep->declBus(c+337,"DPIC_ls_dpic_data", false,-1, 31,0);
    tracep->declBus(c+338,"DPIC_ls_dpic_wlen", false,-1, 7,0);
    tracep->declBus(c+339,"DPIC_ls_dpic_rlen", false,-1, 7,0);
    tracep->declBus(c+340,"DPIC_dpi_ls_mem_skip_flag", false,-1, 31,0);
    tracep->declBus(c+341,"DPIC_mem_wb_skip_flag", false,-1, 31,0);
    tracep->declBus(c+342,"DPIC_wbu_dpic_inst", false,-1, 31,0);
    tracep->declBus(c+343,"DPIC_wbu_dpic_pc", false,-1, 31,0);
    tracep->declBus(c+344,"DPIC_wbu_dpic_next_pc", false,-1, 31,0);
    tracep->declBit(c+345,"DPIC_wbu_dpic_valid", false,-1);
    tracep->declBus(c+346,"DPIC_DPIC_MEM_data", false,-1, 31,0);
    tracep->declBus(c+347,"DPIC_ls_dpic_raddr", false,-1, 31,0);
    tracep->declBus(c+347,"DPIC_ls_dpic_waddr", false,-1, 31,0);
    tracep->declBus(c+349,"DPIC_ex_ls_reg_pc", false,-1, 31,0);
    tracep->declBit(c+350,"DPIC_magic_flag", false,-1);
    tracep->declBus(c+293,"if_id_inst", false,-1, 31,0);
    tracep->declBus(c+351,"bp_if_pc", false,-1, 31,0);
    tracep->declBit(c+7,"bp_predict", false,-1);
    tracep->declBus(c+352,"bp_rs1_data", false,-1, 31,0);
    tracep->declBus(c+2,"bp_rs1_addr", false,-1, 4,0);
    tracep->declBit(c+3,"bp_rs1_ena", false,-1);
    tracep->declBit(c+4,"bpu_ifu_inst_bxx", false,-1);
    tracep->declBit(c+5,"bpu_ifu_jal_jalr", false,-1);
    tracep->declBus(c+353,"id_jump_pc", false,-1, 31,0);
    tracep->declBit(c+374,"ls_pc_jump", false,-1);
    tracep->declBus(c+132,"ls_jump_pc", false,-1, 31,0);
    tracep->declBit(c+8,"id_ready", false,-1);
    tracep->declBit(c+9,"id_stall", false,-1);
    tracep->declBit(c+10,"if_valid", false,-1);
    tracep->declBus(c+133,"if_id_next_pc", false,-1, 31,0);
    tracep->declBit(c+4,"if_id_inst_bxx", false,-1);
    tracep->declBit(c+374,"ls_flush", false,-1);
    tracep->declBit(c+11,"id_flush", false,-1);
    tracep->declBus(c+134,"if_id_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+135,"if_id_reg_inst", false,-1, 31,0);
    tracep->declBit(c+136,"if_id_reg_inst_bxx", false,-1);
    tracep->declBit(c+137,"if_id_reg_bp_jump", false,-1);
    tracep->declBit(c+138,"if_id_valid", false,-1);
    tracep->declBit(c+139,"ex_csr_ena", false,-1);
    tracep->declBit(c+140,"ls_csr_ena", false,-1);
    tracep->declBus(c+354,"rf_id_rs1_data", false,-1, 31,0);
    tracep->declBus(c+355,"rf_id_rs2_data", false,-1, 31,0);
    tracep->declBit(c+1,"ex_ready", false,-1);
    tracep->declBus(c+12,"idu_rs1_addr", false,-1, 4,0);
    tracep->declBit(c+13,"idu_rs1_ena", false,-1);
    tracep->declBus(c+14,"idu_rs2_addr", false,-1, 4,0);
    tracep->declBit(c+15,"idu_rs2_ena", false,-1);
    tracep->declBit(c+16,"idu_rd_ena", false,-1);
    tracep->declBus(c+356,"idu_rd_addr", false,-1, 4,0);
    tracep->declBus(c+17,"idu_alusrc", false,-1, 7,0);
    tracep->declBus(c+18,"idu_lsctl", false,-1, 3,0);
    tracep->declBus(c+19,"idu_wbctl", false,-1, 1,0);
    tracep->declBus(c+20,"idu_op1_sel", false,-1, 1,0);
    tracep->declBus(c+21,"idu_op2_sel", false,-1, 2,0);
    tracep->declBit(c+22,"idu_load_flag", false,-1);
    tracep->declBit(c+23,"idu_csr_ena", false,-1);
    tracep->declBus(c+24,"idu_op1", false,-1, 31,0);
    tracep->declBus(c+25,"idu_op2", false,-1, 31,0);
    tracep->declBus(c+294,"idu_pc", false,-1, 31,0);
    tracep->declBus(c+357,"idu_next_pc", false,-1, 31,0);
    tracep->declBus(c+135,"idu_inst", false,-1, 31,0);
    tracep->declBus(c+141,"idu_csr_imm", false,-1, 4,0);
    tracep->declBit(c+26,"id_predict_error", false,-1);
    tracep->declBit(c+27,"ex_branch", false,-1);
    tracep->declBus(c+142,"id_ex_reg_alusrc", false,-1, 7,0);
    tracep->declBit(c+28,"id_valid", false,-1);
    tracep->declBus(c+143,"id_ex_reg_pc", false,-1, 31,0);
    tracep->declBus(c+144,"id_ex_reg_inst", false,-1, 31,0);
    tracep->declBus(c+145,"id_ex_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+146,"id_ex_reg_op1", false,-1, 31,0);
    tracep->declBus(c+147,"id_ex_reg_op2", false,-1, 31,0);
    tracep->declBus(c+148,"id_ex_reg_op1_sel", false,-1, 1,0);
    tracep->declBus(c+149,"id_ex_reg_op2_sel", false,-1, 2,0);
    tracep->declBit(c+150,"id_ex_reg_rd_ena", false,-1);
    tracep->declBus(c+151,"id_ex_reg_rd_addr", false,-1, 4,0);
    tracep->declBus(c+152,"id_ex_reg_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+153,"id_ex_reg_imm", false,-1, 31,0);
    tracep->declBus(c+154,"id_ex_reg_lsctl", false,-1, 3,0);
    tracep->declBus(c+155,"id_ex_reg_wbctl", false,-1, 1,0);
    tracep->declBit(c+156,"id_ex_reg_load_flag", false,-1);
    tracep->declBit(c+157,"id_ex_valid", false,-1);
    tracep->declBit(c+1,"ls_ready", false,-1);
    tracep->declBus(c+144,"exu_inst", false,-1, 31,0);
    tracep->declBus(c+143,"exu_pc", false,-1, 31,0);
    tracep->declBus(c+145,"exu_next_pc", false,-1, 31,0);
    tracep->declBit(c+157,"ex_valid", false,-1);
    tracep->declBus(c+147,"exu_store_data", false,-1, 31,0);
    tracep->declBus(c+29,"exu_res", false,-1, 31,0);
    tracep->declBus(c+30,"exu_csr_addr", false,-1, 11,0);
    tracep->declBus(c+31,"exu_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+158,"ex_ls_reg_inst", false,-1, 31,0);
    tracep->declBus(c+159,"ex_ls_reg_store_data", false,-1, 31,0);
    tracep->declBus(c+132,"ex_ls_reg_exu_res", false,-1, 31,0);
    tracep->declBus(c+160,"ex_ls_reg_ls_ctl", false,-1, 3,0);
    tracep->declBus(c+161,"ex_ls_reg_wb_ctl", false,-1, 1,0);
    tracep->declBus(c+162,"ex_ls_reg_csr_ctl", false,-1, 6,0);
    tracep->declBit(c+163,"ex_ls_reg_rd_ena", false,-1);
    tracep->declBus(c+164,"ex_ls_reg_rd_addr", false,-1, 4,0);
    tracep->declBit(c+139,"ex_ls_reg_ls_csr_ena", false,-1);
    tracep->declBus(c+165,"ex_ls_reg_csr_addr", false,-1, 11,0);
    tracep->declBus(c+166,"ex_ls_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+151,"ex_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+29,"ex_rd_data_forward", false,-1, 31,0);
    tracep->declBit(c+167,"ex_ls_valid", false,-1);
    tracep->declBit(c+168,"ex_ls_reg_load_flag", false,-1);
    tracep->declBit(c+32,"ls_valid", false,-1);
    tracep->declBus(c+349,"ls_pc", false,-1, 31,0);
    tracep->declBus(c+166,"ls_next_pc", false,-1, 31,0);
    tracep->declBus(c+158,"ls_inst", false,-1, 31,0);
    tracep->declBus(c+169,"ls_mem_reg_inst", false,-1, 31,0);
    tracep->declBus(c+170,"ls_mem_reg_pc", false,-1, 31,0);
    tracep->declBus(c+171,"ls_mem_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+172,"ls_mem_reg_ls_ctl", false,-1, 3,0);
    tracep->declBus(c+173,"ls_mem_reg_wb_ctl", false,-1, 1,0);
    tracep->declBit(c+174,"ls_mem_reg_rd_ena", false,-1);
    tracep->declBus(c+175,"ls_mem_reg_rd_addr", false,-1, 4,0);
    tracep->declBus(c+176,"ls_mem_reg_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+177,"ls_mem_reg_csr_addr", false,-1, 11,0);
    tracep->declBit(c+178,"ls_mem_valid", false,-1);
    tracep->declBus(c+164,"ls_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+132,"ls_rd_data_forward", false,-1, 31,0);
    tracep->declBit(c+179,"ls_mem_reg_re", false,-1);
    tracep->declBus(c+180,"ls_mem_reg_alu_res", false,-1, 31,0);
    tracep->declBit(c+181,"ls_mem_reg_load_flag", false,-1);
    tracep->declBus(c+182,"ls_mem_reg_diff_skip", false,-1, 31,0);
    tracep->declBus(c+169,"mem_inst", false,-1, 31,0);
    tracep->declBus(c+170,"mem_pc", false,-1, 31,0);
    tracep->declBus(c+171,"mem_next_pc", false,-1, 31,0);
    tracep->declBus(c+180,"mem_alu_res", false,-1, 31,0);
    tracep->declBit(c+174,"mem_rd_ena", false,-1);
    tracep->declBus(c+175,"mem_rd_addr", false,-1, 4,0);
    tracep->declBus(c+176,"mem_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+177,"mem_csr_addr", false,-1, 11,0);
    tracep->declBus(c+173,"mem_wbctl", false,-1, 1,0);
    tracep->declBit(c+183,"mem_valid", false,-1);
    tracep->declBit(c+375,"mem_ready", false,-1);
    tracep->declBus(c+33,"mem_data", false,-1, 31,0);
    tracep->declBus(c+184,"mem_wb_inst", false,-1, 31,0);
    tracep->declBus(c+185,"mem_wb_pc", false,-1, 31,0);
    tracep->declBus(c+186,"mem_wb_next_pc", false,-1, 31,0);
    tracep->declBus(c+187,"mem_wb_lsu_res", false,-1, 31,0);
    tracep->declBus(c+188,"mem_wb_alures_data", false,-1, 31,0);
    tracep->declBus(c+189,"mem_wb_wb_ctl", false,-1, 1,0);
    tracep->declBit(c+190,"mem_wb_rd_ena", false,-1);
    tracep->declBus(c+191,"mem_wb_rd_addr", false,-1, 4,0);
    tracep->declBus(c+192,"mem_wb_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+193,"mem_wb_csr_addr", false,-1, 11,0);
    tracep->declBit(c+194,"mem_valid_o", false,-1);
    tracep->declBus(c+175,"mem_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+34,"mem_rd_data_forward", false,-1, 31,0);
    tracep->declBit(c+195,"mem_wb_reg_load_flag", false,-1);
    tracep->declBus(c+196,"wb_rf_data", false,-1, 31,0);
    tracep->declBit(c+375,"wb_ready", false,-1);
    tracep->declBit(c+190,"wb_rf_rd_ena", false,-1);
    tracep->declBus(c+191,"wb_rf_rd_addr", false,-1, 4,0);
    tracep->declBus(c+191,"wb_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+197,"wb_rd_data_forward", false,-1, 31,0);
    tracep->declBus(c+192,"wb_csr_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+193,"wb_csr_csr_addr", false,-1, 11,0);
    tracep->declBus(c+198,"wb_csr_mcause_value", false,-1, 31,0);
    tracep->declBus(c+199,"wb_csr_write_csr_data", false,-1, 31,0);
    tracep->declBus(c+200,"csr_wbu_read_csr_data", false,-1, 31,0);
    tracep->pushNamePrefix("u_ysyx_25060170_bpu ");
    tracep->declBit(c+290,"clk", false,-1);
    tracep->declBit(c+291,"rst", false,-1);
    tracep->declBit(c+27,"branch_success", false,-1);
    tracep->declBit(c+136,"idu_bxx_inst", false,-1);
    tracep->declBus(c+293,"inst_i", false,-1, 31,0);
    tracep->declBus(c+292,"pc_i", false,-1, 31,0);
    tracep->declBus(c+132,"ls_wb_forward_data", false,-1, 31,0);
    tracep->declBus(c+164,"ls_wb_forward_addr", false,-1, 4,0);
    tracep->declBus(c+29,"ex_ls_forward_data", false,-1, 31,0);
    tracep->declBus(c+151,"ex_ls_forward_addr", false,-1, 4,0);
    tracep->declBus(c+132,"ls_mem_forward_data", false,-1, 31,0);
    tracep->declBus(c+164,"ls_mem_forward_addr", false,-1, 4,0);
    tracep->declBus(c+191,"wb_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+197,"wb_rd_data_forward", false,-1, 31,0);
    tracep->declBus(c+351,"bp_pc_o", false,-1, 31,0);
    tracep->declBit(c+4,"inst_bxx_o", false,-1);
    tracep->declBit(c+5,"jal_jalr_o", false,-1);
    tracep->declBus(c+352,"bp_rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+2,"bp_rs1_addr_o", false,-1, 4,0);
    tracep->declBit(c+3,"bp_rs1_ena_o", false,-1);
    tracep->declBit(c+7,"bp_predict_o", false,-1);
    tracep->declBit(c+201,"strongly_not_taken_state", false,-1);
    tracep->declBit(c+202,"weakly_not_taken_state", false,-1);
    tracep->declBit(c+203,"weakly_taken_state", false,-1);
    tracep->declBit(c+204,"strongly_taken_state", false,-1);
    tracep->declBus(c+358,"jal_imm", false,-1, 20,0);
    tracep->declBus(c+359,"b_imm", false,-1, 12,0);
    tracep->declBus(c+360,"jalr_imm", false,-1, 11,0);
    tracep->declBus(c+361,"opcode", false,-1, 6,0);
    tracep->declBus(c+362,"op1", false,-1, 31,0);
    tracep->declBus(c+363,"op2", false,-1, 31,0);
    tracep->declBit(c+6,"inst_jal", false,-1);
    tracep->declBit(c+3,"inst_jalr", false,-1);
    tracep->declBit(c+4,"inst_bxx", false,-1);
    tracep->declBus(c+35,"jump_pc", false,-1, 31,0);
    tracep->declBus(c+36,"jump_jalr_pc", false,-1, 31,0);
    tracep->declBus(c+364,"jal_offset", false,-1, 31,0);
    tracep->declBus(c+365,"br_offset", false,-1, 31,0);
    tracep->declBus(c+366,"jalr_offset", false,-1, 31,0);
    tracep->declBit(c+37,"ls_wb_forward_en", false,-1);
    tracep->declBit(c+38,"ex_ls_forward_en", false,-1);
    tracep->declBit(c+37,"ls_mem_forward_en", false,-1);
    tracep->declBit(c+39,"wbu_forward_en", false,-1);
    tracep->declBit(c+7,"bxx_taken", false,-1);
    tracep->declBit(c+40,"bxx_not_taken", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_csr ");
    tracep->declBit(c+290,"clk", false,-1);
    tracep->declBit(c+291,"rst", false,-1);
    tracep->declBus(c+205,"csr_ctl", false,-1, 3,0);
    tracep->declBus(c+193,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+198,"mcause_value", false,-1, 31,0);
    tracep->declBus(c+199,"write_csr_data", false,-1, 31,0);
    tracep->declBus(c+200,"read_csr_data", false,-1, 31,0);
    tracep->declBus(c+329,"mhartid_o", false,-1, 31,0);
    tracep->declBus(c+330,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+331,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+332,"mtvec_o", false,-1, 31,0);
    tracep->declBus(c+333,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+334,"mscratch_o", false,-1, 31,0);
    tracep->declBit(c+206,"mstatus_rd", false,-1);
    tracep->declBit(c+207,"mstatus_wr", false,-1);
    tracep->declBit(c+208,"mstatus_mie", false,-1);
    tracep->declBit(c+209,"mstatus_mpie", false,-1);
    tracep->declBus(c+210,"mstatus_mpp", false,-1, 1,0);
    tracep->declBus(c+211,"mstatus", false,-1, 31,0);
    tracep->declBit(c+212,"mstatus_ie_ena", false,-1);
    tracep->declBit(c+213,"mie_set", false,-1);
    tracep->declBit(c+214,"mpie_set", false,-1);
    tracep->declBus(c+215,"mpp_set", false,-1, 1,0);
    tracep->declBit(c+216,"mtvec_rd", false,-1);
    tracep->declBit(c+217,"mtvec_wr", false,-1);
    tracep->declBus(c+218,"mtvec_base", false,-1, 31,2);
    tracep->declBus(c+376,"mtvec_mode", false,-1, 1,0);
    tracep->declBus(c+332,"mtvec", false,-1, 31,0);
    tracep->declBit(c+219,"mepc_rd", false,-1);
    tracep->declBit(c+220,"mepc_wr", false,-1);
    tracep->declBus(c+221,"mepc", false,-1, 31,0);
    tracep->declBit(c+222,"mcause_rd", false,-1);
    tracep->declBit(c+223,"mcause_wr", false,-1);
    tracep->declBus(c+224,"mcause", false,-1, 31,0);
    tracep->declBit(c+225,"mhartid_rd", false,-1);
    tracep->declBus(c+377,"mhartid", false,-1, 31,0);
    tracep->declBit(c+226,"mscratch_rd", false,-1);
    tracep->declBit(c+227,"mscratch_wr", false,-1);
    tracep->declBus(c+228,"mscratch", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_ex_ls_reg ");
    tracep->declBit(c+290,"clk", false,-1);
    tracep->declBit(c+291,"rst", false,-1);
    tracep->declBus(c+144,"inst_i", false,-1, 31,0);
    tracep->declBus(c+143,"pc_i", false,-1, 31,0);
    tracep->declBus(c+145,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+147,"store_data_i", false,-1, 31,0);
    tracep->declBus(c+29,"exu_res_i", false,-1, 31,0);
    tracep->declBit(c+156,"load_flag_i", false,-1);
    tracep->declBus(c+154,"ls_ctl_i", false,-1, 3,0);
    tracep->declBus(c+155,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+31,"csr_ctl_i", false,-1, 6,0);
    tracep->declBit(c+150,"rd_ena_i", false,-1);
    tracep->declBus(c+151,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+139,"ex_csr_ena_i", false,-1);
    tracep->declBus(c+30,"csr_addr_i", false,-1, 11,0);
    tracep->declBit(c+157,"ex_valid_i", false,-1);
    tracep->declBit(c+1,"ls_ready_i", false,-1);
    tracep->declBit(c+374,"ls_flush_i", false,-1);
    tracep->declBit(c+167,"ex_valid_o", false,-1);
    tracep->declBus(c+158,"inst_o", false,-1, 31,0);
    tracep->declBus(c+349,"pc_o", false,-1, 31,0);
    tracep->declBus(c+166,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+159,"store_data_o", false,-1, 31,0);
    tracep->declBus(c+132,"exu_res_o", false,-1, 31,0);
    tracep->declBit(c+168,"load_flag_o", false,-1);
    tracep->declBus(c+160,"ls_ctl_o", false,-1, 3,0);
    tracep->declBus(c+161,"wb_ctl_o", false,-1, 1,0);
    tracep->declBus(c+162,"csr_ctl_o", false,-1, 6,0);
    tracep->declBit(c+163,"rd_ena_o", false,-1);
    tracep->declBus(c+164,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+165,"csr_addr_o", false,-1, 11,0);
    tracep->declBit(c+140,"ls_csr_ena_o", false,-1);
    tracep->declBus(c+151,"ex_rd_addr_forward_o", false,-1, 4,0);
    tracep->declBit(c+139,"ex_csr_o", false,-1);
    tracep->declBus(c+29,"ex_rd_data_forward_o", false,-1, 31,0);
    tracep->declBit(c+374,"flush", false,-1);
    tracep->declBit(c+229,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_exu ");
    tracep->declBit(c+291,"rst", false,-1);
    tracep->declBus(c+146,"op1_i", false,-1, 31,0);
    tracep->declBus(c+147,"op2_i", false,-1, 31,0);
    tracep->declBus(c+148,"op1_sel_i", false,-1, 1,0);
    tracep->declBus(c+149,"op2_sel_i", false,-1, 2,0);
    tracep->declBus(c+151,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+152,"rs1_addr_i", false,-1, 4,0);
    tracep->declBus(c+153,"imm_i", false,-1, 31,0);
    tracep->declBus(c+143,"pc_i", false,-1, 31,0);
    tracep->declBus(c+145,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+144,"inst_i", false,-1, 31,0);
    tracep->declBus(c+142,"alu_sel_i", false,-1, 7,0);
    tracep->declBit(c+1,"ls_ready_i", false,-1);
    tracep->declBit(c+157,"id_valid_i", false,-1);
    tracep->declBit(c+157,"ex_valid_o", false,-1);
    tracep->declBit(c+1,"ex_ready_o", false,-1);
    tracep->declBus(c+144,"inst_o", false,-1, 31,0);
    tracep->declBus(c+143,"pc_o", false,-1, 31,0);
    tracep->declBus(c+145,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+147,"store_data_o", false,-1, 31,0);
    tracep->declBus(c+29,"exu_res_o", false,-1, 31,0);
    tracep->declBus(c+30,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+31,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+230,"op1", false,-1, 31,0);
    tracep->declBus(c+231,"op2", false,-1, 31,0);
    tracep->declBus(c+232,"op1_add_op2", false,-1, 31,0);
    tracep->declBus(c+233,"op1_sub_op2", false,-1, 31,0);
    tracep->declBit(c+234,"op1_lt_op2", false,-1);
    tracep->declBus(c+235,"op1_sra_op2", false,-1, 31,0);
    tracep->declQuad(c+236,"mul", false,-1, 63,0);
    tracep->declBus(c+238,"op1_mul_op2", false,-1, 31,0);
    tracep->declBus(c+239,"op1_mulh_op2", false,-1, 31,0);
    tracep->declBus(c+240,"div", false,-1, 31,0);
    tracep->declBus(c+241,"rem", false,-1, 31,0);
    tracep->declBus(c+41,"alu_res", false,-1, 31,0);
    tracep->declBit(c+42,"csr_wr_ena", false,-1);
    tracep->declBit(c+43,"csr_rd_ena", false,-1);
    tracep->declBit(c+44,"mret_ena", false,-1);
    tracep->declBit(c+45,"ecall_ena", false,-1);
    tracep->declBit(c+46,"csrrw_ena", false,-1);
    tracep->declBit(c+47,"csrrs_ena", false,-1);
    tracep->declBit(c+48,"csrrc_ena", false,-1);
    tracep->declBus(c+242,"csr_op", false,-1, 31,0);
    tracep->declBit(c+243,"csrrxi_ena", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_id_ex_reg ");
    tracep->declBit(c+290,"clk", false,-1);
    tracep->declBit(c+291,"rst", false,-1);
    tracep->declBus(c+135,"inst_i", false,-1, 31,0);
    tracep->declBus(c+294,"pc_i", false,-1, 31,0);
    tracep->declBus(c+357,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+24,"op1_i", false,-1, 31,0);
    tracep->declBus(c+25,"op2_i", false,-1, 31,0);
    tracep->declBus(c+20,"op1_sel_i", false,-1, 1,0);
    tracep->declBus(c+21,"op2_sel_i", false,-1, 2,0);
    tracep->declBit(c+16,"rd_ena_i", false,-1);
    tracep->declBus(c+356,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+141,"rs1_addr_i", false,-1, 4,0);
    tracep->declBus(c+296,"imm_i", false,-1, 31,0);
    tracep->declBus(c+17,"alusrc_i", false,-1, 7,0);
    tracep->declBus(c+18,"lsctl_i", false,-1, 3,0);
    tracep->declBus(c+19,"wbctl_i", false,-1, 1,0);
    tracep->declBit(c+23,"csr_ena_i", false,-1);
    tracep->declBit(c+22,"load_flag_i", false,-1);
    tracep->declBit(c+28,"id_valid_i", false,-1);
    tracep->declBit(c+11,"id_flush_i", false,-1);
    tracep->declBit(c+9,"id_stall_i", false,-1);
    tracep->declBit(c+374,"ls_flush_i", false,-1);
    tracep->declBit(c+1,"ex_ready_i", false,-1);
    tracep->declBus(c+144,"inst_o", false,-1, 31,0);
    tracep->declBus(c+143,"pc_o", false,-1, 31,0);
    tracep->declBus(c+145,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+146,"op1_o", false,-1, 31,0);
    tracep->declBus(c+147,"op2_o", false,-1, 31,0);
    tracep->declBus(c+148,"op1_sel_o", false,-1, 1,0);
    tracep->declBus(c+149,"op2_sel_o", false,-1, 2,0);
    tracep->declBit(c+150,"rd_ena_o", false,-1);
    tracep->declBus(c+151,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+152,"rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+153,"imm_o", false,-1, 31,0);
    tracep->declBus(c+142,"alusrc_o", false,-1, 7,0);
    tracep->declBus(c+154,"lsctl_o", false,-1, 3,0);
    tracep->declBus(c+155,"wbctl_o", false,-1, 1,0);
    tracep->declBit(c+139,"csr_ena_o", false,-1);
    tracep->declBit(c+156,"load_flag_o", false,-1);
    tracep->declBit(c+157,"id_valid_o", false,-1);
    tracep->declBit(c+374,"flush", false,-1);
    tracep->declBit(c+49,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_idu ");
    tracep->declBit(c+291,"rst", false,-1);
    tracep->declBus(c+135,"inst_i", false,-1, 31,0);
    tracep->declBus(c+294,"pc_i", false,-1, 31,0);
    tracep->declBus(c+134,"next_pc_i", false,-1, 31,0);
    tracep->declBit(c+137,"bp_jump_i", false,-1);
    tracep->declBit(c+136,"inst_bxx_i", false,-1);
    tracep->declBus(c+151,"ex_addr_forward", false,-1, 4,0);
    tracep->declBus(c+29,"ex_data_forward", false,-1, 31,0);
    tracep->declBus(c+164,"ls_addr_forward", false,-1, 4,0);
    tracep->declBus(c+132,"ls_data_forward", false,-1, 31,0);
    tracep->declBus(c+175,"mem_addr_forward", false,-1, 4,0);
    tracep->declBus(c+34,"mem_data_forward", false,-1, 31,0);
    tracep->declBus(c+191,"wb_addr_forward", false,-1, 4,0);
    tracep->declBus(c+197,"wb_data_forward", false,-1, 31,0);
    tracep->declBit(c+156,"ex_load_ena", false,-1);
    tracep->declBit(c+168,"ls_load_ena", false,-1);
    tracep->declBit(c+181,"mem_load_ena", false,-1);
    tracep->declBit(c+195,"wb_load_ena", false,-1);
    tracep->declBit(c+157,"ex_valid_i", false,-1);
    tracep->declBit(c+32,"ls_valid_i", false,-1);
    tracep->declBit(c+139,"ex_csr_ena", false,-1);
    tracep->declBit(c+140,"ls_csr_ena", false,-1);
    tracep->declBus(c+354,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+355,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+12,"rs1_addr", false,-1, 4,0);
    tracep->declBit(c+13,"rs1_ena", false,-1);
    tracep->declBus(c+14,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+15,"rs2_ena", false,-1);
    tracep->declBit(c+16,"rd_ena", false,-1);
    tracep->declBus(c+356,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+294,"pc_o", false,-1, 31,0);
    tracep->declBus(c+357,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+17,"alusrc_o", false,-1, 7,0);
    tracep->declBus(c+18,"lsctl_o", false,-1, 3,0);
    tracep->declBus(c+19,"wbctl_o", false,-1, 1,0);
    tracep->declBus(c+20,"op1_sel", false,-1, 1,0);
    tracep->declBus(c+21,"op2_sel", false,-1, 2,0);
    tracep->declBit(c+22,"load_flag_o", false,-1);
    tracep->declBit(c+23,"csr_ena_o", false,-1);
    tracep->declBus(c+24,"op1", false,-1, 31,0);
    tracep->declBus(c+25,"op2", false,-1, 31,0);
    tracep->declBus(c+296,"imm", false,-1, 31,0);
    tracep->declBus(c+295,"idu_dpic_rd_addr", false,-1, 4,0);
    tracep->declBus(c+135,"inst_o", false,-1, 31,0);
    tracep->declBus(c+141,"csr_imm_o", false,-1, 4,0);
    tracep->declBit(c+26,"predict_error_o", false,-1);
    tracep->declBus(c+353,"predict_revise_pc", false,-1, 31,0);
    tracep->declBit(c+27,"bp_predict_success", false,-1);
    tracep->declBit(c+138,"if_valid_i", false,-1);
    tracep->declBit(c+1,"ex_ready_i", false,-1);
    tracep->declBit(c+11,"id_flush_o", false,-1);
    tracep->declBit(c+9,"id_stall_o", false,-1);
    tracep->declBit(c+8,"id_ready_o", false,-1);
    tracep->declBit(c+28,"id_valid_o", false,-1);
    tracep->declBit(c+350,"magic_flag", false,-1);
    tracep->declBus(c+295,"rd", false,-1, 4,0);
    tracep->declBus(c+141,"rs1", false,-1, 4,0);
    tracep->declBus(c+244,"rs2", false,-1, 4,0);
    tracep->declBit(c+50,"branch", false,-1);
    tracep->declBit(c+367,"op1_relate", false,-1);
    tracep->declBit(c+368,"op2_relate", false,-1);
    tracep->declBit(c+51,"csr_op1_stall", false,-1);
    tracep->declBit(c+52,"csr_op2_stall", false,-1);
    tracep->declBit(c+9,"id_stall_ena", false,-1);
    tracep->declBit(c+53,"ex_op1_forward", false,-1);
    tracep->declBit(c+54,"ls_op1_forward", false,-1);
    tracep->declBit(c+55,"mem_op1_forward", false,-1);
    tracep->declBit(c+56,"wb_op1_forward", false,-1);
    tracep->declBit(c+57,"ex_op2_forward", false,-1);
    tracep->declBit(c+58,"ls_op2_forward", false,-1);
    tracep->declBit(c+59,"mem_op2_forward", false,-1);
    tracep->declBit(c+60,"wb_op2_forward", false,-1);
    tracep->declBit(c+61,"op1_forward_ena", false,-1);
    tracep->declBit(c+62,"op2_forward_ena", false,-1);
    tracep->declBus(c+63,"op1_forward_data", false,-1, 31,0);
    tracep->declBus(c+64,"op2_forward_data", false,-1, 31,0);
    tracep->declBit(c+65,"jalr_bpu_jump_error", false,-1);
    tracep->declBit(c+66,"diff_sign", false,-1);
    tracep->declBit(c+67,"op_ltu_op2", false,-1);
    tracep->declBit(c+68,"op1_lt_op2", false,-1);
    tracep->declBit(c+69,"now_bxx_jump_yes", false,-1);
    tracep->declBus(c+70,"predict_error_ctl", false,-1, 1,0);
    tracep->pushNamePrefix("decoder ");
    tracep->declBit(c+291,"rst", false,-1);
    tracep->declBus(c+135,"inst", false,-1, 31,0);
    tracep->declBit(c+13,"rs1_ena", false,-1);
    tracep->declBit(c+15,"rs2_ena", false,-1);
    tracep->declBit(c+23,"csr_inst", false,-1);
    tracep->declBus(c+19,"wb_ctl", false,-1, 1,0);
    tracep->declBus(c+18,"mem_ctl", false,-1, 3,0);
    tracep->declBit(c+50,"branch", false,-1);
    tracep->declBus(c+296,"ext_imm", false,-1, 31,0);
    tracep->declBit(c+22,"load", false,-1);
    tracep->declBus(c+20,"op1_sel", false,-1, 1,0);
    tracep->declBus(c+21,"op2_sel", false,-1, 2,0);
    tracep->declBus(c+17,"alu_ctl", false,-1, 7,0);
    tracep->declBus(c+245,"opcode", false,-1, 6,0);
    tracep->declBus(c+246,"funct3", false,-1, 2,0);
    tracep->declBus(c+247,"funct7", false,-1, 6,0);
    tracep->declBus(c+248,"i_imm", false,-1, 11,0);
    tracep->declBus(c+249,"j_imm", false,-1, 20,1);
    tracep->declBus(c+250,"u_imm", false,-1, 19,0);
    tracep->declBus(c+369,"s_imm", false,-1, 11,0);
    tracep->declBus(c+251,"b_imm", false,-1, 12,1);
    tracep->declBus(c+71,"inst_type", false,-1, 7,0);
    tracep->declBit(c+72,"inst_lui", false,-1);
    tracep->declBit(c+73,"inst_auipc", false,-1);
    tracep->declBit(c+74,"inst_jal", false,-1);
    tracep->declBit(c+75,"inst_jalr", false,-1);
    tracep->declBit(c+76,"inst_sb", false,-1);
    tracep->declBit(c+77,"inst_sh", false,-1);
    tracep->declBit(c+78,"inst_sw", false,-1);
    tracep->declBit(c+79,"inst_sd", false,-1);
    tracep->declBit(c+80,"inst_lb", false,-1);
    tracep->declBit(c+81,"inst_lh", false,-1);
    tracep->declBit(c+82,"inst_lw", false,-1);
    tracep->declBit(c+83,"inst_ld", false,-1);
    tracep->declBit(c+84,"inst_lbu", false,-1);
    tracep->declBit(c+85,"inst_lhu", false,-1);
    tracep->declBit(c+86,"inst_lwu", false,-1);
    tracep->declBit(c+87,"inst_beq", false,-1);
    tracep->declBit(c+88,"inst_bne", false,-1);
    tracep->declBit(c+89,"inst_blt", false,-1);
    tracep->declBit(c+90,"inst_bge", false,-1);
    tracep->declBit(c+91,"inst_bltu", false,-1);
    tracep->declBit(c+92,"inst_bgeu", false,-1);
    tracep->declBit(c+93,"inst_add", false,-1);
    tracep->declBit(c+94,"inst_sub", false,-1);
    tracep->declBit(c+95,"inst_sll", false,-1);
    tracep->declBit(c+96,"inst_slt", false,-1);
    tracep->declBit(c+97,"inst_sltu", false,-1);
    tracep->declBit(c+98,"inst_xor", false,-1);
    tracep->declBit(c+99,"inst_srl", false,-1);
    tracep->declBit(c+100,"inst_sra", false,-1);
    tracep->declBit(c+101,"inst_or", false,-1);
    tracep->declBit(c+102,"inst_and", false,-1);
    tracep->declBit(c+103,"inst_div", false,-1);
    tracep->declBit(c+104,"inst_divu", false,-1);
    tracep->declBit(c+105,"inst_mul", false,-1);
    tracep->declBit(c+106,"inst_mulh", false,-1);
    tracep->declBit(c+107,"inst_mulhsu", false,-1);
    tracep->declBit(c+108,"inst_mulhu", false,-1);
    tracep->declBit(c+109,"inst_rem", false,-1);
    tracep->declBit(c+110,"inst_remu", false,-1);
    tracep->declBit(c+111,"inst_addi", false,-1);
    tracep->declBit(c+112,"inst_slti", false,-1);
    tracep->declBit(c+113,"inst_sltiu", false,-1);
    tracep->declBit(c+114,"inst_xori", false,-1);
    tracep->declBit(c+115,"inst_ori", false,-1);
    tracep->declBit(c+116,"inst_andi", false,-1);
    tracep->declBit(c+117,"inst_slli", false,-1);
    tracep->declBit(c+118,"inst_srli", false,-1);
    tracep->declBit(c+119,"inst_srai", false,-1);
    tracep->declBit(c+120,"inst_ecall", false,-1);
    tracep->declBit(c+121,"inst_mret", false,-1);
    tracep->declBit(c+122,"inst_csrrw", false,-1);
    tracep->declBit(c+123,"inst_csrrs", false,-1);
    tracep->declBit(c+124,"inst_csrrc", false,-1);
    tracep->declBit(c+125,"inst_csrrwi", false,-1);
    tracep->declBit(c+126,"inst_csrrsi", false,-1);
    tracep->declBit(c+127,"inst_csrrci", false,-1);
    tracep->declBit(c+128,"inst_ebreak", false,-1);
    tracep->declBit(c+129,"imm_ena", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_25060170_if_id_reg ");
    tracep->declBit(c+290,"clk", false,-1);
    tracep->declBit(c+291,"rst", false,-1);
    tracep->declBus(c+292,"pc_i", false,-1, 31,0);
    tracep->declBus(c+133,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+293,"inst_i", false,-1, 31,0);
    tracep->declBit(c+4,"bxx_inst_i", false,-1);
    tracep->declBit(c+7,"bp_jump_i", false,-1);
    tracep->declBit(c+10,"if_valid_i", false,-1);
    tracep->declBit(c+11,"id_flush_i", false,-1);
    tracep->declBit(c+374,"ls_flush_i", false,-1);
    tracep->declBit(c+9,"id_stall_i", false,-1);
    tracep->declBit(c+8,"id_ready_i", false,-1);
    tracep->declBus(c+294,"pc_o", false,-1, 31,0);
    tracep->declBus(c+134,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+135,"inst_o", false,-1, 31,0);
    tracep->declBit(c+136,"inst_bxx_o", false,-1);
    tracep->declBit(c+137,"bp_jump_o", false,-1);
    tracep->declBit(c+138,"if_valid_o", false,-1);
    tracep->declBit(c+130,"flush", false,-1);
    tracep->declBit(c+10,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_ifu ");
    tracep->declBit(c+291,"rst", false,-1);
    tracep->declBit(c+290,"clk", false,-1);
    tracep->declBit(c+374,"ls_pc_jump_i", false,-1);
    tracep->declBus(c+132,"ls_pc_i", false,-1, 31,0);
    tracep->declBit(c+5,"bp_pc_jump_i", false,-1);
    tracep->declBit(c+7,"bp_predict_i", false,-1);
    tracep->declBus(c+351,"bp_pc_i", false,-1, 31,0);
    tracep->declBit(c+26,"id_bxx_error_i", false,-1);
    tracep->declBus(c+353,"id_bxx_error_pc_i", false,-1, 31,0);
    tracep->declBit(c+4,"inst_bxx_i", false,-1);
    tracep->declBit(c+8,"id_ready_i", false,-1);
    tracep->declBit(c+9,"id_stall_i", false,-1);
    tracep->declBit(c+10,"if_valid_o", false,-1);
    tracep->declBus(c+293,"inst_i", false,-1, 31,0);
    tracep->declBus(c+292,"pc_o", false,-1, 31,0);
    tracep->declBus(c+293,"inst_o", false,-1, 31,0);
    tracep->declBus(c+133,"next_pc_o", false,-1, 31,0);
    tracep->declBit(c+4,"inst_bxx_o", false,-1);
    tracep->declBit(c+9,"stall", false,-1);
    tracep->declBus(c+252,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_ls_mem_reg ");
    tracep->declBit(c+290,"clk", false,-1);
    tracep->declBit(c+291,"rst", false,-1);
    tracep->declBus(c+158,"inst_i", false,-1, 31,0);
    tracep->declBus(c+349,"pc_i", false,-1, 31,0);
    tracep->declBus(c+166,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+160,"ls_ctl_i", false,-1, 3,0);
    tracep->declBus(c+161,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+132,"alu_res_i", false,-1, 31,0);
    tracep->declBit(c+168,"load_flag_i", false,-1);
    tracep->declBit(c+335,"re_i", false,-1);
    tracep->declBit(c+163,"rd_ena_i", false,-1);
    tracep->declBus(c+164,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+162,"csr_ctl_i", false,-1, 6,0);
    tracep->declBus(c+165,"csr_addr_i", false,-1, 11,0);
    tracep->declBus(c+340,"diff_test_skip_i", false,-1, 31,0);
    tracep->declBit(c+32,"ls_valid_i", false,-1);
    tracep->declBit(c+375,"mem_ready_i", false,-1);
    tracep->declBit(c+178,"ls_valid_o", false,-1);
    tracep->declBus(c+169,"inst_o", false,-1, 31,0);
    tracep->declBus(c+170,"pc_o", false,-1, 31,0);
    tracep->declBus(c+171,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+172,"ls_ctl_o", false,-1, 3,0);
    tracep->declBus(c+173,"wb_ctl_o", false,-1, 1,0);
    tracep->declBus(c+180,"alu_res_o", false,-1, 31,0);
    tracep->declBit(c+181,"load_flag_o", false,-1);
    tracep->declBit(c+179,"re_o", false,-1);
    tracep->declBit(c+174,"rd_ena_o", false,-1);
    tracep->declBus(c+175,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+176,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+177,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+182,"diff_test_skip_o", false,-1, 31,0);
    tracep->declBus(c+164,"ls_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+132,"ls_rd_data_forward", false,-1, 31,0);
    tracep->declBit(c+374,"flush", false,-1);
    tracep->declBit(c+32,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_lsu ");
    tracep->declBit(c+290,"clk", false,-1);
    tracep->declBit(c+291,"rst", false,-1);
    tracep->declBus(c+349,"pc_i", false,-1, 31,0);
    tracep->declBus(c+166,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+158,"inst_i", false,-1, 31,0);
    tracep->declBus(c+132,"alu_res_i", false,-1, 31,0);
    tracep->declBus(c+159,"store_data_i", false,-1, 31,0);
    tracep->declBus(c+160,"ls_ctl_i", false,-1, 3,0);
    tracep->declBit(c+375,"mem_ready_i", false,-1);
    tracep->declBit(c+167,"ex_valid_i", false,-1);
    tracep->declBit(c+1,"ls_ready_o", false,-1);
    tracep->declBit(c+32,"ls_valid_o", false,-1);
    tracep->declBit(c+374,"ls_flush_o", false,-1);
    tracep->declBit(c+374,"ls_jump_o", false,-1);
    tracep->declBus(c+132,"ls_jump_pc_o", false,-1, 31,0);
    tracep->declBit(c+335,"re", false,-1);
    tracep->declBit(c+336,"we", false,-1);
    tracep->declBus(c+337,"data_o", false,-1, 31,0);
    tracep->declBus(c+347,"raddr", false,-1, 31,0);
    tracep->declBus(c+347,"waddr", false,-1, 31,0);
    tracep->declBus(c+338,"wlen", false,-1, 7,0);
    tracep->declBus(c+339,"rlen", false,-1, 7,0);
    tracep->declBus(c+158,"inst_o", false,-1, 31,0);
    tracep->declBus(c+349,"pc_o", false,-1, 31,0);
    tracep->declBus(c+166,"next_pc_o", false,-1, 31,0);
    tracep->declBit(c+253,"data_ok", false,-1);
    tracep->declBus(c+254,"byte_sel", false,-1, 1,0);
    tracep->declBus(c+254,"half_sel", false,-1, 1,0);
    tracep->declBus(c+131,"sb_mask", false,-1, 3,0);
    tracep->declBus(c+370,"sh_mask", false,-1, 3,0);
    tracep->declBus(c+378,"sw_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_mem ");
    tracep->declBit(c+290,"clk", false,-1);
    tracep->declBit(c+291,"rst", false,-1);
    tracep->declBus(c+169,"inst_i", false,-1, 31,0);
    tracep->declBus(c+170,"pc_i", false,-1, 31,0);
    tracep->declBus(c+171,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+173,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+180,"alu_res_i", false,-1, 31,0);
    tracep->declBit(c+179,"re", false,-1);
    tracep->declBit(c+174,"rd_ena_i", false,-1);
    tracep->declBus(c+175,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+176,"csr_ctl_i", false,-1, 6,0);
    tracep->declBus(c+177,"csr_addr_i", false,-1, 11,0);
    tracep->declBus(c+172,"ls_ctl_i", false,-1, 3,0);
    tracep->declBus(c+346,"mem_data_i", false,-1, 31,0);
    tracep->declBit(c+178,"ls_valid_i", false,-1);
    tracep->declBit(c+375,"wb_ready_i", false,-1);
    tracep->declBit(c+183,"mem_valid_o", false,-1);
    tracep->declBit(c+375,"mem_ready_o", false,-1);
    tracep->declBus(c+169,"inst_o", false,-1, 31,0);
    tracep->declBus(c+170,"pc_o", false,-1, 31,0);
    tracep->declBus(c+171,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+173,"wb_ctl_o", false,-1, 1,0);
    tracep->declBus(c+180,"alu_res_o", false,-1, 31,0);
    tracep->declBit(c+174,"rd_ena_o", false,-1);
    tracep->declBus(c+175,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+176,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+177,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+33,"mem_data_o", false,-1, 31,0);
    tracep->declBus(c+371,"load_data", false,-1, 31,0);
    tracep->declBit(c+255,"data_ok", false,-1);
    tracep->declBus(c+372,"data_byte", false,-1, 7,0);
    tracep->declBus(c+373,"data_half", false,-1, 15,0);
    tracep->declBus(c+346,"data_word", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_mem_wb_reg ");
    tracep->declBit(c+290,"clk", false,-1);
    tracep->declBit(c+291,"rst", false,-1);
    tracep->declBus(c+169,"inst_i", false,-1, 31,0);
    tracep->declBus(c+170,"pc_i", false,-1, 31,0);
    tracep->declBus(c+171,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+173,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+33,"mem_data_i", false,-1, 31,0);
    tracep->declBit(c+181,"load_flag_i", false,-1);
    tracep->declBus(c+180,"alu_res_i", false,-1, 31,0);
    tracep->declBit(c+174,"rd_ena_i", false,-1);
    tracep->declBus(c+175,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+176,"csr_ctl_i", false,-1, 6,0);
    tracep->declBus(c+177,"csr_addr_i", false,-1, 11,0);
    tracep->declBus(c+182,"dpic_diff_skip_flag_i", false,-1, 31,0);
    tracep->declBit(c+183,"mem_valid_i", false,-1);
    tracep->declBit(c+375,"wb_ready_i", false,-1);
    tracep->declBit(c+194,"mem_valid_o", false,-1);
    tracep->declBus(c+184,"inst_o", false,-1, 31,0);
    tracep->declBus(c+185,"pc_o", false,-1, 31,0);
    tracep->declBus(c+186,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+188,"alu_res_o", false,-1, 31,0);
    tracep->declBus(c+187,"mem_data_o", false,-1, 31,0);
    tracep->declBit(c+195,"load_flag_o", false,-1);
    tracep->declBus(c+189,"wb_ctl_o", false,-1, 1,0);
    tracep->declBit(c+190,"rd_ena_o", false,-1);
    tracep->declBus(c+191,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+192,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+193,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+341,"dpic_diff_skip_flag_o", false,-1, 31,0);
    tracep->declBus(c+175,"mem_rd_addr_forward_o", false,-1, 4,0);
    tracep->declBus(c+34,"mem_rd_data_forward_o", false,-1, 31,0);
    tracep->declBit(c+374,"flush", false,-1);
    tracep->declBit(c+183,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_regfile ");
    tracep->declBit(c+290,"clk", false,-1);
    tracep->declBit(c+291,"rst", false,-1);
    tracep->declBus(c+191,"waddr", false,-1, 4,0);
    tracep->declBus(c+196,"wdata", false,-1, 31,0);
    tracep->declBit(c+190,"wen", false,-1);
    tracep->declBit(c+13,"ren1", false,-1);
    tracep->declBit(c+15,"ren2", false,-1);
    tracep->declBus(c+12,"raddr1", false,-1, 4,0);
    tracep->declBus(c+14,"raddr2", false,-1, 4,0);
    tracep->declBus(c+354,"rdata1", false,-1, 31,0);
    tracep->declBus(c+355,"rdata2", false,-1, 31,0);
    tracep->declBus(c+297,"regs0_zero", false,-1, 31,0);
    tracep->declBus(c+298,"regs1_ra", false,-1, 31,0);
    tracep->declBus(c+299,"regs2_sp", false,-1, 31,0);
    tracep->declBus(c+300,"regs3_gp", false,-1, 31,0);
    tracep->declBus(c+301,"regs4_tp", false,-1, 31,0);
    tracep->declBus(c+302,"regs5_t0", false,-1, 31,0);
    tracep->declBus(c+303,"regs6_t1", false,-1, 31,0);
    tracep->declBus(c+304,"regs7_t2", false,-1, 31,0);
    tracep->declBus(c+305,"regs8_s0", false,-1, 31,0);
    tracep->declBus(c+306,"regs9_s1", false,-1, 31,0);
    tracep->declBus(c+307,"regs10_a0", false,-1, 31,0);
    tracep->declBus(c+308,"regs11_a1", false,-1, 31,0);
    tracep->declBus(c+309,"regs12_a2", false,-1, 31,0);
    tracep->declBus(c+310,"regs13_a3", false,-1, 31,0);
    tracep->declBus(c+311,"regs14_a4", false,-1, 31,0);
    tracep->declBus(c+312,"regs15_a5", false,-1, 31,0);
    tracep->declBus(c+313,"regs16_a6", false,-1, 31,0);
    tracep->declBus(c+314,"regs17_a7", false,-1, 31,0);
    tracep->declBus(c+315,"regs18_s2", false,-1, 31,0);
    tracep->declBus(c+316,"regs19_s3", false,-1, 31,0);
    tracep->declBus(c+317,"regs20_s4", false,-1, 31,0);
    tracep->declBus(c+318,"regs21_s5", false,-1, 31,0);
    tracep->declBus(c+319,"regs22_s6", false,-1, 31,0);
    tracep->declBus(c+320,"regs23_s7", false,-1, 31,0);
    tracep->declBus(c+321,"regs24_t3", false,-1, 31,0);
    tracep->declBus(c+322,"regs25_t4", false,-1, 31,0);
    tracep->declBus(c+323,"regs26_t5", false,-1, 31,0);
    tracep->declBus(c+324,"regs27_t6", false,-1, 31,0);
    tracep->declBus(c+325,"regs28_t3", false,-1, 31,0);
    tracep->declBus(c+326,"regs29_t4", false,-1, 31,0);
    tracep->declBus(c+327,"regs30_t5", false,-1, 31,0);
    tracep->declBus(c+328,"regs31_t6", false,-1, 31,0);
    tracep->declBus(c+2,"bp_rs1_addr_i", false,-1, 4,0);
    tracep->declBit(c+3,"bp_rs1_ena_i", false,-1);
    tracep->declBus(c+352,"bp_rs1_data_o", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+256+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_wbu ");
    tracep->declBus(c+187,"ls_rd_data_i", false,-1, 31,0);
    tracep->declBus(c+189,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+188,"exu_res_i", false,-1, 31,0);
    tracep->declBus(c+185,"pc_i", false,-1, 31,0);
    tracep->declBus(c+186,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+184,"inst_i", false,-1, 31,0);
    tracep->declBus(c+191,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+190,"rd_ena_i", false,-1);
    tracep->declBus(c+192,"csr_ctl_i", false,-1, 6,0);
    tracep->declBus(c+193,"csr_addr_i", false,-1, 11,0);
    tracep->declBus(c+200,"read_csr_data_i", false,-1, 31,0);
    tracep->declBit(c+194,"ls_valid_i", false,-1);
    tracep->declBus(c+196,"wb_data_o", false,-1, 31,0);
    tracep->declBit(c+375,"wb_ready_o", false,-1);
    tracep->declBit(c+190,"wb_rd_ena_o", false,-1);
    tracep->declBus(c+191,"wb_rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+191,"wb_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+197,"wb_rd_data_forward", false,-1, 31,0);
    tracep->declBus(c+342,"wbu_dpic_inst_o", false,-1, 31,0);
    tracep->declBus(c+343,"wbu_dpic_pc_o", false,-1, 31,0);
    tracep->declBus(c+344,"wbu_dpic_next_pc_o", false,-1, 31,0);
    tracep->declBit(c+345,"wbu_dpic_valid_o", false,-1);
    tracep->declBus(c+192,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+193,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+198,"mcause_value_o", false,-1, 31,0);
    tracep->declBus(c+199,"write_csr_data_o", false,-1, 31,0);
    tracep->declBus(c+288,"set_data", false,-1, 31,0);
    tracep->declBus(c+289,"clear_data", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root__trace_init_top(Vysyx_25060170_fishtailcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root__trace_init_top\n"); );
    // Body
    Vysyx_25060170_fishtailcore___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_25060170_fishtailcore___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_25060170_fishtailcore___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root__trace_register(Vysyx_25060170_fishtailcore___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_25060170_fishtailcore___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_25060170_fishtailcore___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_25060170_fishtailcore___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root__trace_full_sub_0(Vysyx_25060170_fishtailcore___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_25060170_fishtailcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25060170_fishtailcore___024root*>(voidSelf);
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_25060170_fishtailcore___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root__trace_full_sub_0(Vysyx_25060170_fishtailcore___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ready));
    bufp->fullCData(oldp+2,(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr),5);
    bufp->fullBit(oldp+3,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr));
    bufp->fullBit(oldp+4,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_bxx));
    bufp->fullBit(oldp+5,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal) 
                           | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr))));
    bufp->fullBit(oldp+6,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal));
    bufp->fullBit(oldp+7,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bxx_taken));
    bufp->fullBit(oldp+8,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ready));
    bufp->fullBit(oldp+9,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_stall));
    bufp->fullBit(oldp+10,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_valid));
    bufp->fullBit(oldp+11,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_bp_jump) 
                             ^ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__now_bxx_jump_yes)) 
                            | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__jalr_bpu_jump_error))));
    bufp->fullCData(oldp+12,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr),5);
    bufp->fullBit(oldp+13,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena));
    bufp->fullCData(oldp+14,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr),5);
    bufp->fullBit(oldp+15,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena));
    bufp->fullBit(oldp+16,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rd_ena));
    bufp->fullCData(oldp+17,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc),8);
    bufp->fullCData(oldp+18,((0xfU & ((1U & (- (IData)(
                                                       (0x41U 
                                                        == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                      | ((2U & (- (IData)(
                                                          (0x82U 
                                                           == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                         | ((4U & (- (IData)(
                                                             (0x81U 
                                                              == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                            | ((5U 
                                                & (- (IData)(
                                                             (7U 
                                                              == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                               | ((9U 
                                                   & (- (IData)(
                                                                (0x1aU 
                                                                 == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                                  | ((0xaU 
                                                      & (- (IData)(
                                                                   (0x34U 
                                                                    == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                                     | ((0xbU 
                                                         & (- (IData)(
                                                                      (0x68U 
                                                                       == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                                        | ((0xcU 
                                                            & (- (IData)(
                                                                         (0xd0U 
                                                                          == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                                           | ((0xdU 
                                                               & (- (IData)(
                                                                            (0xbU 
                                                                             == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                                              | ((0xeU 
                                                                  & (- (IData)(
                                                                               (0x16U 
                                                                                == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                                                 | (- (IData)(
                                                                              (0x2cU 
                                                                               == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc)))))))))))))))),4);
    bufp->fullCData(oldp+19,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_wbctl),2);
    bufp->fullCData(oldp+20,(((2U & ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                                     | ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr))) 
                                        | (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc)))))) 
                              | (1U & (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena)))))),2);
    bufp->fullCData(oldp+21,(((2U & ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                                     | (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr))))) 
                              | ((4U & (- (IData)(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77eb01fa__0) 
                                                   | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                                                      | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0) 
                                                         | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70f4116c__0) 
                                                            | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
                                                               | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd9b03bc2__0))))))))) 
                                 | (1U & (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena))))))),3);
    bufp->fullBit(oldp+22,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag));
    bufp->fullBit(oldp+23,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw) 
                            | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs) 
                               | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc) 
                                  | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi) 
                                     | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi) 
                                        | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci))))))));
    bufp->fullIData(oldp+24,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op2),32);
    bufp->fullBit(oldp+26,((IData)((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__predict_error_ctl) 
                                     >> 1U) | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__jalr_bpu_jump_error)))));
    bufp->fullBit(oldp+27,((1U & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__predict_error_ctl) 
                                  >> 1U))));
    bufp->fullBit(oldp+28,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_valid));
    bufp->fullIData(oldp+29,(vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res),32);
    bufp->fullSData(oldp+30,(((0U != (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_he71b3f47__0))
                               ? (0xfffU & vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm)
                               : 0U)),12);
    bufp->fullCData(oldp+31,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena) 
                               << 6U) | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena) 
                                          << 5U) | 
                                         (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena) 
                                           << 4U) | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_he71b3f47__0))))),7);
    bufp->fullBit(oldp+32,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_valid));
    bufp->fullIData(oldp+33,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_data),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_rd_data_forward),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc),32);
    bufp->fullIData(oldp+36,((0xfffffffeU & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc)),32);
    bufp->fullBit(oldp+37,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                            == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr))));
    bufp->fullBit(oldp+38,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                            == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr))));
    bufp->fullBit(oldp+39,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                            == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr))));
    bufp->fullBit(oldp+40,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_bxx) 
                            & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_not_taken_state) 
                               | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_not_taken_state)))));
    bufp->fullIData(oldp+41,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res),32);
    bufp->fullBit(oldp+42,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena));
    bufp->fullBit(oldp+43,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena));
    bufp->fullBit(oldp+44,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena));
    bufp->fullBit(oldp+45,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena));
    bufp->fullBit(oldp+46,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena));
    bufp->fullBit(oldp+47,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena));
    bufp->fullBit(oldp+48,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena));
    bufp->fullBit(oldp+49,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_id_ex_reg__DOT__stall));
    bufp->fullBit(oldp+50,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__branch));
    bufp->fullBit(oldp+51,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward) 
                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_hf3b640d6__0)) 
                            | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward) 
                               & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h5ab066c6__0)))));
    bufp->fullBit(oldp+52,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward) 
                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_hf3b640d6__0)) 
                            | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward) 
                               & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h5ab066c6__0)))));
    bufp->fullBit(oldp+53,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward));
    bufp->fullBit(oldp+54,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward));
    bufp->fullBit(oldp+55,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op1_forward));
    bufp->fullBit(oldp+56,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward));
    bufp->fullBit(oldp+57,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward));
    bufp->fullBit(oldp+58,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward));
    bufp->fullBit(oldp+59,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op2_forward));
    bufp->fullBit(oldp+60,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward));
    bufp->fullBit(oldp+61,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_forward_ena));
    bufp->fullBit(oldp+62,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op2_forward_ena));
    bufp->fullIData(oldp+63,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward)
                               ? vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res
                               : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward)
                                   ? vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
                                   : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op1_forward)
                                       ? vlSelf->ysyx_25060170_fishtailcore__DOT__mem_rd_data_forward
                                       : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward)
                                           ? vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward
                                           : 0U))))),32);
    bufp->fullIData(oldp+64,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward)
                               ? vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res
                               : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward)
                                   ? vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
                                   : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op2_forward)
                                       ? vlSelf->ysyx_25060170_fishtailcore__DOT__mem_rd_data_forward
                                       : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward)
                                           ? vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward
                                           : 0U))))),32);
    bufp->fullBit(oldp+65,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__jalr_bpu_jump_error));
    bufp->fullBit(oldp+66,(((vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1 
                             ^ vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op2) 
                            >> 0x1fU)));
    bufp->fullBit(oldp+67,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2));
    bufp->fullBit(oldp+68,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2));
    bufp->fullBit(oldp+69,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__now_bxx_jump_yes));
    bufp->fullCData(oldp+70,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__predict_error_ctl),2);
    bufp->fullCData(oldp+71,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
                               << 7U) | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7773c72a__0) 
                                          << 6U) | 
                                         (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70f4116c__0) 
                                           << 5U) | 
                                          (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0) 
                                            << 4U) 
                                           | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77488b95__0) 
                                               << 3U) 
                                              | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__branch) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77eb01fa__0))))))))),8);
    bufp->fullBit(oldp+72,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui));
    bufp->fullBit(oldp+73,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc));
    bufp->fullBit(oldp+74,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal));
    bufp->fullBit(oldp+75,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr));
    bufp->fullBit(oldp+76,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h489c6f46__0))));
    bufp->fullBit(oldp+77,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h489c6f46__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+78,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he80da865__0))));
    bufp->fullBit(oldp+79,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he80da865__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+80,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc65f4c50__0))));
    bufp->fullBit(oldp+81,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc65f4c50__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+82,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h1167153d__0))));
    bufp->fullBit(oldp+83,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h1167153d__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+84,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h29152e89__0))));
    bufp->fullBit(oldp+85,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h29152e89__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+86,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_heac6e652__0) 
                            & (IData)((0x2000U == (0x3000U 
                                                   & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst))))));
    bufp->fullBit(oldp+87,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7855af38__0))));
    bufp->fullBit(oldp+88,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7855af38__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+89,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2bc0716a__0))));
    bufp->fullBit(oldp+90,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2bc0716a__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+91,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h6fd23990__0))));
    bufp->fullBit(oldp+92,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h6fd23990__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+93,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                            & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h03cab0f1__0))));
    bufp->fullBit(oldp+94,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                            & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7b49f5a3__0))));
    bufp->fullBit(oldp+95,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h36e9ef3c__0))));
    bufp->fullBit(oldp+96,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he2955f6b__0))));
    bufp->fullBit(oldp+97,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h4c825e07__0))));
    bufp->fullBit(oldp+98,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h3b427111__0))));
    bufp->fullBit(oldp+99,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                            & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h03cab0f1__0))));
    bufp->fullBit(oldp+100,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7b49f5a3__0))));
    bufp->fullBit(oldp+101,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd7439362__0))));
    bufp->fullBit(oldp+102,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7a82fdcc__0))));
    bufp->fullBit(oldp+103,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h3b427111__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+104,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+105,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+106,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h36e9ef3c__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+107,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he2955f6b__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+108,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h4c825e07__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+109,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd7439362__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+110,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7a82fdcc__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+111,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h41ceee20__0))));
    bufp->fullBit(oldp+112,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc1b77381__0))));
    bufp->fullBit(oldp+113,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc1b77381__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+114,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_ha08c85bd__0))));
    bufp->fullBit(oldp+115,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5a06bcf6__0))));
    bufp->fullBit(oldp+116,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5a06bcf6__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+117,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h41ceee20__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+118,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x1eU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2e86cea5__0))));
    bufp->fullBit(oldp+119,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2e86cea5__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x1eU))));
    bufp->fullBit(oldp+120,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall));
    bufp->fullBit(oldp+121,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h84595378__0) 
                             & (IData)((0x30000000U 
                                        == (0x30000000U 
                                            & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst))))));
    bufp->fullBit(oldp+122,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw));
    bufp->fullBit(oldp+123,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs));
    bufp->fullBit(oldp+124,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc));
    bufp->fullBit(oldp+125,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi));
    bufp->fullBit(oldp+126,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi));
    bufp->fullBit(oldp+127,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci));
    bufp->fullBit(oldp+128,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h84595378__0) 
                             & (1U == (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                       >> 0x14U)))));
    bufp->fullBit(oldp+129,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77eb01fa__0) 
                             | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                                | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0) 
                                   | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70f4116c__0) 
                                      | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
                                         | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd9b03bc2__0))))))));
    bufp->fullBit(oldp+130,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if_id_reg__DOT__flush));
    bufp->fullCData(oldp+131,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask),4);
    bufp->fullIData(oldp+132,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res),32);
    bufp->fullIData(oldp+133,(((IData)(4U) + vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ifu__DOT__pc)),32);
    bufp->fullIData(oldp+134,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc),32);
    bufp->fullIData(oldp+135,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst),32);
    bufp->fullBit(oldp+136,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst_bxx));
    bufp->fullBit(oldp+137,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_bp_jump));
    bufp->fullBit(oldp+138,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_valid));
    bufp->fullBit(oldp+139,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena));
    bufp->fullBit(oldp+140,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_csr_ena));
    bufp->fullCData(oldp+141,((0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+142,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc),8);
    bufp->fullIData(oldp+143,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc),32);
    bufp->fullIData(oldp+144,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst),32);
    bufp->fullIData(oldp+145,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc),32);
    bufp->fullIData(oldp+146,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1),32);
    bufp->fullIData(oldp+147,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2),32);
    bufp->fullCData(oldp+148,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel),2);
    bufp->fullCData(oldp+149,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel),3);
    bufp->fullBit(oldp+150,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena));
    bufp->fullCData(oldp+151,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr),5);
    bufp->fullCData(oldp+152,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr),5);
    bufp->fullIData(oldp+153,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm),32);
    bufp->fullCData(oldp+154,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl),4);
    bufp->fullCData(oldp+155,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl),2);
    bufp->fullBit(oldp+156,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag));
    bufp->fullBit(oldp+157,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_valid));
    bufp->fullIData(oldp+158,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst),32);
    bufp->fullIData(oldp+159,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data),32);
    bufp->fullCData(oldp+160,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl),4);
    bufp->fullCData(oldp+161,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl),2);
    bufp->fullCData(oldp+162,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl),7);
    bufp->fullBit(oldp+163,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena));
    bufp->fullCData(oldp+164,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr),5);
    bufp->fullSData(oldp+165,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr),12);
    bufp->fullIData(oldp+166,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc),32);
    bufp->fullBit(oldp+167,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_valid));
    bufp->fullBit(oldp+168,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag));
    bufp->fullIData(oldp+169,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst),32);
    bufp->fullIData(oldp+170,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc),32);
    bufp->fullIData(oldp+171,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc),32);
    bufp->fullCData(oldp+172,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl),4);
    bufp->fullCData(oldp+173,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl),2);
    bufp->fullBit(oldp+174,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena));
    bufp->fullCData(oldp+175,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr),5);
    bufp->fullCData(oldp+176,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl),7);
    bufp->fullSData(oldp+177,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr),12);
    bufp->fullBit(oldp+178,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_valid));
    bufp->fullBit(oldp+179,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re));
    bufp->fullIData(oldp+180,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res),32);
    bufp->fullBit(oldp+181,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag));
    bufp->fullIData(oldp+182,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_diff_skip),32);
    bufp->fullBit(oldp+183,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_valid));
    bufp->fullIData(oldp+184,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_inst),32);
    bufp->fullIData(oldp+185,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_pc),32);
    bufp->fullIData(oldp+186,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc),32);
    bufp->fullIData(oldp+187,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res),32);
    bufp->fullIData(oldp+188,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data),32);
    bufp->fullCData(oldp+189,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl),2);
    bufp->fullBit(oldp+190,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena));
    bufp->fullCData(oldp+191,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr),5);
    bufp->fullCData(oldp+192,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl),7);
    bufp->fullSData(oldp+193,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr),12);
    bufp->fullBit(oldp+194,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_valid_o));
    bufp->fullBit(oldp+195,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_reg_load_flag));
    bufp->fullIData(oldp+196,((((- (IData)((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl)))) 
                                & vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res) 
                               | (((- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl) 
                                                >> 1U)))) 
                                   & vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data) 
                                  | ((- (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))))) 
                                     & vlSelf->ysyx_25060170_fishtailcore__DOT__csr_wbu_read_csr_data)))),32);
    bufp->fullIData(oldp+197,(vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward),32);
    bufp->fullIData(oldp+198,(((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                ? 0xbU : 0U)),32);
    bufp->fullIData(oldp+199,(vlSelf->ysyx_25060170_fishtailcore__DOT__wb_csr_write_csr_data),32);
    bufp->fullIData(oldp+200,(vlSelf->ysyx_25060170_fishtailcore__DOT__csr_wbu_read_csr_data),32);
    bufp->fullBit(oldp+201,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_not_taken_state));
    bufp->fullBit(oldp+202,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_not_taken_state));
    bufp->fullBit(oldp+203,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state));
    bufp->fullBit(oldp+204,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state));
    bufp->fullCData(oldp+205,((0xfU & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))),4);
    bufp->fullBit(oldp+206,(((0x300U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 2U))));
    bufp->fullBit(oldp+207,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr));
    bufp->fullBit(oldp+208,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie));
    bufp->fullBit(oldp+209,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie));
    bufp->fullCData(oldp+210,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp),2);
    bufp->fullIData(oldp+211,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus),32);
    bufp->fullBit(oldp+212,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena));
    bufp->fullBit(oldp+213,((1U & ((~ ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 1U)) & ((1U 
                                                   & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                                   ? (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)
                                                   : 
                                                  ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                                    ? 
                                                   (vlSelf->ysyx_25060170_fishtailcore__DOT__wb_csr_write_csr_data 
                                                    >> 3U)
                                                    : (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)))))));
    bufp->fullBit(oldp+214,((1U & ((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                    ? (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)
                                    : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                           ? (vlSelf->ysyx_25060170_fishtailcore__DOT__wb_csr_write_csr_data 
                                              >> 7U)
                                           : (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)))))));
    bufp->fullCData(oldp+215,(((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                ? 3U : ((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                         ? 0U : (3U 
                                                 & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                                     ? 
                                                    (vlSelf->ysyx_25060170_fishtailcore__DOT__wb_csr_write_csr_data 
                                                     >> 0xdU)
                                                     : (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp)))))),2);
    bufp->fullBit(oldp+216,((1U & (((0x305U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                    & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 2U)) | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+217,(((0x305U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 3U))));
    bufp->fullIData(oldp+218,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mtvec_base),30);
    bufp->fullBit(oldp+219,((1U & (((0x341U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                    & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 2U)) | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl)))));
    bufp->fullBit(oldp+220,((1U & (((0x341U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                    & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 3U)) | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                                  >> 1U)))));
    bufp->fullIData(oldp+221,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mepc),32);
    bufp->fullBit(oldp+222,(((0x342U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 2U))));
    bufp->fullBit(oldp+223,(((0x342U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 3U))));
    bufp->fullIData(oldp+224,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mcause),32);
    bufp->fullBit(oldp+225,(((0xf12U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 2U))));
    bufp->fullBit(oldp+226,(((0x340U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 2U))));
    bufp->fullBit(oldp+227,(((0x340U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 3U))));
    bufp->fullIData(oldp+228,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mscratch),32);
    bufp->fullBit(oldp+229,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall));
    bufp->fullIData(oldp+230,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1),32);
    bufp->fullIData(oldp+231,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2),32);
    bufp->fullIData(oldp+232,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2),32);
    bufp->fullIData(oldp+233,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2),32);
    bufp->fullBit(oldp+234,((1U & (((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                        >> 0x1fU)) 
                                    & (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                       >> 0x1fU)) | 
                                   (((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                         >> 0x1fU)) 
                                     & ((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                            >> 0x1fU)) 
                                        & (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2 
                                           >> 0x1fU))) 
                                    | ((vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                        & (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                           & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2)) 
                                       >> 0x1fU))))));
    bufp->fullIData(oldp+235,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2),32);
    bufp->fullQData(oldp+236,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul),64);
    bufp->fullIData(oldp+238,((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul)),32);
    bufp->fullIData(oldp+239,((IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+240,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div),32);
    bufp->fullIData(oldp+241,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__rem),32);
    bufp->fullIData(oldp+242,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr),32);
    bufp->fullBit(oldp+243,(((0x94U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                             | ((0xc8U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                | (0xa4U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))))));
    bufp->fullCData(oldp+244,((0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+245,((0x7fU & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)),7);
    bufp->fullCData(oldp+246,((7U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+247,((vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0x19U)),7);
    bufp->fullSData(oldp+248,((vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+249,(((0x80000U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                            >> 0xcU)) 
                               | ((0x7f800U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                               >> 1U)) 
                                  | ((0x400U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                >> 0xaU)) 
                                     | (0x3ffU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                  >> 0x15U)))))),20);
    bufp->fullIData(oldp+250,((vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU)),20);
    bufp->fullSData(oldp+251,(((0x800U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                          >> 0x14U)) 
                               | ((0x400U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                             << 3U)) 
                                  | ((0x3f0U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                >> 0x15U)) 
                                     | (0xfU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                >> 8U)))))),12);
    bufp->fullIData(oldp+252,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ifu__DOT__pc),32);
    bufp->fullBit(oldp+253,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__data_ok));
    bufp->fullCData(oldp+254,((3U & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res)),2);
    bufp->fullBit(oldp+255,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_mem__DOT__data_ok));
    bufp->fullIData(oldp+256,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0]),32);
    bufp->fullIData(oldp+257,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[1]),32);
    bufp->fullIData(oldp+258,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[2]),32);
    bufp->fullIData(oldp+259,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[3]),32);
    bufp->fullIData(oldp+260,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[4]),32);
    bufp->fullIData(oldp+261,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[5]),32);
    bufp->fullIData(oldp+262,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[6]),32);
    bufp->fullIData(oldp+263,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[7]),32);
    bufp->fullIData(oldp+264,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[8]),32);
    bufp->fullIData(oldp+265,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[9]),32);
    bufp->fullIData(oldp+266,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[10]),32);
    bufp->fullIData(oldp+267,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[11]),32);
    bufp->fullIData(oldp+268,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[12]),32);
    bufp->fullIData(oldp+269,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[13]),32);
    bufp->fullIData(oldp+270,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[14]),32);
    bufp->fullIData(oldp+271,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[15]),32);
    bufp->fullIData(oldp+272,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[16]),32);
    bufp->fullIData(oldp+273,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[17]),32);
    bufp->fullIData(oldp+274,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[18]),32);
    bufp->fullIData(oldp+275,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[19]),32);
    bufp->fullIData(oldp+276,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[20]),32);
    bufp->fullIData(oldp+277,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[21]),32);
    bufp->fullIData(oldp+278,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[22]),32);
    bufp->fullIData(oldp+279,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[23]),32);
    bufp->fullIData(oldp+280,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[24]),32);
    bufp->fullIData(oldp+281,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[25]),32);
    bufp->fullIData(oldp+282,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[26]),32);
    bufp->fullIData(oldp+283,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[27]),32);
    bufp->fullIData(oldp+284,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[28]),32);
    bufp->fullIData(oldp+285,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[29]),32);
    bufp->fullIData(oldp+286,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[30]),32);
    bufp->fullIData(oldp+287,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[31]),32);
    bufp->fullIData(oldp+288,((vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data 
                               | vlSelf->ysyx_25060170_fishtailcore__DOT__csr_wbu_read_csr_data)),32);
    bufp->fullIData(oldp+289,(((~ vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data) 
                               & vlSelf->ysyx_25060170_fishtailcore__DOT__csr_wbu_read_csr_data)),32);
    bufp->fullBit(oldp+290,(vlSelf->clk));
    bufp->fullBit(oldp+291,(vlSelf->rst));
    bufp->fullIData(oldp+292,(vlSelf->DPIC_if_id_pc),32);
    bufp->fullIData(oldp+293,(vlSelf->DPIC_dpic_ifu_inst),32);
    bufp->fullIData(oldp+294,(vlSelf->DPIC_if_id_reg_pc),32);
    bufp->fullCData(oldp+295,(vlSelf->DPIC_idu_dpic_rd_addr),5);
    bufp->fullIData(oldp+296,(vlSelf->DPIC_idu_imm),32);
    bufp->fullIData(oldp+297,(vlSelf->DPIC_regs0),32);
    bufp->fullIData(oldp+298,(vlSelf->DPIC_regs1),32);
    bufp->fullIData(oldp+299,(vlSelf->DPIC_regs2),32);
    bufp->fullIData(oldp+300,(vlSelf->DPIC_regs3),32);
    bufp->fullIData(oldp+301,(vlSelf->DPIC_regs4),32);
    bufp->fullIData(oldp+302,(vlSelf->DPIC_regs5),32);
    bufp->fullIData(oldp+303,(vlSelf->DPIC_regs6),32);
    bufp->fullIData(oldp+304,(vlSelf->DPIC_regs7),32);
    bufp->fullIData(oldp+305,(vlSelf->DPIC_regs8),32);
    bufp->fullIData(oldp+306,(vlSelf->DPIC_regs9),32);
    bufp->fullIData(oldp+307,(vlSelf->DPIC_regs10),32);
    bufp->fullIData(oldp+308,(vlSelf->DPIC_regs11),32);
    bufp->fullIData(oldp+309,(vlSelf->DPIC_regs12),32);
    bufp->fullIData(oldp+310,(vlSelf->DPIC_regs13),32);
    bufp->fullIData(oldp+311,(vlSelf->DPIC_regs14),32);
    bufp->fullIData(oldp+312,(vlSelf->DPIC_regs15),32);
    bufp->fullIData(oldp+313,(vlSelf->DPIC_regs16),32);
    bufp->fullIData(oldp+314,(vlSelf->DPIC_regs17),32);
    bufp->fullIData(oldp+315,(vlSelf->DPIC_regs18),32);
    bufp->fullIData(oldp+316,(vlSelf->DPIC_regs19),32);
    bufp->fullIData(oldp+317,(vlSelf->DPIC_regs20),32);
    bufp->fullIData(oldp+318,(vlSelf->DPIC_regs21),32);
    bufp->fullIData(oldp+319,(vlSelf->DPIC_regs22),32);
    bufp->fullIData(oldp+320,(vlSelf->DPIC_regs23),32);
    bufp->fullIData(oldp+321,(vlSelf->DPIC_regs24),32);
    bufp->fullIData(oldp+322,(vlSelf->DPIC_regs25),32);
    bufp->fullIData(oldp+323,(vlSelf->DPIC_regs26),32);
    bufp->fullIData(oldp+324,(vlSelf->DPIC_regs27),32);
    bufp->fullIData(oldp+325,(vlSelf->DPIC_regs28),32);
    bufp->fullIData(oldp+326,(vlSelf->DPIC_regs29),32);
    bufp->fullIData(oldp+327,(vlSelf->DPIC_regs30),32);
    bufp->fullIData(oldp+328,(vlSelf->DPIC_regs31),32);
    bufp->fullIData(oldp+329,(vlSelf->DPIC_dpic_mhartid),32);
    bufp->fullIData(oldp+330,(vlSelf->DPIC_dpic_mstatus),32);
    bufp->fullIData(oldp+331,(vlSelf->DPIC_dpic_mepc),32);
    bufp->fullIData(oldp+332,(vlSelf->DPIC_dpic_mtvec),32);
    bufp->fullIData(oldp+333,(vlSelf->DPIC_dpic_mcause),32);
    bufp->fullIData(oldp+334,(vlSelf->DPIC_dpic_mscratch),32);
    bufp->fullBit(oldp+335,(vlSelf->DPIC_ls_mem_re));
    bufp->fullBit(oldp+336,(vlSelf->DPIC_ls_dpic_we));
    bufp->fullIData(oldp+337,(vlSelf->DPIC_ls_dpic_data),32);
    bufp->fullCData(oldp+338,(vlSelf->DPIC_ls_dpic_wlen),8);
    bufp->fullCData(oldp+339,(vlSelf->DPIC_ls_dpic_rlen),8);
    bufp->fullIData(oldp+340,(vlSelf->DPIC_dpi_ls_mem_skip_flag),32);
    bufp->fullIData(oldp+341,(vlSelf->DPIC_mem_wb_skip_flag),32);
    bufp->fullIData(oldp+342,(vlSelf->DPIC_wbu_dpic_inst),32);
    bufp->fullIData(oldp+343,(vlSelf->DPIC_wbu_dpic_pc),32);
    bufp->fullIData(oldp+344,(vlSelf->DPIC_wbu_dpic_next_pc),32);
    bufp->fullBit(oldp+345,(vlSelf->DPIC_wbu_dpic_valid));
    bufp->fullIData(oldp+346,(vlSelf->DPIC_DPIC_MEM_data),32);
    bufp->fullIData(oldp+347,(vlSelf->DPIC_ls_dpic_raddr),32);
    bufp->fullIData(oldp+348,(vlSelf->DPIC_ls_dpic_waddr),32);
    bufp->fullIData(oldp+349,(vlSelf->DPIC_ex_ls_reg_pc),32);
    bufp->fullBit(oldp+350,(vlSelf->DPIC_magic_flag));
    bufp->fullIData(oldp+351,(((0x80000000U & (- (IData)((IData)(vlSelf->rst)))) 
                               | (((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal))) 
                                   & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc) 
                                  | ((0xfffffffeU & 
                                      ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr))) 
                                       & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc)) 
                                     | (((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bxx_taken))) 
                                         & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc) 
                                        | ((- (IData)(
                                                      ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_bxx) 
                                                       & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_not_taken_state) 
                                                          | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_not_taken_state))))) 
                                           & ((IData)(4U) 
                                              + vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ifu__DOT__pc))))))),32);
    bufp->fullIData(oldp+352,((((~ (IData)(vlSelf->rst)) 
                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr))
                                ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                               [vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr]
                                : 0U)),32);
    bufp->fullIData(oldp+353,((((- (IData)((3U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__predict_error_ctl)))) 
                                & ((IData)(4U) + vlSelf->DPIC_if_id_reg_pc)) 
                               | (((- (IData)((2U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__predict_error_ctl)))) 
                                   & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h71cc746e__0) 
                                  | (0xfffffffeU & 
                                     ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__jalr_bpu_jump_error))) 
                                      & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_hd158f2b5__0))))),32);
    bufp->fullIData(oldp+354,((((~ (IData)(vlSelf->rst)) 
                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena))
                                ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                               [vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr]
                                : 0U)),32);
    bufp->fullIData(oldp+355,((((~ (IData)(vlSelf->rst)) 
                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena))
                                ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                               [vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr]
                                : 0U)),32);
    bufp->fullCData(oldp+356,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rd_ena)
                                ? (IData)(vlSelf->DPIC_idu_dpic_rd_addr)
                                : 0U)),5);
    bufp->fullIData(oldp+357,(((0x21U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                                ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h71cc746e__0
                                : ((0x42U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                                    ? (0xfffffffeU 
                                       & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_hd158f2b5__0)
                                    : (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst_bxx) 
                                        & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__now_bxx_jump_yes))
                                        ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h71cc746e__0
                                        : (((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__now_bxx_jump_yes)) 
                                            & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst_bxx))
                                            ? ((IData)(4U) 
                                               + vlSelf->DPIC_if_id_reg_pc)
                                            : vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc))))),32);
    bufp->fullIData(oldp+358,(((0x100000U & (vlSelf->DPIC_dpic_ifu_inst 
                                             >> 0xbU)) 
                               | ((0xff000U & vlSelf->DPIC_dpic_ifu_inst) 
                                  | ((0x800U & (vlSelf->DPIC_dpic_ifu_inst 
                                                >> 9U)) 
                                     | (0x7feU & (vlSelf->DPIC_dpic_ifu_inst 
                                                  >> 0x14U)))))),21);
    bufp->fullSData(oldp+359,(((0x1000U & (vlSelf->DPIC_dpic_ifu_inst 
                                           >> 0x13U)) 
                               | ((0x800U & (vlSelf->DPIC_dpic_ifu_inst 
                                             << 4U)) 
                                  | ((0x7e0U & (vlSelf->DPIC_dpic_ifu_inst 
                                                >> 0x14U)) 
                                     | (0x1eU & (vlSelf->DPIC_dpic_ifu_inst 
                                                 >> 7U)))))),13);
    bufp->fullSData(oldp+360,((vlSelf->DPIC_dpic_ifu_inst 
                               >> 0x14U)),12);
    bufp->fullCData(oldp+361,((0x7fU & vlSelf->DPIC_dpic_ifu_inst)),7);
    bufp->fullIData(oldp+362,(((IData)(vlSelf->__VdfgTmp_h3759cb03__0)
                                ? vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
                                : (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr) 
                                    & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                                       == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))
                                    ? vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res
                                    : ((IData)(vlSelf->__VdfgTmp_h3759cb03__0)
                                        ? vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
                                        : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgTmp_hff229178__0)
                                            ? vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward
                                            : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr)
                                                ? (
                                                   ((~ (IData)(vlSelf->rst)) 
                                                    & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr))
                                                    ? 
                                                   vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                   [vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr]
                                                    : 0U)
                                                : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ifu__DOT__pc)))))),32);
    bufp->fullIData(oldp+363,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal)
                                ? (((- (IData)((vlSelf->DPIC_dpic_ifu_inst 
                                                >> 0x1fU))) 
                                    << 0x15U) | ((0x100000U 
                                                  & (vlSelf->DPIC_dpic_ifu_inst 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelf->DPIC_dpic_ifu_inst) 
                                                    | ((0x800U 
                                                        & (vlSelf->DPIC_dpic_ifu_inst 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->DPIC_dpic_ifu_inst 
                                                             >> 0x14U))))))
                                : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr)
                                    ? (((- (IData)(
                                                   (vlSelf->DPIC_dpic_ifu_inst 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSelf->DPIC_dpic_ifu_inst 
                                        >> 0x14U)) : 
                                   ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_bxx)
                                     ? (((- (IData)(
                                                    (vlSelf->DPIC_dpic_ifu_inst 
                                                     >> 0x1fU))) 
                                         << 0xdU) | 
                                        ((0x1000U & 
                                          (vlSelf->DPIC_dpic_ifu_inst 
                                           >> 0x13U)) 
                                         | ((0x800U 
                                             & (vlSelf->DPIC_dpic_ifu_inst 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->DPIC_dpic_ifu_inst 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->DPIC_dpic_ifu_inst 
                                                     >> 7U))))))
                                     : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgTmp_hff229178__0)
                                         ? 0U : 4U))))),32);
    bufp->fullIData(oldp+364,((((- (IData)((vlSelf->DPIC_dpic_ifu_inst 
                                            >> 0x1fU))) 
                                << 0x15U) | ((0x100000U 
                                              & (vlSelf->DPIC_dpic_ifu_inst 
                                                 >> 0xbU)) 
                                             | ((0xff000U 
                                                 & vlSelf->DPIC_dpic_ifu_inst) 
                                                | ((0x800U 
                                                    & (vlSelf->DPIC_dpic_ifu_inst 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->DPIC_dpic_ifu_inst 
                                                         >> 0x14U))))))),32);
    bufp->fullIData(oldp+365,((((- (IData)((vlSelf->DPIC_dpic_ifu_inst 
                                            >> 0x1fU))) 
                                << 0xdU) | ((0x1000U 
                                             & (vlSelf->DPIC_dpic_ifu_inst 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlSelf->DPIC_dpic_ifu_inst 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->DPIC_dpic_ifu_inst 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->DPIC_dpic_ifu_inst 
                                                        >> 7U))))))),32);
    bufp->fullIData(oldp+366,((((- (IData)((vlSelf->DPIC_dpic_ifu_inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->DPIC_dpic_ifu_inst 
                                            >> 0x14U))),32);
    bufp->fullBit(oldp+367,(((~ ((IData)(vlSelf->rst) 
                                 & (0U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)))) 
                             & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena) 
                                 & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h5a345cf6__0) 
                                    & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr) 
                                       == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))) 
                                | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_ha77af658__0) 
                                   & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr) 
                                      == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr)))))));
    bufp->fullBit(oldp+368,(((~ ((IData)(vlSelf->rst) 
                                 & (0U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)))) 
                             & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena) 
                                 & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h5a345cf6__0) 
                                    & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr) 
                                       == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))) 
                                | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_ha77af658__0) 
                                   & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr) 
                                      == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr)))))));
    bufp->fullSData(oldp+369,(((0xfe0U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                          >> 0x14U)) 
                               | (IData)(vlSelf->DPIC_idu_dpic_rd_addr))),12);
    bufp->fullCData(oldp+370,(((IData)(vlSelf->rst)
                                ? 0U : ((0U == (3U 
                                                & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                         ? 3U : ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                                  ? 0xcU
                                                  : 0U)))),4);
    bufp->fullIData(oldp+371,(((IData)(vlSelf->rst)
                                ? 0U : ((8U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                         ? ((4U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                             ? ((2U 
                                                 & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                  ? 0U
                                                  : 
                                                 (0xffffU 
                                                  & vlSelf->DPIC_DPIC_MEM_data))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                  ? 
                                                 (0xffU 
                                                  & vlSelf->DPIC_DPIC_MEM_data)
                                                  : 0U))
                                             : ((2U 
                                                 & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                  ? vlSelf->DPIC_DPIC_MEM_data
                                                  : 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->DPIC_DPIC_MEM_data 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->DPIC_DPIC_MEM_data)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->DPIC_DPIC_MEM_data 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelf->DPIC_DPIC_MEM_data))
                                                  : 0U)))
                                         : 0U))),32);
    bufp->fullCData(oldp+372,((0xffU & vlSelf->DPIC_DPIC_MEM_data)),8);
    bufp->fullSData(oldp+373,((0xffffU & vlSelf->DPIC_DPIC_MEM_data)),16);
    bufp->fullBit(oldp+374,(0U));
    bufp->fullBit(oldp+375,(1U));
    bufp->fullCData(oldp+376,(0U),2);
    bufp->fullIData(oldp+377,(0U),32);
    bufp->fullCData(oldp+378,(0xfU),4);
}
