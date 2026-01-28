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
    tracep->declBit(c+354,"clk", false,-1);
    tracep->declBit(c+355,"rst", false,-1);
    tracep->pushNamePrefix("ysyx_25060170_topcore ");
    tracep->declBit(c+354,"clk", false,-1);
    tracep->declBit(c+355,"rst", false,-1);
    tracep->declBus(c+144,"DPIC_if_id_pc", false,-1, 31,0);
    tracep->declBus(c+145,"DPIC_dpic_ifu_inst", false,-1, 31,0);
    tracep->declBit(c+2,"DPIC_ls_mem_re", false,-1);
    tracep->declBit(c+3,"DPIC_ls_dpic_we", false,-1);
    tracep->declBus(c+4,"DPIC_ls_dpic_data", false,-1, 31,0);
    tracep->declBus(c+5,"DPIC_ls_dpic_wlen", false,-1, 7,0);
    tracep->declBus(c+365,"DPIC_ls_dpic_rlen", false,-1, 7,0);
    tracep->declBus(c+146,"DPIC_wbu_dpic_inst", false,-1, 31,0);
    tracep->declBus(c+147,"DPIC_wbu_dpic_pc", false,-1, 31,0);
    tracep->declBus(c+148,"DPIC_wbu_dpic_next_pc", false,-1, 31,0);
    tracep->declBit(c+149,"DPIC_wbu_dpic_valid", false,-1);
    tracep->declBus(c+150,"DPIC_DPIC_MEM_data", false,-1, 31,0);
    tracep->declBus(c+6,"DPIC_ls_dpic_raddr", false,-1, 31,0);
    tracep->declBus(c+6,"DPIC_ls_dpic_waddr", false,-1, 31,0);
    tracep->declBus(c+7,"DPIC_dpi_ls_mem_skip_flag", false,-1, 31,0);
    tracep->declBus(c+151,"diff_test_skip_o", false,-1, 31,0);
    tracep->declBus(c+152,"dpic_diff_skip_flag_o", false,-1, 31,0);
    tracep->declBit(c+153,"magicstop", false,-1);
    tracep->pushNamePrefix("u_ysyx_25060170_DPIC ");
    tracep->declBit(c+354,"clk", false,-1);
    tracep->declBit(c+355,"rst", false,-1);
    tracep->declBus(c+144,"DPIC_pc_i", false,-1, 31,0);
    tracep->declBus(c+145,"DPIC_inst_o", false,-1, 31,0);
    tracep->declBus(c+154,"DPIC_ftrace_pc", false,-1, 31,0);
    tracep->declBus(c+155,"DPIC_rd_addr", false,-1, 4,0);
    tracep->declBus(c+8,"DPIC_imm", false,-1, 31,0);
    tracep->declBus(c+156,"DPIC_regs0", false,-1, 31,0);
    tracep->declBus(c+157,"DPIC_regs1", false,-1, 31,0);
    tracep->declBus(c+158,"DPIC_regs2", false,-1, 31,0);
    tracep->declBus(c+159,"DPIC_regs3", false,-1, 31,0);
    tracep->declBus(c+160,"DPIC_regs4", false,-1, 31,0);
    tracep->declBus(c+161,"DPIC_regs5", false,-1, 31,0);
    tracep->declBus(c+162,"DPIC_regs6", false,-1, 31,0);
    tracep->declBus(c+163,"DPIC_regs7", false,-1, 31,0);
    tracep->declBus(c+164,"DPIC_regs8", false,-1, 31,0);
    tracep->declBus(c+165,"DPIC_regs9", false,-1, 31,0);
    tracep->declBus(c+166,"DPIC_regs10", false,-1, 31,0);
    tracep->declBus(c+167,"DPIC_regs11", false,-1, 31,0);
    tracep->declBus(c+168,"DPIC_regs12", false,-1, 31,0);
    tracep->declBus(c+169,"DPIC_regs13", false,-1, 31,0);
    tracep->declBus(c+170,"DPIC_regs14", false,-1, 31,0);
    tracep->declBus(c+171,"DPIC_regs15", false,-1, 31,0);
    tracep->declBus(c+172,"DPIC_regs16", false,-1, 31,0);
    tracep->declBus(c+173,"DPIC_regs17", false,-1, 31,0);
    tracep->declBus(c+174,"DPIC_regs18", false,-1, 31,0);
    tracep->declBus(c+175,"DPIC_regs19", false,-1, 31,0);
    tracep->declBus(c+176,"DPIC_regs20", false,-1, 31,0);
    tracep->declBus(c+177,"DPIC_regs21", false,-1, 31,0);
    tracep->declBus(c+178,"DPIC_regs22", false,-1, 31,0);
    tracep->declBus(c+179,"DPIC_regs23", false,-1, 31,0);
    tracep->declBus(c+180,"DPIC_regs24", false,-1, 31,0);
    tracep->declBus(c+181,"DPIC_regs25", false,-1, 31,0);
    tracep->declBus(c+182,"DPIC_regs26", false,-1, 31,0);
    tracep->declBus(c+183,"DPIC_regs27", false,-1, 31,0);
    tracep->declBus(c+184,"DPIC_regs28", false,-1, 31,0);
    tracep->declBus(c+185,"DPIC_regs29", false,-1, 31,0);
    tracep->declBus(c+186,"DPIC_regs30", false,-1, 31,0);
    tracep->declBus(c+187,"DPIC_regs31", false,-1, 31,0);
    tracep->declBus(c+188,"DPIC_mstatus", false,-1, 31,0);
    tracep->declBus(c+189,"DPIC_mtvec", false,-1, 31,0);
    tracep->declBus(c+190,"DPIC_mepc", false,-1, 31,0);
    tracep->declBus(c+191,"DPIC_mcause", false,-1, 31,0);
    tracep->declBus(c+366,"DPIC_mhartid", false,-1, 31,0);
    tracep->declBus(c+192,"DPIC_mscratch", false,-1, 31,0);
    tracep->declBit(c+2,"DPIC_re", false,-1);
    tracep->declBit(c+3,"DPIC_we", false,-1);
    tracep->declBus(c+4,"DPIC_data_i", false,-1, 31,0);
    tracep->declBus(c+5,"DPIC_wlen", false,-1, 7,0);
    tracep->declBus(c+365,"DPIC_rlen", false,-1, 7,0);
    tracep->declBus(c+7,"DPIC_dpic_difftest_skip_flag", false,-1, 31,0);
    tracep->declBus(c+152,"DPIC_wbu_DPIC_difftest_skip_flag", false,-1, 31,0);
    tracep->declBus(c+146,"DPIC_wbu_dpic_inst", false,-1, 31,0);
    tracep->declBus(c+147,"DPIC_wbu_dpic_pc", false,-1, 31,0);
    tracep->declBus(c+148,"DPIC_wbu_dpic_next_pc", false,-1, 31,0);
    tracep->declBit(c+149,"DPIC_wbu_dpic_valid", false,-1);
    tracep->declBus(c+150,"DPIC_data_o", false,-1, 31,0);
    tracep->declBus(c+6,"DPIC_raddr", false,-1, 31,0);
    tracep->declBus(c+6,"DPIC_waddr", false,-1, 31,0);
    tracep->declBit(c+153,"DPIC_magic_flag", false,-1);
    tracep->declBus(c+367,"dpic_loadread", false,-1, 31,0);
    tracep->declBus(c+9,"mem_data", false,-1, 31,0);
    tracep->declBus(c+368,"dpic_fetch", false,-1, 31,0);
    tracep->declBit(c+193,"jal", false,-1);
    tracep->declBit(c+194,"jalr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_fishtailcore ");
    tracep->declBit(c+354,"clk", false,-1);
    tracep->declBit(c+355,"rst", false,-1);
    tracep->declBus(c+144,"DPIC_if_id_pc", false,-1, 31,0);
    tracep->declBus(c+145,"DPIC_dpic_ifu_inst", false,-1, 31,0);
    tracep->declBit(c+2,"DPIC_ls_mem_re", false,-1);
    tracep->declBit(c+3,"DPIC_ls_dpic_we", false,-1);
    tracep->declBus(c+4,"DPIC_ls_dpic_data", false,-1, 31,0);
    tracep->declBus(c+5,"DPIC_ls_dpic_wlen", false,-1, 7,0);
    tracep->declBus(c+365,"DPIC_ls_dpic_rlen", false,-1, 7,0);
    tracep->declBus(c+146,"DPIC_wbu_dpic_inst", false,-1, 31,0);
    tracep->declBus(c+147,"DPIC_wbu_dpic_pc", false,-1, 31,0);
    tracep->declBus(c+148,"DPIC_wbu_dpic_next_pc", false,-1, 31,0);
    tracep->declBit(c+149,"DPIC_wbu_dpic_valid", false,-1);
    tracep->declBus(c+150,"DPIC_DPIC_MEM_data", false,-1, 31,0);
    tracep->declBus(c+6,"DPIC_ls_dpic_raddr", false,-1, 31,0);
    tracep->declBus(c+6,"DPIC_ls_dpic_waddr", false,-1, 31,0);
    tracep->declBus(c+145,"if_id_inst", false,-1, 31,0);
    tracep->declBus(c+356,"bp_if_pc", false,-1, 31,0);
    tracep->declBit(c+10,"bp_predict", false,-1);
    tracep->declBus(c+357,"bp_rs1_data", false,-1, 31,0);
    tracep->declBus(c+11,"bp_rs1_addr", false,-1, 4,0);
    tracep->declBit(c+12,"bp_rs1_ena", false,-1);
    tracep->declBit(c+13,"bpu_ifu_inst_bxx", false,-1);
    tracep->declBit(c+14,"bpu_ifu_jal_jalr", false,-1);
    tracep->declBus(c+15,"id_jump_pc", false,-1, 31,0);
    tracep->declBit(c+369,"ls_pc_jump", false,-1);
    tracep->declBus(c+195,"ls_jump_pc", false,-1, 31,0);
    tracep->declBit(c+16,"id_ready", false,-1);
    tracep->declBit(c+17,"id_stall", false,-1);
    tracep->declBit(c+18,"if_valid", false,-1);
    tracep->declBus(c+196,"if_id_next_pc", false,-1, 31,0);
    tracep->declBit(c+13,"if_id_inst_bxx", false,-1);
    tracep->declBit(c+369,"ls_flush", false,-1);
    tracep->declBit(c+19,"id_flush", false,-1);
    tracep->declBus(c+197,"if_id_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+198,"if_id_reg_inst", false,-1, 31,0);
    tracep->declBit(c+199,"if_id_reg_inst_bxx", false,-1);
    tracep->declBit(c+200,"if_id_reg_bp_jump", false,-1);
    tracep->declBit(c+201,"if_id_valid", false,-1);
    tracep->declBus(c+154,"if_id_reg_pc", false,-1, 31,0);
    tracep->declBit(c+202,"ex_csr_ena", false,-1);
    tracep->declBit(c+203,"ls_csr_ena", false,-1);
    tracep->declBus(c+358,"rf_id_rs1_data", false,-1, 31,0);
    tracep->declBus(c+359,"rf_id_rs2_data", false,-1, 31,0);
    tracep->declBit(c+1,"ex_ready", false,-1);
    tracep->declBus(c+20,"idu_rs1_addr", false,-1, 4,0);
    tracep->declBit(c+21,"idu_rs1_ena", false,-1);
    tracep->declBus(c+22,"idu_rs2_addr", false,-1, 4,0);
    tracep->declBit(c+23,"idu_rs2_ena", false,-1);
    tracep->declBit(c+24,"idu_rd_ena", false,-1);
    tracep->declBus(c+25,"idu_rd_addr", false,-1, 4,0);
    tracep->declBus(c+26,"idu_alusrc", false,-1, 7,0);
    tracep->declBus(c+27,"idu_lsctl", false,-1, 3,0);
    tracep->declBus(c+28,"idu_wbctl", false,-1, 1,0);
    tracep->declBus(c+29,"idu_op1_sel", false,-1, 1,0);
    tracep->declBus(c+30,"idu_op2_sel", false,-1, 2,0);
    tracep->declBit(c+31,"idu_load_flag", false,-1);
    tracep->declBit(c+32,"idu_csr_ena", false,-1);
    tracep->declBus(c+33,"idu_op1", false,-1, 31,0);
    tracep->declBus(c+34,"idu_op2", false,-1, 31,0);
    tracep->declBus(c+8,"idu_imm", false,-1, 31,0);
    tracep->declBus(c+154,"idu_pc", false,-1, 31,0);
    tracep->declBus(c+35,"idu_next_pc", false,-1, 31,0);
    tracep->declBus(c+198,"idu_inst", false,-1, 31,0);
    tracep->declBus(c+204,"idu_csr_imm", false,-1, 4,0);
    tracep->declBit(c+36,"id_predict_error", false,-1);
    tracep->declBit(c+37,"ex_branch", false,-1);
    tracep->declBus(c+205,"id_ex_reg_alusrc", false,-1, 7,0);
    tracep->declBit(c+38,"id_valid", false,-1);
    tracep->declBus(c+206,"id_ex_reg_pc", false,-1, 31,0);
    tracep->declBus(c+207,"id_ex_reg_inst", false,-1, 31,0);
    tracep->declBus(c+208,"id_ex_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+209,"id_ex_reg_op1", false,-1, 31,0);
    tracep->declBus(c+210,"id_ex_reg_op2", false,-1, 31,0);
    tracep->declBus(c+211,"id_ex_reg_op1_sel", false,-1, 1,0);
    tracep->declBus(c+212,"id_ex_reg_op2_sel", false,-1, 2,0);
    tracep->declBit(c+213,"id_ex_reg_rd_ena", false,-1);
    tracep->declBus(c+214,"id_ex_reg_rd_addr", false,-1, 4,0);
    tracep->declBus(c+215,"id_ex_reg_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+216,"id_ex_reg_imm", false,-1, 31,0);
    tracep->declBus(c+217,"id_ex_reg_lsctl", false,-1, 3,0);
    tracep->declBus(c+218,"id_ex_reg_wbctl", false,-1, 1,0);
    tracep->declBit(c+219,"id_ex_reg_load_flag", false,-1);
    tracep->declBit(c+220,"id_ex_valid", false,-1);
    tracep->declBit(c+1,"ls_ready", false,-1);
    tracep->declBus(c+207,"exu_inst", false,-1, 31,0);
    tracep->declBus(c+206,"exu_pc", false,-1, 31,0);
    tracep->declBus(c+208,"exu_next_pc", false,-1, 31,0);
    tracep->declBit(c+220,"ex_valid", false,-1);
    tracep->declBus(c+210,"exu_store_data", false,-1, 31,0);
    tracep->declBus(c+39,"exu_res", false,-1, 31,0);
    tracep->declBus(c+40,"exu_csr_addr", false,-1, 11,0);
    tracep->declBus(c+41,"exu_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+221,"ex_ls_reg_inst", false,-1, 31,0);
    tracep->declBus(c+222,"ex_ls_reg_store_data", false,-1, 31,0);
    tracep->declBus(c+195,"ex_ls_reg_exu_res", false,-1, 31,0);
    tracep->declBus(c+223,"ex_ls_reg_ls_ctl", false,-1, 3,0);
    tracep->declBus(c+224,"ex_ls_reg_wb_ctl", false,-1, 1,0);
    tracep->declBus(c+225,"ex_ls_reg_csr_ctl", false,-1, 6,0);
    tracep->declBit(c+226,"ex_ls_reg_rd_ena", false,-1);
    tracep->declBus(c+227,"ex_ls_reg_rd_addr", false,-1, 4,0);
    tracep->declBit(c+202,"ex_ls_reg_ls_csr_ena", false,-1);
    tracep->declBus(c+228,"ex_ls_reg_csr_addr", false,-1, 11,0);
    tracep->declBus(c+229,"ex_ls_reg_pc", false,-1, 31,0);
    tracep->declBus(c+230,"ex_ls_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+214,"ex_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+39,"ex_rd_data_forward", false,-1, 31,0);
    tracep->declBit(c+231,"ex_ls_valid", false,-1);
    tracep->declBit(c+232,"ex_ls_reg_load_flag", false,-1);
    tracep->declBit(c+42,"ls_valid", false,-1);
    tracep->declBus(c+230,"ls_next_pc", false,-1, 31,0);
    tracep->declBus(c+221,"ls_inst", false,-1, 31,0);
    tracep->declBus(c+233,"ls_mem_reg_inst", false,-1, 31,0);
    tracep->declBus(c+234,"ls_mem_reg_pc", false,-1, 31,0);
    tracep->declBus(c+235,"ls_mem_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+236,"ls_mem_reg_ls_ctl", false,-1, 3,0);
    tracep->declBus(c+237,"ls_mem_reg_wb_ctl", false,-1, 1,0);
    tracep->declBit(c+238,"ls_mem_reg_rd_ena", false,-1);
    tracep->declBus(c+239,"ls_mem_reg_rd_addr", false,-1, 4,0);
    tracep->declBus(c+240,"ls_mem_reg_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+241,"ls_mem_reg_csr_addr", false,-1, 11,0);
    tracep->declBit(c+242,"ls_mem_valid", false,-1);
    tracep->declBus(c+227,"ls_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+195,"ls_rd_data_forward", false,-1, 31,0);
    tracep->declBit(c+243,"ls_mem_reg_re", false,-1);
    tracep->declBus(c+244,"ls_mem_reg_alu_res", false,-1, 31,0);
    tracep->declBit(c+245,"ls_mem_reg_load_flag", false,-1);
    tracep->declBus(c+233,"mem_inst", false,-1, 31,0);
    tracep->declBus(c+234,"mem_pc", false,-1, 31,0);
    tracep->declBus(c+235,"mem_next_pc", false,-1, 31,0);
    tracep->declBus(c+244,"mem_alu_res", false,-1, 31,0);
    tracep->declBit(c+238,"mem_rd_ena", false,-1);
    tracep->declBus(c+239,"mem_rd_addr", false,-1, 4,0);
    tracep->declBus(c+240,"mem_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+241,"mem_csr_addr", false,-1, 11,0);
    tracep->declBus(c+237,"mem_wbctl", false,-1, 1,0);
    tracep->declBit(c+246,"mem_valid", false,-1);
    tracep->declBit(c+370,"mem_ready", false,-1);
    tracep->declBus(c+43,"mem_data", false,-1, 31,0);
    tracep->declBus(c+146,"mem_wb_inst", false,-1, 31,0);
    tracep->declBus(c+147,"mem_wb_pc", false,-1, 31,0);
    tracep->declBus(c+148,"mem_wb_next_pc", false,-1, 31,0);
    tracep->declBus(c+247,"mem_wb_lsu_res", false,-1, 31,0);
    tracep->declBus(c+248,"mem_wb_alures_data", false,-1, 31,0);
    tracep->declBus(c+249,"mem_wb_wb_ctl", false,-1, 1,0);
    tracep->declBit(c+250,"mem_wb_rd_ena", false,-1);
    tracep->declBus(c+251,"mem_wb_rd_addr", false,-1, 4,0);
    tracep->declBus(c+252,"mem_wb_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+253,"mem_wb_csr_addr", false,-1, 11,0);
    tracep->declBit(c+149,"mem_valid_o", false,-1);
    tracep->declBus(c+239,"mem_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+44,"mem_rd_data_forward", false,-1, 31,0);
    tracep->declBit(c+254,"mem_wb_reg_load_flag", false,-1);
    tracep->declBus(c+255,"wb_rf_data", false,-1, 31,0);
    tracep->declBit(c+370,"wb_ready", false,-1);
    tracep->declBit(c+250,"wb_rf_rd_ena", false,-1);
    tracep->declBus(c+251,"wb_rf_rd_addr", false,-1, 4,0);
    tracep->declBus(c+251,"wb_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+256,"wb_rd_data_forward", false,-1, 31,0);
    tracep->declBus(c+252,"wb_csr_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+253,"wb_csr_csr_addr", false,-1, 11,0);
    tracep->declBus(c+257,"wb_csr_mcause_value", false,-1, 31,0);
    tracep->declBus(c+258,"wb_csr_write_csr_data", false,-1, 31,0);
    tracep->declBus(c+259,"csr_wbu_read_csr_data", false,-1, 31,0);
    tracep->pushNamePrefix("u_ysyx_25060170_bpu ");
    tracep->declBit(c+354,"clk", false,-1);
    tracep->declBit(c+355,"rst", false,-1);
    tracep->declBit(c+37,"branch_success", false,-1);
    tracep->declBit(c+199,"idu_bxx_inst", false,-1);
    tracep->declBus(c+145,"inst_i", false,-1, 31,0);
    tracep->declBus(c+144,"pc_i", false,-1, 31,0);
    tracep->declBus(c+195,"ls_wb_forward_data", false,-1, 31,0);
    tracep->declBus(c+227,"ls_wb_forward_addr", false,-1, 4,0);
    tracep->declBus(c+39,"ex_ls_forward_data", false,-1, 31,0);
    tracep->declBus(c+214,"ex_ls_forward_addr", false,-1, 4,0);
    tracep->declBus(c+195,"ls_mem_forward_data", false,-1, 31,0);
    tracep->declBus(c+227,"ls_mem_forward_addr", false,-1, 4,0);
    tracep->declBus(c+251,"wb_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+256,"wb_rd_data_forward", false,-1, 31,0);
    tracep->declBus(c+356,"bp_pc_o", false,-1, 31,0);
    tracep->declBit(c+13,"inst_bxx_o", false,-1);
    tracep->declBit(c+14,"jal_jalr_o", false,-1);
    tracep->declBus(c+357,"bp_rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+11,"bp_rs1_addr_o", false,-1, 4,0);
    tracep->declBit(c+12,"bp_rs1_ena_o", false,-1);
    tracep->declBit(c+10,"bp_predict_o", false,-1);
    tracep->declBit(c+260,"strongly_not_taken_state", false,-1);
    tracep->declBit(c+261,"weakly_not_taken_state", false,-1);
    tracep->declBit(c+262,"weakly_taken_state", false,-1);
    tracep->declBit(c+263,"strongly_taken_state", false,-1);
    tracep->declBus(c+264,"jal_imm", false,-1, 20,0);
    tracep->declBus(c+265,"b_imm", false,-1, 12,0);
    tracep->declBus(c+266,"jalr_imm", false,-1, 11,0);
    tracep->declBus(c+267,"opcode", false,-1, 6,0);
    tracep->declBus(c+360,"op1", false,-1, 31,0);
    tracep->declBus(c+45,"op2", false,-1, 31,0);
    tracep->declBit(c+46,"inst_jal", false,-1);
    tracep->declBit(c+12,"inst_jalr", false,-1);
    tracep->declBit(c+13,"inst_bxx", false,-1);
    tracep->declBus(c+47,"jump_pc", false,-1, 31,0);
    tracep->declBus(c+48,"jump_jalr_pc", false,-1, 31,0);
    tracep->declBus(c+268,"jal_offset", false,-1, 31,0);
    tracep->declBus(c+269,"br_offset", false,-1, 31,0);
    tracep->declBus(c+270,"jalr_offset", false,-1, 31,0);
    tracep->declBit(c+49,"ls_wb_forward_en", false,-1);
    tracep->declBit(c+50,"ex_ls_forward_en", false,-1);
    tracep->declBit(c+49,"ls_mem_forward_en", false,-1);
    tracep->declBit(c+51,"wbu_forward_en", false,-1);
    tracep->declBit(c+10,"bxx_taken", false,-1);
    tracep->declBit(c+52,"bxx_not_taken", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_csr ");
    tracep->declBit(c+354,"clk", false,-1);
    tracep->declBit(c+355,"rst", false,-1);
    tracep->declBus(c+271,"csr_ctl", false,-1, 3,0);
    tracep->declBus(c+253,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+257,"mcause_value", false,-1, 31,0);
    tracep->declBus(c+258,"write_csr_data", false,-1, 31,0);
    tracep->declBus(c+259,"read_csr_data", false,-1, 31,0);
    tracep->declBit(c+272,"mstatus_rd", false,-1);
    tracep->declBit(c+273,"mstatus_wr", false,-1);
    tracep->declBit(c+274,"mstatus_mie", false,-1);
    tracep->declBit(c+275,"mstatus_mpie", false,-1);
    tracep->declBus(c+276,"mstatus_mpp", false,-1, 1,0);
    tracep->declBus(c+188,"mstatus", false,-1, 31,0);
    tracep->declBit(c+277,"mstatus_ie_ena", false,-1);
    tracep->declBit(c+278,"mie_set", false,-1);
    tracep->declBit(c+279,"mpie_set", false,-1);
    tracep->declBus(c+280,"mpp_set", false,-1, 1,0);
    tracep->declBit(c+281,"mtvec_rd", false,-1);
    tracep->declBit(c+282,"mtvec_wr", false,-1);
    tracep->declBus(c+283,"mtvec_base", false,-1, 31,2);
    tracep->declBus(c+371,"mtvec_mode", false,-1, 1,0);
    tracep->declBus(c+189,"mtvec", false,-1, 31,0);
    tracep->declBit(c+284,"mepc_rd", false,-1);
    tracep->declBit(c+285,"mepc_wr", false,-1);
    tracep->declBus(c+190,"mepc", false,-1, 31,0);
    tracep->declBit(c+286,"mcause_rd", false,-1);
    tracep->declBit(c+287,"mcause_wr", false,-1);
    tracep->declBus(c+191,"mcause", false,-1, 31,0);
    tracep->declBit(c+288,"mhartid_rd", false,-1);
    tracep->declBus(c+366,"mhartid", false,-1, 31,0);
    tracep->declBit(c+289,"mscratch_rd", false,-1);
    tracep->declBit(c+290,"mscratch_wr", false,-1);
    tracep->declBus(c+192,"mscratch", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_ex_ls_reg ");
    tracep->declBit(c+354,"clk", false,-1);
    tracep->declBit(c+355,"rst", false,-1);
    tracep->declBus(c+207,"inst_i", false,-1, 31,0);
    tracep->declBus(c+206,"pc_i", false,-1, 31,0);
    tracep->declBus(c+208,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+210,"store_data_i", false,-1, 31,0);
    tracep->declBus(c+39,"exu_res_i", false,-1, 31,0);
    tracep->declBit(c+219,"load_flag_i", false,-1);
    tracep->declBus(c+217,"ls_ctl_i", false,-1, 3,0);
    tracep->declBus(c+218,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+41,"csr_ctl_i", false,-1, 6,0);
    tracep->declBit(c+213,"rd_ena_i", false,-1);
    tracep->declBus(c+214,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+202,"ex_csr_ena_i", false,-1);
    tracep->declBus(c+40,"csr_addr_i", false,-1, 11,0);
    tracep->declBit(c+220,"ex_valid_i", false,-1);
    tracep->declBit(c+1,"ls_ready_i", false,-1);
    tracep->declBit(c+369,"ls_flush_i", false,-1);
    tracep->declBit(c+231,"ex_valid_o", false,-1);
    tracep->declBus(c+221,"inst_o", false,-1, 31,0);
    tracep->declBus(c+229,"pc_o", false,-1, 31,0);
    tracep->declBus(c+230,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+222,"store_data_o", false,-1, 31,0);
    tracep->declBus(c+195,"exu_res_o", false,-1, 31,0);
    tracep->declBit(c+232,"load_flag_o", false,-1);
    tracep->declBus(c+223,"ls_ctl_o", false,-1, 3,0);
    tracep->declBus(c+224,"wb_ctl_o", false,-1, 1,0);
    tracep->declBus(c+225,"csr_ctl_o", false,-1, 6,0);
    tracep->declBit(c+226,"rd_ena_o", false,-1);
    tracep->declBus(c+227,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+228,"csr_addr_o", false,-1, 11,0);
    tracep->declBit(c+203,"ls_csr_ena_o", false,-1);
    tracep->declBus(c+214,"ex_rd_addr_forward_o", false,-1, 4,0);
    tracep->declBit(c+202,"ex_csr_o", false,-1);
    tracep->declBus(c+39,"ex_rd_data_forward_o", false,-1, 31,0);
    tracep->declBit(c+369,"flush", false,-1);
    tracep->declBit(c+291,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_exu ");
    tracep->declBit(c+355,"rst", false,-1);
    tracep->declBus(c+209,"op1_i", false,-1, 31,0);
    tracep->declBus(c+210,"op2_i", false,-1, 31,0);
    tracep->declBus(c+211,"op1_sel_i", false,-1, 1,0);
    tracep->declBus(c+212,"op2_sel_i", false,-1, 2,0);
    tracep->declBus(c+214,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+215,"rs1_addr_i", false,-1, 4,0);
    tracep->declBus(c+216,"imm_i", false,-1, 31,0);
    tracep->declBus(c+206,"pc_i", false,-1, 31,0);
    tracep->declBus(c+208,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+207,"inst_i", false,-1, 31,0);
    tracep->declBus(c+205,"alu_sel_i", false,-1, 7,0);
    tracep->declBit(c+1,"ls_ready_i", false,-1);
    tracep->declBit(c+220,"id_valid_i", false,-1);
    tracep->declBit(c+220,"ex_valid_o", false,-1);
    tracep->declBit(c+1,"ex_ready_o", false,-1);
    tracep->declBus(c+207,"inst_o", false,-1, 31,0);
    tracep->declBus(c+206,"pc_o", false,-1, 31,0);
    tracep->declBus(c+208,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+210,"store_data_o", false,-1, 31,0);
    tracep->declBus(c+39,"exu_res_o", false,-1, 31,0);
    tracep->declBus(c+40,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+41,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+292,"op1", false,-1, 31,0);
    tracep->declBus(c+293,"op2", false,-1, 31,0);
    tracep->declBus(c+294,"op1_add_op2", false,-1, 31,0);
    tracep->declBus(c+295,"op1_sub_op2", false,-1, 31,0);
    tracep->declBit(c+296,"op1_lt_op2", false,-1);
    tracep->declBus(c+297,"op1_sra_op2", false,-1, 31,0);
    tracep->declQuad(c+298,"mul", false,-1, 63,0);
    tracep->declBus(c+300,"op1_mul_op2", false,-1, 31,0);
    tracep->declBus(c+301,"op1_mulh_op2", false,-1, 31,0);
    tracep->declBus(c+302,"div", false,-1, 31,0);
    tracep->declBus(c+303,"rem", false,-1, 31,0);
    tracep->declBus(c+53,"alu_res", false,-1, 31,0);
    tracep->declBit(c+54,"csr_wr_ena", false,-1);
    tracep->declBit(c+55,"csr_rd_ena", false,-1);
    tracep->declBit(c+56,"mret_ena", false,-1);
    tracep->declBit(c+57,"ecall_ena", false,-1);
    tracep->declBit(c+58,"csrrw_ena", false,-1);
    tracep->declBit(c+59,"csrrs_ena", false,-1);
    tracep->declBit(c+60,"csrrc_ena", false,-1);
    tracep->declBus(c+304,"csr_op", false,-1, 31,0);
    tracep->declBit(c+305,"csrrxi_ena", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_id_ex_reg ");
    tracep->declBit(c+354,"clk", false,-1);
    tracep->declBit(c+355,"rst", false,-1);
    tracep->declBus(c+198,"inst_i", false,-1, 31,0);
    tracep->declBus(c+154,"pc_i", false,-1, 31,0);
    tracep->declBus(c+35,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+33,"op1_i", false,-1, 31,0);
    tracep->declBus(c+34,"op2_i", false,-1, 31,0);
    tracep->declBus(c+29,"op1_sel_i", false,-1, 1,0);
    tracep->declBus(c+30,"op2_sel_i", false,-1, 2,0);
    tracep->declBit(c+24,"rd_ena_i", false,-1);
    tracep->declBus(c+25,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+204,"rs1_addr_i", false,-1, 4,0);
    tracep->declBus(c+8,"imm_i", false,-1, 31,0);
    tracep->declBus(c+26,"alusrc_i", false,-1, 7,0);
    tracep->declBus(c+27,"lsctl_i", false,-1, 3,0);
    tracep->declBus(c+28,"wbctl_i", false,-1, 1,0);
    tracep->declBit(c+32,"csr_ena_i", false,-1);
    tracep->declBit(c+31,"load_flag_i", false,-1);
    tracep->declBit(c+38,"id_valid_i", false,-1);
    tracep->declBit(c+19,"id_flush_i", false,-1);
    tracep->declBit(c+17,"id_stall_i", false,-1);
    tracep->declBit(c+369,"ls_flush_i", false,-1);
    tracep->declBit(c+1,"ex_ready_i", false,-1);
    tracep->declBus(c+207,"inst_o", false,-1, 31,0);
    tracep->declBus(c+206,"pc_o", false,-1, 31,0);
    tracep->declBus(c+208,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+209,"op1_o", false,-1, 31,0);
    tracep->declBus(c+210,"op2_o", false,-1, 31,0);
    tracep->declBus(c+211,"op1_sel_o", false,-1, 1,0);
    tracep->declBus(c+212,"op2_sel_o", false,-1, 2,0);
    tracep->declBit(c+213,"rd_ena_o", false,-1);
    tracep->declBus(c+214,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+215,"rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+216,"imm_o", false,-1, 31,0);
    tracep->declBus(c+205,"alusrc_o", false,-1, 7,0);
    tracep->declBus(c+217,"lsctl_o", false,-1, 3,0);
    tracep->declBus(c+218,"wbctl_o", false,-1, 1,0);
    tracep->declBit(c+202,"csr_ena_o", false,-1);
    tracep->declBit(c+219,"load_flag_o", false,-1);
    tracep->declBit(c+220,"id_valid_o", false,-1);
    tracep->declBit(c+369,"flush", false,-1);
    tracep->declBit(c+61,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_idu ");
    tracep->declBit(c+355,"rst", false,-1);
    tracep->declBus(c+198,"inst_i", false,-1, 31,0);
    tracep->declBus(c+154,"pc_i", false,-1, 31,0);
    tracep->declBus(c+197,"next_pc_i", false,-1, 31,0);
    tracep->declBit(c+200,"bp_jump_i", false,-1);
    tracep->declBit(c+199,"inst_bxx_i", false,-1);
    tracep->declBus(c+214,"ex_addr_forward", false,-1, 4,0);
    tracep->declBus(c+39,"ex_data_forward", false,-1, 31,0);
    tracep->declBus(c+227,"ls_addr_forward", false,-1, 4,0);
    tracep->declBus(c+195,"ls_data_forward", false,-1, 31,0);
    tracep->declBus(c+239,"mem_addr_forward", false,-1, 4,0);
    tracep->declBus(c+44,"mem_data_forward", false,-1, 31,0);
    tracep->declBus(c+251,"wb_addr_forward", false,-1, 4,0);
    tracep->declBus(c+256,"wb_data_forward", false,-1, 31,0);
    tracep->declBit(c+219,"ex_load_ena", false,-1);
    tracep->declBit(c+232,"ls_load_ena", false,-1);
    tracep->declBit(c+245,"mem_load_ena", false,-1);
    tracep->declBit(c+254,"wb_load_ena", false,-1);
    tracep->declBit(c+220,"ex_valid_i", false,-1);
    tracep->declBit(c+42,"ls_valid_i", false,-1);
    tracep->declBit(c+202,"ex_csr_ena", false,-1);
    tracep->declBit(c+203,"ls_csr_ena", false,-1);
    tracep->declBus(c+358,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+359,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+20,"rs1_addr", false,-1, 4,0);
    tracep->declBit(c+21,"rs1_ena", false,-1);
    tracep->declBus(c+22,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+23,"rs2_ena", false,-1);
    tracep->declBit(c+24,"rd_ena", false,-1);
    tracep->declBus(c+25,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+154,"pc_o", false,-1, 31,0);
    tracep->declBus(c+35,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+26,"alusrc_o", false,-1, 7,0);
    tracep->declBus(c+27,"lsctl_o", false,-1, 3,0);
    tracep->declBus(c+28,"wbctl_o", false,-1, 1,0);
    tracep->declBus(c+29,"op1_sel", false,-1, 1,0);
    tracep->declBus(c+30,"op2_sel", false,-1, 2,0);
    tracep->declBit(c+31,"load_flag_o", false,-1);
    tracep->declBit(c+32,"csr_ena_o", false,-1);
    tracep->declBus(c+33,"op1", false,-1, 31,0);
    tracep->declBus(c+34,"op2", false,-1, 31,0);
    tracep->declBus(c+8,"imm", false,-1, 31,0);
    tracep->declBus(c+198,"inst_o", false,-1, 31,0);
    tracep->declBus(c+204,"csr_imm_o", false,-1, 4,0);
    tracep->declBit(c+36,"predict_error_o", false,-1);
    tracep->declBus(c+15,"predict_revise_pc", false,-1, 31,0);
    tracep->declBit(c+37,"bp_predict_success", false,-1);
    tracep->declBit(c+201,"if_valid_i", false,-1);
    tracep->declBit(c+1,"ex_ready_i", false,-1);
    tracep->declBit(c+19,"id_flush_o", false,-1);
    tracep->declBit(c+17,"id_stall_o", false,-1);
    tracep->declBit(c+16,"id_ready_o", false,-1);
    tracep->declBit(c+38,"id_valid_o", false,-1);
    tracep->declBus(c+155,"rd", false,-1, 4,0);
    tracep->declBus(c+204,"rs1", false,-1, 4,0);
    tracep->declBus(c+306,"rs2", false,-1, 4,0);
    tracep->declBit(c+62,"branch", false,-1);
    tracep->declBit(c+361,"op1_relate", false,-1);
    tracep->declBit(c+362,"op2_relate", false,-1);
    tracep->declBit(c+63,"csr_op1_stall", false,-1);
    tracep->declBit(c+64,"csr_op2_stall", false,-1);
    tracep->declBit(c+17,"id_stall_ena", false,-1);
    tracep->declBit(c+65,"ex_op1_forward", false,-1);
    tracep->declBit(c+66,"ls_op1_forward", false,-1);
    tracep->declBit(c+67,"mem_op1_forward", false,-1);
    tracep->declBit(c+68,"wb_op1_forward", false,-1);
    tracep->declBit(c+69,"ex_op2_forward", false,-1);
    tracep->declBit(c+70,"ls_op2_forward", false,-1);
    tracep->declBit(c+71,"mem_op2_forward", false,-1);
    tracep->declBit(c+72,"wb_op2_forward", false,-1);
    tracep->declBit(c+73,"op1_forward_ena", false,-1);
    tracep->declBit(c+74,"op2_forward_ena", false,-1);
    tracep->declBus(c+75,"op1_forward_data", false,-1, 31,0);
    tracep->declBus(c+76,"op2_forward_data", false,-1, 31,0);
    tracep->declBit(c+77,"jalr_bpu_jump_error", false,-1);
    tracep->declBit(c+78,"diff_sign", false,-1);
    tracep->declBit(c+79,"op_ltu_op2", false,-1);
    tracep->declBit(c+80,"op1_lt_op2", false,-1);
    tracep->declBit(c+81,"now_bxx_jump_yes", false,-1);
    tracep->declBus(c+82,"predict_error_ctl", false,-1, 1,0);
    tracep->pushNamePrefix("decoder ");
    tracep->declBit(c+355,"rst", false,-1);
    tracep->declBus(c+198,"inst", false,-1, 31,0);
    tracep->declBit(c+21,"rs1_ena", false,-1);
    tracep->declBit(c+23,"rs2_ena", false,-1);
    tracep->declBit(c+32,"csr_inst", false,-1);
    tracep->declBus(c+28,"wb_ctl", false,-1, 1,0);
    tracep->declBus(c+27,"mem_ctl", false,-1, 3,0);
    tracep->declBit(c+62,"branch", false,-1);
    tracep->declBus(c+8,"ext_imm", false,-1, 31,0);
    tracep->declBit(c+31,"load", false,-1);
    tracep->declBus(c+29,"op1_sel", false,-1, 1,0);
    tracep->declBus(c+30,"op2_sel", false,-1, 2,0);
    tracep->declBus(c+26,"alu_ctl", false,-1, 7,0);
    tracep->declBus(c+307,"opcode", false,-1, 6,0);
    tracep->declBus(c+308,"funct3", false,-1, 2,0);
    tracep->declBus(c+309,"funct7", false,-1, 6,0);
    tracep->declBus(c+310,"i_imm", false,-1, 11,0);
    tracep->declBus(c+311,"j_imm", false,-1, 20,1);
    tracep->declBus(c+312,"u_imm", false,-1, 19,0);
    tracep->declBus(c+313,"s_imm", false,-1, 11,0);
    tracep->declBus(c+314,"b_imm", false,-1, 12,1);
    tracep->declBus(c+83,"inst_type", false,-1, 7,0);
    tracep->declBit(c+84,"inst_lui", false,-1);
    tracep->declBit(c+85,"inst_auipc", false,-1);
    tracep->declBit(c+86,"inst_jal", false,-1);
    tracep->declBit(c+87,"inst_jalr", false,-1);
    tracep->declBit(c+88,"inst_sb", false,-1);
    tracep->declBit(c+89,"inst_sh", false,-1);
    tracep->declBit(c+90,"inst_sw", false,-1);
    tracep->declBit(c+91,"inst_sd", false,-1);
    tracep->declBit(c+92,"inst_lb", false,-1);
    tracep->declBit(c+93,"inst_lh", false,-1);
    tracep->declBit(c+94,"inst_lw", false,-1);
    tracep->declBit(c+95,"inst_ld", false,-1);
    tracep->declBit(c+96,"inst_lbu", false,-1);
    tracep->declBit(c+97,"inst_lhu", false,-1);
    tracep->declBit(c+98,"inst_lwu", false,-1);
    tracep->declBit(c+99,"inst_beq", false,-1);
    tracep->declBit(c+100,"inst_bne", false,-1);
    tracep->declBit(c+101,"inst_blt", false,-1);
    tracep->declBit(c+102,"inst_bge", false,-1);
    tracep->declBit(c+103,"inst_bltu", false,-1);
    tracep->declBit(c+104,"inst_bgeu", false,-1);
    tracep->declBit(c+105,"inst_add", false,-1);
    tracep->declBit(c+106,"inst_sub", false,-1);
    tracep->declBit(c+107,"inst_sll", false,-1);
    tracep->declBit(c+108,"inst_slt", false,-1);
    tracep->declBit(c+109,"inst_sltu", false,-1);
    tracep->declBit(c+110,"inst_xor", false,-1);
    tracep->declBit(c+111,"inst_srl", false,-1);
    tracep->declBit(c+112,"inst_sra", false,-1);
    tracep->declBit(c+113,"inst_or", false,-1);
    tracep->declBit(c+114,"inst_and", false,-1);
    tracep->declBit(c+115,"inst_div", false,-1);
    tracep->declBit(c+116,"inst_divu", false,-1);
    tracep->declBit(c+117,"inst_mul", false,-1);
    tracep->declBit(c+118,"inst_mulh", false,-1);
    tracep->declBit(c+119,"inst_mulhsu", false,-1);
    tracep->declBit(c+120,"inst_mulhu", false,-1);
    tracep->declBit(c+121,"inst_rem", false,-1);
    tracep->declBit(c+122,"inst_remu", false,-1);
    tracep->declBit(c+123,"inst_addi", false,-1);
    tracep->declBit(c+124,"inst_slti", false,-1);
    tracep->declBit(c+125,"inst_sltiu", false,-1);
    tracep->declBit(c+126,"inst_xori", false,-1);
    tracep->declBit(c+127,"inst_ori", false,-1);
    tracep->declBit(c+128,"inst_andi", false,-1);
    tracep->declBit(c+129,"inst_slli", false,-1);
    tracep->declBit(c+130,"inst_srli", false,-1);
    tracep->declBit(c+131,"inst_srai", false,-1);
    tracep->declBit(c+132,"inst_ecall", false,-1);
    tracep->declBit(c+133,"inst_mret", false,-1);
    tracep->declBit(c+134,"inst_csrrw", false,-1);
    tracep->declBit(c+135,"inst_csrrs", false,-1);
    tracep->declBit(c+136,"inst_csrrc", false,-1);
    tracep->declBit(c+137,"inst_csrrwi", false,-1);
    tracep->declBit(c+138,"inst_csrrsi", false,-1);
    tracep->declBit(c+139,"inst_csrrci", false,-1);
    tracep->declBit(c+140,"inst_ebreak", false,-1);
    tracep->declBit(c+141,"imm_ena", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_25060170_if_id_reg ");
    tracep->declBit(c+354,"clk", false,-1);
    tracep->declBit(c+355,"rst", false,-1);
    tracep->declBus(c+144,"pc_i", false,-1, 31,0);
    tracep->declBus(c+196,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+145,"inst_i", false,-1, 31,0);
    tracep->declBit(c+13,"bxx_inst_i", false,-1);
    tracep->declBit(c+10,"bp_jump_i", false,-1);
    tracep->declBit(c+18,"if_valid_i", false,-1);
    tracep->declBit(c+19,"id_flush_i", false,-1);
    tracep->declBit(c+369,"ls_flush_i", false,-1);
    tracep->declBit(c+17,"id_stall_i", false,-1);
    tracep->declBit(c+16,"id_ready_i", false,-1);
    tracep->declBus(c+154,"pc_o", false,-1, 31,0);
    tracep->declBus(c+197,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+198,"inst_o", false,-1, 31,0);
    tracep->declBit(c+199,"inst_bxx_o", false,-1);
    tracep->declBit(c+200,"bp_jump_o", false,-1);
    tracep->declBit(c+201,"if_valid_o", false,-1);
    tracep->declBit(c+142,"flush", false,-1);
    tracep->declBit(c+18,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_ifu ");
    tracep->declBit(c+355,"rst", false,-1);
    tracep->declBit(c+354,"clk", false,-1);
    tracep->declBit(c+369,"ls_pc_jump_i", false,-1);
    tracep->declBus(c+195,"ls_pc_i", false,-1, 31,0);
    tracep->declBit(c+14,"bp_pc_jump_i", false,-1);
    tracep->declBit(c+10,"bp_predict_i", false,-1);
    tracep->declBus(c+356,"bp_pc_i", false,-1, 31,0);
    tracep->declBit(c+36,"id_bxx_error_i", false,-1);
    tracep->declBus(c+15,"id_bxx_error_pc_i", false,-1, 31,0);
    tracep->declBit(c+13,"inst_bxx_i", false,-1);
    tracep->declBit(c+16,"id_ready_i", false,-1);
    tracep->declBit(c+17,"id_stall_i", false,-1);
    tracep->declBit(c+18,"if_valid_o", false,-1);
    tracep->declBus(c+145,"inst_i", false,-1, 31,0);
    tracep->declBus(c+144,"pc_o", false,-1, 31,0);
    tracep->declBus(c+145,"inst_o", false,-1, 31,0);
    tracep->declBus(c+196,"next_pc_o", false,-1, 31,0);
    tracep->declBit(c+13,"inst_bxx_o", false,-1);
    tracep->declBit(c+17,"stall", false,-1);
    tracep->declBus(c+144,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_ls_mem_reg ");
    tracep->declBit(c+354,"clk", false,-1);
    tracep->declBit(c+355,"rst", false,-1);
    tracep->declBus(c+221,"inst_i", false,-1, 31,0);
    tracep->declBus(c+229,"pc_i", false,-1, 31,0);
    tracep->declBus(c+230,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+223,"ls_ctl_i", false,-1, 3,0);
    tracep->declBus(c+224,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+195,"alu_res_i", false,-1, 31,0);
    tracep->declBit(c+232,"load_flag_i", false,-1);
    tracep->declBit(c+2,"re_i", false,-1);
    tracep->declBit(c+226,"rd_ena_i", false,-1);
    tracep->declBus(c+227,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+225,"csr_ctl_i", false,-1, 6,0);
    tracep->declBus(c+228,"csr_addr_i", false,-1, 11,0);
    tracep->declBit(c+42,"ls_valid_i", false,-1);
    tracep->declBit(c+370,"mem_ready_i", false,-1);
    tracep->declBit(c+242,"ls_valid_o", false,-1);
    tracep->declBus(c+233,"inst_o", false,-1, 31,0);
    tracep->declBus(c+234,"pc_o", false,-1, 31,0);
    tracep->declBus(c+235,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+236,"ls_ctl_o", false,-1, 3,0);
    tracep->declBus(c+237,"wb_ctl_o", false,-1, 1,0);
    tracep->declBus(c+244,"alu_res_o", false,-1, 31,0);
    tracep->declBit(c+245,"load_flag_o", false,-1);
    tracep->declBit(c+243,"re_o", false,-1);
    tracep->declBit(c+238,"rd_ena_o", false,-1);
    tracep->declBus(c+239,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+240,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+241,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+227,"ls_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+195,"ls_rd_data_forward", false,-1, 31,0);
    tracep->declBit(c+369,"flush", false,-1);
    tracep->declBit(c+42,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_lsu ");
    tracep->declBit(c+354,"clk", false,-1);
    tracep->declBit(c+355,"rst", false,-1);
    tracep->declBus(c+230,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+221,"inst_i", false,-1, 31,0);
    tracep->declBus(c+195,"alu_res_i", false,-1, 31,0);
    tracep->declBus(c+222,"store_data_i", false,-1, 31,0);
    tracep->declBus(c+223,"ls_ctl_i", false,-1, 3,0);
    tracep->declBit(c+370,"mem_ready_i", false,-1);
    tracep->declBit(c+231,"ex_valid_i", false,-1);
    tracep->declBit(c+1,"ls_ready_o", false,-1);
    tracep->declBit(c+42,"ls_valid_o", false,-1);
    tracep->declBit(c+369,"ls_flush_o", false,-1);
    tracep->declBit(c+369,"ls_jump_o", false,-1);
    tracep->declBus(c+195,"ls_jump_pc_o", false,-1, 31,0);
    tracep->declBit(c+2,"re", false,-1);
    tracep->declBit(c+3,"we", false,-1);
    tracep->declBus(c+4,"data_o", false,-1, 31,0);
    tracep->declBus(c+6,"raddr", false,-1, 31,0);
    tracep->declBus(c+6,"waddr", false,-1, 31,0);
    tracep->declBus(c+5,"wlen", false,-1, 7,0);
    tracep->declBus(c+365,"rlen", false,-1, 7,0);
    tracep->declBus(c+221,"inst_o", false,-1, 31,0);
    tracep->declBus(c+230,"next_pc_o", false,-1, 31,0);
    tracep->declBit(c+315,"data_ok", false,-1);
    tracep->declBus(c+316,"byte_sel", false,-1, 1,0);
    tracep->declBus(c+316,"half_sel", false,-1, 1,0);
    tracep->declBus(c+143,"sb_mask", false,-1, 3,0);
    tracep->declBus(c+363,"sh_mask", false,-1, 3,0);
    tracep->declBus(c+372,"sw_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_mem ");
    tracep->declBit(c+354,"clk", false,-1);
    tracep->declBit(c+355,"rst", false,-1);
    tracep->declBus(c+233,"inst_i", false,-1, 31,0);
    tracep->declBus(c+234,"pc_i", false,-1, 31,0);
    tracep->declBus(c+235,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+237,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+244,"alu_res_i", false,-1, 31,0);
    tracep->declBit(c+243,"re", false,-1);
    tracep->declBit(c+238,"rd_ena_i", false,-1);
    tracep->declBus(c+239,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+240,"csr_ctl_i", false,-1, 6,0);
    tracep->declBus(c+241,"csr_addr_i", false,-1, 11,0);
    tracep->declBus(c+236,"ls_ctl_i", false,-1, 3,0);
    tracep->declBus(c+150,"mem_data_i", false,-1, 31,0);
    tracep->declBit(c+242,"ls_valid_i", false,-1);
    tracep->declBit(c+370,"wb_ready_i", false,-1);
    tracep->declBit(c+246,"mem_valid_o", false,-1);
    tracep->declBit(c+370,"mem_ready_o", false,-1);
    tracep->declBus(c+233,"inst_o", false,-1, 31,0);
    tracep->declBus(c+234,"pc_o", false,-1, 31,0);
    tracep->declBus(c+235,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+237,"wb_ctl_o", false,-1, 1,0);
    tracep->declBus(c+244,"alu_res_o", false,-1, 31,0);
    tracep->declBit(c+238,"rd_ena_o", false,-1);
    tracep->declBus(c+239,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+240,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+241,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+43,"mem_data_o", false,-1, 31,0);
    tracep->declBus(c+364,"load_data", false,-1, 31,0);
    tracep->declBit(c+317,"data_ok", false,-1);
    tracep->declBus(c+318,"data_byte", false,-1, 7,0);
    tracep->declBus(c+319,"data_half", false,-1, 15,0);
    tracep->declBus(c+150,"data_word", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_mem_wb_reg ");
    tracep->declBit(c+354,"clk", false,-1);
    tracep->declBit(c+355,"rst", false,-1);
    tracep->declBus(c+233,"inst_i", false,-1, 31,0);
    tracep->declBus(c+234,"pc_i", false,-1, 31,0);
    tracep->declBus(c+235,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+237,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+43,"mem_data_i", false,-1, 31,0);
    tracep->declBit(c+245,"load_flag_i", false,-1);
    tracep->declBus(c+244,"alu_res_i", false,-1, 31,0);
    tracep->declBit(c+238,"rd_ena_i", false,-1);
    tracep->declBus(c+239,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+240,"csr_ctl_i", false,-1, 6,0);
    tracep->declBus(c+241,"csr_addr_i", false,-1, 11,0);
    tracep->declBit(c+246,"mem_valid_i", false,-1);
    tracep->declBit(c+370,"wb_ready_i", false,-1);
    tracep->declBit(c+149,"mem_valid_o", false,-1);
    tracep->declBus(c+146,"inst_o", false,-1, 31,0);
    tracep->declBus(c+147,"pc_o", false,-1, 31,0);
    tracep->declBus(c+148,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+248,"alu_res_o", false,-1, 31,0);
    tracep->declBus(c+247,"mem_data_o", false,-1, 31,0);
    tracep->declBit(c+254,"load_flag_o", false,-1);
    tracep->declBus(c+249,"wb_ctl_o", false,-1, 1,0);
    tracep->declBit(c+250,"rd_ena_o", false,-1);
    tracep->declBus(c+251,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+252,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+253,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+239,"mem_rd_addr_forward_o", false,-1, 4,0);
    tracep->declBus(c+44,"mem_rd_data_forward_o", false,-1, 31,0);
    tracep->declBit(c+369,"flush", false,-1);
    tracep->declBit(c+246,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_regfile ");
    tracep->declBit(c+354,"clk", false,-1);
    tracep->declBit(c+355,"rst", false,-1);
    tracep->declBus(c+251,"waddr", false,-1, 4,0);
    tracep->declBus(c+255,"wdata", false,-1, 31,0);
    tracep->declBit(c+250,"wen", false,-1);
    tracep->declBit(c+21,"ren1", false,-1);
    tracep->declBit(c+23,"ren2", false,-1);
    tracep->declBus(c+20,"raddr1", false,-1, 4,0);
    tracep->declBus(c+22,"raddr2", false,-1, 4,0);
    tracep->declBus(c+358,"rdata1", false,-1, 31,0);
    tracep->declBus(c+359,"rdata2", false,-1, 31,0);
    tracep->declBus(c+11,"bp_rs1_addr_i", false,-1, 4,0);
    tracep->declBit(c+12,"bp_rs1_ena_i", false,-1);
    tracep->declBus(c+357,"bp_rs1_data_o", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+320+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_wbu ");
    tracep->declBus(c+247,"ls_rd_data_i", false,-1, 31,0);
    tracep->declBus(c+249,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+248,"exu_res_i", false,-1, 31,0);
    tracep->declBus(c+147,"pc_i", false,-1, 31,0);
    tracep->declBus(c+148,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+146,"inst_i", false,-1, 31,0);
    tracep->declBus(c+251,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+250,"rd_ena_i", false,-1);
    tracep->declBus(c+252,"csr_ctl_i", false,-1, 6,0);
    tracep->declBus(c+253,"csr_addr_i", false,-1, 11,0);
    tracep->declBus(c+259,"read_csr_data_i", false,-1, 31,0);
    tracep->declBit(c+149,"ls_valid_i", false,-1);
    tracep->declBus(c+255,"wb_data_o", false,-1, 31,0);
    tracep->declBit(c+370,"wb_ready_o", false,-1);
    tracep->declBit(c+250,"wb_rd_ena_o", false,-1);
    tracep->declBus(c+251,"wb_rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+251,"wb_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+256,"wb_rd_data_forward", false,-1, 31,0);
    tracep->declBus(c+146,"wbu_dpic_inst_o", false,-1, 31,0);
    tracep->declBus(c+147,"wbu_dpic_pc_o", false,-1, 31,0);
    tracep->declBus(c+148,"wbu_dpic_next_pc_o", false,-1, 31,0);
    tracep->declBit(c+149,"wbu_dpic_valid_o", false,-1);
    tracep->declBus(c+252,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+253,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+257,"mcause_value_o", false,-1, 31,0);
    tracep->declBus(c+258,"write_csr_data_o", false,-1, 31,0);
    tracep->declBus(c+352,"set_data", false,-1, 31,0);
    tracep->declBus(c+353,"clear_data", false,-1, 31,0);
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
    bufp->fullBit(oldp+10,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bxx_taken));
    bufp->fullCData(oldp+11,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__bp_rs1_addr),5);
    bufp->fullBit(oldp+12,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr));
    bufp->fullBit(oldp+13,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_bxx));
    bufp->fullBit(oldp+14,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal) 
                            | (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr))));
    bufp->fullIData(oldp+15,((((- (IData)((3U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__predict_error_ctl)))) 
                               & ((IData)(4U) + vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_pc)) 
                              | (((- (IData)((2U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__predict_error_ctl)))) 
                                  & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h71cc746e__0) 
                                 | (0xfffffffeU & (
                                                   (- (IData)((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__jalr_bpu_jump_error))) 
                                                   & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_hd158f2b5__0))))),32);
    bufp->fullBit(oldp+16,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ready));
    bufp->fullBit(oldp+17,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_stall));
    bufp->fullBit(oldp+18,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_valid));
    bufp->fullBit(oldp+19,((((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_bp_jump) 
                             ^ (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__now_bxx_jump_yes)) 
                            | (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__jalr_bpu_jump_error))));
    bufp->fullCData(oldp+20,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_addr),5);
    bufp->fullBit(oldp+21,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_ena));
    bufp->fullCData(oldp+22,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_addr),5);
    bufp->fullBit(oldp+23,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_ena));
    bufp->fullBit(oldp+24,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rd_ena));
    bufp->fullCData(oldp+25,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rd_ena)
                               ? (0x1fU & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                           >> 7U)) : 0U)),5);
    bufp->fullCData(oldp+26,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc),8);
    bufp->fullCData(oldp+27,((0xfU & ((1U & (- (IData)(
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
    bufp->fullCData(oldp+28,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_wbctl),2);
    bufp->fullCData(oldp+29,(((2U & ((- (IData)((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                                     | ((- (IData)((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr))) 
                                        | (- (IData)((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc)))))) 
                              | (1U & (- (IData)((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_ena)))))),2);
    bufp->fullCData(oldp+30,(((2U & ((- (IData)((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                                     | (- (IData)((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr))))) 
                              | ((4U & (- (IData)(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77eb01fa__0) 
                                                   | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                                                      | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0) 
                                                         | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70f4116c__0) 
                                                            | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
                                                               | (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd9b03bc2__0))))))))) 
                                 | (1U & (- (IData)((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_ena))))))),3);
    bufp->fullBit(oldp+31,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_load_flag));
    bufp->fullBit(oldp+32,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw) 
                            | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs) 
                               | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc) 
                                  | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi) 
                                     | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi) 
                                        | (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci))))))));
    bufp->fullIData(oldp+33,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_op1),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_op2),32);
    bufp->fullIData(oldp+35,(((0x21U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                               ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h71cc746e__0
                               : ((0x42U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                                   ? (0xfffffffeU & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_hd158f2b5__0)
                                   : (((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst_bxx) 
                                       & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__now_bxx_jump_yes))
                                       ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h71cc746e__0
                                       : (((~ (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__now_bxx_jump_yes)) 
                                           & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst_bxx))
                                           ? ((IData)(4U) 
                                              + vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_pc)
                                           : vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc))))),32);
    bufp->fullBit(oldp+36,((IData)((((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__predict_error_ctl) 
                                     >> 1U) | (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__jalr_bpu_jump_error)))));
    bufp->fullBit(oldp+37,((1U & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__predict_error_ctl) 
                                  >> 1U))));
    bufp->fullBit(oldp+38,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_valid));
    bufp->fullIData(oldp+39,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__exu_res),32);
    bufp->fullSData(oldp+40,(((0U != (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_he71b3f47__0))
                               ? (0xfffU & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm)
                               : 0U)),12);
    bufp->fullCData(oldp+41,((((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena) 
                               << 6U) | (((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena) 
                                          << 5U) | 
                                         (((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena) 
                                           << 4U) | (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_he71b3f47__0))))),7);
    bufp->fullBit(oldp+42,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_valid));
    bufp->fullIData(oldp+43,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_data),32);
    bufp->fullIData(oldp+44,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_rd_data_forward),32);
    bufp->fullIData(oldp+45,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal)
                               ? (((- (IData)((vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst 
                                               >> 0x1fU))) 
                                   << 0x15U) | ((0x100000U 
                                                 & (vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst 
                                                    >> 0xbU)) 
                                                | ((0xff000U 
                                                    & vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst) 
                                                   | ((0x800U 
                                                       & (vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst 
                                                            >> 0x14U))))))
                               : ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr)
                                   ? (((- (IData)((vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst 
                                                   >> 0x14U))
                                   : ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_bxx)
                                       ? (((- (IData)(
                                                      (vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst 
                                                       >> 0x1fU))) 
                                           << 0xdU) 
                                          | ((0x1000U 
                                              & (vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst 
                                                 >> 0x13U)) 
                                             | ((0x800U 
                                                 & (vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst 
                                                         >> 7U))))))
                                       : ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgTmp_hff229178__0)
                                           ? 0U : 4U))))),32);
    bufp->fullBit(oldp+46,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal));
    bufp->fullIData(oldp+47,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc),32);
    bufp->fullIData(oldp+48,((0xfffffffeU & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc)),32);
    bufp->fullBit(oldp+49,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                            == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr))));
    bufp->fullBit(oldp+50,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                            == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr))));
    bufp->fullBit(oldp+51,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                            == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr))));
    bufp->fullBit(oldp+52,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_bxx) 
                            & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_not_taken_state) 
                               | (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_not_taken_state)))));
    bufp->fullIData(oldp+53,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res),32);
    bufp->fullBit(oldp+54,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena));
    bufp->fullBit(oldp+55,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena));
    bufp->fullBit(oldp+56,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena));
    bufp->fullBit(oldp+57,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena));
    bufp->fullBit(oldp+58,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena));
    bufp->fullBit(oldp+59,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena));
    bufp->fullBit(oldp+60,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena));
    bufp->fullBit(oldp+61,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_id_ex_reg__DOT__stall));
    bufp->fullBit(oldp+62,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__branch));
    bufp->fullBit(oldp+63,((((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward) 
                             & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_hf3b640d6__0)) 
                            | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward) 
                               & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h5ab066c6__0)))));
    bufp->fullBit(oldp+64,((((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward) 
                             & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_hf3b640d6__0)) 
                            | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward) 
                               & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h5ab066c6__0)))));
    bufp->fullBit(oldp+65,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward));
    bufp->fullBit(oldp+66,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward));
    bufp->fullBit(oldp+67,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op1_forward));
    bufp->fullBit(oldp+68,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward));
    bufp->fullBit(oldp+69,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward));
    bufp->fullBit(oldp+70,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward));
    bufp->fullBit(oldp+71,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op2_forward));
    bufp->fullBit(oldp+72,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward));
    bufp->fullBit(oldp+73,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_forward_ena));
    bufp->fullBit(oldp+74,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op2_forward_ena));
    bufp->fullIData(oldp+75,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward)
                               ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__exu_res
                               : ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward)
                                   ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
                                   : ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op1_forward)
                                       ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_rd_data_forward
                                       : ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward)
                                           ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward
                                           : 0U))))),32);
    bufp->fullIData(oldp+76,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward)
                               ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__exu_res
                               : ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward)
                                   ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
                                   : ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op2_forward)
                                       ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_rd_data_forward
                                       : ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward)
                                           ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward
                                           : 0U))))),32);
    bufp->fullBit(oldp+77,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__jalr_bpu_jump_error));
    bufp->fullBit(oldp+78,(((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_op1 
                             ^ vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_op2) 
                            >> 0x1fU)));
    bufp->fullBit(oldp+79,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2));
    bufp->fullBit(oldp+80,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2));
    bufp->fullBit(oldp+81,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__now_bxx_jump_yes));
    bufp->fullCData(oldp+82,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__predict_error_ctl),2);
    bufp->fullCData(oldp+83,((((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
                               << 7U) | (((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7773c72a__0) 
                                          << 6U) | 
                                         (((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70f4116c__0) 
                                           << 5U) | 
                                          (((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0) 
                                            << 4U) 
                                           | (((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77488b95__0) 
                                               << 3U) 
                                              | (((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__branch) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77eb01fa__0))))))))),8);
    bufp->fullBit(oldp+84,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui));
    bufp->fullBit(oldp+85,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc));
    bufp->fullBit(oldp+86,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal));
    bufp->fullBit(oldp+87,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr));
    bufp->fullBit(oldp+88,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h489c6f46__0))));
    bufp->fullBit(oldp+89,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h489c6f46__0) 
                            & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+90,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he80da865__0))));
    bufp->fullBit(oldp+91,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he80da865__0) 
                            & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+92,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc65f4c50__0))));
    bufp->fullBit(oldp+93,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc65f4c50__0) 
                            & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+94,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h1167153d__0))));
    bufp->fullBit(oldp+95,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h1167153d__0) 
                            & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+96,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h29152e89__0))));
    bufp->fullBit(oldp+97,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h29152e89__0) 
                            & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+98,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_heac6e652__0) 
                            & (IData)((0x2000U == (0x3000U 
                                                   & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst))))));
    bufp->fullBit(oldp+99,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7855af38__0))));
    bufp->fullBit(oldp+100,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7855af38__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+101,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2bc0716a__0))));
    bufp->fullBit(oldp+102,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2bc0716a__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+103,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h6fd23990__0))));
    bufp->fullBit(oldp+104,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h6fd23990__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+105,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                             & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h03cab0f1__0))));
    bufp->fullBit(oldp+106,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                             & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7b49f5a3__0))));
    bufp->fullBit(oldp+107,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h36e9ef3c__0))));
    bufp->fullBit(oldp+108,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he2955f6b__0))));
    bufp->fullBit(oldp+109,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h4c825e07__0))));
    bufp->fullBit(oldp+110,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h3b427111__0))));
    bufp->fullBit(oldp+111,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                             & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h03cab0f1__0))));
    bufp->fullBit(oldp+112,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                             & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7b49f5a3__0))));
    bufp->fullBit(oldp+113,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd7439362__0))));
    bufp->fullBit(oldp+114,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7a82fdcc__0))));
    bufp->fullBit(oldp+115,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h3b427111__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+116,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+117,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+118,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h36e9ef3c__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+119,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he2955f6b__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+120,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h4c825e07__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+121,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd7439362__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+122,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7a82fdcc__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+123,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h41ceee20__0))));
    bufp->fullBit(oldp+124,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc1b77381__0))));
    bufp->fullBit(oldp+125,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc1b77381__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+126,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_ha08c85bd__0))));
    bufp->fullBit(oldp+127,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5a06bcf6__0))));
    bufp->fullBit(oldp+128,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5a06bcf6__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+129,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h41ceee20__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+130,(((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x1eU)) & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2e86cea5__0))));
    bufp->fullBit(oldp+131,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2e86cea5__0) 
                             & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x1eU))));
    bufp->fullBit(oldp+132,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall));
    bufp->fullBit(oldp+133,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h84595378__0) 
                             & (IData)((0x30000000U 
                                        == (0x30000000U 
                                            & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst))))));
    bufp->fullBit(oldp+134,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw));
    bufp->fullBit(oldp+135,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs));
    bufp->fullBit(oldp+136,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc));
    bufp->fullBit(oldp+137,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi));
    bufp->fullBit(oldp+138,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi));
    bufp->fullBit(oldp+139,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci));
    bufp->fullBit(oldp+140,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h84595378__0) 
                             & (1U == (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                       >> 0x14U)))));
    bufp->fullBit(oldp+141,(((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77eb01fa__0) 
                             | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                                | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0) 
                                   | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70f4116c__0) 
                                      | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
                                         | (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd9b03bc2__0))))))));
    bufp->fullBit(oldp+142,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if_id_reg__DOT__flush));
    bufp->fullCData(oldp+143,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask),4);
    bufp->fullIData(oldp+144,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ifu__DOT__pc),32);
    bufp->fullIData(oldp+145,(vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst),32);
    bufp->fullIData(oldp+146,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_inst),32);
    bufp->fullIData(oldp+147,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_pc),32);
    bufp->fullIData(oldp+148,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc),32);
    bufp->fullBit(oldp+149,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_valid_o));
    bufp->fullIData(oldp+150,(vlSelf->ysyx_25060170_topcore__DOT__DPIC_DPIC_MEM_data),32);
    bufp->fullIData(oldp+151,(vlSelf->ysyx_25060170_topcore__DOT__diff_test_skip_o),32);
    bufp->fullIData(oldp+152,(vlSelf->ysyx_25060170_topcore__DOT__dpic_diff_skip_flag_o),32);
    bufp->fullBit(oldp+153,((0x40000033U == vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    bufp->fullIData(oldp+154,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_pc),32);
    bufp->fullCData(oldp+155,((0x1fU & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                        >> 7U))),5);
    bufp->fullIData(oldp+156,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0U]),32);
    bufp->fullIData(oldp+157,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [1U]),32);
    bufp->fullIData(oldp+158,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [2U]),32);
    bufp->fullIData(oldp+159,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [3U]),32);
    bufp->fullIData(oldp+160,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [4U]),32);
    bufp->fullIData(oldp+161,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [5U]),32);
    bufp->fullIData(oldp+162,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [6U]),32);
    bufp->fullIData(oldp+163,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [7U]),32);
    bufp->fullIData(oldp+164,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [8U]),32);
    bufp->fullIData(oldp+165,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [9U]),32);
    bufp->fullIData(oldp+166,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xaU]),32);
    bufp->fullIData(oldp+167,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xbU]),32);
    bufp->fullIData(oldp+168,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xcU]),32);
    bufp->fullIData(oldp+169,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xdU]),32);
    bufp->fullIData(oldp+170,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xeU]),32);
    bufp->fullIData(oldp+171,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xfU]),32);
    bufp->fullIData(oldp+172,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x10U]),32);
    bufp->fullIData(oldp+173,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x11U]),32);
    bufp->fullIData(oldp+174,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x12U]),32);
    bufp->fullIData(oldp+175,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x13U]),32);
    bufp->fullIData(oldp+176,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x14U]),32);
    bufp->fullIData(oldp+177,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x15U]),32);
    bufp->fullIData(oldp+178,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x16U]),32);
    bufp->fullIData(oldp+179,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x17U]),32);
    bufp->fullIData(oldp+180,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x18U]),32);
    bufp->fullIData(oldp+181,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x19U]),32);
    bufp->fullIData(oldp+182,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1aU]),32);
    bufp->fullIData(oldp+183,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1bU]),32);
    bufp->fullIData(oldp+184,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1cU]),32);
    bufp->fullIData(oldp+185,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1dU]),32);
    bufp->fullIData(oldp+186,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1eU]),32);
    bufp->fullIData(oldp+187,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1fU]),32);
    bufp->fullIData(oldp+188,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus),32);
    bufp->fullIData(oldp+189,((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
                               << 2U)),32);
    bufp->fullIData(oldp+190,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mepc),32);
    bufp->fullIData(oldp+191,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mcause),32);
    bufp->fullIData(oldp+192,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mscratch),32);
    bufp->fullBit(oldp+193,((0x6fU == (0x7fU & vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst))));
    bufp->fullBit(oldp+194,((0x67U == (0x7fU & vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst))));
    bufp->fullIData(oldp+195,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res),32);
    bufp->fullIData(oldp+196,(((IData)(4U) + vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ifu__DOT__pc)),32);
    bufp->fullIData(oldp+197,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc),32);
    bufp->fullIData(oldp+198,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst),32);
    bufp->fullBit(oldp+199,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst_bxx));
    bufp->fullBit(oldp+200,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_bp_jump));
    bufp->fullBit(oldp+201,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_valid));
    bufp->fullBit(oldp+202,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena));
    bufp->fullBit(oldp+203,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_csr_ena));
    bufp->fullCData(oldp+204,((0x1fU & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+205,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc),8);
    bufp->fullIData(oldp+206,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc),32);
    bufp->fullIData(oldp+207,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst),32);
    bufp->fullIData(oldp+208,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc),32);
    bufp->fullIData(oldp+209,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1),32);
    bufp->fullIData(oldp+210,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2),32);
    bufp->fullCData(oldp+211,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel),2);
    bufp->fullCData(oldp+212,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel),3);
    bufp->fullBit(oldp+213,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena));
    bufp->fullCData(oldp+214,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr),5);
    bufp->fullCData(oldp+215,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr),5);
    bufp->fullIData(oldp+216,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm),32);
    bufp->fullCData(oldp+217,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl),4);
    bufp->fullCData(oldp+218,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl),2);
    bufp->fullBit(oldp+219,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag));
    bufp->fullBit(oldp+220,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_valid));
    bufp->fullIData(oldp+221,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst),32);
    bufp->fullIData(oldp+222,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data),32);
    bufp->fullCData(oldp+223,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl),4);
    bufp->fullCData(oldp+224,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl),2);
    bufp->fullCData(oldp+225,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl),7);
    bufp->fullBit(oldp+226,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena));
    bufp->fullCData(oldp+227,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr),5);
    bufp->fullSData(oldp+228,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr),12);
    bufp->fullIData(oldp+229,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc),32);
    bufp->fullIData(oldp+230,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc),32);
    bufp->fullBit(oldp+231,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_valid));
    bufp->fullBit(oldp+232,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag));
    bufp->fullIData(oldp+233,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst),32);
    bufp->fullIData(oldp+234,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc),32);
    bufp->fullIData(oldp+235,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc),32);
    bufp->fullCData(oldp+236,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl),4);
    bufp->fullCData(oldp+237,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl),2);
    bufp->fullBit(oldp+238,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena));
    bufp->fullCData(oldp+239,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr),5);
    bufp->fullCData(oldp+240,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl),7);
    bufp->fullSData(oldp+241,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr),12);
    bufp->fullBit(oldp+242,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_valid));
    bufp->fullBit(oldp+243,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re));
    bufp->fullIData(oldp+244,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res),32);
    bufp->fullBit(oldp+245,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag));
    bufp->fullBit(oldp+246,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_valid));
    bufp->fullIData(oldp+247,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res),32);
    bufp->fullIData(oldp+248,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data),32);
    bufp->fullCData(oldp+249,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl),2);
    bufp->fullBit(oldp+250,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena));
    bufp->fullCData(oldp+251,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr),5);
    bufp->fullCData(oldp+252,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl),7);
    bufp->fullSData(oldp+253,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr),12);
    bufp->fullBit(oldp+254,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_reg_load_flag));
    bufp->fullIData(oldp+255,((((- (IData)((1U & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl)))) 
                                & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res) 
                               | (((- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl) 
                                                >> 1U)))) 
                                   & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data) 
                                  | ((- (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))))) 
                                     & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__csr_wbu_read_csr_data)))),32);
    bufp->fullIData(oldp+256,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward),32);
    bufp->fullIData(oldp+257,(((2U & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                ? 0xbU : 0U)),32);
    bufp->fullIData(oldp+258,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_csr_write_csr_data),32);
    bufp->fullIData(oldp+259,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__csr_wbu_read_csr_data),32);
    bufp->fullBit(oldp+260,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_not_taken_state));
    bufp->fullBit(oldp+261,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_not_taken_state));
    bufp->fullBit(oldp+262,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state));
    bufp->fullBit(oldp+263,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state));
    bufp->fullIData(oldp+264,(((0x100000U & (vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst 
                                             >> 0xbU)) 
                               | ((0xff000U & vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst) 
                                  | ((0x800U & (vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst 
                                                >> 9U)) 
                                     | (0x7feU & (vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst 
                                                  >> 0x14U)))))),21);
    bufp->fullSData(oldp+265,(((0x1000U & (vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst 
                                           >> 0x13U)) 
                               | ((0x800U & (vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst 
                                             << 4U)) 
                                  | ((0x7e0U & (vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst 
                                                >> 0x14U)) 
                                     | (0x1eU & (vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst 
                                                 >> 7U)))))),13);
    bufp->fullSData(oldp+266,((vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst 
                               >> 0x14U)),12);
    bufp->fullCData(oldp+267,((0x7fU & vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst)),7);
    bufp->fullIData(oldp+268,((((- (IData)((vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst 
                                            >> 0x1fU))) 
                                << 0x15U) | ((0x100000U 
                                              & (vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst 
                                                 >> 0xbU)) 
                                             | ((0xff000U 
                                                 & vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst 
                                                         >> 0x14U))))))),32);
    bufp->fullIData(oldp+269,((((- (IData)((vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst 
                                            >> 0x1fU))) 
                                << 0xdU) | ((0x1000U 
                                             & (vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst 
                                                        >> 7U))))))),32);
    bufp->fullIData(oldp+270,((((- (IData)((vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst 
                                            >> 0x14U))),32);
    bufp->fullCData(oldp+271,((0xfU & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))),4);
    bufp->fullBit(oldp+272,(((0x300U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 2U))));
    bufp->fullBit(oldp+273,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr));
    bufp->fullBit(oldp+274,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie));
    bufp->fullBit(oldp+275,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie));
    bufp->fullCData(oldp+276,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp),2);
    bufp->fullBit(oldp+277,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena));
    bufp->fullBit(oldp+278,((1U & ((~ ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 1U)) & ((1U 
                                                   & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                                   ? (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)
                                                   : 
                                                  ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                                    ? 
                                                   (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_csr_write_csr_data 
                                                    >> 3U)
                                                    : (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)))))));
    bufp->fullBit(oldp+279,((1U & ((2U & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                    ? (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)
                                    : ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                           ? (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_csr_write_csr_data 
                                              >> 7U)
                                           : (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)))))));
    bufp->fullCData(oldp+280,(((2U & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                ? 3U : ((1U & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                         ? 0U : (3U 
                                                 & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                                     ? 
                                                    (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_csr_write_csr_data 
                                                     >> 0xdU)
                                                     : (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp)))))),2);
    bufp->fullBit(oldp+281,((1U & (((0x305U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                    & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 2U)) | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+282,(((0x305U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 3U))));
    bufp->fullIData(oldp+283,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mtvec_base),30);
    bufp->fullBit(oldp+284,((1U & (((0x341U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                    & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 2U)) | (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl)))));
    bufp->fullBit(oldp+285,((1U & (((0x341U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                    & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 3U)) | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+286,(((0x342U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 2U))));
    bufp->fullBit(oldp+287,(((0x342U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 3U))));
    bufp->fullBit(oldp+288,(((0xf12U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 2U))));
    bufp->fullBit(oldp+289,(((0x340U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 2U))));
    bufp->fullBit(oldp+290,(((0x340U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 3U))));
    bufp->fullBit(oldp+291,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall));
    bufp->fullIData(oldp+292,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1),32);
    bufp->fullIData(oldp+293,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2),32);
    bufp->fullIData(oldp+294,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2),32);
    bufp->fullIData(oldp+295,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2),32);
    bufp->fullBit(oldp+296,((1U & (((~ (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
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
    bufp->fullIData(oldp+297,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2),32);
    bufp->fullQData(oldp+298,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul),64);
    bufp->fullIData(oldp+300,((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul)),32);
    bufp->fullIData(oldp+301,((IData)((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+302,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div),32);
    bufp->fullIData(oldp+303,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__rem),32);
    bufp->fullIData(oldp+304,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr),32);
    bufp->fullBit(oldp+305,(((0x94U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                             | ((0xc8U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                | (0xa4U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))))));
    bufp->fullCData(oldp+306,((0x1fU & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+307,((0x7fU & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)),7);
    bufp->fullCData(oldp+308,((7U & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+309,((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0x19U)),7);
    bufp->fullSData(oldp+310,((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+311,(((0x80000U & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                            >> 0xcU)) 
                               | ((0x7f800U & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                               >> 1U)) 
                                  | ((0x400U & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                >> 0xaU)) 
                                     | (0x3ffU & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                  >> 0x15U)))))),20);
    bufp->fullIData(oldp+312,((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU)),20);
    bufp->fullSData(oldp+313,(((0xfe0U & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                           >> 7U)))),12);
    bufp->fullSData(oldp+314,(((0x800U & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                          >> 0x14U)) 
                               | ((0x400U & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                             << 3U)) 
                                  | ((0x3f0U & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                >> 0x15U)) 
                                     | (0xfU & (vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                >> 8U)))))),12);
    bufp->fullBit(oldp+315,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__data_ok));
    bufp->fullCData(oldp+316,((3U & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res)),2);
    bufp->fullBit(oldp+317,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_mem__DOT__data_ok));
    bufp->fullCData(oldp+318,((0xffU & vlSelf->ysyx_25060170_topcore__DOT__DPIC_DPIC_MEM_data)),8);
    bufp->fullSData(oldp+319,((0xffffU & vlSelf->ysyx_25060170_topcore__DOT__DPIC_DPIC_MEM_data)),16);
    bufp->fullIData(oldp+320,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0]),32);
    bufp->fullIData(oldp+321,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[1]),32);
    bufp->fullIData(oldp+322,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[2]),32);
    bufp->fullIData(oldp+323,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[3]),32);
    bufp->fullIData(oldp+324,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[4]),32);
    bufp->fullIData(oldp+325,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[5]),32);
    bufp->fullIData(oldp+326,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[6]),32);
    bufp->fullIData(oldp+327,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[7]),32);
    bufp->fullIData(oldp+328,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[8]),32);
    bufp->fullIData(oldp+329,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[9]),32);
    bufp->fullIData(oldp+330,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[10]),32);
    bufp->fullIData(oldp+331,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[11]),32);
    bufp->fullIData(oldp+332,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[12]),32);
    bufp->fullIData(oldp+333,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[13]),32);
    bufp->fullIData(oldp+334,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[14]),32);
    bufp->fullIData(oldp+335,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[15]),32);
    bufp->fullIData(oldp+336,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[16]),32);
    bufp->fullIData(oldp+337,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[17]),32);
    bufp->fullIData(oldp+338,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[18]),32);
    bufp->fullIData(oldp+339,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[19]),32);
    bufp->fullIData(oldp+340,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[20]),32);
    bufp->fullIData(oldp+341,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[21]),32);
    bufp->fullIData(oldp+342,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[22]),32);
    bufp->fullIData(oldp+343,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[23]),32);
    bufp->fullIData(oldp+344,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[24]),32);
    bufp->fullIData(oldp+345,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[25]),32);
    bufp->fullIData(oldp+346,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[26]),32);
    bufp->fullIData(oldp+347,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[27]),32);
    bufp->fullIData(oldp+348,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[28]),32);
    bufp->fullIData(oldp+349,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[29]),32);
    bufp->fullIData(oldp+350,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[30]),32);
    bufp->fullIData(oldp+351,(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[31]),32);
    bufp->fullIData(oldp+352,((vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data 
                               | vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__csr_wbu_read_csr_data)),32);
    bufp->fullIData(oldp+353,(((~ vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data) 
                               & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__csr_wbu_read_csr_data)),32);
    bufp->fullBit(oldp+354,(vlSelf->clk));
    bufp->fullBit(oldp+355,(vlSelf->rst));
    bufp->fullIData(oldp+356,(((0x80000000U & (- (IData)((IData)(vlSelf->rst)))) 
                               | (((- (IData)((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal))) 
                                   & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc) 
                                  | ((0xfffffffeU & 
                                      ((- (IData)((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr))) 
                                       & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc)) 
                                     | (((- (IData)((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bxx_taken))) 
                                         & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc) 
                                        | ((- (IData)(
                                                      ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_bxx) 
                                                       & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_not_taken_state) 
                                                          | (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_not_taken_state))))) 
                                           & ((IData)(4U) 
                                              + vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ifu__DOT__pc))))))),32);
    bufp->fullIData(oldp+357,((((~ (IData)(vlSelf->rst)) 
                                & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr))
                                ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                               [vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__bp_rs1_addr]
                                : 0U)),32);
    bufp->fullIData(oldp+358,((((~ (IData)(vlSelf->rst)) 
                                & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_ena))
                                ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                               [vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_addr]
                                : 0U)),32);
    bufp->fullIData(oldp+359,((((~ (IData)(vlSelf->rst)) 
                                & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_ena))
                                ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                               [vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_addr]
                                : 0U)),32);
    bufp->fullIData(oldp+360,(((IData)(vlSelf->__VdfgTmp_h9bf0bc6f__0)
                                ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
                                : (((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr) 
                                    & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                                       == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))
                                    ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__exu_res
                                    : ((IData)(vlSelf->__VdfgTmp_h9bf0bc6f__0)
                                        ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
                                        : ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgTmp_hff229178__0)
                                            ? vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward
                                            : ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr)
                                                ? (
                                                   ((~ (IData)(vlSelf->rst)) 
                                                    & (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr))
                                                    ? 
                                                   vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                   [vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__bp_rs1_addr]
                                                    : 0U)
                                                : vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ifu__DOT__pc)))))),32);
    bufp->fullBit(oldp+361,(((~ ((IData)(vlSelf->rst) 
                                 & (0U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)))) 
                             & (((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_ena) 
                                 & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h5a345cf6__0) 
                                    & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_addr) 
                                       == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))) 
                                | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_ha77af658__0) 
                                   & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_addr) 
                                      == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr)))))));
    bufp->fullBit(oldp+362,(((~ ((IData)(vlSelf->rst) 
                                 & (0U == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)))) 
                             & (((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_ena) 
                                 & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h5a345cf6__0) 
                                    & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_addr) 
                                       == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))) 
                                | ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_ha77af658__0) 
                                   & ((IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_addr) 
                                      == (IData)(vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr)))))));
    bufp->fullCData(oldp+363,(((IData)(vlSelf->rst)
                                ? 0U : ((0U == (3U 
                                                & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                         ? 3U : ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                                  ? 0xcU
                                                  : 0U)))),4);
    bufp->fullIData(oldp+364,(((IData)(vlSelf->rst)
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
    bufp->fullCData(oldp+365,(4U),8);
    bufp->fullIData(oldp+366,(0U),32);
    bufp->fullIData(oldp+367,(2U),32);
    bufp->fullIData(oldp+368,(1U),32);
    bufp->fullBit(oldp+369,(0U));
    bufp->fullBit(oldp+370,(1U));
    bufp->fullCData(oldp+371,(0U),2);
    bufp->fullCData(oldp+372,(0xfU),4);
}
