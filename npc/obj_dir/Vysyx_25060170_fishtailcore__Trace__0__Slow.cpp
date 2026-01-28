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
    tracep->declBit(c+354,"clk", false,-1);
    tracep->declBit(c+355,"rst", false,-1);
    tracep->pushNamePrefix("ysyx_25060170_fishtailcore ");
    tracep->declBit(c+354,"clk", false,-1);
    tracep->declBit(c+355,"rst", false,-1);
    tracep->declBus(c+144,"if_id_inst", false,-1, 31,0);
    tracep->declBus(c+356,"bp_if_pc", false,-1, 31,0);
    tracep->declBit(c+2,"bp_predict", false,-1);
    tracep->declBus(c+357,"bp_rs1_data", false,-1, 31,0);
    tracep->declBus(c+3,"bp_rs1_addr", false,-1, 4,0);
    tracep->declBit(c+4,"bp_rs1_ena", false,-1);
    tracep->declBit(c+5,"bpu_ifu_inst_bxx", false,-1);
    tracep->declBit(c+6,"bpu_ifu_jal_jalr", false,-1);
    tracep->declBus(c+7,"id_jump_pc", false,-1, 31,0);
    tracep->declBit(c+365,"ls_pc_jump", false,-1);
    tracep->declBus(c+145,"ls_jump_pc", false,-1, 31,0);
    tracep->declBit(c+8,"id_ready", false,-1);
    tracep->declBit(c+9,"id_stall", false,-1);
    tracep->declBit(c+10,"if_valid", false,-1);
    tracep->declBus(c+146,"if_id_pc", false,-1, 31,0);
    tracep->declBus(c+147,"if_id_next_pc", false,-1, 31,0);
    tracep->declBus(c+144,"dpic_ifu_inst", false,-1, 31,0);
    tracep->declBit(c+5,"if_id_inst_bxx", false,-1);
    tracep->declBit(c+365,"ls_flush", false,-1);
    tracep->declBit(c+11,"id_flush", false,-1);
    tracep->declBus(c+148,"if_id_reg_pc", false,-1, 31,0);
    tracep->declBus(c+149,"if_id_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+150,"if_id_reg_inst", false,-1, 31,0);
    tracep->declBit(c+151,"if_id_reg_inst_bxx", false,-1);
    tracep->declBit(c+152,"if_id_reg_bp_jump", false,-1);
    tracep->declBit(c+153,"if_id_valid", false,-1);
    tracep->declBit(c+154,"ex_csr_ena", false,-1);
    tracep->declBit(c+155,"ls_csr_ena", false,-1);
    tracep->declBus(c+358,"rf_id_rs1_data", false,-1, 31,0);
    tracep->declBus(c+359,"rf_id_rs2_data", false,-1, 31,0);
    tracep->declBit(c+1,"ex_ready", false,-1);
    tracep->declBus(c+12,"idu_rs1_addr", false,-1, 4,0);
    tracep->declBit(c+13,"idu_rs1_ena", false,-1);
    tracep->declBus(c+14,"idu_rs2_addr", false,-1, 4,0);
    tracep->declBit(c+15,"idu_rs2_ena", false,-1);
    tracep->declBit(c+16,"idu_rd_ena", false,-1);
    tracep->declBus(c+17,"idu_rd_addr", false,-1, 4,0);
    tracep->declBus(c+18,"idu_alusrc", false,-1, 7,0);
    tracep->declBus(c+19,"idu_lsctl", false,-1, 3,0);
    tracep->declBus(c+20,"idu_wbctl", false,-1, 1,0);
    tracep->declBus(c+21,"idu_op1_sel", false,-1, 1,0);
    tracep->declBus(c+22,"idu_op2_sel", false,-1, 2,0);
    tracep->declBit(c+23,"idu_load_flag", false,-1);
    tracep->declBit(c+24,"idu_csr_ena", false,-1);
    tracep->declBus(c+25,"idu_op1", false,-1, 31,0);
    tracep->declBus(c+26,"idu_op2", false,-1, 31,0);
    tracep->declBus(c+27,"idu_imm", false,-1, 31,0);
    tracep->declBus(c+156,"idu_dpic_rd_addr", false,-1, 4,0);
    tracep->declBus(c+148,"idu_pc", false,-1, 31,0);
    tracep->declBus(c+28,"idu_next_pc", false,-1, 31,0);
    tracep->declBus(c+150,"idu_inst", false,-1, 31,0);
    tracep->declBus(c+157,"idu_csr_imm", false,-1, 4,0);
    tracep->declBit(c+29,"id_predict_error", false,-1);
    tracep->declBit(c+30,"ex_branch", false,-1);
    tracep->declBit(c+158,"magic_flag", false,-1);
    tracep->declBus(c+159,"id_ex_reg_alusrc", false,-1, 7,0);
    tracep->declBit(c+31,"id_valid", false,-1);
    tracep->declBus(c+160,"id_ex_reg_pc", false,-1, 31,0);
    tracep->declBus(c+161,"id_ex_reg_inst", false,-1, 31,0);
    tracep->declBus(c+162,"id_ex_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+163,"id_ex_reg_op1", false,-1, 31,0);
    tracep->declBus(c+164,"id_ex_reg_op2", false,-1, 31,0);
    tracep->declBus(c+165,"id_ex_reg_op1_sel", false,-1, 1,0);
    tracep->declBus(c+166,"id_ex_reg_op2_sel", false,-1, 2,0);
    tracep->declBit(c+167,"id_ex_reg_rd_ena", false,-1);
    tracep->declBus(c+168,"id_ex_reg_rd_addr", false,-1, 4,0);
    tracep->declBus(c+169,"id_ex_reg_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+170,"id_ex_reg_imm", false,-1, 31,0);
    tracep->declBus(c+171,"id_ex_reg_lsctl", false,-1, 3,0);
    tracep->declBus(c+172,"id_ex_reg_wbctl", false,-1, 1,0);
    tracep->declBit(c+173,"id_ex_reg_load_flag", false,-1);
    tracep->declBit(c+174,"id_ex_valid", false,-1);
    tracep->declBit(c+1,"ls_ready", false,-1);
    tracep->declBus(c+161,"exu_inst", false,-1, 31,0);
    tracep->declBus(c+160,"exu_pc", false,-1, 31,0);
    tracep->declBus(c+162,"exu_next_pc", false,-1, 31,0);
    tracep->declBit(c+174,"ex_valid", false,-1);
    tracep->declBus(c+164,"exu_store_data", false,-1, 31,0);
    tracep->declBus(c+32,"exu_res", false,-1, 31,0);
    tracep->declBus(c+33,"exu_csr_addr", false,-1, 11,0);
    tracep->declBus(c+34,"exu_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+175,"ex_ls_reg_inst", false,-1, 31,0);
    tracep->declBus(c+176,"ex_ls_reg_store_data", false,-1, 31,0);
    tracep->declBus(c+145,"ex_ls_reg_exu_res", false,-1, 31,0);
    tracep->declBus(c+177,"ex_ls_reg_ls_ctl", false,-1, 3,0);
    tracep->declBus(c+178,"ex_ls_reg_wb_ctl", false,-1, 1,0);
    tracep->declBus(c+179,"ex_ls_reg_csr_ctl", false,-1, 6,0);
    tracep->declBit(c+180,"ex_ls_reg_rd_ena", false,-1);
    tracep->declBus(c+181,"ex_ls_reg_rd_addr", false,-1, 4,0);
    tracep->declBit(c+154,"ex_ls_reg_ls_csr_ena", false,-1);
    tracep->declBus(c+182,"ex_ls_reg_csr_addr", false,-1, 11,0);
    tracep->declBus(c+183,"ex_ls_reg_pc", false,-1, 31,0);
    tracep->declBus(c+184,"ex_ls_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+168,"ex_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+32,"ex_rd_data_forward", false,-1, 31,0);
    tracep->declBit(c+185,"ex_ls_valid", false,-1);
    tracep->declBit(c+186,"ex_ls_reg_load_flag", false,-1);
    tracep->declBit(c+35,"ls_valid", false,-1);
    tracep->declBit(c+36,"ls_dpic_we", false,-1);
    tracep->declBus(c+37,"ls_dpic_data", false,-1, 31,0);
    tracep->declBus(c+38,"ls_dpic_raddr", false,-1, 31,0);
    tracep->declBus(c+38,"ls_dpic_waddr", false,-1, 31,0);
    tracep->declBus(c+39,"ls_dpic_wlen", false,-1, 7,0);
    tracep->declBus(c+366,"ls_dpic_rlen", false,-1, 7,0);
    tracep->declBus(c+183,"ls_pc", false,-1, 31,0);
    tracep->declBus(c+184,"ls_next_pc", false,-1, 31,0);
    tracep->declBus(c+175,"ls_inst", false,-1, 31,0);
    tracep->declBit(c+40,"ls_mem_re", false,-1);
    tracep->declBus(c+187,"ls_mem_reg_inst", false,-1, 31,0);
    tracep->declBus(c+188,"ls_mem_reg_pc", false,-1, 31,0);
    tracep->declBus(c+189,"ls_mem_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+190,"ls_mem_reg_ls_ctl", false,-1, 3,0);
    tracep->declBus(c+191,"ls_mem_reg_wb_ctl", false,-1, 1,0);
    tracep->declBit(c+192,"ls_mem_reg_rd_ena", false,-1);
    tracep->declBus(c+193,"ls_mem_reg_rd_addr", false,-1, 4,0);
    tracep->declBus(c+194,"ls_mem_reg_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+195,"ls_mem_reg_csr_addr", false,-1, 11,0);
    tracep->declBit(c+196,"ls_mem_valid", false,-1);
    tracep->declBus(c+181,"ls_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+145,"ls_rd_data_forward", false,-1, 31,0);
    tracep->declBit(c+197,"ls_mem_reg_re", false,-1);
    tracep->declBus(c+198,"ls_mem_reg_alu_res", false,-1, 31,0);
    tracep->declBit(c+199,"ls_mem_reg_load_flag", false,-1);
    tracep->declBus(c+200,"ls_mem_reg_diff_skip", false,-1, 31,0);
    tracep->declBus(c+187,"mem_inst", false,-1, 31,0);
    tracep->declBus(c+188,"mem_pc", false,-1, 31,0);
    tracep->declBus(c+189,"mem_next_pc", false,-1, 31,0);
    tracep->declBus(c+198,"mem_alu_res", false,-1, 31,0);
    tracep->declBit(c+192,"mem_rd_ena", false,-1);
    tracep->declBus(c+193,"mem_rd_addr", false,-1, 4,0);
    tracep->declBus(c+194,"mem_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+195,"mem_csr_addr", false,-1, 11,0);
    tracep->declBus(c+191,"mem_wbctl", false,-1, 1,0);
    tracep->declBit(c+201,"mem_valid", false,-1);
    tracep->declBit(c+367,"mem_ready", false,-1);
    tracep->declBus(c+41,"mem_data", false,-1, 31,0);
    tracep->declBus(c+202,"mem_wb_inst", false,-1, 31,0);
    tracep->declBus(c+203,"mem_wb_pc", false,-1, 31,0);
    tracep->declBus(c+204,"mem_wb_next_pc", false,-1, 31,0);
    tracep->declBus(c+205,"mem_wb_lsu_res", false,-1, 31,0);
    tracep->declBus(c+206,"mem_wb_alures_data", false,-1, 31,0);
    tracep->declBus(c+207,"mem_wb_wb_ctl", false,-1, 1,0);
    tracep->declBit(c+208,"mem_wb_rd_ena", false,-1);
    tracep->declBus(c+209,"mem_wb_rd_addr", false,-1, 4,0);
    tracep->declBus(c+210,"mem_wb_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+211,"mem_wb_csr_addr", false,-1, 11,0);
    tracep->declBit(c+212,"mem_valid_o", false,-1);
    tracep->declBus(c+193,"mem_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+42,"mem_rd_data_forward", false,-1, 31,0);
    tracep->declBit(c+213,"mem_wb_reg_load_flag", false,-1);
    tracep->declBus(c+43,"dpi_ls_mem_skip_flag", false,-1, 31,0);
    tracep->declBus(c+214,"mem_wb_skip_flag", false,-1, 31,0);
    tracep->declBus(c+215,"wb_rf_data", false,-1, 31,0);
    tracep->declBit(c+367,"wb_ready", false,-1);
    tracep->declBit(c+208,"wb_rf_rd_ena", false,-1);
    tracep->declBus(c+209,"wb_rf_rd_addr", false,-1, 4,0);
    tracep->declBus(c+209,"wb_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+216,"wb_rd_data_forward", false,-1, 31,0);
    tracep->declBus(c+202,"wbu_dpic_inst", false,-1, 31,0);
    tracep->declBus(c+203,"wbu_dpic_pc", false,-1, 31,0);
    tracep->declBus(c+204,"wbu_dpic_next_pc", false,-1, 31,0);
    tracep->declBit(c+212,"wbu_dpic_valid", false,-1);
    tracep->declBus(c+210,"wb_csr_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+211,"wb_csr_csr_addr", false,-1, 11,0);
    tracep->declBus(c+217,"wb_csr_mcause_value", false,-1, 31,0);
    tracep->declBus(c+218,"wb_csr_write_csr_data", false,-1, 31,0);
    tracep->declBus(c+219,"regs0", false,-1, 31,0);
    tracep->declBus(c+220,"regs1", false,-1, 31,0);
    tracep->declBus(c+221,"regs2", false,-1, 31,0);
    tracep->declBus(c+222,"regs3", false,-1, 31,0);
    tracep->declBus(c+223,"regs4", false,-1, 31,0);
    tracep->declBus(c+224,"regs5", false,-1, 31,0);
    tracep->declBus(c+225,"regs6", false,-1, 31,0);
    tracep->declBus(c+226,"regs7", false,-1, 31,0);
    tracep->declBus(c+227,"regs8", false,-1, 31,0);
    tracep->declBus(c+228,"regs9", false,-1, 31,0);
    tracep->declBus(c+229,"regs10", false,-1, 31,0);
    tracep->declBus(c+230,"regs11", false,-1, 31,0);
    tracep->declBus(c+231,"regs12", false,-1, 31,0);
    tracep->declBus(c+232,"regs13", false,-1, 31,0);
    tracep->declBus(c+233,"regs14", false,-1, 31,0);
    tracep->declBus(c+234,"regs15", false,-1, 31,0);
    tracep->declBus(c+235,"regs16", false,-1, 31,0);
    tracep->declBus(c+236,"regs17", false,-1, 31,0);
    tracep->declBus(c+237,"regs18", false,-1, 31,0);
    tracep->declBus(c+238,"regs19", false,-1, 31,0);
    tracep->declBus(c+239,"regs20", false,-1, 31,0);
    tracep->declBus(c+240,"regs21", false,-1, 31,0);
    tracep->declBus(c+241,"regs22", false,-1, 31,0);
    tracep->declBus(c+242,"regs23", false,-1, 31,0);
    tracep->declBus(c+243,"regs24", false,-1, 31,0);
    tracep->declBus(c+244,"regs25", false,-1, 31,0);
    tracep->declBus(c+245,"regs26", false,-1, 31,0);
    tracep->declBus(c+246,"regs27", false,-1, 31,0);
    tracep->declBus(c+247,"regs28", false,-1, 31,0);
    tracep->declBus(c+248,"regs29", false,-1, 31,0);
    tracep->declBus(c+249,"regs30", false,-1, 31,0);
    tracep->declBus(c+250,"regs31", false,-1, 31,0);
    tracep->declBus(c+368,"dpic_mhartid", false,-1, 31,0);
    tracep->declBus(c+251,"dpic_mstatus", false,-1, 31,0);
    tracep->declBus(c+252,"dpic_mepc", false,-1, 31,0);
    tracep->declBus(c+253,"dpic_mtvec", false,-1, 31,0);
    tracep->declBus(c+254,"dpic_mcause", false,-1, 31,0);
    tracep->declBus(c+255,"dpic_mscratch", false,-1, 31,0);
    tracep->declBus(c+256,"csr_wbu_read_csr_data", false,-1, 31,0);
    tracep->declBus(c+257,"DPIC_MEM_data", false,-1, 31,0);
    tracep->pushNamePrefix("u_ysyx_25060170_DPIC ");
    tracep->declBit(c+354,"clk", false,-1);
    tracep->declBit(c+355,"rst", false,-1);
    tracep->declBus(c+146,"pc_i", false,-1, 31,0);
    tracep->declBus(c+144,"inst_o", false,-1, 31,0);
    tracep->declBus(c+148,"ftrace_pc", false,-1, 31,0);
    tracep->declBus(c+156,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+27,"imm", false,-1, 31,0);
    tracep->declBus(c+219,"regs0", false,-1, 31,0);
    tracep->declBus(c+220,"regs1", false,-1, 31,0);
    tracep->declBus(c+221,"regs2", false,-1, 31,0);
    tracep->declBus(c+222,"regs3", false,-1, 31,0);
    tracep->declBus(c+223,"regs4", false,-1, 31,0);
    tracep->declBus(c+224,"regs5", false,-1, 31,0);
    tracep->declBus(c+225,"regs6", false,-1, 31,0);
    tracep->declBus(c+226,"regs7", false,-1, 31,0);
    tracep->declBus(c+227,"regs8", false,-1, 31,0);
    tracep->declBus(c+228,"regs9", false,-1, 31,0);
    tracep->declBus(c+229,"regs10", false,-1, 31,0);
    tracep->declBus(c+230,"regs11", false,-1, 31,0);
    tracep->declBus(c+231,"regs12", false,-1, 31,0);
    tracep->declBus(c+232,"regs13", false,-1, 31,0);
    tracep->declBus(c+233,"regs14", false,-1, 31,0);
    tracep->declBus(c+234,"regs15", false,-1, 31,0);
    tracep->declBus(c+235,"regs16", false,-1, 31,0);
    tracep->declBus(c+236,"regs17", false,-1, 31,0);
    tracep->declBus(c+237,"regs18", false,-1, 31,0);
    tracep->declBus(c+238,"regs19", false,-1, 31,0);
    tracep->declBus(c+239,"regs20", false,-1, 31,0);
    tracep->declBus(c+240,"regs21", false,-1, 31,0);
    tracep->declBus(c+241,"regs22", false,-1, 31,0);
    tracep->declBus(c+242,"regs23", false,-1, 31,0);
    tracep->declBus(c+243,"regs24", false,-1, 31,0);
    tracep->declBus(c+244,"regs25", false,-1, 31,0);
    tracep->declBus(c+245,"regs26", false,-1, 31,0);
    tracep->declBus(c+246,"regs27", false,-1, 31,0);
    tracep->declBus(c+247,"regs28", false,-1, 31,0);
    tracep->declBus(c+248,"regs29", false,-1, 31,0);
    tracep->declBus(c+249,"regs30", false,-1, 31,0);
    tracep->declBus(c+250,"regs31", false,-1, 31,0);
    tracep->declBus(c+368,"mstatus", false,-1, 31,0);
    tracep->declBus(c+251,"mtvec", false,-1, 31,0);
    tracep->declBus(c+252,"mepc", false,-1, 31,0);
    tracep->declBus(c+253,"mcause", false,-1, 31,0);
    tracep->declBus(c+254,"mhartid", false,-1, 31,0);
    tracep->declBus(c+255,"mscratch", false,-1, 31,0);
    tracep->declBit(c+40,"re", false,-1);
    tracep->declBit(c+36,"we", false,-1);
    tracep->declBus(c+37,"data_i", false,-1, 31,0);
    tracep->declBus(c+39,"wlen", false,-1, 7,0);
    tracep->declBus(c+366,"rlen", false,-1, 7,0);
    tracep->declBus(c+43,"dpic_difftest_skip_flag", false,-1, 31,0);
    tracep->declBus(c+214,"wbu_DPIC_difftest_skip_flag", false,-1, 31,0);
    tracep->declBus(c+202,"wbu_dpic_inst", false,-1, 31,0);
    tracep->declBus(c+203,"wbu_dpic_pc", false,-1, 31,0);
    tracep->declBus(c+204,"wbu_dpic_next_pc", false,-1, 31,0);
    tracep->declBit(c+212,"wbu_dpic_valid", false,-1);
    tracep->declBus(c+257,"data_o", false,-1, 31,0);
    tracep->declBus(c+38,"raddr", false,-1, 31,0);
    tracep->declBus(c+38,"waddr", false,-1, 31,0);
    tracep->declBus(c+183,"ex_ls_reg_DPIC_pc_i", false,-1, 31,0);
    tracep->declBit(c+158,"magic_flag", false,-1);
    tracep->declBus(c+369,"dpic_loadread", false,-1, 31,0);
    tracep->declBus(c+44,"mem_data", false,-1, 31,0);
    tracep->declBus(c+370,"dpic_fetch", false,-1, 31,0);
    tracep->declBit(c+258,"jal", false,-1);
    tracep->declBit(c+259,"jalr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_bpu ");
    tracep->declBit(c+354,"clk", false,-1);
    tracep->declBit(c+355,"rst", false,-1);
    tracep->declBit(c+30,"branch_success", false,-1);
    tracep->declBit(c+151,"idu_bxx_inst", false,-1);
    tracep->declBus(c+144,"inst_i", false,-1, 31,0);
    tracep->declBus(c+146,"pc_i", false,-1, 31,0);
    tracep->declBus(c+145,"ls_wb_forward_data", false,-1, 31,0);
    tracep->declBus(c+181,"ls_wb_forward_addr", false,-1, 4,0);
    tracep->declBus(c+32,"ex_ls_forward_data", false,-1, 31,0);
    tracep->declBus(c+168,"ex_ls_forward_addr", false,-1, 4,0);
    tracep->declBus(c+145,"ls_mem_forward_data", false,-1, 31,0);
    tracep->declBus(c+181,"ls_mem_forward_addr", false,-1, 4,0);
    tracep->declBus(c+209,"wb_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+216,"wb_rd_data_forward", false,-1, 31,0);
    tracep->declBus(c+356,"bp_pc_o", false,-1, 31,0);
    tracep->declBit(c+5,"inst_bxx_o", false,-1);
    tracep->declBit(c+6,"jal_jalr_o", false,-1);
    tracep->declBus(c+357,"bp_rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+3,"bp_rs1_addr_o", false,-1, 4,0);
    tracep->declBit(c+4,"bp_rs1_ena_o", false,-1);
    tracep->declBit(c+2,"bp_predict_o", false,-1);
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
    tracep->declBit(c+4,"inst_jalr", false,-1);
    tracep->declBit(c+5,"inst_bxx", false,-1);
    tracep->declBus(c+47,"jump_pc", false,-1, 31,0);
    tracep->declBus(c+48,"jump_jalr_pc", false,-1, 31,0);
    tracep->declBus(c+268,"jal_offset", false,-1, 31,0);
    tracep->declBus(c+269,"br_offset", false,-1, 31,0);
    tracep->declBus(c+270,"jalr_offset", false,-1, 31,0);
    tracep->declBit(c+49,"ls_wb_forward_en", false,-1);
    tracep->declBit(c+50,"ex_ls_forward_en", false,-1);
    tracep->declBit(c+49,"ls_mem_forward_en", false,-1);
    tracep->declBit(c+51,"wbu_forward_en", false,-1);
    tracep->declBit(c+2,"bxx_taken", false,-1);
    tracep->declBit(c+52,"bxx_not_taken", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_csr ");
    tracep->declBit(c+354,"clk", false,-1);
    tracep->declBit(c+355,"rst", false,-1);
    tracep->declBus(c+271,"csr_ctl", false,-1, 3,0);
    tracep->declBus(c+211,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+217,"mcause_value", false,-1, 31,0);
    tracep->declBus(c+218,"write_csr_data", false,-1, 31,0);
    tracep->declBus(c+256,"read_csr_data", false,-1, 31,0);
    tracep->declBus(c+368,"mhartid_o", false,-1, 31,0);
    tracep->declBus(c+251,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+252,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+253,"mtvec_o", false,-1, 31,0);
    tracep->declBus(c+254,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+255,"mscratch_o", false,-1, 31,0);
    tracep->declBit(c+272,"mstatus_rd", false,-1);
    tracep->declBit(c+273,"mstatus_wr", false,-1);
    tracep->declBit(c+274,"mstatus_mie", false,-1);
    tracep->declBit(c+275,"mstatus_mpie", false,-1);
    tracep->declBus(c+276,"mstatus_mpp", false,-1, 1,0);
    tracep->declBus(c+251,"mstatus", false,-1, 31,0);
    tracep->declBit(c+277,"mstatus_ie_ena", false,-1);
    tracep->declBit(c+278,"mie_set", false,-1);
    tracep->declBit(c+279,"mpie_set", false,-1);
    tracep->declBus(c+280,"mpp_set", false,-1, 1,0);
    tracep->declBit(c+281,"mtvec_rd", false,-1);
    tracep->declBit(c+282,"mtvec_wr", false,-1);
    tracep->declBus(c+283,"mtvec_base", false,-1, 31,2);
    tracep->declBus(c+371,"mtvec_mode", false,-1, 1,0);
    tracep->declBus(c+253,"mtvec", false,-1, 31,0);
    tracep->declBit(c+284,"mepc_rd", false,-1);
    tracep->declBit(c+285,"mepc_wr", false,-1);
    tracep->declBus(c+252,"mepc", false,-1, 31,0);
    tracep->declBit(c+286,"mcause_rd", false,-1);
    tracep->declBit(c+287,"mcause_wr", false,-1);
    tracep->declBus(c+254,"mcause", false,-1, 31,0);
    tracep->declBit(c+288,"mhartid_rd", false,-1);
    tracep->declBus(c+368,"mhartid", false,-1, 31,0);
    tracep->declBit(c+289,"mscratch_rd", false,-1);
    tracep->declBit(c+290,"mscratch_wr", false,-1);
    tracep->declBus(c+255,"mscratch", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_ex_ls_reg ");
    tracep->declBit(c+354,"clk", false,-1);
    tracep->declBit(c+355,"rst", false,-1);
    tracep->declBus(c+161,"inst_i", false,-1, 31,0);
    tracep->declBus(c+160,"pc_i", false,-1, 31,0);
    tracep->declBus(c+162,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+164,"store_data_i", false,-1, 31,0);
    tracep->declBus(c+32,"exu_res_i", false,-1, 31,0);
    tracep->declBit(c+173,"load_flag_i", false,-1);
    tracep->declBus(c+171,"ls_ctl_i", false,-1, 3,0);
    tracep->declBus(c+172,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+34,"csr_ctl_i", false,-1, 6,0);
    tracep->declBit(c+167,"rd_ena_i", false,-1);
    tracep->declBus(c+168,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+154,"ex_csr_ena_i", false,-1);
    tracep->declBus(c+33,"csr_addr_i", false,-1, 11,0);
    tracep->declBit(c+174,"ex_valid_i", false,-1);
    tracep->declBit(c+1,"ls_ready_i", false,-1);
    tracep->declBit(c+365,"ls_flush_i", false,-1);
    tracep->declBit(c+185,"ex_valid_o", false,-1);
    tracep->declBus(c+175,"inst_o", false,-1, 31,0);
    tracep->declBus(c+183,"pc_o", false,-1, 31,0);
    tracep->declBus(c+184,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+176,"store_data_o", false,-1, 31,0);
    tracep->declBus(c+145,"exu_res_o", false,-1, 31,0);
    tracep->declBit(c+186,"load_flag_o", false,-1);
    tracep->declBus(c+177,"ls_ctl_o", false,-1, 3,0);
    tracep->declBus(c+178,"wb_ctl_o", false,-1, 1,0);
    tracep->declBus(c+179,"csr_ctl_o", false,-1, 6,0);
    tracep->declBit(c+180,"rd_ena_o", false,-1);
    tracep->declBus(c+181,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+182,"csr_addr_o", false,-1, 11,0);
    tracep->declBit(c+155,"ls_csr_ena_o", false,-1);
    tracep->declBus(c+168,"ex_rd_addr_forward_o", false,-1, 4,0);
    tracep->declBit(c+154,"ex_csr_o", false,-1);
    tracep->declBus(c+32,"ex_rd_data_forward_o", false,-1, 31,0);
    tracep->declBit(c+365,"flush", false,-1);
    tracep->declBit(c+291,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_exu ");
    tracep->declBit(c+355,"rst", false,-1);
    tracep->declBus(c+163,"op1_i", false,-1, 31,0);
    tracep->declBus(c+164,"op2_i", false,-1, 31,0);
    tracep->declBus(c+165,"op1_sel_i", false,-1, 1,0);
    tracep->declBus(c+166,"op2_sel_i", false,-1, 2,0);
    tracep->declBus(c+168,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+169,"rs1_addr_i", false,-1, 4,0);
    tracep->declBus(c+170,"imm_i", false,-1, 31,0);
    tracep->declBus(c+160,"pc_i", false,-1, 31,0);
    tracep->declBus(c+162,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+161,"inst_i", false,-1, 31,0);
    tracep->declBus(c+159,"alu_sel_i", false,-1, 7,0);
    tracep->declBit(c+1,"ls_ready_i", false,-1);
    tracep->declBit(c+174,"id_valid_i", false,-1);
    tracep->declBit(c+174,"ex_valid_o", false,-1);
    tracep->declBit(c+1,"ex_ready_o", false,-1);
    tracep->declBus(c+161,"inst_o", false,-1, 31,0);
    tracep->declBus(c+160,"pc_o", false,-1, 31,0);
    tracep->declBus(c+162,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+164,"store_data_o", false,-1, 31,0);
    tracep->declBus(c+32,"exu_res_o", false,-1, 31,0);
    tracep->declBus(c+33,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+34,"csr_ctl_o", false,-1, 6,0);
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
    tracep->declBus(c+150,"inst_i", false,-1, 31,0);
    tracep->declBus(c+148,"pc_i", false,-1, 31,0);
    tracep->declBus(c+28,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+25,"op1_i", false,-1, 31,0);
    tracep->declBus(c+26,"op2_i", false,-1, 31,0);
    tracep->declBus(c+21,"op1_sel_i", false,-1, 1,0);
    tracep->declBus(c+22,"op2_sel_i", false,-1, 2,0);
    tracep->declBit(c+16,"rd_ena_i", false,-1);
    tracep->declBus(c+17,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+157,"rs1_addr_i", false,-1, 4,0);
    tracep->declBus(c+27,"imm_i", false,-1, 31,0);
    tracep->declBus(c+18,"alusrc_i", false,-1, 7,0);
    tracep->declBus(c+19,"lsctl_i", false,-1, 3,0);
    tracep->declBus(c+20,"wbctl_i", false,-1, 1,0);
    tracep->declBit(c+24,"csr_ena_i", false,-1);
    tracep->declBit(c+23,"load_flag_i", false,-1);
    tracep->declBit(c+31,"id_valid_i", false,-1);
    tracep->declBit(c+11,"id_flush_i", false,-1);
    tracep->declBit(c+9,"id_stall_i", false,-1);
    tracep->declBit(c+365,"ls_flush_i", false,-1);
    tracep->declBit(c+1,"ex_ready_i", false,-1);
    tracep->declBus(c+161,"inst_o", false,-1, 31,0);
    tracep->declBus(c+160,"pc_o", false,-1, 31,0);
    tracep->declBus(c+162,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+163,"op1_o", false,-1, 31,0);
    tracep->declBus(c+164,"op2_o", false,-1, 31,0);
    tracep->declBus(c+165,"op1_sel_o", false,-1, 1,0);
    tracep->declBus(c+166,"op2_sel_o", false,-1, 2,0);
    tracep->declBit(c+167,"rd_ena_o", false,-1);
    tracep->declBus(c+168,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+169,"rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+170,"imm_o", false,-1, 31,0);
    tracep->declBus(c+159,"alusrc_o", false,-1, 7,0);
    tracep->declBus(c+171,"lsctl_o", false,-1, 3,0);
    tracep->declBus(c+172,"wbctl_o", false,-1, 1,0);
    tracep->declBit(c+154,"csr_ena_o", false,-1);
    tracep->declBit(c+173,"load_flag_o", false,-1);
    tracep->declBit(c+174,"id_valid_o", false,-1);
    tracep->declBit(c+365,"flush", false,-1);
    tracep->declBit(c+61,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_idu ");
    tracep->declBit(c+355,"rst", false,-1);
    tracep->declBus(c+150,"inst_i", false,-1, 31,0);
    tracep->declBus(c+148,"pc_i", false,-1, 31,0);
    tracep->declBus(c+149,"next_pc_i", false,-1, 31,0);
    tracep->declBit(c+152,"bp_jump_i", false,-1);
    tracep->declBit(c+151,"inst_bxx_i", false,-1);
    tracep->declBus(c+168,"ex_addr_forward", false,-1, 4,0);
    tracep->declBus(c+32,"ex_data_forward", false,-1, 31,0);
    tracep->declBus(c+181,"ls_addr_forward", false,-1, 4,0);
    tracep->declBus(c+145,"ls_data_forward", false,-1, 31,0);
    tracep->declBus(c+193,"mem_addr_forward", false,-1, 4,0);
    tracep->declBus(c+42,"mem_data_forward", false,-1, 31,0);
    tracep->declBus(c+209,"wb_addr_forward", false,-1, 4,0);
    tracep->declBus(c+216,"wb_data_forward", false,-1, 31,0);
    tracep->declBit(c+173,"ex_load_ena", false,-1);
    tracep->declBit(c+186,"ls_load_ena", false,-1);
    tracep->declBit(c+199,"mem_load_ena", false,-1);
    tracep->declBit(c+213,"wb_load_ena", false,-1);
    tracep->declBit(c+174,"ex_valid_i", false,-1);
    tracep->declBit(c+35,"ls_valid_i", false,-1);
    tracep->declBit(c+154,"ex_csr_ena", false,-1);
    tracep->declBit(c+155,"ls_csr_ena", false,-1);
    tracep->declBus(c+358,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+359,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+12,"rs1_addr", false,-1, 4,0);
    tracep->declBit(c+13,"rs1_ena", false,-1);
    tracep->declBus(c+14,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+15,"rs2_ena", false,-1);
    tracep->declBit(c+16,"rd_ena", false,-1);
    tracep->declBus(c+17,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+148,"pc_o", false,-1, 31,0);
    tracep->declBus(c+28,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+18,"alusrc_o", false,-1, 7,0);
    tracep->declBus(c+19,"lsctl_o", false,-1, 3,0);
    tracep->declBus(c+20,"wbctl_o", false,-1, 1,0);
    tracep->declBus(c+21,"op1_sel", false,-1, 1,0);
    tracep->declBus(c+22,"op2_sel", false,-1, 2,0);
    tracep->declBit(c+23,"load_flag_o", false,-1);
    tracep->declBit(c+24,"csr_ena_o", false,-1);
    tracep->declBus(c+25,"op1", false,-1, 31,0);
    tracep->declBus(c+26,"op2", false,-1, 31,0);
    tracep->declBus(c+27,"imm", false,-1, 31,0);
    tracep->declBus(c+156,"idu_dpic_rd_addr", false,-1, 4,0);
    tracep->declBus(c+150,"inst_o", false,-1, 31,0);
    tracep->declBus(c+157,"csr_imm_o", false,-1, 4,0);
    tracep->declBit(c+29,"predict_error_o", false,-1);
    tracep->declBus(c+7,"predict_revise_pc", false,-1, 31,0);
    tracep->declBit(c+30,"bp_predict_success", false,-1);
    tracep->declBit(c+153,"if_valid_i", false,-1);
    tracep->declBit(c+1,"ex_ready_i", false,-1);
    tracep->declBit(c+11,"id_flush_o", false,-1);
    tracep->declBit(c+9,"id_stall_o", false,-1);
    tracep->declBit(c+8,"id_ready_o", false,-1);
    tracep->declBit(c+31,"id_valid_o", false,-1);
    tracep->declBit(c+158,"magic_flag", false,-1);
    tracep->declBus(c+156,"rd", false,-1, 4,0);
    tracep->declBus(c+157,"rs1", false,-1, 4,0);
    tracep->declBus(c+306,"rs2", false,-1, 4,0);
    tracep->declBit(c+62,"branch", false,-1);
    tracep->declBit(c+361,"op1_relate", false,-1);
    tracep->declBit(c+362,"op2_relate", false,-1);
    tracep->declBit(c+63,"csr_op1_stall", false,-1);
    tracep->declBit(c+64,"csr_op2_stall", false,-1);
    tracep->declBit(c+9,"id_stall_ena", false,-1);
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
    tracep->declBus(c+150,"inst", false,-1, 31,0);
    tracep->declBit(c+13,"rs1_ena", false,-1);
    tracep->declBit(c+15,"rs2_ena", false,-1);
    tracep->declBit(c+24,"csr_inst", false,-1);
    tracep->declBus(c+20,"wb_ctl", false,-1, 1,0);
    tracep->declBus(c+19,"mem_ctl", false,-1, 3,0);
    tracep->declBit(c+62,"branch", false,-1);
    tracep->declBus(c+27,"ext_imm", false,-1, 31,0);
    tracep->declBit(c+23,"load", false,-1);
    tracep->declBus(c+21,"op1_sel", false,-1, 1,0);
    tracep->declBus(c+22,"op2_sel", false,-1, 2,0);
    tracep->declBus(c+18,"alu_ctl", false,-1, 7,0);
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
    tracep->declBus(c+146,"pc_i", false,-1, 31,0);
    tracep->declBus(c+147,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+144,"inst_i", false,-1, 31,0);
    tracep->declBit(c+5,"bxx_inst_i", false,-1);
    tracep->declBit(c+2,"bp_jump_i", false,-1);
    tracep->declBit(c+10,"if_valid_i", false,-1);
    tracep->declBit(c+11,"id_flush_i", false,-1);
    tracep->declBit(c+365,"ls_flush_i", false,-1);
    tracep->declBit(c+9,"id_stall_i", false,-1);
    tracep->declBit(c+8,"id_ready_i", false,-1);
    tracep->declBus(c+148,"pc_o", false,-1, 31,0);
    tracep->declBus(c+149,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+150,"inst_o", false,-1, 31,0);
    tracep->declBit(c+151,"inst_bxx_o", false,-1);
    tracep->declBit(c+152,"bp_jump_o", false,-1);
    tracep->declBit(c+153,"if_valid_o", false,-1);
    tracep->declBit(c+142,"flush", false,-1);
    tracep->declBit(c+10,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_ifu ");
    tracep->declBit(c+355,"rst", false,-1);
    tracep->declBit(c+354,"clk", false,-1);
    tracep->declBit(c+365,"ls_pc_jump_i", false,-1);
    tracep->declBus(c+145,"ls_pc_i", false,-1, 31,0);
    tracep->declBit(c+6,"bp_pc_jump_i", false,-1);
    tracep->declBit(c+2,"bp_predict_i", false,-1);
    tracep->declBus(c+356,"bp_pc_i", false,-1, 31,0);
    tracep->declBit(c+29,"id_bxx_error_i", false,-1);
    tracep->declBus(c+7,"id_bxx_error_pc_i", false,-1, 31,0);
    tracep->declBit(c+5,"inst_bxx_i", false,-1);
    tracep->declBit(c+8,"id_ready_i", false,-1);
    tracep->declBit(c+9,"id_stall_i", false,-1);
    tracep->declBit(c+10,"if_valid_o", false,-1);
    tracep->declBus(c+144,"inst_i", false,-1, 31,0);
    tracep->declBus(c+146,"pc_o", false,-1, 31,0);
    tracep->declBus(c+144,"inst_o", false,-1, 31,0);
    tracep->declBus(c+147,"next_pc_o", false,-1, 31,0);
    tracep->declBit(c+5,"inst_bxx_o", false,-1);
    tracep->declBit(c+9,"stall", false,-1);
    tracep->declBus(c+146,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_ls_mem_reg ");
    tracep->declBit(c+354,"clk", false,-1);
    tracep->declBit(c+355,"rst", false,-1);
    tracep->declBus(c+175,"inst_i", false,-1, 31,0);
    tracep->declBus(c+183,"pc_i", false,-1, 31,0);
    tracep->declBus(c+184,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+177,"ls_ctl_i", false,-1, 3,0);
    tracep->declBus(c+178,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+145,"alu_res_i", false,-1, 31,0);
    tracep->declBit(c+186,"load_flag_i", false,-1);
    tracep->declBit(c+40,"re_i", false,-1);
    tracep->declBit(c+180,"rd_ena_i", false,-1);
    tracep->declBus(c+181,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+179,"csr_ctl_i", false,-1, 6,0);
    tracep->declBus(c+182,"csr_addr_i", false,-1, 11,0);
    tracep->declBus(c+43,"diff_test_skip_i", false,-1, 31,0);
    tracep->declBit(c+35,"ls_valid_i", false,-1);
    tracep->declBit(c+367,"mem_ready_i", false,-1);
    tracep->declBit(c+196,"ls_valid_o", false,-1);
    tracep->declBus(c+187,"inst_o", false,-1, 31,0);
    tracep->declBus(c+188,"pc_o", false,-1, 31,0);
    tracep->declBus(c+189,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+190,"ls_ctl_o", false,-1, 3,0);
    tracep->declBus(c+191,"wb_ctl_o", false,-1, 1,0);
    tracep->declBus(c+198,"alu_res_o", false,-1, 31,0);
    tracep->declBit(c+199,"load_flag_o", false,-1);
    tracep->declBit(c+197,"re_o", false,-1);
    tracep->declBit(c+192,"rd_ena_o", false,-1);
    tracep->declBus(c+193,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+194,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+195,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+200,"diff_test_skip_o", false,-1, 31,0);
    tracep->declBus(c+181,"ls_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+145,"ls_rd_data_forward", false,-1, 31,0);
    tracep->declBit(c+365,"flush", false,-1);
    tracep->declBit(c+35,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_lsu ");
    tracep->declBit(c+354,"clk", false,-1);
    tracep->declBit(c+355,"rst", false,-1);
    tracep->declBus(c+183,"pc_i", false,-1, 31,0);
    tracep->declBus(c+184,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+175,"inst_i", false,-1, 31,0);
    tracep->declBus(c+145,"alu_res_i", false,-1, 31,0);
    tracep->declBus(c+176,"store_data_i", false,-1, 31,0);
    tracep->declBus(c+177,"ls_ctl_i", false,-1, 3,0);
    tracep->declBit(c+367,"mem_ready_i", false,-1);
    tracep->declBit(c+185,"ex_valid_i", false,-1);
    tracep->declBit(c+1,"ls_ready_o", false,-1);
    tracep->declBit(c+35,"ls_valid_o", false,-1);
    tracep->declBit(c+365,"ls_flush_o", false,-1);
    tracep->declBit(c+365,"ls_jump_o", false,-1);
    tracep->declBus(c+145,"ls_jump_pc_o", false,-1, 31,0);
    tracep->declBit(c+40,"re", false,-1);
    tracep->declBit(c+36,"we", false,-1);
    tracep->declBus(c+37,"data_o", false,-1, 31,0);
    tracep->declBus(c+38,"raddr", false,-1, 31,0);
    tracep->declBus(c+38,"waddr", false,-1, 31,0);
    tracep->declBus(c+39,"wlen", false,-1, 7,0);
    tracep->declBus(c+366,"rlen", false,-1, 7,0);
    tracep->declBus(c+175,"inst_o", false,-1, 31,0);
    tracep->declBus(c+183,"pc_o", false,-1, 31,0);
    tracep->declBus(c+184,"next_pc_o", false,-1, 31,0);
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
    tracep->declBus(c+187,"inst_i", false,-1, 31,0);
    tracep->declBus(c+188,"pc_i", false,-1, 31,0);
    tracep->declBus(c+189,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+191,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+198,"alu_res_i", false,-1, 31,0);
    tracep->declBit(c+197,"re", false,-1);
    tracep->declBit(c+192,"rd_ena_i", false,-1);
    tracep->declBus(c+193,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+194,"csr_ctl_i", false,-1, 6,0);
    tracep->declBus(c+195,"csr_addr_i", false,-1, 11,0);
    tracep->declBus(c+190,"ls_ctl_i", false,-1, 3,0);
    tracep->declBus(c+257,"mem_data_i", false,-1, 31,0);
    tracep->declBit(c+196,"ls_valid_i", false,-1);
    tracep->declBit(c+367,"wb_ready_i", false,-1);
    tracep->declBit(c+201,"mem_valid_o", false,-1);
    tracep->declBit(c+367,"mem_ready_o", false,-1);
    tracep->declBus(c+187,"inst_o", false,-1, 31,0);
    tracep->declBus(c+188,"pc_o", false,-1, 31,0);
    tracep->declBus(c+189,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+191,"wb_ctl_o", false,-1, 1,0);
    tracep->declBus(c+198,"alu_res_o", false,-1, 31,0);
    tracep->declBit(c+192,"rd_ena_o", false,-1);
    tracep->declBus(c+193,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+194,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+195,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+41,"mem_data_o", false,-1, 31,0);
    tracep->declBus(c+364,"load_data", false,-1, 31,0);
    tracep->declBit(c+317,"data_ok", false,-1);
    tracep->declBus(c+318,"data_byte", false,-1, 7,0);
    tracep->declBus(c+319,"data_half", false,-1, 15,0);
    tracep->declBus(c+257,"data_word", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_mem_wb_reg ");
    tracep->declBit(c+354,"clk", false,-1);
    tracep->declBit(c+355,"rst", false,-1);
    tracep->declBus(c+187,"inst_i", false,-1, 31,0);
    tracep->declBus(c+188,"pc_i", false,-1, 31,0);
    tracep->declBus(c+189,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+191,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+41,"mem_data_i", false,-1, 31,0);
    tracep->declBit(c+199,"load_flag_i", false,-1);
    tracep->declBus(c+198,"alu_res_i", false,-1, 31,0);
    tracep->declBit(c+192,"rd_ena_i", false,-1);
    tracep->declBus(c+193,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+194,"csr_ctl_i", false,-1, 6,0);
    tracep->declBus(c+195,"csr_addr_i", false,-1, 11,0);
    tracep->declBus(c+200,"dpic_diff_skip_flag_i", false,-1, 31,0);
    tracep->declBit(c+201,"mem_valid_i", false,-1);
    tracep->declBit(c+367,"wb_ready_i", false,-1);
    tracep->declBit(c+212,"mem_valid_o", false,-1);
    tracep->declBus(c+202,"inst_o", false,-1, 31,0);
    tracep->declBus(c+203,"pc_o", false,-1, 31,0);
    tracep->declBus(c+204,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+206,"alu_res_o", false,-1, 31,0);
    tracep->declBus(c+205,"mem_data_o", false,-1, 31,0);
    tracep->declBit(c+213,"load_flag_o", false,-1);
    tracep->declBus(c+207,"wb_ctl_o", false,-1, 1,0);
    tracep->declBit(c+208,"rd_ena_o", false,-1);
    tracep->declBus(c+209,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+210,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+211,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+214,"dpic_diff_skip_flag_o", false,-1, 31,0);
    tracep->declBus(c+193,"mem_rd_addr_forward_o", false,-1, 4,0);
    tracep->declBus(c+42,"mem_rd_data_forward_o", false,-1, 31,0);
    tracep->declBit(c+365,"flush", false,-1);
    tracep->declBit(c+201,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_regfile ");
    tracep->declBit(c+354,"clk", false,-1);
    tracep->declBit(c+355,"rst", false,-1);
    tracep->declBus(c+209,"waddr", false,-1, 4,0);
    tracep->declBus(c+215,"wdata", false,-1, 31,0);
    tracep->declBit(c+208,"wen", false,-1);
    tracep->declBit(c+13,"ren1", false,-1);
    tracep->declBit(c+15,"ren2", false,-1);
    tracep->declBus(c+12,"raddr1", false,-1, 4,0);
    tracep->declBus(c+14,"raddr2", false,-1, 4,0);
    tracep->declBus(c+358,"rdata1", false,-1, 31,0);
    tracep->declBus(c+359,"rdata2", false,-1, 31,0);
    tracep->declBus(c+219,"regs0_zero", false,-1, 31,0);
    tracep->declBus(c+220,"regs1_ra", false,-1, 31,0);
    tracep->declBus(c+221,"regs2_sp", false,-1, 31,0);
    tracep->declBus(c+222,"regs3_gp", false,-1, 31,0);
    tracep->declBus(c+223,"regs4_tp", false,-1, 31,0);
    tracep->declBus(c+224,"regs5_t0", false,-1, 31,0);
    tracep->declBus(c+225,"regs6_t1", false,-1, 31,0);
    tracep->declBus(c+226,"regs7_t2", false,-1, 31,0);
    tracep->declBus(c+227,"regs8_s0", false,-1, 31,0);
    tracep->declBus(c+228,"regs9_s1", false,-1, 31,0);
    tracep->declBus(c+229,"regs10_a0", false,-1, 31,0);
    tracep->declBus(c+230,"regs11_a1", false,-1, 31,0);
    tracep->declBus(c+231,"regs12_a2", false,-1, 31,0);
    tracep->declBus(c+232,"regs13_a3", false,-1, 31,0);
    tracep->declBus(c+233,"regs14_a4", false,-1, 31,0);
    tracep->declBus(c+234,"regs15_a5", false,-1, 31,0);
    tracep->declBus(c+235,"regs16_a6", false,-1, 31,0);
    tracep->declBus(c+236,"regs17_a7", false,-1, 31,0);
    tracep->declBus(c+237,"regs18_s2", false,-1, 31,0);
    tracep->declBus(c+238,"regs19_s3", false,-1, 31,0);
    tracep->declBus(c+239,"regs20_s4", false,-1, 31,0);
    tracep->declBus(c+240,"regs21_s5", false,-1, 31,0);
    tracep->declBus(c+241,"regs22_s6", false,-1, 31,0);
    tracep->declBus(c+242,"regs23_s7", false,-1, 31,0);
    tracep->declBus(c+243,"regs24_t3", false,-1, 31,0);
    tracep->declBus(c+244,"regs25_t4", false,-1, 31,0);
    tracep->declBus(c+245,"regs26_t5", false,-1, 31,0);
    tracep->declBus(c+246,"regs27_t6", false,-1, 31,0);
    tracep->declBus(c+247,"regs28_t3", false,-1, 31,0);
    tracep->declBus(c+248,"regs29_t4", false,-1, 31,0);
    tracep->declBus(c+249,"regs30_t5", false,-1, 31,0);
    tracep->declBus(c+250,"regs31_t6", false,-1, 31,0);
    tracep->declBus(c+3,"bp_rs1_addr_i", false,-1, 4,0);
    tracep->declBit(c+4,"bp_rs1_ena_i", false,-1);
    tracep->declBus(c+357,"bp_rs1_data_o", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+320+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_wbu ");
    tracep->declBus(c+205,"ls_rd_data_i", false,-1, 31,0);
    tracep->declBus(c+207,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+206,"exu_res_i", false,-1, 31,0);
    tracep->declBus(c+203,"pc_i", false,-1, 31,0);
    tracep->declBus(c+204,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+202,"inst_i", false,-1, 31,0);
    tracep->declBus(c+209,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+208,"rd_ena_i", false,-1);
    tracep->declBus(c+210,"csr_ctl_i", false,-1, 6,0);
    tracep->declBus(c+211,"csr_addr_i", false,-1, 11,0);
    tracep->declBus(c+256,"read_csr_data_i", false,-1, 31,0);
    tracep->declBit(c+212,"ls_valid_i", false,-1);
    tracep->declBus(c+215,"wb_data_o", false,-1, 31,0);
    tracep->declBit(c+367,"wb_ready_o", false,-1);
    tracep->declBit(c+208,"wb_rd_ena_o", false,-1);
    tracep->declBus(c+209,"wb_rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+209,"wb_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+216,"wb_rd_data_forward", false,-1, 31,0);
    tracep->declBus(c+202,"wbu_dpic_inst_o", false,-1, 31,0);
    tracep->declBus(c+203,"wbu_dpic_pc_o", false,-1, 31,0);
    tracep->declBus(c+204,"wbu_dpic_next_pc_o", false,-1, 31,0);
    tracep->declBit(c+212,"wbu_dpic_valid_o", false,-1);
    tracep->declBus(c+210,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+211,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+217,"mcause_value_o", false,-1, 31,0);
    tracep->declBus(c+218,"write_csr_data_o", false,-1, 31,0);
    tracep->declBus(c+352,"set_data", false,-1, 31,0);
    tracep->declBus(c+353,"clear_data", false,-1, 31,0);
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
    bufp->fullBit(oldp+2,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bxx_taken));
    bufp->fullCData(oldp+3,(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr),5);
    bufp->fullBit(oldp+4,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr));
    bufp->fullBit(oldp+5,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_bxx));
    bufp->fullBit(oldp+6,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal) 
                           | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr))));
    bufp->fullIData(oldp+7,((((- (IData)((3U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__predict_error_ctl)))) 
                              & ((IData)(4U) + vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc)) 
                             | (((- (IData)((2U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__predict_error_ctl)))) 
                                 & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h71cc746e__0) 
                                | (0xfffffffeU & ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__jalr_bpu_jump_error))) 
                                                  & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_hd158f2b5__0))))),32);
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
    bufp->fullCData(oldp+17,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rd_ena)
                               ? (0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                           >> 7U)) : 0U)),5);
    bufp->fullCData(oldp+18,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc),8);
    bufp->fullCData(oldp+19,((0xfU & ((1U & (- (IData)(
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
    bufp->fullCData(oldp+20,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_wbctl),2);
    bufp->fullCData(oldp+21,(((2U & ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                                     | ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr))) 
                                        | (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc)))))) 
                              | (1U & (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena)))))),2);
    bufp->fullCData(oldp+22,(((2U & ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                                     | (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr))))) 
                              | ((4U & (- (IData)(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77eb01fa__0) 
                                                   | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                                                      | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0) 
                                                         | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70f4116c__0) 
                                                            | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
                                                               | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd9b03bc2__0))))))))) 
                                 | (1U & (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena))))))),3);
    bufp->fullBit(oldp+23,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag));
    bufp->fullBit(oldp+24,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw) 
                            | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs) 
                               | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc) 
                                  | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi) 
                                     | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi) 
                                        | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci))))))));
    bufp->fullIData(oldp+25,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op2),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm),32);
    bufp->fullIData(oldp+28,(((0x21U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                               ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h71cc746e__0
                               : ((0x42U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                                   ? (0xfffffffeU & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_hd158f2b5__0)
                                   : (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst_bxx) 
                                       & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__now_bxx_jump_yes))
                                       ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h71cc746e__0
                                       : (((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__now_bxx_jump_yes)) 
                                           & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst_bxx))
                                           ? ((IData)(4U) 
                                              + vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc)
                                           : vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc))))),32);
    bufp->fullBit(oldp+29,((IData)((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__predict_error_ctl) 
                                     >> 1U) | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__jalr_bpu_jump_error)))));
    bufp->fullBit(oldp+30,((1U & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__predict_error_ctl) 
                                  >> 1U))));
    bufp->fullBit(oldp+31,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_valid));
    bufp->fullIData(oldp+32,(vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res),32);
    bufp->fullSData(oldp+33,(((0U != (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_he71b3f47__0))
                               ? (0xfffU & vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm)
                               : 0U)),12);
    bufp->fullCData(oldp+34,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena) 
                               << 6U) | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena) 
                                          << 5U) | 
                                         (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena) 
                                           << 4U) | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_he71b3f47__0))))),7);
    bufp->fullBit(oldp+35,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_valid));
    bufp->fullBit(oldp+36,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_we));
    bufp->fullIData(oldp+37,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_data),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_raddr),32);
    bufp->fullCData(oldp+39,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen),8);
    bufp->fullBit(oldp+40,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_re));
    bufp->fullIData(oldp+41,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_data),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_rd_data_forward),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_25060170_fishtailcore__DOT__dpi_ls_mem_skip_flag),32);
    bufp->fullIData(oldp+44,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__mem_data),32);
    bufp->fullIData(oldp+45,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal)
                               ? (((- (IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                               >> 0x1fU))) 
                                   << 0x15U) | ((0x100000U 
                                                 & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                    >> 0xbU)) 
                                                | ((0xff000U 
                                                    & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst) 
                                                   | ((0x800U 
                                                       & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                            >> 0x14U))))))
                               : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr)
                                   ? (((- (IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                   >> 0x14U))
                                   : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_bxx)
                                       ? (((- (IData)(
                                                      (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                       >> 0x1fU))) 
                                           << 0xdU) 
                                          | ((0x1000U 
                                              & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                 >> 0x13U)) 
                                             | ((0x800U 
                                                 & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                         >> 7U))))))
                                       : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgTmp_hff229178__0)
                                           ? 0U : 4U))))),32);
    bufp->fullBit(oldp+46,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal));
    bufp->fullIData(oldp+47,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc),32);
    bufp->fullIData(oldp+48,((0xfffffffeU & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc)),32);
    bufp->fullBit(oldp+49,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                            == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr))));
    bufp->fullBit(oldp+50,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                            == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr))));
    bufp->fullBit(oldp+51,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                            == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr))));
    bufp->fullBit(oldp+52,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_bxx) 
                            & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_not_taken_state) 
                               | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_not_taken_state)))));
    bufp->fullIData(oldp+53,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res),32);
    bufp->fullBit(oldp+54,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena));
    bufp->fullBit(oldp+55,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena));
    bufp->fullBit(oldp+56,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena));
    bufp->fullBit(oldp+57,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena));
    bufp->fullBit(oldp+58,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena));
    bufp->fullBit(oldp+59,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena));
    bufp->fullBit(oldp+60,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena));
    bufp->fullBit(oldp+61,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_id_ex_reg__DOT__stall));
    bufp->fullBit(oldp+62,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__branch));
    bufp->fullBit(oldp+63,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward) 
                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_hf3b640d6__0)) 
                            | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward) 
                               & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h5ab066c6__0)))));
    bufp->fullBit(oldp+64,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward) 
                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_hf3b640d6__0)) 
                            | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward) 
                               & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h5ab066c6__0)))));
    bufp->fullBit(oldp+65,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward));
    bufp->fullBit(oldp+66,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward));
    bufp->fullBit(oldp+67,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op1_forward));
    bufp->fullBit(oldp+68,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward));
    bufp->fullBit(oldp+69,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward));
    bufp->fullBit(oldp+70,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward));
    bufp->fullBit(oldp+71,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op2_forward));
    bufp->fullBit(oldp+72,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward));
    bufp->fullBit(oldp+73,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_forward_ena));
    bufp->fullBit(oldp+74,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op2_forward_ena));
    bufp->fullIData(oldp+75,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward)
                               ? vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res
                               : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward)
                                   ? vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
                                   : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op1_forward)
                                       ? vlSelf->ysyx_25060170_fishtailcore__DOT__mem_rd_data_forward
                                       : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward)
                                           ? vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward
                                           : 0U))))),32);
    bufp->fullIData(oldp+76,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward)
                               ? vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res
                               : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward)
                                   ? vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
                                   : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op2_forward)
                                       ? vlSelf->ysyx_25060170_fishtailcore__DOT__mem_rd_data_forward
                                       : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward)
                                           ? vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward
                                           : 0U))))),32);
    bufp->fullBit(oldp+77,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__jalr_bpu_jump_error));
    bufp->fullBit(oldp+78,(((vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1 
                             ^ vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op2) 
                            >> 0x1fU)));
    bufp->fullBit(oldp+79,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2));
    bufp->fullBit(oldp+80,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2));
    bufp->fullBit(oldp+81,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__now_bxx_jump_yes));
    bufp->fullCData(oldp+82,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__predict_error_ctl),2);
    bufp->fullCData(oldp+83,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
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
    bufp->fullBit(oldp+84,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui));
    bufp->fullBit(oldp+85,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc));
    bufp->fullBit(oldp+86,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal));
    bufp->fullBit(oldp+87,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr));
    bufp->fullBit(oldp+88,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h489c6f46__0))));
    bufp->fullBit(oldp+89,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h489c6f46__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+90,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he80da865__0))));
    bufp->fullBit(oldp+91,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he80da865__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+92,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc65f4c50__0))));
    bufp->fullBit(oldp+93,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc65f4c50__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+94,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h1167153d__0))));
    bufp->fullBit(oldp+95,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h1167153d__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+96,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h29152e89__0))));
    bufp->fullBit(oldp+97,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h29152e89__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+98,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_heac6e652__0) 
                            & (IData)((0x2000U == (0x3000U 
                                                   & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst))))));
    bufp->fullBit(oldp+99,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7855af38__0))));
    bufp->fullBit(oldp+100,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7855af38__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+101,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2bc0716a__0))));
    bufp->fullBit(oldp+102,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2bc0716a__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+103,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h6fd23990__0))));
    bufp->fullBit(oldp+104,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h6fd23990__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+105,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h03cab0f1__0))));
    bufp->fullBit(oldp+106,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7b49f5a3__0))));
    bufp->fullBit(oldp+107,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h36e9ef3c__0))));
    bufp->fullBit(oldp+108,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he2955f6b__0))));
    bufp->fullBit(oldp+109,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h4c825e07__0))));
    bufp->fullBit(oldp+110,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h3b427111__0))));
    bufp->fullBit(oldp+111,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h03cab0f1__0))));
    bufp->fullBit(oldp+112,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7b49f5a3__0))));
    bufp->fullBit(oldp+113,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd7439362__0))));
    bufp->fullBit(oldp+114,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7a82fdcc__0))));
    bufp->fullBit(oldp+115,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h3b427111__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+116,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+117,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+118,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h36e9ef3c__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+119,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he2955f6b__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+120,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h4c825e07__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+121,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd7439362__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+122,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7a82fdcc__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+123,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h41ceee20__0))));
    bufp->fullBit(oldp+124,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc1b77381__0))));
    bufp->fullBit(oldp+125,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc1b77381__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+126,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_ha08c85bd__0))));
    bufp->fullBit(oldp+127,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5a06bcf6__0))));
    bufp->fullBit(oldp+128,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5a06bcf6__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+129,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h41ceee20__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+130,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x1eU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2e86cea5__0))));
    bufp->fullBit(oldp+131,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2e86cea5__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x1eU))));
    bufp->fullBit(oldp+132,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall));
    bufp->fullBit(oldp+133,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h84595378__0) 
                             & (IData)((0x30000000U 
                                        == (0x30000000U 
                                            & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst))))));
    bufp->fullBit(oldp+134,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw));
    bufp->fullBit(oldp+135,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs));
    bufp->fullBit(oldp+136,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc));
    bufp->fullBit(oldp+137,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi));
    bufp->fullBit(oldp+138,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi));
    bufp->fullBit(oldp+139,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci));
    bufp->fullBit(oldp+140,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h84595378__0) 
                             & (1U == (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                       >> 0x14U)))));
    bufp->fullBit(oldp+141,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77eb01fa__0) 
                             | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                                | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0) 
                                   | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70f4116c__0) 
                                      | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
                                         | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd9b03bc2__0))))))));
    bufp->fullBit(oldp+142,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if_id_reg__DOT__flush));
    bufp->fullCData(oldp+143,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask),4);
    bufp->fullIData(oldp+144,(vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst),32);
    bufp->fullIData(oldp+145,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res),32);
    bufp->fullIData(oldp+146,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ifu__DOT__pc),32);
    bufp->fullIData(oldp+147,(((IData)(4U) + vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ifu__DOT__pc)),32);
    bufp->fullIData(oldp+148,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc),32);
    bufp->fullIData(oldp+149,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc),32);
    bufp->fullIData(oldp+150,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst),32);
    bufp->fullBit(oldp+151,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst_bxx));
    bufp->fullBit(oldp+152,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_bp_jump));
    bufp->fullBit(oldp+153,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_valid));
    bufp->fullBit(oldp+154,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena));
    bufp->fullBit(oldp+155,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_csr_ena));
    bufp->fullCData(oldp+156,((0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+157,((0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                        >> 0xfU))),5);
    bufp->fullBit(oldp+158,((0x40000033U == vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    bufp->fullCData(oldp+159,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc),8);
    bufp->fullIData(oldp+160,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc),32);
    bufp->fullIData(oldp+161,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst),32);
    bufp->fullIData(oldp+162,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc),32);
    bufp->fullIData(oldp+163,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1),32);
    bufp->fullIData(oldp+164,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2),32);
    bufp->fullCData(oldp+165,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel),2);
    bufp->fullCData(oldp+166,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel),3);
    bufp->fullBit(oldp+167,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena));
    bufp->fullCData(oldp+168,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr),5);
    bufp->fullCData(oldp+169,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr),5);
    bufp->fullIData(oldp+170,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm),32);
    bufp->fullCData(oldp+171,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl),4);
    bufp->fullCData(oldp+172,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl),2);
    bufp->fullBit(oldp+173,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag));
    bufp->fullBit(oldp+174,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_valid));
    bufp->fullIData(oldp+175,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst),32);
    bufp->fullIData(oldp+176,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data),32);
    bufp->fullCData(oldp+177,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl),4);
    bufp->fullCData(oldp+178,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl),2);
    bufp->fullCData(oldp+179,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl),7);
    bufp->fullBit(oldp+180,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena));
    bufp->fullCData(oldp+181,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr),5);
    bufp->fullSData(oldp+182,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr),12);
    bufp->fullIData(oldp+183,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc),32);
    bufp->fullIData(oldp+184,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc),32);
    bufp->fullBit(oldp+185,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_valid));
    bufp->fullBit(oldp+186,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag));
    bufp->fullIData(oldp+187,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst),32);
    bufp->fullIData(oldp+188,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc),32);
    bufp->fullIData(oldp+189,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc),32);
    bufp->fullCData(oldp+190,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl),4);
    bufp->fullCData(oldp+191,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl),2);
    bufp->fullBit(oldp+192,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena));
    bufp->fullCData(oldp+193,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr),5);
    bufp->fullCData(oldp+194,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl),7);
    bufp->fullSData(oldp+195,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr),12);
    bufp->fullBit(oldp+196,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_valid));
    bufp->fullBit(oldp+197,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re));
    bufp->fullIData(oldp+198,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res),32);
    bufp->fullBit(oldp+199,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag));
    bufp->fullIData(oldp+200,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_diff_skip),32);
    bufp->fullBit(oldp+201,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_valid));
    bufp->fullIData(oldp+202,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_inst),32);
    bufp->fullIData(oldp+203,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_pc),32);
    bufp->fullIData(oldp+204,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc),32);
    bufp->fullIData(oldp+205,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res),32);
    bufp->fullIData(oldp+206,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data),32);
    bufp->fullCData(oldp+207,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl),2);
    bufp->fullBit(oldp+208,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena));
    bufp->fullCData(oldp+209,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr),5);
    bufp->fullCData(oldp+210,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl),7);
    bufp->fullSData(oldp+211,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr),12);
    bufp->fullBit(oldp+212,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_valid_o));
    bufp->fullBit(oldp+213,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_reg_load_flag));
    bufp->fullIData(oldp+214,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_skip_flag),32);
    bufp->fullIData(oldp+215,((((- (IData)((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl)))) 
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
    bufp->fullIData(oldp+216,(vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward),32);
    bufp->fullIData(oldp+217,(((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                ? 0xbU : 0U)),32);
    bufp->fullIData(oldp+218,(vlSelf->ysyx_25060170_fishtailcore__DOT__wb_csr_write_csr_data),32);
    bufp->fullIData(oldp+219,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0U]),32);
    bufp->fullIData(oldp+220,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [1U]),32);
    bufp->fullIData(oldp+221,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [2U]),32);
    bufp->fullIData(oldp+222,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [3U]),32);
    bufp->fullIData(oldp+223,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [4U]),32);
    bufp->fullIData(oldp+224,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [5U]),32);
    bufp->fullIData(oldp+225,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [6U]),32);
    bufp->fullIData(oldp+226,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [7U]),32);
    bufp->fullIData(oldp+227,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [8U]),32);
    bufp->fullIData(oldp+228,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [9U]),32);
    bufp->fullIData(oldp+229,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xaU]),32);
    bufp->fullIData(oldp+230,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xbU]),32);
    bufp->fullIData(oldp+231,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xcU]),32);
    bufp->fullIData(oldp+232,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xdU]),32);
    bufp->fullIData(oldp+233,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xeU]),32);
    bufp->fullIData(oldp+234,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xfU]),32);
    bufp->fullIData(oldp+235,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x10U]),32);
    bufp->fullIData(oldp+236,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x11U]),32);
    bufp->fullIData(oldp+237,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x12U]),32);
    bufp->fullIData(oldp+238,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x13U]),32);
    bufp->fullIData(oldp+239,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x14U]),32);
    bufp->fullIData(oldp+240,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x15U]),32);
    bufp->fullIData(oldp+241,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x16U]),32);
    bufp->fullIData(oldp+242,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x17U]),32);
    bufp->fullIData(oldp+243,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x18U]),32);
    bufp->fullIData(oldp+244,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x19U]),32);
    bufp->fullIData(oldp+245,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1aU]),32);
    bufp->fullIData(oldp+246,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1bU]),32);
    bufp->fullIData(oldp+247,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1cU]),32);
    bufp->fullIData(oldp+248,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1dU]),32);
    bufp->fullIData(oldp+249,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1eU]),32);
    bufp->fullIData(oldp+250,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1fU]),32);
    bufp->fullIData(oldp+251,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus),32);
    bufp->fullIData(oldp+252,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mepc),32);
    bufp->fullIData(oldp+253,((vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
                               << 2U)),32);
    bufp->fullIData(oldp+254,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mcause),32);
    bufp->fullIData(oldp+255,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mscratch),32);
    bufp->fullIData(oldp+256,(vlSelf->ysyx_25060170_fishtailcore__DOT__csr_wbu_read_csr_data),32);
    bufp->fullIData(oldp+257,(vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data),32);
    bufp->fullBit(oldp+258,((0x6fU == (0x7fU & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst))));
    bufp->fullBit(oldp+259,((0x67U == (0x7fU & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst))));
    bufp->fullBit(oldp+260,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_not_taken_state));
    bufp->fullBit(oldp+261,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_not_taken_state));
    bufp->fullBit(oldp+262,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state));
    bufp->fullBit(oldp+263,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state));
    bufp->fullIData(oldp+264,(((0x100000U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                             >> 0xbU)) 
                               | ((0xff000U & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst) 
                                  | ((0x800U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                >> 9U)) 
                                     | (0x7feU & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                  >> 0x14U)))))),21);
    bufp->fullSData(oldp+265,(((0x1000U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                           >> 0x13U)) 
                               | ((0x800U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                             << 4U)) 
                                  | ((0x7e0U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                >> 0x14U)) 
                                     | (0x1eU & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                 >> 7U)))))),13);
    bufp->fullSData(oldp+266,((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                               >> 0x14U)),12);
    bufp->fullCData(oldp+267,((0x7fU & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst)),7);
    bufp->fullIData(oldp+268,((((- (IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                            >> 0x1fU))) 
                                << 0x15U) | ((0x100000U 
                                              & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                 >> 0xbU)) 
                                             | ((0xff000U 
                                                 & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                         >> 0x14U))))))),32);
    bufp->fullIData(oldp+269,((((- (IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                            >> 0x1fU))) 
                                << 0xdU) | ((0x1000U 
                                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                        >> 7U))))))),32);
    bufp->fullIData(oldp+270,((((- (IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                            >> 0x14U))),32);
    bufp->fullCData(oldp+271,((0xfU & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))),4);
    bufp->fullBit(oldp+272,(((0x300U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 2U))));
    bufp->fullBit(oldp+273,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr));
    bufp->fullBit(oldp+274,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie));
    bufp->fullBit(oldp+275,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie));
    bufp->fullCData(oldp+276,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp),2);
    bufp->fullBit(oldp+277,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena));
    bufp->fullBit(oldp+278,((1U & ((~ ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 1U)) & ((1U 
                                                   & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                                   ? (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)
                                                   : 
                                                  ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                                    ? 
                                                   (vlSelf->ysyx_25060170_fishtailcore__DOT__wb_csr_write_csr_data 
                                                    >> 3U)
                                                    : (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)))))));
    bufp->fullBit(oldp+279,((1U & ((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                    ? (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)
                                    : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                           ? (vlSelf->ysyx_25060170_fishtailcore__DOT__wb_csr_write_csr_data 
                                              >> 7U)
                                           : (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)))))));
    bufp->fullCData(oldp+280,(((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                ? 3U : ((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                         ? 0U : (3U 
                                                 & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                                     ? 
                                                    (vlSelf->ysyx_25060170_fishtailcore__DOT__wb_csr_write_csr_data 
                                                     >> 0xdU)
                                                     : (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp)))))),2);
    bufp->fullBit(oldp+281,((1U & (((0x305U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                    & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 2U)) | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+282,(((0x305U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 3U))));
    bufp->fullIData(oldp+283,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mtvec_base),30);
    bufp->fullBit(oldp+284,((1U & (((0x341U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                    & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 2U)) | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl)))));
    bufp->fullBit(oldp+285,((1U & (((0x341U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                    & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 3U)) | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+286,(((0x342U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 2U))));
    bufp->fullBit(oldp+287,(((0x342U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 3U))));
    bufp->fullBit(oldp+288,(((0xf12U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 2U))));
    bufp->fullBit(oldp+289,(((0x340U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 2U))));
    bufp->fullBit(oldp+290,(((0x340U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 3U))));
    bufp->fullBit(oldp+291,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall));
    bufp->fullIData(oldp+292,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1),32);
    bufp->fullIData(oldp+293,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2),32);
    bufp->fullIData(oldp+294,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2),32);
    bufp->fullIData(oldp+295,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2),32);
    bufp->fullBit(oldp+296,((1U & (((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
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
    bufp->fullIData(oldp+297,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2),32);
    bufp->fullQData(oldp+298,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul),64);
    bufp->fullIData(oldp+300,((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul)),32);
    bufp->fullIData(oldp+301,((IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+302,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div),32);
    bufp->fullIData(oldp+303,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__rem),32);
    bufp->fullIData(oldp+304,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr),32);
    bufp->fullBit(oldp+305,(((0x94U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                             | ((0xc8U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                | (0xa4U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))))));
    bufp->fullCData(oldp+306,((0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+307,((0x7fU & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)),7);
    bufp->fullCData(oldp+308,((7U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+309,((vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0x19U)),7);
    bufp->fullSData(oldp+310,((vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+311,(((0x80000U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                            >> 0xcU)) 
                               | ((0x7f800U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                               >> 1U)) 
                                  | ((0x400U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                >> 0xaU)) 
                                     | (0x3ffU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                  >> 0x15U)))))),20);
    bufp->fullIData(oldp+312,((vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU)),20);
    bufp->fullSData(oldp+313,(((0xfe0U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                           >> 7U)))),12);
    bufp->fullSData(oldp+314,(((0x800U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                          >> 0x14U)) 
                               | ((0x400U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                             << 3U)) 
                                  | ((0x3f0U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                >> 0x15U)) 
                                     | (0xfU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                >> 8U)))))),12);
    bufp->fullBit(oldp+315,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__data_ok));
    bufp->fullCData(oldp+316,((3U & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res)),2);
    bufp->fullBit(oldp+317,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_mem__DOT__data_ok));
    bufp->fullCData(oldp+318,((0xffU & vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data)),8);
    bufp->fullSData(oldp+319,((0xffffU & vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data)),16);
    bufp->fullIData(oldp+320,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0]),32);
    bufp->fullIData(oldp+321,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[1]),32);
    bufp->fullIData(oldp+322,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[2]),32);
    bufp->fullIData(oldp+323,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[3]),32);
    bufp->fullIData(oldp+324,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[4]),32);
    bufp->fullIData(oldp+325,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[5]),32);
    bufp->fullIData(oldp+326,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[6]),32);
    bufp->fullIData(oldp+327,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[7]),32);
    bufp->fullIData(oldp+328,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[8]),32);
    bufp->fullIData(oldp+329,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[9]),32);
    bufp->fullIData(oldp+330,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[10]),32);
    bufp->fullIData(oldp+331,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[11]),32);
    bufp->fullIData(oldp+332,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[12]),32);
    bufp->fullIData(oldp+333,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[13]),32);
    bufp->fullIData(oldp+334,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[14]),32);
    bufp->fullIData(oldp+335,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[15]),32);
    bufp->fullIData(oldp+336,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[16]),32);
    bufp->fullIData(oldp+337,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[17]),32);
    bufp->fullIData(oldp+338,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[18]),32);
    bufp->fullIData(oldp+339,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[19]),32);
    bufp->fullIData(oldp+340,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[20]),32);
    bufp->fullIData(oldp+341,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[21]),32);
    bufp->fullIData(oldp+342,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[22]),32);
    bufp->fullIData(oldp+343,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[23]),32);
    bufp->fullIData(oldp+344,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[24]),32);
    bufp->fullIData(oldp+345,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[25]),32);
    bufp->fullIData(oldp+346,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[26]),32);
    bufp->fullIData(oldp+347,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[27]),32);
    bufp->fullIData(oldp+348,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[28]),32);
    bufp->fullIData(oldp+349,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[29]),32);
    bufp->fullIData(oldp+350,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[30]),32);
    bufp->fullIData(oldp+351,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[31]),32);
    bufp->fullIData(oldp+352,((vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data 
                               | vlSelf->ysyx_25060170_fishtailcore__DOT__csr_wbu_read_csr_data)),32);
    bufp->fullIData(oldp+353,(((~ vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data) 
                               & vlSelf->ysyx_25060170_fishtailcore__DOT__csr_wbu_read_csr_data)),32);
    bufp->fullBit(oldp+354,(vlSelf->clk));
    bufp->fullBit(oldp+355,(vlSelf->rst));
    bufp->fullIData(oldp+356,(((0x80000000U & (- (IData)((IData)(vlSelf->rst)))) 
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
    bufp->fullIData(oldp+357,((((~ (IData)(vlSelf->rst)) 
                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr))
                                ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                               [vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr]
                                : 0U)),32);
    bufp->fullIData(oldp+358,((((~ (IData)(vlSelf->rst)) 
                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena))
                                ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                               [vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr]
                                : 0U)),32);
    bufp->fullIData(oldp+359,((((~ (IData)(vlSelf->rst)) 
                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena))
                                ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                               [vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr]
                                : 0U)),32);
    bufp->fullIData(oldp+360,(((IData)(vlSelf->__VdfgTmp_h46471f4e__0)
                                ? vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
                                : (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr) 
                                    & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                                       == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))
                                    ? vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res
                                    : ((IData)(vlSelf->__VdfgTmp_h46471f4e__0)
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
    bufp->fullBit(oldp+361,(((~ ((IData)(vlSelf->rst) 
                                 & (0U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)))) 
                             & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena) 
                                 & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h5a345cf6__0) 
                                    & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr) 
                                       == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))) 
                                | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_ha77af658__0) 
                                   & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr) 
                                      == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr)))))));
    bufp->fullBit(oldp+362,(((~ ((IData)(vlSelf->rst) 
                                 & (0U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)))) 
                             & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena) 
                                 & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h5a345cf6__0) 
                                    & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr) 
                                       == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))) 
                                | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_ha77af658__0) 
                                   & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr) 
                                      == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr)))))));
    bufp->fullCData(oldp+363,(((IData)(vlSelf->rst)
                                ? 0U : ((0U == (3U 
                                                & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                         ? 3U : ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                                  ? 0xcU
                                                  : 0U)))),4);
    bufp->fullIData(oldp+364,(((IData)(vlSelf->rst)
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
                                                  & vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                  ? 
                                                 (0xffU 
                                                  & vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data)
                                                  : 0U))
                                             : ((2U 
                                                 & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                  ? vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data
                                                  : 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data))
                                                  : 0U)))
                                         : 0U))),32);
    bufp->fullBit(oldp+365,(0U));
    bufp->fullCData(oldp+366,(4U),8);
    bufp->fullBit(oldp+367,(1U));
    bufp->fullIData(oldp+368,(0U),32);
    bufp->fullIData(oldp+369,(2U),32);
    bufp->fullIData(oldp+370,(1U),32);
    bufp->fullCData(oldp+371,(0U),2);
    bufp->fullCData(oldp+372,(0xfU),4);
}
