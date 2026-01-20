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
    tracep->declBit(c+347,"clk", false,-1);
    tracep->declBit(c+348,"rst", false,-1);
    tracep->pushNamePrefix("ysyx_25060170_fishtailcore ");
    tracep->declBit(c+347,"clk", false,-1);
    tracep->declBit(c+348,"rst", false,-1);
    tracep->declBus(c+2,"if_id_inst", false,-1, 31,0);
    tracep->declBus(c+150,"bp_if_pc", false,-1, 31,0);
    tracep->declBit(c+151,"bp_predict", false,-1);
    tracep->declBus(c+349,"bp_rs1_data", false,-1, 31,0);
    tracep->declBus(c+3,"bp_rs1_addr", false,-1, 4,0);
    tracep->declBit(c+4,"bp_rs1_ena", false,-1);
    tracep->declBit(c+152,"bp_if_jal_jalr", false,-1);
    tracep->declBit(c+5,"bp_if_branch", false,-1);
    tracep->declBit(c+6,"id_if_pc_jump", false,-1);
    tracep->declBus(c+7,"id_jump_pc", false,-1, 31,0);
    tracep->declBit(c+357,"ls_pc_jump", false,-1);
    tracep->declBus(c+153,"ls_jump_pc", false,-1, 31,0);
    tracep->declBit(c+8,"id_ready", false,-1);
    tracep->declBit(c+9,"id_stall", false,-1);
    tracep->declBit(c+10,"if_valid", false,-1);
    tracep->declBus(c+154,"if_id_pc", false,-1, 31,0);
    tracep->declBus(c+155,"if_id_next_pc", false,-1, 31,0);
    tracep->declBus(c+2,"dpic_ifu_inst", false,-1, 31,0);
    tracep->declBit(c+357,"ls_flush", false,-1);
    tracep->declBit(c+6,"id_flush", false,-1);
    tracep->declBus(c+156,"if_id_reg_pc", false,-1, 31,0);
    tracep->declBus(c+157,"if_id_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+158,"if_id_reg_inst", false,-1, 31,0);
    tracep->declBit(c+159,"id_jump", false,-1);
    tracep->declBit(c+160,"if_id_valid", false,-1);
    tracep->declBit(c+161,"ex_csr_ena", false,-1);
    tracep->declBit(c+162,"ls_csr_ena", false,-1);
    tracep->declBus(c+350,"rf_id_rs1_data", false,-1, 31,0);
    tracep->declBus(c+351,"rf_id_rs2_data", false,-1, 31,0);
    tracep->declBit(c+1,"ex_ready", false,-1);
    tracep->declBus(c+11,"idu_rs1_addr", false,-1, 4,0);
    tracep->declBit(c+12,"idu_rs1_ena", false,-1);
    tracep->declBus(c+13,"idu_rs2_addr", false,-1, 4,0);
    tracep->declBit(c+14,"idu_rs2_ena", false,-1);
    tracep->declBit(c+15,"idu_rd_ena", false,-1);
    tracep->declBus(c+16,"idu_rd_addr", false,-1, 4,0);
    tracep->declBus(c+17,"idu_alusrc", false,-1, 7,0);
    tracep->declBus(c+18,"idu_lsctl", false,-1, 3,0);
    tracep->declBus(c+19,"idu_wbctl", false,-1, 1,0);
    tracep->declBus(c+20,"idu_op1_sel", false,-1, 1,0);
    tracep->declBus(c+21,"idu_op2_sel", false,-1, 2,0);
    tracep->declBit(c+22,"idu_load_flag", false,-1);
    tracep->declBit(c+23,"idu_csr_ena", false,-1);
    tracep->declBus(c+24,"idu_op1", false,-1, 31,0);
    tracep->declBus(c+25,"idu_op2", false,-1, 31,0);
    tracep->declBus(c+26,"idu_imm", false,-1, 31,0);
    tracep->declBus(c+163,"idu_dpic_rd_addr", false,-1, 4,0);
    tracep->declBus(c+156,"idu_pc", false,-1, 31,0);
    tracep->declBus(c+27,"idu_next_pc", false,-1, 31,0);
    tracep->declBus(c+158,"idu_inst", false,-1, 31,0);
    tracep->declBus(c+164,"idu_csr_imm", false,-1, 4,0);
    tracep->declBit(c+28,"ex_branch", false,-1);
    tracep->declBit(c+165,"magic_flag", false,-1);
    tracep->declBus(c+166,"id_ex_reg_alusrc", false,-1, 7,0);
    tracep->declBit(c+29,"id_valid", false,-1);
    tracep->declBus(c+167,"id_ex_reg_pc", false,-1, 31,0);
    tracep->declBus(c+168,"id_ex_reg_inst", false,-1, 31,0);
    tracep->declBus(c+169,"id_ex_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+170,"id_ex_reg_op1", false,-1, 31,0);
    tracep->declBus(c+171,"id_ex_reg_op2", false,-1, 31,0);
    tracep->declBus(c+172,"id_ex_reg_op1_sel", false,-1, 1,0);
    tracep->declBus(c+173,"id_ex_reg_op2_sel", false,-1, 2,0);
    tracep->declBit(c+174,"id_ex_reg_rd_ena", false,-1);
    tracep->declBus(c+175,"id_ex_reg_rd_addr", false,-1, 4,0);
    tracep->declBus(c+176,"id_ex_reg_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+177,"id_ex_reg_imm", false,-1, 31,0);
    tracep->declBus(c+178,"id_ex_reg_lsctl", false,-1, 3,0);
    tracep->declBus(c+179,"id_ex_reg_wbctl", false,-1, 1,0);
    tracep->declBit(c+180,"id_ex_reg_load_flag", false,-1);
    tracep->declBit(c+181,"id_ex_valid", false,-1);
    tracep->declBit(c+1,"ls_ready", false,-1);
    tracep->declBus(c+168,"exu_inst", false,-1, 31,0);
    tracep->declBus(c+167,"exu_pc", false,-1, 31,0);
    tracep->declBus(c+169,"exu_next_pc", false,-1, 31,0);
    tracep->declBit(c+181,"ex_valid", false,-1);
    tracep->declBus(c+171,"exu_store_data", false,-1, 31,0);
    tracep->declBus(c+30,"exu_res", false,-1, 31,0);
    tracep->declBus(c+31,"exu_csr_addr", false,-1, 11,0);
    tracep->declBus(c+32,"exu_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+182,"ex_ls_reg_inst", false,-1, 31,0);
    tracep->declBus(c+183,"ex_ls_reg_store_data", false,-1, 31,0);
    tracep->declBus(c+153,"ex_ls_reg_exu_res", false,-1, 31,0);
    tracep->declBus(c+184,"ex_ls_reg_ls_ctl", false,-1, 3,0);
    tracep->declBus(c+185,"ex_ls_reg_wb_ctl", false,-1, 1,0);
    tracep->declBus(c+186,"ex_ls_reg_csr_ctl", false,-1, 6,0);
    tracep->declBit(c+187,"ex_ls_reg_rd_ena", false,-1);
    tracep->declBus(c+188,"ex_ls_reg_rd_addr", false,-1, 4,0);
    tracep->declBit(c+161,"ex_ls_reg_ls_csr_ena", false,-1);
    tracep->declBus(c+189,"ex_ls_reg_csr_addr", false,-1, 11,0);
    tracep->declBus(c+190,"ex_ls_reg_pc", false,-1, 31,0);
    tracep->declBus(c+191,"ex_ls_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+175,"ex_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+30,"ex_rd_data_forward", false,-1, 31,0);
    tracep->declBit(c+192,"ex_ls_valid", false,-1);
    tracep->declBit(c+193,"ex_ls_reg_load_flag", false,-1);
    tracep->declBit(c+33,"ls_valid", false,-1);
    tracep->declBit(c+34,"ls_dpic_we", false,-1);
    tracep->declBus(c+35,"ls_dpic_data", false,-1, 31,0);
    tracep->declBus(c+36,"ls_dpic_raddr", false,-1, 31,0);
    tracep->declBus(c+36,"ls_dpic_waddr", false,-1, 31,0);
    tracep->declBus(c+37,"ls_dpic_wlen", false,-1, 7,0);
    tracep->declBus(c+358,"ls_dpic_rlen", false,-1, 7,0);
    tracep->declBus(c+190,"ls_pc", false,-1, 31,0);
    tracep->declBus(c+191,"ls_next_pc", false,-1, 31,0);
    tracep->declBus(c+182,"ls_inst", false,-1, 31,0);
    tracep->declBit(c+38,"ls_mem_re", false,-1);
    tracep->declBus(c+194,"ls_mem_reg_inst", false,-1, 31,0);
    tracep->declBus(c+195,"ls_mem_reg_pc", false,-1, 31,0);
    tracep->declBus(c+196,"ls_mem_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+197,"ls_mem_reg_ls_ctl", false,-1, 3,0);
    tracep->declBus(c+198,"ls_mem_reg_wb_ctl", false,-1, 1,0);
    tracep->declBit(c+199,"ls_mem_reg_rd_ena", false,-1);
    tracep->declBus(c+200,"ls_mem_reg_rd_addr", false,-1, 4,0);
    tracep->declBus(c+201,"ls_mem_reg_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+202,"ls_mem_reg_csr_addr", false,-1, 11,0);
    tracep->declBit(c+203,"ls_mem_valid", false,-1);
    tracep->declBus(c+188,"ls_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+153,"ls_rd_data_forward", false,-1, 31,0);
    tracep->declBit(c+204,"ls_mem_reg_re", false,-1);
    tracep->declBus(c+205,"ls_mem_reg_alu_res", false,-1, 31,0);
    tracep->declBit(c+206,"ls_mem_reg_load_flag", false,-1);
    tracep->declBus(c+194,"mem_inst", false,-1, 31,0);
    tracep->declBus(c+195,"mem_pc", false,-1, 31,0);
    tracep->declBus(c+196,"mem_next_pc", false,-1, 31,0);
    tracep->declBus(c+205,"mem_alu_res", false,-1, 31,0);
    tracep->declBit(c+199,"mem_rd_ena", false,-1);
    tracep->declBus(c+200,"mem_rd_addr", false,-1, 4,0);
    tracep->declBus(c+201,"mem_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+202,"mem_csr_addr", false,-1, 11,0);
    tracep->declBus(c+198,"mem_wbctl", false,-1, 1,0);
    tracep->declBit(c+207,"mem_valid", false,-1);
    tracep->declBit(c+359,"mem_ready", false,-1);
    tracep->declBus(c+39,"mem_data", false,-1, 31,0);
    tracep->declBus(c+208,"mem_wb_inst", false,-1, 31,0);
    tracep->declBus(c+209,"mem_wb_pc", false,-1, 31,0);
    tracep->declBus(c+210,"mem_wb_next_pc", false,-1, 31,0);
    tracep->declBus(c+211,"mem_wb_lsu_res", false,-1, 31,0);
    tracep->declBus(c+212,"mem_wb_alures_data", false,-1, 31,0);
    tracep->declBus(c+213,"mem_wb_wb_ctl", false,-1, 1,0);
    tracep->declBit(c+214,"mem_wb_rd_ena", false,-1);
    tracep->declBus(c+215,"mem_wb_rd_addr", false,-1, 4,0);
    tracep->declBus(c+216,"mem_wb_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+217,"mem_wb_csr_addr", false,-1, 11,0);
    tracep->declBit(c+218,"mem_valid_o", false,-1);
    tracep->declBus(c+200,"mem_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+40,"mem_rd_data_forward", false,-1, 31,0);
    tracep->declBit(c+219,"mem_wb_reg_load_flag", false,-1);
    tracep->declBus(c+220,"wb_rf_data", false,-1, 31,0);
    tracep->declBit(c+359,"wb_ready", false,-1);
    tracep->declBit(c+214,"wb_rf_rd_ena", false,-1);
    tracep->declBus(c+215,"wb_rf_rd_addr", false,-1, 4,0);
    tracep->declBus(c+215,"wb_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+221,"wb_rd_data_forward", false,-1, 31,0);
    tracep->declBus(c+222,"wbu_dpic_mstatus", false,-1, 31,0);
    tracep->declBus(c+223,"wbu_dpic_mepc", false,-1, 31,0);
    tracep->declBus(c+224,"wbu_dpic_mtvec", false,-1, 31,0);
    tracep->declBus(c+225,"wbu_dpic_mcause", false,-1, 31,0);
    tracep->declBus(c+208,"wbu_dpic_inst", false,-1, 31,0);
    tracep->declBus(c+209,"wbu_dpic_pc", false,-1, 31,0);
    tracep->declBus(c+210,"wbu_dpic_next_pc", false,-1, 31,0);
    tracep->declBit(c+218,"wbu_dpic_valid", false,-1);
    tracep->declBus(c+226,"regs0", false,-1, 31,0);
    tracep->declBus(c+227,"regs1", false,-1, 31,0);
    tracep->declBus(c+228,"regs2", false,-1, 31,0);
    tracep->declBus(c+229,"regs3", false,-1, 31,0);
    tracep->declBus(c+230,"regs4", false,-1, 31,0);
    tracep->declBus(c+231,"regs5", false,-1, 31,0);
    tracep->declBus(c+232,"regs6", false,-1, 31,0);
    tracep->declBus(c+233,"regs7", false,-1, 31,0);
    tracep->declBus(c+234,"regs8", false,-1, 31,0);
    tracep->declBus(c+235,"regs9", false,-1, 31,0);
    tracep->declBus(c+236,"regs10", false,-1, 31,0);
    tracep->declBus(c+237,"regs11", false,-1, 31,0);
    tracep->declBus(c+238,"regs12", false,-1, 31,0);
    tracep->declBus(c+239,"regs13", false,-1, 31,0);
    tracep->declBus(c+240,"regs14", false,-1, 31,0);
    tracep->declBus(c+241,"regs15", false,-1, 31,0);
    tracep->declBus(c+242,"regs16", false,-1, 31,0);
    tracep->declBus(c+243,"regs17", false,-1, 31,0);
    tracep->declBus(c+244,"regs18", false,-1, 31,0);
    tracep->declBus(c+245,"regs19", false,-1, 31,0);
    tracep->declBus(c+246,"regs20", false,-1, 31,0);
    tracep->declBus(c+247,"regs21", false,-1, 31,0);
    tracep->declBus(c+248,"regs22", false,-1, 31,0);
    tracep->declBus(c+249,"regs23", false,-1, 31,0);
    tracep->declBus(c+250,"regs24", false,-1, 31,0);
    tracep->declBus(c+251,"regs25", false,-1, 31,0);
    tracep->declBus(c+252,"regs26", false,-1, 31,0);
    tracep->declBus(c+253,"regs27", false,-1, 31,0);
    tracep->declBus(c+254,"regs28", false,-1, 31,0);
    tracep->declBus(c+255,"regs29", false,-1, 31,0);
    tracep->declBus(c+256,"regs30", false,-1, 31,0);
    tracep->declBus(c+257,"regs31", false,-1, 31,0);
    tracep->declBus(c+258,"DPIC_MEM_data", false,-1, 31,0);
    tracep->pushNamePrefix("u_ysyx_25060170_DPIC ");
    tracep->declBit(c+347,"clk", false,-1);
    tracep->declBit(c+348,"rst", false,-1);
    tracep->declBus(c+154,"pc_i", false,-1, 31,0);
    tracep->declBus(c+2,"inst_o", false,-1, 31,0);
    tracep->declBus(c+156,"ftrace_pc", false,-1, 31,0);
    tracep->declBus(c+163,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+26,"imm", false,-1, 31,0);
    tracep->declBus(c+226,"regs0", false,-1, 31,0);
    tracep->declBus(c+227,"regs1", false,-1, 31,0);
    tracep->declBus(c+228,"regs2", false,-1, 31,0);
    tracep->declBus(c+229,"regs3", false,-1, 31,0);
    tracep->declBus(c+230,"regs4", false,-1, 31,0);
    tracep->declBus(c+231,"regs5", false,-1, 31,0);
    tracep->declBus(c+232,"regs6", false,-1, 31,0);
    tracep->declBus(c+233,"regs7", false,-1, 31,0);
    tracep->declBus(c+234,"regs8", false,-1, 31,0);
    tracep->declBus(c+235,"regs9", false,-1, 31,0);
    tracep->declBus(c+236,"regs10", false,-1, 31,0);
    tracep->declBus(c+237,"regs11", false,-1, 31,0);
    tracep->declBus(c+238,"regs12", false,-1, 31,0);
    tracep->declBus(c+239,"regs13", false,-1, 31,0);
    tracep->declBus(c+240,"regs14", false,-1, 31,0);
    tracep->declBus(c+241,"regs15", false,-1, 31,0);
    tracep->declBus(c+242,"regs16", false,-1, 31,0);
    tracep->declBus(c+243,"regs17", false,-1, 31,0);
    tracep->declBus(c+244,"regs18", false,-1, 31,0);
    tracep->declBus(c+245,"regs19", false,-1, 31,0);
    tracep->declBus(c+246,"regs20", false,-1, 31,0);
    tracep->declBus(c+247,"regs21", false,-1, 31,0);
    tracep->declBus(c+248,"regs22", false,-1, 31,0);
    tracep->declBus(c+249,"regs23", false,-1, 31,0);
    tracep->declBus(c+250,"regs24", false,-1, 31,0);
    tracep->declBus(c+251,"regs25", false,-1, 31,0);
    tracep->declBus(c+252,"regs26", false,-1, 31,0);
    tracep->declBus(c+253,"regs27", false,-1, 31,0);
    tracep->declBus(c+254,"regs28", false,-1, 31,0);
    tracep->declBus(c+255,"regs29", false,-1, 31,0);
    tracep->declBus(c+256,"regs30", false,-1, 31,0);
    tracep->declBus(c+257,"regs31", false,-1, 31,0);
    tracep->declBus(c+222,"mstatus", false,-1, 31,0);
    tracep->declBus(c+224,"mtvec", false,-1, 31,0);
    tracep->declBus(c+223,"mepc", false,-1, 31,0);
    tracep->declBus(c+225,"mcause", false,-1, 31,0);
    tracep->declBit(c+38,"re", false,-1);
    tracep->declBit(c+34,"we", false,-1);
    tracep->declBus(c+35,"data_i", false,-1, 31,0);
    tracep->declBus(c+37,"wlen", false,-1, 7,0);
    tracep->declBus(c+358,"rlen", false,-1, 7,0);
    tracep->declBus(c+208,"wbu_dpic_inst", false,-1, 31,0);
    tracep->declBus(c+209,"wbu_dpic_pc", false,-1, 31,0);
    tracep->declBus(c+210,"wbu_dpic_next_pc", false,-1, 31,0);
    tracep->declBit(c+218,"wbu_dpic_valid", false,-1);
    tracep->declBus(c+258,"data_o", false,-1, 31,0);
    tracep->declBus(c+36,"raddr", false,-1, 31,0);
    tracep->declBus(c+36,"waddr", false,-1, 31,0);
    tracep->declBus(c+190,"ex_ls_reg_DPIC_pc_i", false,-1, 31,0);
    tracep->declBit(c+165,"magic_flag", false,-1);
    tracep->declBus(c+360,"dpic_loadread", false,-1, 31,0);
    tracep->declBus(c+41,"mem_data", false,-1, 31,0);
    tracep->declBus(c+361,"dpic_fetch", false,-1, 31,0);
    tracep->declBit(c+42,"jal", false,-1);
    tracep->declBit(c+43,"jalr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_bpu ");
    tracep->declBit(c+347,"clk", false,-1);
    tracep->declBit(c+348,"rst", false,-1);
    tracep->declBus(c+167,"pc_before_bxx", false,-1, 31,0);
    tracep->declBit(c+28,"branch_success", false,-1);
    tracep->declBit(c+159,"branch", false,-1);
    tracep->declBus(c+177,"bxx_imm", false,-1, 31,0);
    tracep->declBus(c+2,"inst_i", false,-1, 31,0);
    tracep->declBus(c+154,"pc_i", false,-1, 31,0);
    tracep->declBus(c+153,"ls_wb_forward_data", false,-1, 31,0);
    tracep->declBus(c+188,"ls_wb_forward_addr", false,-1, 4,0);
    tracep->declBus(c+30,"ex_ls_forward_data", false,-1, 31,0);
    tracep->declBus(c+175,"ex_ls_forward_addr", false,-1, 4,0);
    tracep->declBus(c+153,"ls_mem_forward_data", false,-1, 31,0);
    tracep->declBus(c+188,"ls_mem_forward_addr", false,-1, 4,0);
    tracep->declBus(c+349,"bp_rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+215,"wb_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+221,"wb_rd_data_forward", false,-1, 31,0);
    tracep->declBus(c+150,"bp_pc_o", false,-1, 31,0);
    tracep->declBit(c+152,"jal_jalr_o", false,-1);
    tracep->declBit(c+5,"branch_o", false,-1);
    tracep->declBus(c+3,"bp_rs1_addr_o", false,-1, 4,0);
    tracep->declBit(c+4,"bp_rs1_ena_o", false,-1);
    tracep->declBit(c+151,"bp_predict_o", false,-1);
    tracep->declBit(c+44,"jal_jalr_temp", false,-1);
    tracep->declBus(c+45,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+259,"strongly_not_taken_state", false,-1);
    tracep->declBit(c+260,"weakly_not_taken_state", false,-1);
    tracep->declBit(c+261,"weakly_taken_state", false,-1);
    tracep->declBit(c+262,"strongly_taken_state", false,-1);
    tracep->declBus(c+46,"jal_imm", false,-1, 20,0);
    tracep->declBus(c+47,"b_imm", false,-1, 12,0);
    tracep->declBus(c+48,"jalr_imm", false,-1, 11,0);
    tracep->declBus(c+49,"opcode", false,-1, 6,0);
    tracep->declBus(c+352,"op1", false,-1, 31,0);
    tracep->declBus(c+50,"op2", false,-1, 31,0);
    tracep->declBit(c+51,"inst_jal", false,-1);
    tracep->declBit(c+4,"inst_jalr", false,-1);
    tracep->declBit(c+5,"inst_bxx", false,-1);
    tracep->declBus(c+52,"jump_pc", false,-1, 31,0);
    tracep->declBus(c+53,"jump_jalr_pc", false,-1, 31,0);
    tracep->declBus(c+54,"jal_offset", false,-1, 31,0);
    tracep->declBus(c+55,"br_offset", false,-1, 31,0);
    tracep->declBus(c+56,"jalr_offset", false,-1, 31,0);
    tracep->declBit(c+57,"ls_wb_forward_en", false,-1);
    tracep->declBit(c+58,"ex_ls_forward_en", false,-1);
    tracep->declBit(c+57,"ls_mem_forward_en", false,-1);
    tracep->declBit(c+59,"wbu_forward_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_ex_ls_reg ");
    tracep->declBit(c+347,"clk", false,-1);
    tracep->declBit(c+348,"rst", false,-1);
    tracep->declBus(c+168,"inst_i", false,-1, 31,0);
    tracep->declBus(c+167,"pc_i", false,-1, 31,0);
    tracep->declBus(c+169,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+171,"store_data_i", false,-1, 31,0);
    tracep->declBus(c+30,"exu_res_i", false,-1, 31,0);
    tracep->declBit(c+180,"load_flag_i", false,-1);
    tracep->declBus(c+178,"ls_ctl_i", false,-1, 3,0);
    tracep->declBus(c+179,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+32,"csr_ctl_i", false,-1, 6,0);
    tracep->declBit(c+174,"rd_ena_i", false,-1);
    tracep->declBus(c+175,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+161,"ex_csr_ena_i", false,-1);
    tracep->declBus(c+31,"csr_addr_i", false,-1, 11,0);
    tracep->declBit(c+181,"ex_valid_i", false,-1);
    tracep->declBit(c+1,"ls_ready_i", false,-1);
    tracep->declBit(c+357,"ls_flush_i", false,-1);
    tracep->declBit(c+192,"ex_valid_o", false,-1);
    tracep->declBus(c+182,"inst_o", false,-1, 31,0);
    tracep->declBus(c+190,"pc_o", false,-1, 31,0);
    tracep->declBus(c+191,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+183,"store_data_o", false,-1, 31,0);
    tracep->declBus(c+153,"exu_res_o", false,-1, 31,0);
    tracep->declBit(c+193,"load_flag_o", false,-1);
    tracep->declBus(c+184,"ls_ctl_o", false,-1, 3,0);
    tracep->declBus(c+185,"wb_ctl_o", false,-1, 1,0);
    tracep->declBus(c+186,"csr_ctl_o", false,-1, 6,0);
    tracep->declBit(c+187,"rd_ena_o", false,-1);
    tracep->declBus(c+188,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+189,"csr_addr_o", false,-1, 11,0);
    tracep->declBit(c+162,"ls_csr_ena_o", false,-1);
    tracep->declBus(c+175,"ex_rd_addr_forward_o", false,-1, 4,0);
    tracep->declBit(c+161,"ex_csr_o", false,-1);
    tracep->declBus(c+30,"ex_rd_data_forward_o", false,-1, 31,0);
    tracep->declBit(c+357,"flush", false,-1);
    tracep->declBit(c+263,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_exu ");
    tracep->declBit(c+348,"rst", false,-1);
    tracep->declBus(c+170,"op1_i", false,-1, 31,0);
    tracep->declBus(c+171,"op2_i", false,-1, 31,0);
    tracep->declBus(c+172,"op1_sel_i", false,-1, 1,0);
    tracep->declBus(c+173,"op2_sel_i", false,-1, 2,0);
    tracep->declBus(c+175,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+176,"rs1_addr_i", false,-1, 4,0);
    tracep->declBus(c+177,"imm_i", false,-1, 31,0);
    tracep->declBus(c+167,"pc_i", false,-1, 31,0);
    tracep->declBus(c+169,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+168,"inst_i", false,-1, 31,0);
    tracep->declBus(c+166,"alu_sel_i", false,-1, 7,0);
    tracep->declBit(c+1,"ls_ready_i", false,-1);
    tracep->declBit(c+181,"id_valid_i", false,-1);
    tracep->declBit(c+181,"ex_valid_o", false,-1);
    tracep->declBit(c+1,"ex_ready_o", false,-1);
    tracep->declBus(c+168,"inst_o", false,-1, 31,0);
    tracep->declBus(c+167,"pc_o", false,-1, 31,0);
    tracep->declBus(c+169,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+171,"store_data_o", false,-1, 31,0);
    tracep->declBus(c+30,"exu_res_o", false,-1, 31,0);
    tracep->declBus(c+31,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+32,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+264,"op1", false,-1, 31,0);
    tracep->declBus(c+265,"op2", false,-1, 31,0);
    tracep->declBus(c+266,"op1_add_op2", false,-1, 31,0);
    tracep->declBus(c+267,"op1_sub_op2", false,-1, 31,0);
    tracep->declBit(c+268,"op1_lt_op2", false,-1);
    tracep->declBus(c+269,"op1_sra_op2", false,-1, 31,0);
    tracep->declQuad(c+270,"mul", false,-1, 63,0);
    tracep->declBus(c+272,"op1_mul_op2", false,-1, 31,0);
    tracep->declBus(c+273,"op1_mulh_op2", false,-1, 31,0);
    tracep->declBus(c+274,"div", false,-1, 31,0);
    tracep->declBus(c+275,"rem", false,-1, 31,0);
    tracep->declBus(c+60,"alu_res", false,-1, 31,0);
    tracep->declBit(c+61,"csr_wr_ena", false,-1);
    tracep->declBit(c+62,"csr_rd_ena", false,-1);
    tracep->declBit(c+63,"mret_ena", false,-1);
    tracep->declBit(c+64,"ecall_ena", false,-1);
    tracep->declBit(c+65,"csrrw_ena", false,-1);
    tracep->declBit(c+66,"csrrs_ena", false,-1);
    tracep->declBit(c+67,"csrrc_ena", false,-1);
    tracep->declBus(c+276,"csr_op", false,-1, 31,0);
    tracep->declBit(c+277,"csrrxi_ena", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_id_ex_reg ");
    tracep->declBit(c+347,"clk", false,-1);
    tracep->declBit(c+348,"rst", false,-1);
    tracep->declBus(c+158,"inst_i", false,-1, 31,0);
    tracep->declBus(c+156,"pc_i", false,-1, 31,0);
    tracep->declBus(c+27,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+24,"op1_i", false,-1, 31,0);
    tracep->declBus(c+25,"op2_i", false,-1, 31,0);
    tracep->declBus(c+20,"op1_sel_i", false,-1, 1,0);
    tracep->declBus(c+21,"op2_sel_i", false,-1, 2,0);
    tracep->declBit(c+15,"rd_ena_i", false,-1);
    tracep->declBus(c+16,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+164,"rs1_addr_i", false,-1, 4,0);
    tracep->declBus(c+26,"imm_i", false,-1, 31,0);
    tracep->declBus(c+17,"alusrc_i", false,-1, 7,0);
    tracep->declBus(c+18,"lsctl_i", false,-1, 3,0);
    tracep->declBus(c+19,"wbctl_i", false,-1, 1,0);
    tracep->declBit(c+23,"csr_ena_i", false,-1);
    tracep->declBit(c+22,"load_flag_i", false,-1);
    tracep->declBit(c+29,"id_valid_i", false,-1);
    tracep->declBit(c+6,"id_flush_i", false,-1);
    tracep->declBit(c+9,"id_stall_i", false,-1);
    tracep->declBit(c+357,"ls_flush_i", false,-1);
    tracep->declBit(c+1,"ex_ready_i", false,-1);
    tracep->declBus(c+168,"inst_o", false,-1, 31,0);
    tracep->declBus(c+167,"pc_o", false,-1, 31,0);
    tracep->declBus(c+169,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+170,"op1_o", false,-1, 31,0);
    tracep->declBus(c+171,"op2_o", false,-1, 31,0);
    tracep->declBus(c+172,"op1_sel_o", false,-1, 1,0);
    tracep->declBus(c+173,"op2_sel_o", false,-1, 2,0);
    tracep->declBit(c+174,"rd_ena_o", false,-1);
    tracep->declBus(c+175,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+176,"rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+177,"imm_o", false,-1, 31,0);
    tracep->declBus(c+166,"alusrc_o", false,-1, 7,0);
    tracep->declBus(c+178,"lsctl_o", false,-1, 3,0);
    tracep->declBus(c+179,"wbctl_o", false,-1, 1,0);
    tracep->declBit(c+161,"csr_ena_o", false,-1);
    tracep->declBit(c+180,"load_flag_o", false,-1);
    tracep->declBit(c+181,"id_valid_o", false,-1);
    tracep->declBit(c+6,"flush", false,-1);
    tracep->declBit(c+68,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_idu ");
    tracep->declBit(c+348,"rst", false,-1);
    tracep->declBus(c+158,"inst_i", false,-1, 31,0);
    tracep->declBus(c+156,"pc_i", false,-1, 31,0);
    tracep->declBus(c+157,"next_pc_i", false,-1, 31,0);
    tracep->declBit(c+159,"bp_jump_i", false,-1);
    tracep->declBus(c+175,"ex_addr_forward", false,-1, 4,0);
    tracep->declBus(c+30,"ex_data_forward", false,-1, 31,0);
    tracep->declBus(c+188,"ls_addr_forward", false,-1, 4,0);
    tracep->declBus(c+153,"ls_data_forward", false,-1, 31,0);
    tracep->declBus(c+200,"mem_addr_forward", false,-1, 4,0);
    tracep->declBus(c+40,"mem_data_forward", false,-1, 31,0);
    tracep->declBus(c+215,"wb_addr_forward", false,-1, 4,0);
    tracep->declBus(c+221,"wb_data_forward", false,-1, 31,0);
    tracep->declBit(c+180,"ex_load_ena", false,-1);
    tracep->declBit(c+193,"ls_load_ena", false,-1);
    tracep->declBit(c+206,"mem_load_ena", false,-1);
    tracep->declBit(c+219,"wb_load_ena", false,-1);
    tracep->declBit(c+192,"ex_valid_i", false,-1);
    tracep->declBit(c+203,"ls_valid_i", false,-1);
    tracep->declBit(c+161,"ex_csr_ena", false,-1);
    tracep->declBit(c+162,"ls_csr_ena", false,-1);
    tracep->declBus(c+350,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+351,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+11,"rs1_addr", false,-1, 4,0);
    tracep->declBit(c+12,"rs1_ena", false,-1);
    tracep->declBus(c+13,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+14,"rs2_ena", false,-1);
    tracep->declBit(c+15,"rd_ena", false,-1);
    tracep->declBus(c+16,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+156,"pc_o", false,-1, 31,0);
    tracep->declBus(c+27,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+17,"alusrc_o", false,-1, 7,0);
    tracep->declBus(c+18,"lsctl_o", false,-1, 3,0);
    tracep->declBus(c+19,"wbctl_o", false,-1, 1,0);
    tracep->declBus(c+20,"op1_sel", false,-1, 1,0);
    tracep->declBus(c+21,"op2_sel", false,-1, 2,0);
    tracep->declBit(c+22,"load_flag_o", false,-1);
    tracep->declBit(c+23,"csr_ena_o", false,-1);
    tracep->declBus(c+24,"op1", false,-1, 31,0);
    tracep->declBus(c+25,"op2", false,-1, 31,0);
    tracep->declBus(c+26,"imm", false,-1, 31,0);
    tracep->declBus(c+163,"idu_dpic_rd_addr", false,-1, 4,0);
    tracep->declBus(c+158,"inst_o", false,-1, 31,0);
    tracep->declBus(c+164,"csr_imm_o", false,-1, 4,0);
    tracep->declBit(c+6,"jump_ena_o", false,-1);
    tracep->declBus(c+7,"jump_pc_o", false,-1, 31,0);
    tracep->declBit(c+28,"ex_branch", false,-1);
    tracep->declBit(c+160,"if_valid_i", false,-1);
    tracep->declBit(c+1,"ex_ready_i", false,-1);
    tracep->declBit(c+6,"id_flush_o", false,-1);
    tracep->declBit(c+9,"id_stall_o", false,-1);
    tracep->declBit(c+8,"id_ready_o", false,-1);
    tracep->declBit(c+29,"id_valid_o", false,-1);
    tracep->declBit(c+165,"magic_flag", false,-1);
    tracep->declBus(c+163,"rd", false,-1, 4,0);
    tracep->declBus(c+164,"rs1", false,-1, 4,0);
    tracep->declBus(c+278,"rs2", false,-1, 4,0);
    tracep->declBit(c+69,"branch", false,-1);
    tracep->declBit(c+353,"op1_relate", false,-1);
    tracep->declBit(c+354,"op2_relate", false,-1);
    tracep->declBit(c+70,"csr_op1_stall", false,-1);
    tracep->declBit(c+71,"csr_op2_stall", false,-1);
    tracep->declBit(c+9,"id_stall_ena", false,-1);
    tracep->declBit(c+72,"ex_op1_forward", false,-1);
    tracep->declBit(c+73,"ls_op1_forward", false,-1);
    tracep->declBit(c+74,"mem_op1_forward", false,-1);
    tracep->declBit(c+75,"wb_op1_forward", false,-1);
    tracep->declBit(c+76,"ex_op2_forward", false,-1);
    tracep->declBit(c+77,"ls_op2_forward", false,-1);
    tracep->declBit(c+78,"mem_op2_forward", false,-1);
    tracep->declBit(c+79,"wb_op2_forward", false,-1);
    tracep->declBit(c+80,"op1_forward_ena", false,-1);
    tracep->declBit(c+81,"op2_forward_ena", false,-1);
    tracep->declBus(c+82,"op1_forward_data", false,-1, 31,0);
    tracep->declBus(c+83,"op2_forward_data", false,-1, 31,0);
    tracep->declBit(c+84,"diff_sign", false,-1);
    tracep->declBit(c+85,"op_ltu_op2", false,-1);
    tracep->declBit(c+86,"op1_lt_op2", false,-1);
    tracep->declBus(c+87,"o1", false,-1, 31,0);
    tracep->declBus(c+88,"o2", false,-1, 31,0);
    tracep->pushNamePrefix("decoder ");
    tracep->declBit(c+348,"rst", false,-1);
    tracep->declBus(c+158,"inst", false,-1, 31,0);
    tracep->declBit(c+12,"rs1_ena", false,-1);
    tracep->declBit(c+14,"rs2_ena", false,-1);
    tracep->declBit(c+23,"csr_inst", false,-1);
    tracep->declBus(c+19,"wb_ctl", false,-1, 1,0);
    tracep->declBus(c+18,"mem_ctl", false,-1, 3,0);
    tracep->declBit(c+69,"branch", false,-1);
    tracep->declBus(c+26,"ext_imm", false,-1, 31,0);
    tracep->declBit(c+22,"load", false,-1);
    tracep->declBus(c+20,"op1_sel", false,-1, 1,0);
    tracep->declBus(c+21,"op2_sel", false,-1, 2,0);
    tracep->declBus(c+17,"alu_ctl", false,-1, 7,0);
    tracep->declBus(c+279,"opcode", false,-1, 6,0);
    tracep->declBus(c+280,"funct3", false,-1, 2,0);
    tracep->declBus(c+281,"funct7", false,-1, 6,0);
    tracep->declBus(c+282,"i_imm", false,-1, 11,0);
    tracep->declBus(c+283,"j_imm", false,-1, 20,1);
    tracep->declBus(c+284,"u_imm", false,-1, 19,0);
    tracep->declBus(c+285,"s_imm", false,-1, 11,0);
    tracep->declBus(c+286,"b_imm", false,-1, 12,1);
    tracep->declBus(c+89,"inst_type", false,-1, 7,0);
    tracep->declBit(c+90,"inst_lui", false,-1);
    tracep->declBit(c+91,"inst_auipc", false,-1);
    tracep->declBit(c+92,"inst_jal", false,-1);
    tracep->declBit(c+93,"inst_jalr", false,-1);
    tracep->declBit(c+94,"inst_sb", false,-1);
    tracep->declBit(c+95,"inst_sh", false,-1);
    tracep->declBit(c+96,"inst_sw", false,-1);
    tracep->declBit(c+97,"inst_sd", false,-1);
    tracep->declBit(c+98,"inst_lb", false,-1);
    tracep->declBit(c+99,"inst_lh", false,-1);
    tracep->declBit(c+100,"inst_lw", false,-1);
    tracep->declBit(c+101,"inst_ld", false,-1);
    tracep->declBit(c+102,"inst_lbu", false,-1);
    tracep->declBit(c+103,"inst_lhu", false,-1);
    tracep->declBit(c+104,"inst_lwu", false,-1);
    tracep->declBit(c+105,"inst_beq", false,-1);
    tracep->declBit(c+106,"inst_bne", false,-1);
    tracep->declBit(c+107,"inst_blt", false,-1);
    tracep->declBit(c+108,"inst_bge", false,-1);
    tracep->declBit(c+109,"inst_bltu", false,-1);
    tracep->declBit(c+110,"inst_bgeu", false,-1);
    tracep->declBit(c+111,"inst_add", false,-1);
    tracep->declBit(c+112,"inst_sub", false,-1);
    tracep->declBit(c+113,"inst_sll", false,-1);
    tracep->declBit(c+114,"inst_slt", false,-1);
    tracep->declBit(c+115,"inst_sltu", false,-1);
    tracep->declBit(c+116,"inst_xor", false,-1);
    tracep->declBit(c+117,"inst_srl", false,-1);
    tracep->declBit(c+118,"inst_sra", false,-1);
    tracep->declBit(c+119,"inst_or", false,-1);
    tracep->declBit(c+120,"inst_and", false,-1);
    tracep->declBit(c+121,"inst_div", false,-1);
    tracep->declBit(c+122,"inst_divu", false,-1);
    tracep->declBit(c+123,"inst_mul", false,-1);
    tracep->declBit(c+124,"inst_mulh", false,-1);
    tracep->declBit(c+125,"inst_mulhsu", false,-1);
    tracep->declBit(c+126,"inst_mulhu", false,-1);
    tracep->declBit(c+127,"inst_rem", false,-1);
    tracep->declBit(c+128,"inst_remu", false,-1);
    tracep->declBit(c+129,"inst_addi", false,-1);
    tracep->declBit(c+130,"inst_slti", false,-1);
    tracep->declBit(c+131,"inst_sltiu", false,-1);
    tracep->declBit(c+132,"inst_xori", false,-1);
    tracep->declBit(c+133,"inst_ori", false,-1);
    tracep->declBit(c+134,"inst_andi", false,-1);
    tracep->declBit(c+135,"inst_slli", false,-1);
    tracep->declBit(c+136,"inst_srli", false,-1);
    tracep->declBit(c+137,"inst_srai", false,-1);
    tracep->declBit(c+138,"inst_ecall", false,-1);
    tracep->declBit(c+139,"inst_mret", false,-1);
    tracep->declBit(c+140,"inst_csrrw", false,-1);
    tracep->declBit(c+141,"inst_csrrs", false,-1);
    tracep->declBit(c+142,"inst_csrrc", false,-1);
    tracep->declBit(c+143,"inst_csrrwi", false,-1);
    tracep->declBit(c+144,"inst_csrrsi", false,-1);
    tracep->declBit(c+145,"inst_csrrci", false,-1);
    tracep->declBit(c+146,"inst_ebreak", false,-1);
    tracep->declBit(c+147,"imm_ena", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_25060170_if_id_reg ");
    tracep->declBit(c+347,"clk", false,-1);
    tracep->declBit(c+348,"rst", false,-1);
    tracep->declBus(c+154,"pc_i", false,-1, 31,0);
    tracep->declBus(c+155,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+2,"inst_i", false,-1, 31,0);
    tracep->declBit(c+151,"bp_jump_i", false,-1);
    tracep->declBit(c+10,"if_valid_i", false,-1);
    tracep->declBit(c+6,"id_flush_i", false,-1);
    tracep->declBit(c+357,"ls_flush_i", false,-1);
    tracep->declBit(c+9,"id_stall_i", false,-1);
    tracep->declBit(c+8,"id_ready_i", false,-1);
    tracep->declBus(c+156,"pc_o", false,-1, 31,0);
    tracep->declBus(c+157,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+158,"inst_o", false,-1, 31,0);
    tracep->declBit(c+159,"id_jump_o", false,-1);
    tracep->declBit(c+160,"if_valid_o", false,-1);
    tracep->declBit(c+148,"flush", false,-1);
    tracep->declBit(c+10,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_ifu ");
    tracep->declBit(c+348,"rst", false,-1);
    tracep->declBit(c+347,"clk", false,-1);
    tracep->declBit(c+6,"id_pc_jump_i", false,-1);
    tracep->declBus(c+7,"id_pc_i", false,-1, 31,0);
    tracep->declBit(c+357,"ls_pc_jump_i", false,-1);
    tracep->declBus(c+153,"ls_pc_i", false,-1, 31,0);
    tracep->declBit(c+151,"bp_pc_jump_i", false,-1);
    tracep->declBus(c+150,"bp_pc_i", false,-1, 31,0);
    tracep->declBit(c+152,"jal_jalr_i", false,-1);
    tracep->declBit(c+5,"branch_i", false,-1);
    tracep->declBit(c+8,"id_ready_i", false,-1);
    tracep->declBit(c+9,"id_stall_i", false,-1);
    tracep->declBit(c+10,"if_valid_o", false,-1);
    tracep->declBus(c+2,"inst_i", false,-1, 31,0);
    tracep->declBus(c+154,"pc_o", false,-1, 31,0);
    tracep->declBus(c+2,"inst_o", false,-1, 31,0);
    tracep->declBus(c+155,"next_pc_o", false,-1, 31,0);
    tracep->declBit(c+9,"stall", false,-1);
    tracep->declBus(c+287,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_ls_mem_reg ");
    tracep->declBit(c+347,"clk", false,-1);
    tracep->declBit(c+348,"rst", false,-1);
    tracep->declBus(c+182,"inst_i", false,-1, 31,0);
    tracep->declBus(c+190,"pc_i", false,-1, 31,0);
    tracep->declBus(c+191,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+184,"ls_ctl_i", false,-1, 3,0);
    tracep->declBus(c+185,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+153,"alu_res_i", false,-1, 31,0);
    tracep->declBit(c+193,"load_flag_i", false,-1);
    tracep->declBit(c+38,"re_i", false,-1);
    tracep->declBit(c+187,"rd_ena_i", false,-1);
    tracep->declBus(c+188,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+186,"csr_ctl_i", false,-1, 6,0);
    tracep->declBus(c+189,"csr_addr_i", false,-1, 11,0);
    tracep->declBit(c+33,"ls_valid_i", false,-1);
    tracep->declBit(c+359,"mem_ready_i", false,-1);
    tracep->declBit(c+203,"ls_valid_o", false,-1);
    tracep->declBus(c+194,"inst_o", false,-1, 31,0);
    tracep->declBus(c+195,"pc_o", false,-1, 31,0);
    tracep->declBus(c+196,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+197,"ls_ctl_o", false,-1, 3,0);
    tracep->declBus(c+198,"wb_ctl_o", false,-1, 1,0);
    tracep->declBus(c+205,"alu_res_o", false,-1, 31,0);
    tracep->declBit(c+206,"load_flag_o", false,-1);
    tracep->declBit(c+204,"re_o", false,-1);
    tracep->declBit(c+199,"rd_ena_o", false,-1);
    tracep->declBus(c+200,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+201,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+202,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+188,"ls_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+153,"ls_rd_data_forward", false,-1, 31,0);
    tracep->declBit(c+357,"flush", false,-1);
    tracep->declBit(c+33,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_lsu ");
    tracep->declBit(c+347,"clk", false,-1);
    tracep->declBit(c+348,"rst", false,-1);
    tracep->declBus(c+190,"pc_i", false,-1, 31,0);
    tracep->declBus(c+191,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+182,"inst_i", false,-1, 31,0);
    tracep->declBus(c+153,"alu_res_i", false,-1, 31,0);
    tracep->declBus(c+183,"store_data_i", false,-1, 31,0);
    tracep->declBus(c+184,"ls_ctl_i", false,-1, 3,0);
    tracep->declBit(c+359,"mem_ready_i", false,-1);
    tracep->declBit(c+192,"ex_valid_i", false,-1);
    tracep->declBit(c+1,"ls_ready_o", false,-1);
    tracep->declBit(c+33,"ls_valid_o", false,-1);
    tracep->declBit(c+357,"ls_flush_o", false,-1);
    tracep->declBit(c+357,"ls_jump_o", false,-1);
    tracep->declBus(c+153,"ls_jump_pc_o", false,-1, 31,0);
    tracep->declBit(c+38,"re", false,-1);
    tracep->declBit(c+34,"we", false,-1);
    tracep->declBus(c+35,"data_o", false,-1, 31,0);
    tracep->declBus(c+36,"raddr", false,-1, 31,0);
    tracep->declBus(c+36,"waddr", false,-1, 31,0);
    tracep->declBus(c+37,"wlen", false,-1, 7,0);
    tracep->declBus(c+358,"rlen", false,-1, 7,0);
    tracep->declBus(c+182,"inst_o", false,-1, 31,0);
    tracep->declBus(c+190,"pc_o", false,-1, 31,0);
    tracep->declBus(c+191,"next_pc_o", false,-1, 31,0);
    tracep->declBit(c+288,"data_ok", false,-1);
    tracep->declBus(c+289,"byte_sel", false,-1, 1,0);
    tracep->declBus(c+289,"half_sel", false,-1, 1,0);
    tracep->declBus(c+149,"sb_mask", false,-1, 3,0);
    tracep->declBus(c+355,"sh_mask", false,-1, 3,0);
    tracep->declBus(c+362,"sw_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_mem ");
    tracep->declBit(c+347,"clk", false,-1);
    tracep->declBit(c+348,"rst", false,-1);
    tracep->declBus(c+194,"inst_i", false,-1, 31,0);
    tracep->declBus(c+195,"pc_i", false,-1, 31,0);
    tracep->declBus(c+196,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+198,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+205,"alu_res_i", false,-1, 31,0);
    tracep->declBit(c+204,"re", false,-1);
    tracep->declBit(c+199,"rd_ena_i", false,-1);
    tracep->declBus(c+200,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+201,"csr_ctl_i", false,-1, 6,0);
    tracep->declBus(c+202,"csr_addr_i", false,-1, 11,0);
    tracep->declBus(c+197,"ls_ctl_i", false,-1, 3,0);
    tracep->declBus(c+258,"mem_data_i", false,-1, 31,0);
    tracep->declBit(c+203,"ls_valid_i", false,-1);
    tracep->declBit(c+359,"wb_ready_i", false,-1);
    tracep->declBit(c+207,"mem_valid_o", false,-1);
    tracep->declBit(c+359,"mem_ready_o", false,-1);
    tracep->declBus(c+194,"inst_o", false,-1, 31,0);
    tracep->declBus(c+195,"pc_o", false,-1, 31,0);
    tracep->declBus(c+196,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+198,"wb_ctl_o", false,-1, 1,0);
    tracep->declBus(c+205,"alu_res_o", false,-1, 31,0);
    tracep->declBit(c+199,"rd_ena_o", false,-1);
    tracep->declBus(c+200,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+201,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+202,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+39,"mem_data_o", false,-1, 31,0);
    tracep->declBus(c+356,"load_data", false,-1, 31,0);
    tracep->declBit(c+290,"data_ok", false,-1);
    tracep->declBus(c+291,"data_byte", false,-1, 7,0);
    tracep->declBus(c+292,"data_half", false,-1, 15,0);
    tracep->declBus(c+258,"data_word", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_mem_wb_reg ");
    tracep->declBit(c+347,"clk", false,-1);
    tracep->declBit(c+348,"rst", false,-1);
    tracep->declBus(c+194,"inst_i", false,-1, 31,0);
    tracep->declBus(c+195,"pc_i", false,-1, 31,0);
    tracep->declBus(c+196,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+198,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+39,"mem_data_i", false,-1, 31,0);
    tracep->declBit(c+206,"load_flag_i", false,-1);
    tracep->declBus(c+205,"alu_res_i", false,-1, 31,0);
    tracep->declBit(c+199,"rd_ena_i", false,-1);
    tracep->declBus(c+200,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+201,"csr_ctl_i", false,-1, 6,0);
    tracep->declBus(c+202,"csr_addr_i", false,-1, 11,0);
    tracep->declBit(c+207,"mem_valid_i", false,-1);
    tracep->declBit(c+359,"wb_ready_i", false,-1);
    tracep->declBit(c+218,"mem_valid_o", false,-1);
    tracep->declBus(c+208,"inst_o", false,-1, 31,0);
    tracep->declBus(c+209,"pc_o", false,-1, 31,0);
    tracep->declBus(c+210,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+212,"alu_res_o", false,-1, 31,0);
    tracep->declBus(c+211,"mem_data_o", false,-1, 31,0);
    tracep->declBit(c+219,"load_flag_o", false,-1);
    tracep->declBus(c+213,"wb_ctl_o", false,-1, 1,0);
    tracep->declBit(c+214,"rd_ena_o", false,-1);
    tracep->declBus(c+215,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+216,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+217,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+200,"mem_rd_addr_forward_o", false,-1, 4,0);
    tracep->declBus(c+40,"mem_rd_data_forward_o", false,-1, 31,0);
    tracep->declBit(c+357,"flush", false,-1);
    tracep->declBit(c+207,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_regfile ");
    tracep->declBit(c+347,"clk", false,-1);
    tracep->declBit(c+348,"rst", false,-1);
    tracep->declBus(c+215,"waddr", false,-1, 4,0);
    tracep->declBus(c+220,"wdata", false,-1, 31,0);
    tracep->declBit(c+214,"wen", false,-1);
    tracep->declBit(c+12,"ren1", false,-1);
    tracep->declBit(c+14,"ren2", false,-1);
    tracep->declBus(c+11,"raddr1", false,-1, 4,0);
    tracep->declBus(c+13,"raddr2", false,-1, 4,0);
    tracep->declBus(c+350,"rdata1", false,-1, 31,0);
    tracep->declBus(c+351,"rdata2", false,-1, 31,0);
    tracep->declBus(c+226,"regs0_zero", false,-1, 31,0);
    tracep->declBus(c+227,"regs1_ra", false,-1, 31,0);
    tracep->declBus(c+228,"regs2_sp", false,-1, 31,0);
    tracep->declBus(c+229,"regs3_gp", false,-1, 31,0);
    tracep->declBus(c+230,"regs4_tp", false,-1, 31,0);
    tracep->declBus(c+231,"regs5_t0", false,-1, 31,0);
    tracep->declBus(c+232,"regs6_t1", false,-1, 31,0);
    tracep->declBus(c+233,"regs7_t2", false,-1, 31,0);
    tracep->declBus(c+234,"regs8_s0", false,-1, 31,0);
    tracep->declBus(c+235,"regs9_s1", false,-1, 31,0);
    tracep->declBus(c+236,"regs10_a0", false,-1, 31,0);
    tracep->declBus(c+237,"regs11_a1", false,-1, 31,0);
    tracep->declBus(c+238,"regs12_a2", false,-1, 31,0);
    tracep->declBus(c+239,"regs13_a3", false,-1, 31,0);
    tracep->declBus(c+240,"regs14_a4", false,-1, 31,0);
    tracep->declBus(c+241,"regs15_a5", false,-1, 31,0);
    tracep->declBus(c+242,"regs16_a6", false,-1, 31,0);
    tracep->declBus(c+243,"regs17_a7", false,-1, 31,0);
    tracep->declBus(c+244,"regs18_s2", false,-1, 31,0);
    tracep->declBus(c+245,"regs19_s3", false,-1, 31,0);
    tracep->declBus(c+246,"regs20_s4", false,-1, 31,0);
    tracep->declBus(c+247,"regs21_s5", false,-1, 31,0);
    tracep->declBus(c+248,"regs22_s6", false,-1, 31,0);
    tracep->declBus(c+249,"regs23_s7", false,-1, 31,0);
    tracep->declBus(c+250,"regs24_t3", false,-1, 31,0);
    tracep->declBus(c+251,"regs25_t4", false,-1, 31,0);
    tracep->declBus(c+252,"regs26_t5", false,-1, 31,0);
    tracep->declBus(c+253,"regs27_t6", false,-1, 31,0);
    tracep->declBus(c+254,"regs28_t3", false,-1, 31,0);
    tracep->declBus(c+255,"regs29_t4", false,-1, 31,0);
    tracep->declBus(c+256,"regs30_t5", false,-1, 31,0);
    tracep->declBus(c+257,"regs31_t6", false,-1, 31,0);
    tracep->declBus(c+3,"bp_rs1_addr_i", false,-1, 4,0);
    tracep->declBit(c+4,"bp_rs1_ena_i", false,-1);
    tracep->declBus(c+349,"bp_rs1_data_o", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+293+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_wbu ");
    tracep->declBit(c+347,"clk", false,-1);
    tracep->declBit(c+348,"rst", false,-1);
    tracep->declBus(c+211,"ls_rd_data_i", false,-1, 31,0);
    tracep->declBus(c+213,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+212,"exu_res_i", false,-1, 31,0);
    tracep->declBus(c+209,"pc_i", false,-1, 31,0);
    tracep->declBus(c+210,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+208,"inst_i", false,-1, 31,0);
    tracep->declBus(c+215,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+214,"rd_ena_i", false,-1);
    tracep->declBus(c+216,"csr_ctl_i", false,-1, 6,0);
    tracep->declBus(c+217,"csr_addr_i", false,-1, 11,0);
    tracep->declBit(c+218,"ls_valid_i", false,-1);
    tracep->declBus(c+220,"wb_data_o", false,-1, 31,0);
    tracep->declBit(c+359,"wb_ready_o", false,-1);
    tracep->declBit(c+214,"wb_rd_ena_o", false,-1);
    tracep->declBus(c+215,"wb_rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+215,"wb_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+221,"wb_rd_data_forward", false,-1, 31,0);
    tracep->declBus(c+222,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+223,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+224,"mtvec_o", false,-1, 31,0);
    tracep->declBus(c+225,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+208,"wbu_dpic_inst_o", false,-1, 31,0);
    tracep->declBus(c+209,"wbu_dpic_pc_o", false,-1, 31,0);
    tracep->declBus(c+210,"wbu_dpic_next_pc_o", false,-1, 31,0);
    tracep->declBit(c+218,"wbu_dpic_valid_o", false,-1);
    tracep->declBus(c+222,"mstatus", false,-1, 31,0);
    tracep->declBus(c+223,"mepc", false,-1, 31,0);
    tracep->declBus(c+224,"mtvec", false,-1, 31,0);
    tracep->declBus(c+225,"mcause", false,-1, 31,0);
    tracep->declBus(c+325,"read_csr_data", false,-1, 31,0);
    tracep->declBus(c+326,"write_csr_data", false,-1, 31,0);
    tracep->declBus(c+327,"mcause_value", false,-1, 31,0);
    tracep->declBus(c+328,"set_data", false,-1, 31,0);
    tracep->declBus(c+329,"clear_data", false,-1, 31,0);
    tracep->pushNamePrefix("u_ysyx_25060170_csr ");
    tracep->declBit(c+347,"clk", false,-1);
    tracep->declBit(c+348,"rst", false,-1);
    tracep->declBus(c+330,"csr_ctl", false,-1, 3,0);
    tracep->declBus(c+217,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+327,"mcause_value", false,-1, 31,0);
    tracep->declBus(c+326,"write_csr_data", false,-1, 31,0);
    tracep->declBus(c+325,"read_csr_data", false,-1, 31,0);
    tracep->declBus(c+222,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+223,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+224,"mtvec_o", false,-1, 31,0);
    tracep->declBus(c+225,"mcause_o", false,-1, 31,0);
    tracep->declBit(c+331,"mstatus_rd", false,-1);
    tracep->declBit(c+332,"mstatus_wr", false,-1);
    tracep->declBit(c+333,"mstatus_mie", false,-1);
    tracep->declBit(c+334,"mstatus_mpie", false,-1);
    tracep->declBus(c+335,"mstatus_mpp", false,-1, 1,0);
    tracep->declBus(c+222,"mstatus", false,-1, 31,0);
    tracep->declBit(c+336,"mstatus_ie_ena", false,-1);
    tracep->declBit(c+337,"mie_set", false,-1);
    tracep->declBit(c+338,"mpie_set", false,-1);
    tracep->declBus(c+339,"mpp_set", false,-1, 1,0);
    tracep->declBit(c+340,"mtvec_rd", false,-1);
    tracep->declBit(c+341,"mtvec_wr", false,-1);
    tracep->declBus(c+342,"mtvec_base", false,-1, 31,2);
    tracep->declBus(c+363,"mtvec_mode", false,-1, 1,0);
    tracep->declBus(c+224,"mtvec", false,-1, 31,0);
    tracep->declBit(c+343,"mepc_rd", false,-1);
    tracep->declBit(c+344,"mepc_wr", false,-1);
    tracep->declBus(c+223,"mepc", false,-1, 31,0);
    tracep->declBit(c+345,"mcause_rd", false,-1);
    tracep->declBit(c+346,"mcause_wr", false,-1);
    tracep->declBus(c+225,"mcause", false,-1, 31,0);
    tracep->popNamePrefix(3);
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
    bufp->fullIData(oldp+2,(vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst),32);
    bufp->fullCData(oldp+3,(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr),5);
    bufp->fullBit(oldp+4,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr));
    bufp->fullBit(oldp+5,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_bxx));
    bufp->fullBit(oldp+6,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_if_pc_jump));
    bufp->fullIData(oldp+7,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_if_pc_jump)
                              ? (((0x42U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                                   ? vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1
                                   : vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc) 
                                 + ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_jump)
                                     ? 4U : vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm))
                              : 0U)),32);
    bufp->fullBit(oldp+8,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ready));
    bufp->fullBit(oldp+9,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_stall));
    bufp->fullBit(oldp+10,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_valid));
    bufp->fullCData(oldp+11,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr),5);
    bufp->fullBit(oldp+12,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena));
    bufp->fullCData(oldp+13,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr),5);
    bufp->fullBit(oldp+14,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena));
    bufp->fullBit(oldp+15,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rd_ena));
    bufp->fullCData(oldp+16,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rd_ena)
                               ? (0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                           >> 7U)) : 0U)),5);
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
    bufp->fullIData(oldp+26,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm),32);
    bufp->fullIData(oldp+27,((((0x21U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                               | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_if_pc_jump))
                               ? (vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm 
                                  + vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc)
                               : ((0x42U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                                   ? (0xfffffffeU & 
                                      (vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1 
                                       + vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm))
                                   : vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc))),32);
    bufp->fullBit(oldp+28,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_branch));
    bufp->fullBit(oldp+29,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_valid));
    bufp->fullIData(oldp+30,(vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res),32);
    bufp->fullSData(oldp+31,(((0U != (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_he71b3f47__0))
                               ? (0xfffU & vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm)
                               : 0U)),12);
    bufp->fullCData(oldp+32,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena) 
                               << 6U) | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena) 
                                          << 5U) | 
                                         (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena) 
                                           << 4U) | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_he71b3f47__0))))),7);
    bufp->fullBit(oldp+33,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_valid));
    bufp->fullBit(oldp+34,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_we));
    bufp->fullIData(oldp+35,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_data),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_raddr),32);
    bufp->fullCData(oldp+37,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen),8);
    bufp->fullBit(oldp+38,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_re));
    bufp->fullIData(oldp+39,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_data),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_rd_data_forward),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__mem_data),32);
    bufp->fullBit(oldp+42,((0x6fU == (0x7fU & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst))));
    bufp->fullBit(oldp+43,((0x67U == (0x7fU & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst))));
    bufp->fullBit(oldp+44,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jal_jalr_temp));
    bufp->fullCData(oldp+45,((0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                       >> 7U))),5);
    bufp->fullIData(oldp+46,(((0x100000U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                            >> 0xbU)) 
                              | ((0xff000U & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst) 
                                 | ((0x800U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                               >> 9U)) 
                                    | (0x7feU & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                 >> 0x14U)))))),21);
    bufp->fullSData(oldp+47,(((0x1000U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                          >> 0x13U)) 
                              | ((0x800U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                            << 4U)) 
                                 | ((0x7e0U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                               >> 0x14U)) 
                                    | (0x1eU & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                >> 7U)))))),13);
    bufp->fullSData(oldp+48,((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                              >> 0x14U)),12);
    bufp->fullCData(oldp+49,((0x7fU & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst)),7);
    bufp->fullIData(oldp+50,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal)
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
                               : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_bxx)
                                   ? (((- (IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                   >> 0x1fU))) 
                                       << 0xdU) | (
                                                   (0x1000U 
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
                                   : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgTmp_h15760a56__0)
                                       ? 0U : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr)
                                                ? (
                                                   ((- (IData)(
                                                               (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                      >> 0x14U))
                                                : 4U))))),32);
    bufp->fullBit(oldp+51,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal));
    bufp->fullIData(oldp+52,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc),32);
    bufp->fullIData(oldp+53,((0xfffffffeU & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc)),32);
    bufp->fullIData(oldp+54,((((- (IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
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
    bufp->fullIData(oldp+55,((((- (IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
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
    bufp->fullIData(oldp+56,((((- (IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                           >> 0x14U))),32);
    bufp->fullBit(oldp+57,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                            == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr))));
    bufp->fullBit(oldp+58,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                            == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr))));
    bufp->fullBit(oldp+59,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wbu_forward_en));
    bufp->fullIData(oldp+60,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res),32);
    bufp->fullBit(oldp+61,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena));
    bufp->fullBit(oldp+62,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena));
    bufp->fullBit(oldp+63,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena));
    bufp->fullBit(oldp+64,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena));
    bufp->fullBit(oldp+65,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena));
    bufp->fullBit(oldp+66,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena));
    bufp->fullBit(oldp+67,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena));
    bufp->fullBit(oldp+68,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_id_ex_reg__DOT__stall));
    bufp->fullBit(oldp+69,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__branch));
    bufp->fullBit(oldp+70,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward) 
                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_hf3b640d6__0)) 
                            | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward) 
                               & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h5ab066c6__0)))));
    bufp->fullBit(oldp+71,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward) 
                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_hf3b640d6__0)) 
                            | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward) 
                               & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h5ab066c6__0)))));
    bufp->fullBit(oldp+72,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward));
    bufp->fullBit(oldp+73,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward));
    bufp->fullBit(oldp+74,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op1_forward));
    bufp->fullBit(oldp+75,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward));
    bufp->fullBit(oldp+76,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward));
    bufp->fullBit(oldp+77,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward));
    bufp->fullBit(oldp+78,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op2_forward));
    bufp->fullBit(oldp+79,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward));
    bufp->fullBit(oldp+80,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_forward_ena));
    bufp->fullBit(oldp+81,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op2_forward_ena));
    bufp->fullIData(oldp+82,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward)
                               ? vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res
                               : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward)
                                   ? vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
                                   : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op1_forward)
                                       ? vlSelf->ysyx_25060170_fishtailcore__DOT__mem_rd_data_forward
                                       : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward)
                                           ? vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward
                                           : 0U))))),32);
    bufp->fullIData(oldp+83,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward)
                               ? vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res
                               : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward)
                                   ? vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
                                   : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op2_forward)
                                       ? vlSelf->ysyx_25060170_fishtailcore__DOT__mem_rd_data_forward
                                       : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward)
                                           ? vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward
                                           : 0U))))),32);
    bufp->fullBit(oldp+84,(((vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1 
                             ^ vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op2) 
                            >> 0x1fU)));
    bufp->fullBit(oldp+85,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2));
    bufp->fullBit(oldp+86,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2));
    bufp->fullIData(oldp+87,(((0x42U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                               ? vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1
                               : vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc)),32);
    bufp->fullIData(oldp+88,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_jump)
                               ? 4U : vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm)),32);
    bufp->fullCData(oldp+89,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
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
    bufp->fullBit(oldp+90,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui));
    bufp->fullBit(oldp+91,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc));
    bufp->fullBit(oldp+92,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal));
    bufp->fullBit(oldp+93,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr));
    bufp->fullBit(oldp+94,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h489c6f46__0))));
    bufp->fullBit(oldp+95,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h489c6f46__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+96,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he80da865__0))));
    bufp->fullBit(oldp+97,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he80da865__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+98,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc65f4c50__0))));
    bufp->fullBit(oldp+99,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc65f4c50__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+100,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h1167153d__0))));
    bufp->fullBit(oldp+101,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h1167153d__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+102,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h29152e89__0))));
    bufp->fullBit(oldp+103,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h29152e89__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+104,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_heac6e652__0) 
                             & (IData)((0x2000U == 
                                        (0x3000U & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst))))));
    bufp->fullBit(oldp+105,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7855af38__0))));
    bufp->fullBit(oldp+106,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7855af38__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+107,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2bc0716a__0))));
    bufp->fullBit(oldp+108,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2bc0716a__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+109,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h6fd23990__0))));
    bufp->fullBit(oldp+110,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h6fd23990__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+111,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h03cab0f1__0))));
    bufp->fullBit(oldp+112,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7b49f5a3__0))));
    bufp->fullBit(oldp+113,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h36e9ef3c__0))));
    bufp->fullBit(oldp+114,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he2955f6b__0))));
    bufp->fullBit(oldp+115,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h4c825e07__0))));
    bufp->fullBit(oldp+116,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h3b427111__0))));
    bufp->fullBit(oldp+117,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h03cab0f1__0))));
    bufp->fullBit(oldp+118,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7b49f5a3__0))));
    bufp->fullBit(oldp+119,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd7439362__0))));
    bufp->fullBit(oldp+120,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7a82fdcc__0))));
    bufp->fullBit(oldp+121,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h3b427111__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+122,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+123,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+124,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h36e9ef3c__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+125,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he2955f6b__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+126,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h4c825e07__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+127,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd7439362__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+128,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7a82fdcc__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+129,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h41ceee20__0))));
    bufp->fullBit(oldp+130,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc1b77381__0))));
    bufp->fullBit(oldp+131,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc1b77381__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+132,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_ha08c85bd__0))));
    bufp->fullBit(oldp+133,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5a06bcf6__0))));
    bufp->fullBit(oldp+134,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5a06bcf6__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+135,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h41ceee20__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+136,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x1eU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2e86cea5__0))));
    bufp->fullBit(oldp+137,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2e86cea5__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x1eU))));
    bufp->fullBit(oldp+138,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall));
    bufp->fullBit(oldp+139,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h84595378__0) 
                             & (IData)((0x30000000U 
                                        == (0x30000000U 
                                            & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst))))));
    bufp->fullBit(oldp+140,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw));
    bufp->fullBit(oldp+141,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs));
    bufp->fullBit(oldp+142,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc));
    bufp->fullBit(oldp+143,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi));
    bufp->fullBit(oldp+144,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi));
    bufp->fullBit(oldp+145,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci));
    bufp->fullBit(oldp+146,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h84595378__0) 
                             & (1U == (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                       >> 0x14U)))));
    bufp->fullBit(oldp+147,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77eb01fa__0) 
                             | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                                | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0) 
                                   | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70f4116c__0) 
                                      | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
                                         | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd9b03bc2__0))))))));
    bufp->fullBit(oldp+148,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if_id_reg__DOT__flush));
    bufp->fullCData(oldp+149,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask),4);
    bufp->fullIData(oldp+150,(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_if_pc),32);
    bufp->fullBit(oldp+151,(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_predict));
    bufp->fullBit(oldp+152,(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_if_jal_jalr));
    bufp->fullIData(oldp+153,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res),32);
    bufp->fullIData(oldp+154,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_pc),32);
    bufp->fullIData(oldp+155,(((IData)(4U) + vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_pc)),32);
    bufp->fullIData(oldp+156,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc),32);
    bufp->fullIData(oldp+157,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc),32);
    bufp->fullIData(oldp+158,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst),32);
    bufp->fullBit(oldp+159,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_jump));
    bufp->fullBit(oldp+160,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_valid));
    bufp->fullBit(oldp+161,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena));
    bufp->fullBit(oldp+162,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_csr_ena));
    bufp->fullCData(oldp+163,((0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+164,((0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                        >> 0xfU))),5);
    bufp->fullBit(oldp+165,((0x40000033U == vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    bufp->fullCData(oldp+166,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc),8);
    bufp->fullIData(oldp+167,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc),32);
    bufp->fullIData(oldp+168,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst),32);
    bufp->fullIData(oldp+169,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc),32);
    bufp->fullIData(oldp+170,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1),32);
    bufp->fullIData(oldp+171,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2),32);
    bufp->fullCData(oldp+172,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel),2);
    bufp->fullCData(oldp+173,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel),3);
    bufp->fullBit(oldp+174,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena));
    bufp->fullCData(oldp+175,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr),5);
    bufp->fullCData(oldp+176,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr),5);
    bufp->fullIData(oldp+177,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm),32);
    bufp->fullCData(oldp+178,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl),4);
    bufp->fullCData(oldp+179,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl),2);
    bufp->fullBit(oldp+180,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag));
    bufp->fullBit(oldp+181,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_valid));
    bufp->fullIData(oldp+182,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst),32);
    bufp->fullIData(oldp+183,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data),32);
    bufp->fullCData(oldp+184,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl),4);
    bufp->fullCData(oldp+185,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl),2);
    bufp->fullCData(oldp+186,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl),7);
    bufp->fullBit(oldp+187,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena));
    bufp->fullCData(oldp+188,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr),5);
    bufp->fullSData(oldp+189,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr),12);
    bufp->fullIData(oldp+190,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc),32);
    bufp->fullIData(oldp+191,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc),32);
    bufp->fullBit(oldp+192,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_valid));
    bufp->fullBit(oldp+193,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag));
    bufp->fullIData(oldp+194,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst),32);
    bufp->fullIData(oldp+195,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc),32);
    bufp->fullIData(oldp+196,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc),32);
    bufp->fullCData(oldp+197,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl),4);
    bufp->fullCData(oldp+198,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl),2);
    bufp->fullBit(oldp+199,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena));
    bufp->fullCData(oldp+200,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr),5);
    bufp->fullCData(oldp+201,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl),7);
    bufp->fullSData(oldp+202,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr),12);
    bufp->fullBit(oldp+203,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_valid));
    bufp->fullBit(oldp+204,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re));
    bufp->fullIData(oldp+205,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res),32);
    bufp->fullBit(oldp+206,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag));
    bufp->fullBit(oldp+207,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_valid));
    bufp->fullIData(oldp+208,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_inst),32);
    bufp->fullIData(oldp+209,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_pc),32);
    bufp->fullIData(oldp+210,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc),32);
    bufp->fullIData(oldp+211,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res),32);
    bufp->fullIData(oldp+212,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data),32);
    bufp->fullCData(oldp+213,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl),2);
    bufp->fullBit(oldp+214,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena));
    bufp->fullCData(oldp+215,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr),5);
    bufp->fullCData(oldp+216,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl),7);
    bufp->fullSData(oldp+217,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr),12);
    bufp->fullBit(oldp+218,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_valid_o));
    bufp->fullBit(oldp+219,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_reg_load_flag));
    bufp->fullIData(oldp+220,((((- (IData)((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl)))) 
                                & vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res) 
                               | (((- (IData)((1U & 
                                               ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl) 
                                                >> 1U)))) 
                                   & vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data) 
                                  | ((- (IData)((0U 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))))) 
                                     & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__read_csr_data)))),32);
    bufp->fullIData(oldp+221,(vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward),32);
    bufp->fullIData(oldp+222,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus),32);
    bufp->fullIData(oldp+223,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mepc),32);
    bufp->fullIData(oldp+224,((vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
                               << 2U)),32);
    bufp->fullIData(oldp+225,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mcause),32);
    bufp->fullIData(oldp+226,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0U]),32);
    bufp->fullIData(oldp+227,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [1U]),32);
    bufp->fullIData(oldp+228,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [2U]),32);
    bufp->fullIData(oldp+229,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [3U]),32);
    bufp->fullIData(oldp+230,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [4U]),32);
    bufp->fullIData(oldp+231,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [5U]),32);
    bufp->fullIData(oldp+232,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [6U]),32);
    bufp->fullIData(oldp+233,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [7U]),32);
    bufp->fullIData(oldp+234,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [8U]),32);
    bufp->fullIData(oldp+235,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [9U]),32);
    bufp->fullIData(oldp+236,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xaU]),32);
    bufp->fullIData(oldp+237,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xbU]),32);
    bufp->fullIData(oldp+238,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xcU]),32);
    bufp->fullIData(oldp+239,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xdU]),32);
    bufp->fullIData(oldp+240,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xeU]),32);
    bufp->fullIData(oldp+241,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xfU]),32);
    bufp->fullIData(oldp+242,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x10U]),32);
    bufp->fullIData(oldp+243,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x11U]),32);
    bufp->fullIData(oldp+244,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x12U]),32);
    bufp->fullIData(oldp+245,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x13U]),32);
    bufp->fullIData(oldp+246,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x14U]),32);
    bufp->fullIData(oldp+247,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x15U]),32);
    bufp->fullIData(oldp+248,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x16U]),32);
    bufp->fullIData(oldp+249,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x17U]),32);
    bufp->fullIData(oldp+250,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x18U]),32);
    bufp->fullIData(oldp+251,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x19U]),32);
    bufp->fullIData(oldp+252,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1aU]),32);
    bufp->fullIData(oldp+253,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1bU]),32);
    bufp->fullIData(oldp+254,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1cU]),32);
    bufp->fullIData(oldp+255,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1dU]),32);
    bufp->fullIData(oldp+256,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1eU]),32);
    bufp->fullIData(oldp+257,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1fU]),32);
    bufp->fullIData(oldp+258,(vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data),32);
    bufp->fullBit(oldp+259,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_not_taken_state));
    bufp->fullBit(oldp+260,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_not_taken_state));
    bufp->fullBit(oldp+261,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state));
    bufp->fullBit(oldp+262,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state));
    bufp->fullBit(oldp+263,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall));
    bufp->fullIData(oldp+264,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1),32);
    bufp->fullIData(oldp+265,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2),32);
    bufp->fullIData(oldp+266,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2),32);
    bufp->fullIData(oldp+267,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2),32);
    bufp->fullBit(oldp+268,((1U & (((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
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
    bufp->fullIData(oldp+269,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2),32);
    bufp->fullQData(oldp+270,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul),64);
    bufp->fullIData(oldp+272,((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul)),32);
    bufp->fullIData(oldp+273,((IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+274,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div),32);
    bufp->fullIData(oldp+275,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__rem),32);
    bufp->fullIData(oldp+276,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr),32);
    bufp->fullBit(oldp+277,(((0x94U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                             | ((0xc8U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                | (0xa4U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))))));
    bufp->fullCData(oldp+278,((0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+279,((0x7fU & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)),7);
    bufp->fullCData(oldp+280,((7U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+281,((vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0x19U)),7);
    bufp->fullSData(oldp+282,((vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+283,(((0x80000U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                            >> 0xcU)) 
                               | ((0x7f800U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                               >> 1U)) 
                                  | ((0x400U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                >> 0xaU)) 
                                     | (0x3ffU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                  >> 0x15U)))))),20);
    bufp->fullIData(oldp+284,((vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU)),20);
    bufp->fullSData(oldp+285,(((0xfe0U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                           >> 7U)))),12);
    bufp->fullSData(oldp+286,(((0x800U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                          >> 0x14U)) 
                               | ((0x400U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                             << 3U)) 
                                  | ((0x3f0U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                >> 0x15U)) 
                                     | (0xfU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                >> 8U)))))),12);
    bufp->fullIData(oldp+287,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ifu__DOT__pc),32);
    bufp->fullBit(oldp+288,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__data_ok));
    bufp->fullCData(oldp+289,((3U & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res)),2);
    bufp->fullBit(oldp+290,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_mem__DOT__data_ok));
    bufp->fullCData(oldp+291,((0xffU & vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data)),8);
    bufp->fullSData(oldp+292,((0xffffU & vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data)),16);
    bufp->fullIData(oldp+293,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0]),32);
    bufp->fullIData(oldp+294,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[1]),32);
    bufp->fullIData(oldp+295,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[2]),32);
    bufp->fullIData(oldp+296,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[3]),32);
    bufp->fullIData(oldp+297,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[4]),32);
    bufp->fullIData(oldp+298,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[5]),32);
    bufp->fullIData(oldp+299,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[6]),32);
    bufp->fullIData(oldp+300,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[7]),32);
    bufp->fullIData(oldp+301,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[8]),32);
    bufp->fullIData(oldp+302,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[9]),32);
    bufp->fullIData(oldp+303,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[10]),32);
    bufp->fullIData(oldp+304,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[11]),32);
    bufp->fullIData(oldp+305,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[12]),32);
    bufp->fullIData(oldp+306,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[13]),32);
    bufp->fullIData(oldp+307,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[14]),32);
    bufp->fullIData(oldp+308,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[15]),32);
    bufp->fullIData(oldp+309,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[16]),32);
    bufp->fullIData(oldp+310,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[17]),32);
    bufp->fullIData(oldp+311,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[18]),32);
    bufp->fullIData(oldp+312,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[19]),32);
    bufp->fullIData(oldp+313,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[20]),32);
    bufp->fullIData(oldp+314,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[21]),32);
    bufp->fullIData(oldp+315,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[22]),32);
    bufp->fullIData(oldp+316,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[23]),32);
    bufp->fullIData(oldp+317,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[24]),32);
    bufp->fullIData(oldp+318,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[25]),32);
    bufp->fullIData(oldp+319,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[26]),32);
    bufp->fullIData(oldp+320,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[27]),32);
    bufp->fullIData(oldp+321,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[28]),32);
    bufp->fullIData(oldp+322,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[29]),32);
    bufp->fullIData(oldp+323,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[30]),32);
    bufp->fullIData(oldp+324,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[31]),32);
    bufp->fullIData(oldp+325,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__read_csr_data),32);
    bufp->fullIData(oldp+326,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data),32);
    bufp->fullIData(oldp+327,(((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                ? 0xbU : 0U)),32);
    bufp->fullIData(oldp+328,((vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data 
                               | vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__read_csr_data)),32);
    bufp->fullIData(oldp+329,(((~ vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data) 
                               & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__read_csr_data)),32);
    bufp->fullCData(oldp+330,((0xfU & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))),4);
    bufp->fullBit(oldp+331,(((0x300U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 2U))));
    bufp->fullBit(oldp+332,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr));
    bufp->fullBit(oldp+333,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie));
    bufp->fullBit(oldp+334,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie));
    bufp->fullCData(oldp+335,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp),2);
    bufp->fullBit(oldp+336,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena));
    bufp->fullBit(oldp+337,((1U & ((~ ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 1U)) & ((1U 
                                                   & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                                   ? (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)
                                                   : 
                                                  ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                                    ? 
                                                   (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data 
                                                    >> 3U)
                                                    : (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)))))));
    bufp->fullBit(oldp+338,((1U & ((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                    ? (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)
                                    : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                           ? (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data 
                                              >> 7U)
                                           : (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)))))));
    bufp->fullCData(oldp+339,(((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                ? 3U : ((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                         ? 0U : (3U 
                                                 & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                                     ? 
                                                    (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data 
                                                     >> 0xdU)
                                                     : (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp)))))),2);
    bufp->fullBit(oldp+340,((1U & (((0x305U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                    & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 2U)) | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+341,(((0x305U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 3U))));
    bufp->fullIData(oldp+342,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mtvec_base),30);
    bufp->fullBit(oldp+343,((1U & (((0x341U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                    & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 2U)) | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl)))));
    bufp->fullBit(oldp+344,((1U & (((0x341U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                    & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 3U)) | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+345,(((0x342U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 2U))));
    bufp->fullBit(oldp+346,(((0x342U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 3U))));
    bufp->fullBit(oldp+347,(vlSelf->clk));
    bufp->fullBit(oldp+348,(vlSelf->rst));
    bufp->fullIData(oldp+349,((((~ (IData)(vlSelf->rst)) 
                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr))
                                ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                               [vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr]
                                : 0U)),32);
    bufp->fullIData(oldp+350,((((~ (IData)(vlSelf->rst)) 
                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena))
                                ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                               [vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr]
                                : 0U)),32);
    bufp->fullIData(oldp+351,((((~ (IData)(vlSelf->rst)) 
                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena))
                                ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                               [vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr]
                                : 0U)),32);
    bufp->fullIData(oldp+352,(((IData)(vlSelf->__VdfgTmp_h46471f4e__0)
                                ? vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
                                : (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr) 
                                    & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                                       == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))
                                    ? vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res
                                    : ((IData)(vlSelf->__VdfgTmp_h46471f4e__0)
                                        ? vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
                                        : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgTmp_h15760a56__0)
                                            ? vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward
                                            : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr)
                                                ? (
                                                   ((~ (IData)(vlSelf->rst)) 
                                                    & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr))
                                                    ? 
                                                   vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                   [vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr]
                                                    : 0U)
                                                : vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_pc)))))),32);
    bufp->fullBit(oldp+353,(((~ ((IData)(vlSelf->rst) 
                                 & (0U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)))) 
                             & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena) 
                                 & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h5a345cf6__0) 
                                    & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr) 
                                       == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))) 
                                | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_ha77af658__0) 
                                   & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr) 
                                      == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr)))))));
    bufp->fullBit(oldp+354,(((~ ((IData)(vlSelf->rst) 
                                 & (0U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)))) 
                             & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena) 
                                 & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h5a345cf6__0) 
                                    & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr) 
                                       == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))) 
                                | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_ha77af658__0) 
                                   & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr) 
                                      == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr)))))));
    bufp->fullCData(oldp+355,(((IData)(vlSelf->rst)
                                ? 0U : ((0U == (3U 
                                                & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                         ? 3U : ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                                  ? 0xcU
                                                  : 0U)))),4);
    bufp->fullIData(oldp+356,(((IData)(vlSelf->rst)
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
    bufp->fullBit(oldp+357,(0U));
    bufp->fullCData(oldp+358,(4U),8);
    bufp->fullBit(oldp+359,(1U));
    bufp->fullIData(oldp+360,(2U),32);
    bufp->fullIData(oldp+361,(1U),32);
    bufp->fullCData(oldp+362,(0xfU),4);
    bufp->fullCData(oldp+363,(0U),2);
}
