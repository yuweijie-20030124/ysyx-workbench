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
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBit(c+298,"rst", false,-1);
    tracep->pushNamePrefix("ysyx_25060170_fishtailcore ");
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBit(c+298,"rst", false,-1);
    tracep->declBus(c+107,"if_id_inst", false,-1, 31,0);
    tracep->declBus(c+129,"bp_if_pc", false,-1, 31,0);
    tracep->declBit(c+130,"bp_predict", false,-1);
    tracep->declBit(c+108,"id_if_pc_jump", false,-1);
    tracep->declBus(c+299,"id_jump_pc", false,-1, 31,0);
    tracep->declBit(c+310,"ls_pc_jump", false,-1);
    tracep->declBus(c+131,"ls_jump_pc", false,-1, 31,0);
    tracep->declBit(c+311,"id_ready", false,-1);
    tracep->declBit(c+1,"id_ex_flush", false,-1);
    tracep->declBit(c+310,"if_valid", false,-1);
    tracep->declBus(c+107,"dpic_ifu_inst", false,-1, 31,0);
    tracep->declBus(c+109,"if_next_pc", false,-1, 31,0);
    tracep->declBit(c+310,"ls_flush", false,-1);
    tracep->declBit(c+108,"id_flush", false,-1);
    tracep->declBus(c+132,"if_id_reg_pc", false,-1, 31,0);
    tracep->declBus(c+133,"if_id_reg_inst", false,-1, 31,0);
    tracep->declBit(c+134,"id_jump", false,-1);
    tracep->declBit(c+135,"ex_csr_ena", false,-1);
    tracep->declBit(c+136,"ls_csr_ena", false,-1);
    tracep->declBus(c+300,"rf_id_rs1_data", false,-1, 31,0);
    tracep->declBus(c+301,"rf_id_rs2_data", false,-1, 31,0);
    tracep->declBit(c+311,"ex_ready", false,-1);
    tracep->declBus(c+2,"idu_rs1_addr", false,-1, 4,0);
    tracep->declBit(c+3,"idu_rs1_ena", false,-1);
    tracep->declBus(c+4,"idu_rs2_addr", false,-1, 4,0);
    tracep->declBit(c+5,"idu_rs2_ena", false,-1);
    tracep->declBit(c+6,"idu_rd_ena", false,-1);
    tracep->declBus(c+7,"idu_rd_addr", false,-1, 4,0);
    tracep->declBus(c+8,"idu_alusrc", false,-1, 7,0);
    tracep->declBus(c+9,"idu_lsctl", false,-1, 3,0);
    tracep->declBus(c+10,"idu_wbctl", false,-1, 1,0);
    tracep->declBus(c+11,"idu_op1_sel", false,-1, 1,0);
    tracep->declBus(c+12,"idu_op2_sel", false,-1, 2,0);
    tracep->declBit(c+13,"idu_load_flag", false,-1);
    tracep->declBit(c+14,"idu_csr_ena", false,-1);
    tracep->declBus(c+110,"idu_op1", false,-1, 31,0);
    tracep->declBus(c+111,"idu_op2", false,-1, 31,0);
    tracep->declBus(c+15,"idu_imm", false,-1, 31,0);
    tracep->declBus(c+137,"idu_dpic_rd_addr", false,-1, 4,0);
    tracep->declBus(c+132,"idu_pc", false,-1, 31,0);
    tracep->declBus(c+133,"idu_inst", false,-1, 31,0);
    tracep->declBus(c+138,"idu_csr_imm", false,-1, 4,0);
    tracep->declBit(c+139,"magic_flag", false,-1);
    tracep->declBus(c+140,"id_ex_reg_alusrc", false,-1, 7,0);
    tracep->declBit(c+310,"id_valid", false,-1);
    tracep->declBus(c+141,"id_ex_reg_pc", false,-1, 31,0);
    tracep->declBus(c+142,"id_ex_reg_inst", false,-1, 31,0);
    tracep->declBus(c+143,"id_ex_reg_op1", false,-1, 31,0);
    tracep->declBus(c+144,"id_ex_reg_op2", false,-1, 31,0);
    tracep->declBus(c+145,"id_ex_reg_op1_sel", false,-1, 1,0);
    tracep->declBus(c+146,"id_ex_reg_op2_sel", false,-1, 2,0);
    tracep->declBit(c+147,"id_ex_reg_rd_ena", false,-1);
    tracep->declBus(c+148,"id_ex_reg_rd_addr", false,-1, 4,0);
    tracep->declBus(c+149,"id_ex_reg_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+150,"id_ex_reg_imm", false,-1, 31,0);
    tracep->declBus(c+151,"id_ex_reg_lsctl", false,-1, 3,0);
    tracep->declBus(c+152,"id_ex_reg_wbctl", false,-1, 1,0);
    tracep->declBit(c+153,"id_ex_reg_load_flag", false,-1);
    tracep->declBit(c+311,"ls_ready", false,-1);
    tracep->declBit(c+310,"ex_valid", false,-1);
    tracep->declBus(c+144,"exu_store_data", false,-1, 31,0);
    tracep->declBus(c+16,"exu_res", false,-1, 31,0);
    tracep->declBus(c+17,"exu_csr_addr", false,-1, 11,0);
    tracep->declBus(c+18,"exu_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+154,"ex_ls_reg_inst", false,-1, 31,0);
    tracep->declBus(c+155,"ex_ls_reg_store_data", false,-1, 31,0);
    tracep->declBus(c+131,"ex_ls_reg_exu_res", false,-1, 31,0);
    tracep->declBus(c+156,"ex_ls_reg_ls_ctl", false,-1, 3,0);
    tracep->declBus(c+157,"ex_ls_reg_wb_ctl", false,-1, 1,0);
    tracep->declBus(c+158,"ex_ls_reg_csr_ctl", false,-1, 6,0);
    tracep->declBit(c+159,"ex_ls_reg_rd_ena", false,-1);
    tracep->declBus(c+160,"ex_ls_reg_rd_addr", false,-1, 4,0);
    tracep->declBit(c+135,"ex_ls_reg_ls_csr_ena", false,-1);
    tracep->declBus(c+161,"ex_ls_reg_csr_addr", false,-1, 11,0);
    tracep->declBus(c+162,"ex_ls_reg_pc", false,-1, 31,0);
    tracep->declBus(c+148,"ex_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+16,"ex_rd_data_forward", false,-1, 31,0);
    tracep->declBit(c+19,"ls_valid", false,-1);
    tracep->declBus(c+294,"dpic_ls_data", false,-1, 31,0);
    tracep->declBit(c+20,"ls_dpic_re", false,-1);
    tracep->declBit(c+21,"ls_dpic_we", false,-1);
    tracep->declBus(c+22,"ls_dpic_data", false,-1, 31,0);
    tracep->declBus(c+23,"ls_dpic_raddr", false,-1, 31,0);
    tracep->declBus(c+23,"ls_dpic_waddr", false,-1, 31,0);
    tracep->declBus(c+24,"ls_dpic_wlen", false,-1, 7,0);
    tracep->declBus(c+312,"ls_dpic_rlen", false,-1, 7,0);
    tracep->declBus(c+112,"ls_data_forward", false,-1, 31,0);
    tracep->declBus(c+302,"ls_wb_wbdata", false,-1, 31,0);
    tracep->declBus(c+163,"ls_wb_reg_inst", false,-1, 31,0);
    tracep->declBus(c+164,"ls_wb_reg_pc", false,-1, 31,0);
    tracep->declBus(c+165,"ls_wb_reg_wb_ctl", false,-1, 1,0);
    tracep->declBus(c+166,"ls_wb_reg_lsu_res", false,-1, 31,0);
    tracep->declBus(c+167,"ls_wb_reg_lsu_wb_data", false,-1, 31,0);
    tracep->declBit(c+168,"ls_wb_reg_rd_ena", false,-1);
    tracep->declBus(c+169,"ls_wb_reg_rd_addr", false,-1, 4,0);
    tracep->declBus(c+170,"ls_wb_reg_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+171,"ls_wb_reg_csr_addr", false,-1, 11,0);
    tracep->declBus(c+160,"ls_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+112,"ls_rd_data_forward", false,-1, 31,0);
    tracep->declBus(c+172,"wb_rf_data", false,-1, 31,0);
    tracep->declBit(c+311,"wb_ready", false,-1);
    tracep->declBit(c+168,"wb_rf_rd_ena", false,-1);
    tracep->declBus(c+169,"wb_rf_rd_addr", false,-1, 4,0);
    tracep->declBus(c+169,"wb_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+172,"wb_rd_data_forward", false,-1, 31,0);
    tracep->declBus(c+173,"wbu_dpic_mstatus", false,-1, 31,0);
    tracep->declBus(c+174,"wbu_dpic_mepc", false,-1, 31,0);
    tracep->declBus(c+175,"wbu_dpic_mtvec", false,-1, 31,0);
    tracep->declBus(c+176,"wbu_dpic_mcause", false,-1, 31,0);
    tracep->declBus(c+163,"wbu_dpic_inst", false,-1, 31,0);
    tracep->declBus(c+164,"wbu_dpic_pc", false,-1, 31,0);
    tracep->declBit(c+25,"wbu_dpic_ls_valid", false,-1);
    tracep->declBit(c+26,"wbu_dpic_id_stall", false,-1);
    tracep->declBus(c+177,"regs0", false,-1, 31,0);
    tracep->declBus(c+178,"regs1", false,-1, 31,0);
    tracep->declBus(c+179,"regs2", false,-1, 31,0);
    tracep->declBus(c+180,"regs3", false,-1, 31,0);
    tracep->declBus(c+181,"regs4", false,-1, 31,0);
    tracep->declBus(c+182,"regs5", false,-1, 31,0);
    tracep->declBus(c+183,"regs6", false,-1, 31,0);
    tracep->declBus(c+184,"regs7", false,-1, 31,0);
    tracep->declBus(c+185,"regs8", false,-1, 31,0);
    tracep->declBus(c+186,"regs9", false,-1, 31,0);
    tracep->declBus(c+187,"regs10", false,-1, 31,0);
    tracep->declBus(c+188,"regs11", false,-1, 31,0);
    tracep->declBus(c+189,"regs12", false,-1, 31,0);
    tracep->declBus(c+190,"regs13", false,-1, 31,0);
    tracep->declBus(c+191,"regs14", false,-1, 31,0);
    tracep->declBus(c+192,"regs15", false,-1, 31,0);
    tracep->declBus(c+193,"regs16", false,-1, 31,0);
    tracep->declBus(c+194,"regs17", false,-1, 31,0);
    tracep->declBus(c+195,"regs18", false,-1, 31,0);
    tracep->declBus(c+196,"regs19", false,-1, 31,0);
    tracep->declBus(c+197,"regs20", false,-1, 31,0);
    tracep->declBus(c+198,"regs21", false,-1, 31,0);
    tracep->declBus(c+199,"regs22", false,-1, 31,0);
    tracep->declBus(c+200,"regs23", false,-1, 31,0);
    tracep->declBus(c+201,"regs24", false,-1, 31,0);
    tracep->declBus(c+202,"regs25", false,-1, 31,0);
    tracep->declBus(c+203,"regs26", false,-1, 31,0);
    tracep->declBus(c+204,"regs27", false,-1, 31,0);
    tracep->declBus(c+205,"regs28", false,-1, 31,0);
    tracep->declBus(c+206,"regs29", false,-1, 31,0);
    tracep->declBus(c+207,"regs30", false,-1, 31,0);
    tracep->declBus(c+208,"regs31", false,-1, 31,0);
    tracep->pushNamePrefix("u_ysyx_25060170_DPIC ");
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBit(c+298,"rst", false,-1);
    tracep->declBus(c+109,"pc_i", false,-1, 31,0);
    tracep->declBus(c+107,"inst_o", false,-1, 31,0);
    tracep->declBus(c+132,"ftrace_pc", false,-1, 31,0);
    tracep->declBus(c+137,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+15,"imm", false,-1, 31,0);
    tracep->declBus(c+177,"regs0", false,-1, 31,0);
    tracep->declBus(c+178,"regs1", false,-1, 31,0);
    tracep->declBus(c+179,"regs2", false,-1, 31,0);
    tracep->declBus(c+180,"regs3", false,-1, 31,0);
    tracep->declBus(c+181,"regs4", false,-1, 31,0);
    tracep->declBus(c+182,"regs5", false,-1, 31,0);
    tracep->declBus(c+183,"regs6", false,-1, 31,0);
    tracep->declBus(c+184,"regs7", false,-1, 31,0);
    tracep->declBus(c+185,"regs8", false,-1, 31,0);
    tracep->declBus(c+186,"regs9", false,-1, 31,0);
    tracep->declBus(c+187,"regs10", false,-1, 31,0);
    tracep->declBus(c+188,"regs11", false,-1, 31,0);
    tracep->declBus(c+189,"regs12", false,-1, 31,0);
    tracep->declBus(c+190,"regs13", false,-1, 31,0);
    tracep->declBus(c+191,"regs14", false,-1, 31,0);
    tracep->declBus(c+192,"regs15", false,-1, 31,0);
    tracep->declBus(c+193,"regs16", false,-1, 31,0);
    tracep->declBus(c+194,"regs17", false,-1, 31,0);
    tracep->declBus(c+195,"regs18", false,-1, 31,0);
    tracep->declBus(c+196,"regs19", false,-1, 31,0);
    tracep->declBus(c+197,"regs20", false,-1, 31,0);
    tracep->declBus(c+198,"regs21", false,-1, 31,0);
    tracep->declBus(c+199,"regs22", false,-1, 31,0);
    tracep->declBus(c+200,"regs23", false,-1, 31,0);
    tracep->declBus(c+201,"regs24", false,-1, 31,0);
    tracep->declBus(c+202,"regs25", false,-1, 31,0);
    tracep->declBus(c+203,"regs26", false,-1, 31,0);
    tracep->declBus(c+204,"regs27", false,-1, 31,0);
    tracep->declBus(c+205,"regs28", false,-1, 31,0);
    tracep->declBus(c+206,"regs29", false,-1, 31,0);
    tracep->declBus(c+207,"regs30", false,-1, 31,0);
    tracep->declBus(c+208,"regs31", false,-1, 31,0);
    tracep->declBus(c+173,"mstatus", false,-1, 31,0);
    tracep->declBus(c+175,"mtvec", false,-1, 31,0);
    tracep->declBus(c+174,"mepc", false,-1, 31,0);
    tracep->declBus(c+176,"mcause", false,-1, 31,0);
    tracep->declBit(c+20,"re", false,-1);
    tracep->declBit(c+21,"we", false,-1);
    tracep->declBus(c+22,"data_i", false,-1, 31,0);
    tracep->declBus(c+24,"wlen", false,-1, 7,0);
    tracep->declBus(c+312,"rlen", false,-1, 7,0);
    tracep->declBus(c+163,"wbu_dpic_inst", false,-1, 31,0);
    tracep->declBus(c+164,"wbu_dpic_pc", false,-1, 31,0);
    tracep->declBit(c+25,"wbu_dpic_ls_valid", false,-1);
    tracep->declBit(c+26,"wbu_dpic_id_stall", false,-1);
    tracep->declBus(c+294,"data_o", false,-1, 31,0);
    tracep->declBus(c+23,"raddr", false,-1, 31,0);
    tracep->declBus(c+23,"waddr", false,-1, 31,0);
    tracep->declBus(c+162,"ex_ls_reg_DPIC_pc_i", false,-1, 31,0);
    tracep->declBit(c+139,"magic_flag", false,-1);
    tracep->declBit(c+113,"jal", false,-1);
    tracep->declBit(c+114,"jalr", false,-1);
    tracep->declBit(c+209,"delay", false,-1);
    tracep->declBus(c+210,"last_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_bpu ");
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBit(c+298,"rst", false,-1);
    tracep->declBus(c+107,"inst_i", false,-1, 31,0);
    tracep->declBus(c+109,"pc_i", false,-1, 31,0);
    tracep->declBus(c+129,"bp_pc_o", false,-1, 31,0);
    tracep->declBit(c+130,"bp_predict_o", false,-1);
    tracep->declBit(c+211,"strongly_not_taken_state", false,-1);
    tracep->declBit(c+212,"weakly_not_taken_state", false,-1);
    tracep->declBit(c+213,"weakly_taken_state", false,-1);
    tracep->declBit(c+214,"strongly_taken_state", false,-1);
    tracep->declBus(c+115,"j_imm", false,-1, 20,1);
    tracep->declBus(c+116,"b_imm", false,-1, 12,1);
    tracep->declBus(c+117,"opcode", false,-1, 6,0);
    tracep->declBus(c+109,"op1", false,-1, 31,0);
    tracep->declBus(c+118,"op2", false,-1, 31,0);
    tracep->declBit(c+119,"inst_jal", false,-1);
    tracep->declBit(c+120,"inst_jalr", false,-1);
    tracep->declBit(c+121,"inst_bxx", false,-1);
    tracep->declBus(c+122,"jump_pc", false,-1, 31,0);
    tracep->declBus(c+123,"jump_jalr_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_ex_ls_reg ");
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBit(c+298,"rst", false,-1);
    tracep->declBus(c+142,"inst_i", false,-1, 31,0);
    tracep->declBus(c+141,"pc_i", false,-1, 31,0);
    tracep->declBus(c+144,"store_data_i", false,-1, 31,0);
    tracep->declBus(c+16,"exu_res_i", false,-1, 31,0);
    tracep->declBus(c+151,"ls_ctl_i", false,-1, 3,0);
    tracep->declBus(c+152,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+18,"csr_ctl_i", false,-1, 6,0);
    tracep->declBit(c+147,"rd_ena_i", false,-1);
    tracep->declBus(c+148,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+135,"ex_csr_ena_i", false,-1);
    tracep->declBus(c+17,"csr_addr_i", false,-1, 11,0);
    tracep->declBit(c+310,"ex_valid_i", false,-1);
    tracep->declBit(c+311,"ls_ready_i", false,-1);
    tracep->declBit(c+310,"ls_flush_i", false,-1);
    tracep->declBus(c+154,"inst_o", false,-1, 31,0);
    tracep->declBus(c+162,"pc_o", false,-1, 31,0);
    tracep->declBus(c+155,"store_data_o", false,-1, 31,0);
    tracep->declBus(c+131,"exu_res_o", false,-1, 31,0);
    tracep->declBus(c+156,"ls_ctl_o", false,-1, 3,0);
    tracep->declBus(c+157,"wb_ctl_o", false,-1, 1,0);
    tracep->declBus(c+158,"csr_ctl_o", false,-1, 6,0);
    tracep->declBit(c+159,"rd_ena_o", false,-1);
    tracep->declBus(c+160,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+161,"csr_addr_o", false,-1, 11,0);
    tracep->declBit(c+136,"ls_csr_ena_o", false,-1);
    tracep->declBus(c+148,"ex_rd_addr_forward_o", false,-1, 4,0);
    tracep->declBit(c+135,"ex_csr_o", false,-1);
    tracep->declBus(c+16,"ex_rd_data_forward_o", false,-1, 31,0);
    tracep->declBit(c+310,"flush", false,-1);
    tracep->declBit(c+310,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_exu ");
    tracep->declBit(c+298,"rst", false,-1);
    tracep->declBus(c+143,"op1_i", false,-1, 31,0);
    tracep->declBus(c+144,"op2_i", false,-1, 31,0);
    tracep->declBus(c+145,"op1_sel_i", false,-1, 1,0);
    tracep->declBus(c+146,"op2_sel_i", false,-1, 2,0);
    tracep->declBus(c+148,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+149,"rs1_addr_i", false,-1, 4,0);
    tracep->declBus(c+150,"imm_i", false,-1, 31,0);
    tracep->declBus(c+141,"pc_i", false,-1, 31,0);
    tracep->declBus(c+140,"alu_sel_i", false,-1, 7,0);
    tracep->declBit(c+311,"ls_ready_i", false,-1);
    tracep->declBit(c+310,"id_valid_i", false,-1);
    tracep->declBit(c+310,"ex_valid_o", false,-1);
    tracep->declBit(c+311,"ex_ready_o", false,-1);
    tracep->declBus(c+144,"store_data_o", false,-1, 31,0);
    tracep->declBus(c+16,"exu_res_o", false,-1, 31,0);
    tracep->declBus(c+17,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+18,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+215,"op1", false,-1, 31,0);
    tracep->declBus(c+216,"op2", false,-1, 31,0);
    tracep->declBus(c+217,"op1_add_op2", false,-1, 31,0);
    tracep->declBus(c+218,"op1_sub_op2", false,-1, 31,0);
    tracep->declBit(c+219,"op1_lt_op2", false,-1);
    tracep->declBus(c+220,"op1_sra_op2", false,-1, 31,0);
    tracep->declQuad(c+221,"mul", false,-1, 63,0);
    tracep->declBus(c+223,"op1_mul_op2", false,-1, 31,0);
    tracep->declBus(c+224,"op1_mulh_op2", false,-1, 31,0);
    tracep->declBus(c+225,"div", false,-1, 31,0);
    tracep->declBus(c+226,"rem", false,-1, 31,0);
    tracep->declBus(c+27,"alu_res", false,-1, 31,0);
    tracep->declBit(c+28,"csr_wr_ena", false,-1);
    tracep->declBit(c+29,"csr_rd_ena", false,-1);
    tracep->declBit(c+30,"mret_ena", false,-1);
    tracep->declBit(c+31,"ecall_ena", false,-1);
    tracep->declBit(c+32,"csrrw_ena", false,-1);
    tracep->declBit(c+33,"csrrs_ena", false,-1);
    tracep->declBit(c+34,"csrrc_ena", false,-1);
    tracep->declBus(c+227,"csr_op", false,-1, 31,0);
    tracep->declBit(c+228,"csrrxi_ena", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_id_ex_reg ");
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBit(c+298,"rst", false,-1);
    tracep->declBus(c+133,"inst_i", false,-1, 31,0);
    tracep->declBus(c+132,"pc_i", false,-1, 31,0);
    tracep->declBus(c+110,"op1_i", false,-1, 31,0);
    tracep->declBus(c+111,"op2_i", false,-1, 31,0);
    tracep->declBus(c+11,"op1_sel_i", false,-1, 1,0);
    tracep->declBus(c+12,"op2_sel_i", false,-1, 2,0);
    tracep->declBit(c+6,"rd_ena_i", false,-1);
    tracep->declBus(c+7,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+138,"rs1_addr_i", false,-1, 4,0);
    tracep->declBus(c+15,"imm_i", false,-1, 31,0);
    tracep->declBus(c+8,"alusrc_i", false,-1, 7,0);
    tracep->declBus(c+9,"lsctl_i", false,-1, 3,0);
    tracep->declBus(c+10,"wbctl_i", false,-1, 1,0);
    tracep->declBit(c+14,"csr_ena_i", false,-1);
    tracep->declBit(c+13,"load_flag_i", false,-1);
    tracep->declBit(c+310,"id_valid_i", false,-1);
    tracep->declBit(c+1,"id_flush_i", false,-1);
    tracep->declBit(c+310,"ls_flush_i", false,-1);
    tracep->declBit(c+311,"ex_ready_i", false,-1);
    tracep->declBus(c+142,"inst_o", false,-1, 31,0);
    tracep->declBus(c+141,"pc_o", false,-1, 31,0);
    tracep->declBus(c+143,"op1_o", false,-1, 31,0);
    tracep->declBus(c+144,"op2_o", false,-1, 31,0);
    tracep->declBus(c+145,"op1_sel_o", false,-1, 1,0);
    tracep->declBus(c+146,"op2_sel_o", false,-1, 2,0);
    tracep->declBit(c+147,"rd_ena_o", false,-1);
    tracep->declBus(c+148,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+149,"rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+150,"imm_o", false,-1, 31,0);
    tracep->declBus(c+140,"alusrc_o", false,-1, 7,0);
    tracep->declBus(c+151,"lsctl_o", false,-1, 3,0);
    tracep->declBus(c+152,"wbctl_o", false,-1, 1,0);
    tracep->declBit(c+135,"csr_ena_o", false,-1);
    tracep->declBit(c+153,"load_flag_o", false,-1);
    tracep->declBit(c+1,"flush", false,-1);
    tracep->declBit(c+310,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_idu ");
    tracep->declBit(c+298,"rst", false,-1);
    tracep->declBus(c+133,"inst_i", false,-1, 31,0);
    tracep->declBus(c+132,"pc_i", false,-1, 31,0);
    tracep->declBit(c+134,"bp_jump_i", false,-1);
    tracep->declBus(c+148,"ex_addr_forward", false,-1, 4,0);
    tracep->declBus(c+16,"ex_data_forward", false,-1, 31,0);
    tracep->declBus(c+160,"ls_addr_forward", false,-1, 4,0);
    tracep->declBus(c+112,"ls_data_forward", false,-1, 31,0);
    tracep->declBus(c+169,"wb_addr_forward", false,-1, 4,0);
    tracep->declBus(c+172,"wb_data_forward", false,-1, 31,0);
    tracep->declBit(c+153,"ex_load_ena", false,-1);
    tracep->declBit(c+135,"ex_csr_ena", false,-1);
    tracep->declBit(c+136,"ls_csr_ena", false,-1);
    tracep->declBus(c+300,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+301,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+2,"rs1_addr", false,-1, 4,0);
    tracep->declBit(c+3,"rs1_ena", false,-1);
    tracep->declBus(c+4,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+5,"rs2_ena", false,-1);
    tracep->declBit(c+6,"rd_ena", false,-1);
    tracep->declBus(c+7,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+8,"alusrc_o", false,-1, 7,0);
    tracep->declBus(c+9,"lsctl_o", false,-1, 3,0);
    tracep->declBus(c+10,"wbctl_o", false,-1, 1,0);
    tracep->declBus(c+11,"op1_sel", false,-1, 1,0);
    tracep->declBus(c+12,"op2_sel", false,-1, 2,0);
    tracep->declBit(c+13,"load_flag_o", false,-1);
    tracep->declBit(c+14,"csr_ena_o", false,-1);
    tracep->declBus(c+110,"op1", false,-1, 31,0);
    tracep->declBus(c+111,"op2", false,-1, 31,0);
    tracep->declBus(c+15,"imm", false,-1, 31,0);
    tracep->declBus(c+137,"idu_dpic_rd_addr", false,-1, 4,0);
    tracep->declBus(c+132,"pc_o", false,-1, 31,0);
    tracep->declBus(c+133,"inst_o", false,-1, 31,0);
    tracep->declBus(c+138,"csr_imm", false,-1, 4,0);
    tracep->declBit(c+108,"jump_ena_o", false,-1);
    tracep->declBus(c+299,"jump_pc_o", false,-1, 31,0);
    tracep->declBit(c+310,"if_valid_i", false,-1);
    tracep->declBit(c+311,"ex_ready_i", false,-1);
    tracep->declBit(c+108,"id_flush_o", false,-1);
    tracep->declBit(c+1,"id_ex_flush_o", false,-1);
    tracep->declBit(c+311,"id_ready_o", false,-1);
    tracep->declBit(c+310,"id_valid_o", false,-1);
    tracep->declBit(c+139,"magic_flag", false,-1);
    tracep->declBus(c+137,"rd", false,-1, 4,0);
    tracep->declBus(c+138,"rs1", false,-1, 4,0);
    tracep->declBus(c+229,"rs2", false,-1, 4,0);
    tracep->declBit(c+35,"branch", false,-1);
    tracep->declBit(c+303,"op1_relate", false,-1);
    tracep->declBit(c+304,"op2_relate", false,-1);
    tracep->declBit(c+36,"csr_op1_stall", false,-1);
    tracep->declBit(c+37,"csr_op2_stall", false,-1);
    tracep->declBit(c+1,"id_stall_ena", false,-1);
    tracep->declBit(c+38,"ex_op1_forward", false,-1);
    tracep->declBit(c+39,"ls_op1_forward", false,-1);
    tracep->declBit(c+40,"wb_op1_forward", false,-1);
    tracep->declBit(c+41,"ex_op2_forward", false,-1);
    tracep->declBit(c+42,"ls_op2_forward", false,-1);
    tracep->declBit(c+43,"wb_op2_forward", false,-1);
    tracep->declBit(c+44,"op1_forward_ena", false,-1);
    tracep->declBit(c+45,"op2_forward_ena", false,-1);
    tracep->declBus(c+305,"op1_forward_data", false,-1, 31,0);
    tracep->declBus(c+306,"op2_forward_data", false,-1, 31,0);
    tracep->declBit(c+307,"ex_branch", false,-1);
    tracep->declBit(c+124,"diff_sign", false,-1);
    tracep->declBit(c+125,"op_ltu_op2", false,-1);
    tracep->declBit(c+126,"op1_lt_op2", false,-1);
    tracep->declBus(c+308,"o1", false,-1, 31,0);
    tracep->declBus(c+46,"o2", false,-1, 31,0);
    tracep->pushNamePrefix("decoder ");
    tracep->declBit(c+298,"rst", false,-1);
    tracep->declBus(c+133,"inst", false,-1, 31,0);
    tracep->declBit(c+3,"rs1_ena", false,-1);
    tracep->declBit(c+5,"rs2_ena", false,-1);
    tracep->declBit(c+14,"csr_inst", false,-1);
    tracep->declBus(c+10,"wb_ctl", false,-1, 1,0);
    tracep->declBus(c+9,"mem_ctl", false,-1, 3,0);
    tracep->declBit(c+35,"branch", false,-1);
    tracep->declBus(c+15,"ext_imm", false,-1, 31,0);
    tracep->declBit(c+13,"load", false,-1);
    tracep->declBus(c+11,"op1_sel", false,-1, 1,0);
    tracep->declBus(c+12,"op2_sel", false,-1, 2,0);
    tracep->declBus(c+8,"alu_ctl", false,-1, 7,0);
    tracep->declBus(c+230,"opcode", false,-1, 6,0);
    tracep->declBus(c+231,"funct3", false,-1, 2,0);
    tracep->declBus(c+232,"funct7", false,-1, 6,0);
    tracep->declBus(c+233,"i_imm", false,-1, 11,0);
    tracep->declBus(c+234,"j_imm", false,-1, 20,1);
    tracep->declBus(c+235,"u_imm", false,-1, 19,0);
    tracep->declBus(c+236,"s_imm", false,-1, 11,0);
    tracep->declBus(c+237,"b_imm", false,-1, 12,1);
    tracep->declBus(c+47,"inst_type", false,-1, 7,0);
    tracep->declBit(c+48,"inst_lui", false,-1);
    tracep->declBit(c+49,"inst_auipc", false,-1);
    tracep->declBit(c+50,"inst_jal", false,-1);
    tracep->declBit(c+51,"inst_jalr", false,-1);
    tracep->declBit(c+52,"inst_sb", false,-1);
    tracep->declBit(c+53,"inst_sh", false,-1);
    tracep->declBit(c+54,"inst_sw", false,-1);
    tracep->declBit(c+55,"inst_sd", false,-1);
    tracep->declBit(c+56,"inst_lb", false,-1);
    tracep->declBit(c+57,"inst_lh", false,-1);
    tracep->declBit(c+58,"inst_lw", false,-1);
    tracep->declBit(c+59,"inst_ld", false,-1);
    tracep->declBit(c+60,"inst_lbu", false,-1);
    tracep->declBit(c+61,"inst_lhu", false,-1);
    tracep->declBit(c+62,"inst_lwu", false,-1);
    tracep->declBit(c+63,"inst_beq", false,-1);
    tracep->declBit(c+64,"inst_bne", false,-1);
    tracep->declBit(c+65,"inst_blt", false,-1);
    tracep->declBit(c+66,"inst_bge", false,-1);
    tracep->declBit(c+67,"inst_bltu", false,-1);
    tracep->declBit(c+68,"inst_bgeu", false,-1);
    tracep->declBit(c+69,"inst_add", false,-1);
    tracep->declBit(c+70,"inst_sub", false,-1);
    tracep->declBit(c+71,"inst_sll", false,-1);
    tracep->declBit(c+72,"inst_slt", false,-1);
    tracep->declBit(c+73,"inst_sltu", false,-1);
    tracep->declBit(c+74,"inst_xor", false,-1);
    tracep->declBit(c+75,"inst_srl", false,-1);
    tracep->declBit(c+76,"inst_sra", false,-1);
    tracep->declBit(c+77,"inst_or", false,-1);
    tracep->declBit(c+78,"inst_and", false,-1);
    tracep->declBit(c+79,"inst_div", false,-1);
    tracep->declBit(c+80,"inst_divu", false,-1);
    tracep->declBit(c+81,"inst_mul", false,-1);
    tracep->declBit(c+82,"inst_mulh", false,-1);
    tracep->declBit(c+83,"inst_mulhsu", false,-1);
    tracep->declBit(c+84,"inst_mulhu", false,-1);
    tracep->declBit(c+85,"inst_rem", false,-1);
    tracep->declBit(c+86,"inst_remu", false,-1);
    tracep->declBit(c+87,"inst_addi", false,-1);
    tracep->declBit(c+88,"inst_slti", false,-1);
    tracep->declBit(c+89,"inst_sltiu", false,-1);
    tracep->declBit(c+90,"inst_xori", false,-1);
    tracep->declBit(c+91,"inst_ori", false,-1);
    tracep->declBit(c+92,"inst_andi", false,-1);
    tracep->declBit(c+93,"inst_slli", false,-1);
    tracep->declBit(c+94,"inst_srli", false,-1);
    tracep->declBit(c+95,"inst_srai", false,-1);
    tracep->declBit(c+96,"inst_ecall", false,-1);
    tracep->declBit(c+97,"inst_mret", false,-1);
    tracep->declBit(c+98,"inst_csrrw", false,-1);
    tracep->declBit(c+99,"inst_csrrs", false,-1);
    tracep->declBit(c+100,"inst_csrrc", false,-1);
    tracep->declBit(c+101,"inst_csrrwi", false,-1);
    tracep->declBit(c+102,"inst_csrrsi", false,-1);
    tracep->declBit(c+103,"inst_csrrci", false,-1);
    tracep->declBit(c+104,"inst_ebreak", false,-1);
    tracep->declBit(c+105,"imm_ena", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_25060170_if_id_reg ");
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBit(c+298,"rst", false,-1);
    tracep->declBus(c+109,"pc_i", false,-1, 31,0);
    tracep->declBus(c+107,"inst_i", false,-1, 31,0);
    tracep->declBit(c+130,"bp_jump_i", false,-1);
    tracep->declBit(c+310,"if_valid_i", false,-1);
    tracep->declBit(c+108,"id_flush_i", false,-1);
    tracep->declBit(c+310,"ls_flush_i", false,-1);
    tracep->declBit(c+1,"id_stall_i", false,-1);
    tracep->declBit(c+311,"id_ready_i", false,-1);
    tracep->declBus(c+132,"pc_o", false,-1, 31,0);
    tracep->declBus(c+133,"inst_o", false,-1, 31,0);
    tracep->declBit(c+134,"id_jump_o", false,-1);
    tracep->declBit(c+127,"flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_ifu ");
    tracep->declBit(c+108,"id_pc_jump_i", false,-1);
    tracep->declBus(c+299,"id_pc_i", false,-1, 31,0);
    tracep->declBit(c+310,"ls_pc_jump_i", false,-1);
    tracep->declBus(c+131,"ls_pc_i", false,-1, 31,0);
    tracep->declBus(c+129,"bp_pc_i", false,-1, 31,0);
    tracep->declBit(c+311,"id_ready_i", false,-1);
    tracep->declBit(c+1,"id_stall_i", false,-1);
    tracep->declBit(c+310,"if_valid_o", false,-1);
    tracep->declBus(c+107,"inst_i", false,-1, 31,0);
    tracep->declBus(c+107,"inst_o", false,-1, 31,0);
    tracep->declBus(c+109,"pc_next_o", false,-1, 31,0);
    tracep->declBit(c+1,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_ls_wb_reg ");
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBit(c+298,"rst", false,-1);
    tracep->declBus(c+154,"inst_i", false,-1, 31,0);
    tracep->declBus(c+162,"pc_i", false,-1, 31,0);
    tracep->declBus(c+157,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+131,"lsu_res_i", false,-1, 31,0);
    tracep->declBus(c+302,"lsu_wb_data_i", false,-1, 31,0);
    tracep->declBit(c+159,"rd_ena_i", false,-1);
    tracep->declBus(c+160,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+158,"csr_ctl_i", false,-1, 6,0);
    tracep->declBus(c+161,"csr_addr_i", false,-1, 11,0);
    tracep->declBus(c+112,"ls_data_forward_i", false,-1, 31,0);
    tracep->declBit(c+19,"ls_valid_i", false,-1);
    tracep->declBit(c+311,"wb_ready_i", false,-1);
    tracep->declBus(c+163,"inst_o", false,-1, 31,0);
    tracep->declBus(c+164,"pc_o", false,-1, 31,0);
    tracep->declBus(c+165,"wb_ctl_o", false,-1, 1,0);
    tracep->declBus(c+166,"lsu_res_o", false,-1, 31,0);
    tracep->declBus(c+167,"lsu_wb_data_o", false,-1, 31,0);
    tracep->declBit(c+168,"rd_ena_o", false,-1);
    tracep->declBus(c+169,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+170,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+171,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+160,"ls_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+112,"ls_rd_data_forward", false,-1, 31,0);
    tracep->declBit(c+310,"flush", false,-1);
    tracep->declBit(c+19,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_lsu ");
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBit(c+298,"rst", false,-1);
    tracep->declBus(c+131,"alu_res_i", false,-1, 31,0);
    tracep->declBus(c+155,"store_data_i", false,-1, 31,0);
    tracep->declBus(c+156,"ls_ctl_i", false,-1, 3,0);
    tracep->declBit(c+311,"wb_ready_i", false,-1);
    tracep->declBit(c+310,"ex_valid_i", false,-1);
    tracep->declBit(c+311,"ls_ready_o", false,-1);
    tracep->declBit(c+19,"ls_valid_o", false,-1);
    tracep->declBit(c+310,"ls_flush_o", false,-1);
    tracep->declBit(c+310,"ls_jump_o", false,-1);
    tracep->declBus(c+131,"ls_jump_pc_o", false,-1, 31,0);
    tracep->declBit(c+20,"re", false,-1);
    tracep->declBit(c+21,"we", false,-1);
    tracep->declBus(c+294,"data_i", false,-1, 31,0);
    tracep->declBus(c+22,"data_o", false,-1, 31,0);
    tracep->declBus(c+23,"raddr", false,-1, 31,0);
    tracep->declBus(c+23,"waddr", false,-1, 31,0);
    tracep->declBus(c+24,"wlen", false,-1, 7,0);
    tracep->declBus(c+312,"rlen", false,-1, 7,0);
    tracep->declBus(c+112,"ls_data_forward_o", false,-1, 31,0);
    tracep->declBus(c+302,"ls_data_o", false,-1, 31,0);
    tracep->declBus(c+128,"load_data", false,-1, 31,0);
    tracep->declBit(c+238,"data_ok", false,-1);
    tracep->declBus(c+239,"byte_sel", false,-1, 1,0);
    tracep->declBus(c+239,"half_sel", false,-1, 1,0);
    tracep->declBus(c+295,"data_byte", false,-1, 7,0);
    tracep->declBus(c+296,"data_half", false,-1, 15,0);
    tracep->declBus(c+294,"data_word", false,-1, 31,0);
    tracep->declBus(c+106,"sb_mask", false,-1, 3,0);
    tracep->declBus(c+309,"sh_mask", false,-1, 3,0);
    tracep->declBus(c+313,"sw_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_regfile ");
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBit(c+298,"rst", false,-1);
    tracep->declBus(c+169,"waddr", false,-1, 4,0);
    tracep->declBus(c+172,"wdata", false,-1, 31,0);
    tracep->declBit(c+168,"wen", false,-1);
    tracep->declBit(c+3,"ren1", false,-1);
    tracep->declBit(c+5,"ren2", false,-1);
    tracep->declBus(c+2,"raddr1", false,-1, 4,0);
    tracep->declBus(c+4,"raddr2", false,-1, 4,0);
    tracep->declBus(c+300,"rdata1", false,-1, 31,0);
    tracep->declBus(c+301,"rdata2", false,-1, 31,0);
    tracep->declBus(c+177,"regs0", false,-1, 31,0);
    tracep->declBus(c+178,"regs1", false,-1, 31,0);
    tracep->declBus(c+179,"regs2", false,-1, 31,0);
    tracep->declBus(c+180,"regs3", false,-1, 31,0);
    tracep->declBus(c+181,"regs4", false,-1, 31,0);
    tracep->declBus(c+182,"regs5", false,-1, 31,0);
    tracep->declBus(c+183,"regs6", false,-1, 31,0);
    tracep->declBus(c+184,"regs7", false,-1, 31,0);
    tracep->declBus(c+185,"regs8", false,-1, 31,0);
    tracep->declBus(c+186,"regs9", false,-1, 31,0);
    tracep->declBus(c+187,"regs10", false,-1, 31,0);
    tracep->declBus(c+188,"regs11", false,-1, 31,0);
    tracep->declBus(c+189,"regs12", false,-1, 31,0);
    tracep->declBus(c+190,"regs13", false,-1, 31,0);
    tracep->declBus(c+191,"regs14", false,-1, 31,0);
    tracep->declBus(c+192,"regs15", false,-1, 31,0);
    tracep->declBus(c+193,"regs16", false,-1, 31,0);
    tracep->declBus(c+194,"regs17", false,-1, 31,0);
    tracep->declBus(c+195,"regs18", false,-1, 31,0);
    tracep->declBus(c+196,"regs19", false,-1, 31,0);
    tracep->declBus(c+197,"regs20", false,-1, 31,0);
    tracep->declBus(c+198,"regs21", false,-1, 31,0);
    tracep->declBus(c+199,"regs22", false,-1, 31,0);
    tracep->declBus(c+200,"regs23", false,-1, 31,0);
    tracep->declBus(c+201,"regs24", false,-1, 31,0);
    tracep->declBus(c+202,"regs25", false,-1, 31,0);
    tracep->declBus(c+203,"regs26", false,-1, 31,0);
    tracep->declBus(c+204,"regs27", false,-1, 31,0);
    tracep->declBus(c+205,"regs28", false,-1, 31,0);
    tracep->declBus(c+206,"regs29", false,-1, 31,0);
    tracep->declBus(c+207,"regs30", false,-1, 31,0);
    tracep->declBus(c+208,"regs31", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+240+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_wbu ");
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBit(c+298,"rst", false,-1);
    tracep->declBus(c+167,"ls_rd_data_i", false,-1, 31,0);
    tracep->declBus(c+165,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+166,"exu_res_i", false,-1, 31,0);
    tracep->declBus(c+164,"pc_i", false,-1, 31,0);
    tracep->declBus(c+163,"inst_i", false,-1, 31,0);
    tracep->declBus(c+169,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+168,"rd_ena_i", false,-1);
    tracep->declBus(c+170,"csr_ctl_i", false,-1, 6,0);
    tracep->declBus(c+171,"csr_addr_i", false,-1, 11,0);
    tracep->declBit(c+19,"ls_valid_i", false,-1);
    tracep->declBit(c+1,"id_stall_i", false,-1);
    tracep->declBus(c+172,"wb_data_o", false,-1, 31,0);
    tracep->declBit(c+311,"wb_ready_o", false,-1);
    tracep->declBit(c+168,"wb_rd_ena_o", false,-1);
    tracep->declBus(c+169,"wb_rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+169,"wb_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+172,"wb_rd_data_forward", false,-1, 31,0);
    tracep->declBus(c+173,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+174,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+175,"mtvec_o", false,-1, 31,0);
    tracep->declBus(c+176,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+163,"wbu_dpic_inst_o", false,-1, 31,0);
    tracep->declBus(c+164,"wbu_dpic_pc_o", false,-1, 31,0);
    tracep->declBit(c+25,"wbu_dpic_ls_valid_o", false,-1);
    tracep->declBit(c+26,"wbu_dpic_id_stall_o", false,-1);
    tracep->declBus(c+173,"mstatus", false,-1, 31,0);
    tracep->declBus(c+174,"mepc", false,-1, 31,0);
    tracep->declBus(c+175,"mtvec", false,-1, 31,0);
    tracep->declBus(c+176,"mcause", false,-1, 31,0);
    tracep->declBus(c+272,"read_csr_data", false,-1, 31,0);
    tracep->declBus(c+273,"write_csr_data", false,-1, 31,0);
    tracep->declBus(c+274,"mcause_value", false,-1, 31,0);
    tracep->declBus(c+275,"set_data", false,-1, 31,0);
    tracep->declBus(c+276,"clear_data", false,-1, 31,0);
    tracep->pushNamePrefix("u_ysyx_25060170_csr ");
    tracep->declBit(c+297,"clk", false,-1);
    tracep->declBit(c+298,"rst", false,-1);
    tracep->declBus(c+277,"csr_ctl", false,-1, 3,0);
    tracep->declBus(c+171,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+274,"mcause_value", false,-1, 31,0);
    tracep->declBus(c+273,"write_csr_data", false,-1, 31,0);
    tracep->declBus(c+272,"read_csr_data", false,-1, 31,0);
    tracep->declBus(c+173,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+174,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+175,"mtvec_o", false,-1, 31,0);
    tracep->declBus(c+176,"mcause_o", false,-1, 31,0);
    tracep->declBit(c+278,"mstatus_rd", false,-1);
    tracep->declBit(c+279,"mstatus_wr", false,-1);
    tracep->declBit(c+280,"mstatus_mie", false,-1);
    tracep->declBit(c+281,"mstatus_mpie", false,-1);
    tracep->declBus(c+282,"mstatus_mpp", false,-1, 1,0);
    tracep->declBus(c+173,"mstatus", false,-1, 31,0);
    tracep->declBit(c+283,"mstatus_ie_ena", false,-1);
    tracep->declBit(c+284,"mie_set", false,-1);
    tracep->declBit(c+285,"mpie_set", false,-1);
    tracep->declBus(c+286,"mpp_set", false,-1, 1,0);
    tracep->declBit(c+287,"mtvec_rd", false,-1);
    tracep->declBit(c+288,"mtvec_wr", false,-1);
    tracep->declBus(c+289,"mtvec_base", false,-1, 31,2);
    tracep->declBus(c+314,"mtvec_mode", false,-1, 1,0);
    tracep->declBus(c+175,"mtvec", false,-1, 31,0);
    tracep->declBit(c+290,"mepc_rd", false,-1);
    tracep->declBit(c+291,"mepc_wr", false,-1);
    tracep->declBus(c+174,"mepc", false,-1, 31,0);
    tracep->declBit(c+292,"mcause_rd", false,-1);
    tracep->declBit(c+293,"mcause_wr", false,-1);
    tracep->declBus(c+176,"mcause", false,-1, 31,0);
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
    bufp->fullBit(oldp+1,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_flush));
    bufp->fullCData(oldp+2,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr),5);
    bufp->fullBit(oldp+3,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena));
    bufp->fullCData(oldp+4,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr),5);
    bufp->fullBit(oldp+5,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena));
    bufp->fullBit(oldp+6,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rd_ena));
    bufp->fullCData(oldp+7,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rd_ena)
                              ? (0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                          >> 7U)) : 0U)),5);
    bufp->fullCData(oldp+8,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc),8);
    bufp->fullCData(oldp+9,((0xfU & ((1U & (- (IData)(
                                                      (0x41U 
                                                       == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                     | ((2U & (- (IData)(
                                                         (0x82U 
                                                          == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                        | ((4U & (- (IData)(
                                                            (0x81U 
                                                             == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                           | ((5U & 
                                               (- (IData)(
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
    bufp->fullCData(oldp+10,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_wbctl),2);
    bufp->fullCData(oldp+11,(((2U & ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                                     | ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr))) 
                                        | (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc)))))) 
                              | (1U & (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena)))))),2);
    bufp->fullCData(oldp+12,(((2U & ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                                     | (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr))))) 
                              | ((4U & (- (IData)(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77eb01fa__0) 
                                                   | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                                                      | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0) 
                                                         | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70f4116c__0) 
                                                            | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
                                                               | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd9b03bc2__0))))))))) 
                                 | (1U & (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena))))))),3);
    bufp->fullBit(oldp+13,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag));
    bufp->fullBit(oldp+14,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw) 
                            | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs) 
                               | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc) 
                                  | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi) 
                                     | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi) 
                                        | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci))))))));
    bufp->fullIData(oldp+15,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res),32);
    bufp->fullSData(oldp+17,(((0U != (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_he71b3f47__0))
                               ? (0xfffU & vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm)
                               : 0U)),12);
    bufp->fullCData(oldp+18,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena) 
                               << 6U) | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena) 
                                          << 5U) | 
                                         (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena) 
                                           << 4U) | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_he71b3f47__0))))),7);
    bufp->fullBit(oldp+19,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h53258981__0));
    bufp->fullBit(oldp+20,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_re));
    bufp->fullBit(oldp+21,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_we));
    bufp->fullIData(oldp+22,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_data),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_raddr),32);
    bufp->fullCData(oldp+24,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen),8);
    bufp->fullBit(oldp+25,(vlSelf->ysyx_25060170_fishtailcore__DOT__wbu_dpic_ls_valid));
    bufp->fullBit(oldp+26,(vlSelf->ysyx_25060170_fishtailcore__DOT__wbu_dpic_id_stall));
    bufp->fullIData(oldp+27,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res),32);
    bufp->fullBit(oldp+28,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena));
    bufp->fullBit(oldp+29,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena));
    bufp->fullBit(oldp+30,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena));
    bufp->fullBit(oldp+31,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena));
    bufp->fullBit(oldp+32,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena));
    bufp->fullBit(oldp+33,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena));
    bufp->fullBit(oldp+34,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena));
    bufp->fullBit(oldp+35,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__branch));
    bufp->fullBit(oldp+36,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward) 
                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena)) 
                            | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward) 
                               & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_csr_ena)))));
    bufp->fullBit(oldp+37,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward) 
                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena)) 
                            | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward) 
                               & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_csr_ena)))));
    bufp->fullBit(oldp+38,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward));
    bufp->fullBit(oldp+39,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward));
    bufp->fullBit(oldp+40,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward));
    bufp->fullBit(oldp+41,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward));
    bufp->fullBit(oldp+42,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward));
    bufp->fullBit(oldp+43,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward));
    bufp->fullBit(oldp+44,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward) 
                            | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward) 
                               | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward)))));
    bufp->fullBit(oldp+45,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward) 
                            | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward) 
                               | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward)))));
    bufp->fullIData(oldp+46,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_jump)
                               ? 4U : vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm)),32);
    bufp->fullCData(oldp+47,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
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
    bufp->fullBit(oldp+48,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui));
    bufp->fullBit(oldp+49,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc));
    bufp->fullBit(oldp+50,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal));
    bufp->fullBit(oldp+51,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr));
    bufp->fullBit(oldp+52,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h489c6f46__0))));
    bufp->fullBit(oldp+53,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h489c6f46__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+54,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he80da865__0))));
    bufp->fullBit(oldp+55,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he80da865__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+56,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc65f4c50__0))));
    bufp->fullBit(oldp+57,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc65f4c50__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+58,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h1167153d__0))));
    bufp->fullBit(oldp+59,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h1167153d__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+60,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h29152e89__0))));
    bufp->fullBit(oldp+61,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h29152e89__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+62,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_heac6e652__0) 
                            & (IData)((0x2000U == (0x3000U 
                                                   & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst))))));
    bufp->fullBit(oldp+63,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7855af38__0))));
    bufp->fullBit(oldp+64,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7855af38__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+65,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2bc0716a__0))));
    bufp->fullBit(oldp+66,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2bc0716a__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+67,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h6fd23990__0))));
    bufp->fullBit(oldp+68,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h6fd23990__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+69,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                            & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h03cab0f1__0))));
    bufp->fullBit(oldp+70,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                            & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7b49f5a3__0))));
    bufp->fullBit(oldp+71,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h36e9ef3c__0))));
    bufp->fullBit(oldp+72,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he2955f6b__0))));
    bufp->fullBit(oldp+73,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h4c825e07__0))));
    bufp->fullBit(oldp+74,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h3b427111__0))));
    bufp->fullBit(oldp+75,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                            & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h03cab0f1__0))));
    bufp->fullBit(oldp+76,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                            & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7b49f5a3__0))));
    bufp->fullBit(oldp+77,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd7439362__0))));
    bufp->fullBit(oldp+78,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7a82fdcc__0))));
    bufp->fullBit(oldp+79,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h3b427111__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+80,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+81,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+82,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h36e9ef3c__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+83,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he2955f6b__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+84,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h4c825e07__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+85,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd7439362__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+86,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7a82fdcc__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+87,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h41ceee20__0))));
    bufp->fullBit(oldp+88,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc1b77381__0))));
    bufp->fullBit(oldp+89,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc1b77381__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+90,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_ha08c85bd__0))));
    bufp->fullBit(oldp+91,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5a06bcf6__0))));
    bufp->fullBit(oldp+92,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5a06bcf6__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+93,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h41ceee20__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+94,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x1eU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2e86cea5__0))));
    bufp->fullBit(oldp+95,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2e86cea5__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0x1eU))));
    bufp->fullBit(oldp+96,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall));
    bufp->fullBit(oldp+97,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h84595378__0) 
                            & (IData)((0x30000000U 
                                       == (0x30000000U 
                                           & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst))))));
    bufp->fullBit(oldp+98,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw));
    bufp->fullBit(oldp+99,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs));
    bufp->fullBit(oldp+100,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc));
    bufp->fullBit(oldp+101,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi));
    bufp->fullBit(oldp+102,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi));
    bufp->fullBit(oldp+103,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci));
    bufp->fullBit(oldp+104,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h84595378__0) 
                             & (1U == (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                       >> 0x14U)))));
    bufp->fullBit(oldp+105,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77eb01fa__0) 
                             | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                                | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0) 
                                   | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70f4116c__0) 
                                      | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
                                         | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd9b03bc2__0))))))));
    bufp->fullCData(oldp+106,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask),4);
    bufp->fullIData(oldp+107,(vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst),32);
    bufp->fullBit(oldp+108,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_if_pc_jump));
    bufp->fullIData(oldp+109,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__op1),32);
    bufp->fullIData(oldp+110,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1),32);
    bufp->fullIData(oldp+111,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op2),32);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_data_forward),32);
    bufp->fullBit(oldp+113,((0x6fU == (0x7fU & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst))));
    bufp->fullBit(oldp+114,((0x67U == (0x7fU & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst))));
    bufp->fullIData(oldp+115,(((0x80000U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                            >> 0xcU)) 
                               | ((0x7f800U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                               >> 1U)) 
                                  | ((0x400U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                >> 0xaU)) 
                                     | (0x3ffU & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                  >> 0x15U)))))),20);
    bufp->fullSData(oldp+116,(((0x800U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                          >> 0x14U)) 
                               | ((0x400U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                             << 3U)) 
                                  | ((0x3f0U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                >> 0x15U)) 
                                     | (0xfU & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                >> 8U)))))),12);
    bufp->fullCData(oldp+117,((0x7fU & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst)),7);
    bufp->fullIData(oldp+118,((4U | (((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal))) 
                                      & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgTmp_hc778dc88__0) 
                                     | (((- (IData)(
                                                    ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_bxx) 
                                                     & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                        >> 0x1fU)))) 
                                         & (((- (IData)(
                                                        (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | (0xfffU 
                                               & ((0x1000U 
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
                                                              >> 7U)))))))) 
                                        | ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr))) 
                                           & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgTmp_hc778dc88__0))))),32);
    bufp->fullBit(oldp+119,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal));
    bufp->fullBit(oldp+120,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr));
    bufp->fullBit(oldp+121,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_bxx));
    bufp->fullIData(oldp+122,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc),32);
    bufp->fullIData(oldp+123,((0xfffffffeU & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc)),32);
    bufp->fullBit(oldp+124,(((vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1 
                              ^ vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op2) 
                             >> 0x1fU)));
    bufp->fullBit(oldp+125,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2));
    bufp->fullBit(oldp+126,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2));
    bufp->fullBit(oldp+127,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if_id_reg__DOT__flush));
    bufp->fullIData(oldp+128,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__load_data),32);
    bufp->fullIData(oldp+129,(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_if_pc),32);
    bufp->fullBit(oldp+130,(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_predict));
    bufp->fullIData(oldp+131,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res),32);
    bufp->fullIData(oldp+132,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc),32);
    bufp->fullIData(oldp+133,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst),32);
    bufp->fullBit(oldp+134,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_jump));
    bufp->fullBit(oldp+135,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena));
    bufp->fullBit(oldp+136,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_csr_ena));
    bufp->fullCData(oldp+137,((0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+138,((0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                        >> 0xfU))),5);
    bufp->fullBit(oldp+139,((0x40000033U == vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    bufp->fullCData(oldp+140,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc),8);
    bufp->fullIData(oldp+141,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc),32);
    bufp->fullIData(oldp+142,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst),32);
    bufp->fullIData(oldp+143,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1),32);
    bufp->fullIData(oldp+144,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2),32);
    bufp->fullCData(oldp+145,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel),2);
    bufp->fullCData(oldp+146,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel),3);
    bufp->fullBit(oldp+147,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena));
    bufp->fullCData(oldp+148,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr),5);
    bufp->fullCData(oldp+149,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr),5);
    bufp->fullIData(oldp+150,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm),32);
    bufp->fullCData(oldp+151,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl),4);
    bufp->fullCData(oldp+152,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl),2);
    bufp->fullBit(oldp+153,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag));
    bufp->fullIData(oldp+154,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst),32);
    bufp->fullIData(oldp+155,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data),32);
    bufp->fullCData(oldp+156,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl),4);
    bufp->fullCData(oldp+157,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl),2);
    bufp->fullCData(oldp+158,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl),7);
    bufp->fullBit(oldp+159,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena));
    bufp->fullCData(oldp+160,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr),5);
    bufp->fullSData(oldp+161,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr),12);
    bufp->fullIData(oldp+162,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc),32);
    bufp->fullIData(oldp+163,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_inst),32);
    bufp->fullIData(oldp+164,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_pc),32);
    bufp->fullCData(oldp+165,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_wb_ctl),2);
    bufp->fullIData(oldp+166,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_lsu_res),32);
    bufp->fullIData(oldp+167,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_lsu_wb_data),32);
    bufp->fullBit(oldp+168,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_rd_ena));
    bufp->fullCData(oldp+169,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_rd_addr),5);
    bufp->fullCData(oldp+170,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl),7);
    bufp->fullSData(oldp+171,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_addr),12);
    bufp->fullIData(oldp+172,(vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rf_data),32);
    bufp->fullIData(oldp+173,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus),32);
    bufp->fullIData(oldp+174,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mepc),32);
    bufp->fullIData(oldp+175,((vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
                               << 2U)),32);
    bufp->fullIData(oldp+176,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mcause),32);
    bufp->fullIData(oldp+177,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0U]),32);
    bufp->fullIData(oldp+178,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [1U]),32);
    bufp->fullIData(oldp+179,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [2U]),32);
    bufp->fullIData(oldp+180,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [3U]),32);
    bufp->fullIData(oldp+181,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [4U]),32);
    bufp->fullIData(oldp+182,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [5U]),32);
    bufp->fullIData(oldp+183,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [6U]),32);
    bufp->fullIData(oldp+184,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [7U]),32);
    bufp->fullIData(oldp+185,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [8U]),32);
    bufp->fullIData(oldp+186,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [9U]),32);
    bufp->fullIData(oldp+187,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xaU]),32);
    bufp->fullIData(oldp+188,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xbU]),32);
    bufp->fullIData(oldp+189,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xcU]),32);
    bufp->fullIData(oldp+190,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xdU]),32);
    bufp->fullIData(oldp+191,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xeU]),32);
    bufp->fullIData(oldp+192,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xfU]),32);
    bufp->fullIData(oldp+193,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x10U]),32);
    bufp->fullIData(oldp+194,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x11U]),32);
    bufp->fullIData(oldp+195,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x12U]),32);
    bufp->fullIData(oldp+196,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x13U]),32);
    bufp->fullIData(oldp+197,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x14U]),32);
    bufp->fullIData(oldp+198,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x15U]),32);
    bufp->fullIData(oldp+199,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x16U]),32);
    bufp->fullIData(oldp+200,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x17U]),32);
    bufp->fullIData(oldp+201,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x18U]),32);
    bufp->fullIData(oldp+202,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x19U]),32);
    bufp->fullIData(oldp+203,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1aU]),32);
    bufp->fullIData(oldp+204,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1bU]),32);
    bufp->fullIData(oldp+205,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1cU]),32);
    bufp->fullIData(oldp+206,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1dU]),32);
    bufp->fullIData(oldp+207,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1eU]),32);
    bufp->fullIData(oldp+208,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1fU]),32);
    bufp->fullBit(oldp+209,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__delay));
    bufp->fullIData(oldp+210,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__last_pc),32);
    bufp->fullBit(oldp+211,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_not_taken_state));
    bufp->fullBit(oldp+212,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_not_taken_state));
    bufp->fullBit(oldp+213,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state));
    bufp->fullBit(oldp+214,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state));
    bufp->fullIData(oldp+215,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1),32);
    bufp->fullIData(oldp+216,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2),32);
    bufp->fullIData(oldp+217,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2),32);
    bufp->fullIData(oldp+218,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2),32);
    bufp->fullBit(oldp+219,((1U & (((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
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
    bufp->fullIData(oldp+220,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2),32);
    bufp->fullQData(oldp+221,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul),64);
    bufp->fullIData(oldp+223,((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul)),32);
    bufp->fullIData(oldp+224,((IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+225,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div),32);
    bufp->fullIData(oldp+226,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__rem),32);
    bufp->fullIData(oldp+227,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr),32);
    bufp->fullBit(oldp+228,(((0x94U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                             | ((0xc8U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                | (0xa4U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))))));
    bufp->fullCData(oldp+229,((0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+230,((0x7fU & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)),7);
    bufp->fullCData(oldp+231,((7U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+232,((vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0x19U)),7);
    bufp->fullSData(oldp+233,((vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+234,(((0x80000U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                            >> 0xcU)) 
                               | ((0x7f800U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                               >> 1U)) 
                                  | ((0x400U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                >> 0xaU)) 
                                     | (0x3ffU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                  >> 0x15U)))))),20);
    bufp->fullIData(oldp+235,((vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU)),20);
    bufp->fullSData(oldp+236,(((0xfe0U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                           >> 7U)))),12);
    bufp->fullSData(oldp+237,(((0x800U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                          >> 0x14U)) 
                               | ((0x400U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                             << 3U)) 
                                  | ((0x3f0U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                >> 0x15U)) 
                                     | (0xfU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                >> 8U)))))),12);
    bufp->fullBit(oldp+238,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__data_ok));
    bufp->fullCData(oldp+239,((3U & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res)),2);
    bufp->fullIData(oldp+240,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0]),32);
    bufp->fullIData(oldp+241,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[1]),32);
    bufp->fullIData(oldp+242,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[2]),32);
    bufp->fullIData(oldp+243,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[3]),32);
    bufp->fullIData(oldp+244,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[4]),32);
    bufp->fullIData(oldp+245,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[5]),32);
    bufp->fullIData(oldp+246,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[6]),32);
    bufp->fullIData(oldp+247,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[7]),32);
    bufp->fullIData(oldp+248,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[8]),32);
    bufp->fullIData(oldp+249,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[9]),32);
    bufp->fullIData(oldp+250,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[10]),32);
    bufp->fullIData(oldp+251,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[11]),32);
    bufp->fullIData(oldp+252,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[12]),32);
    bufp->fullIData(oldp+253,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[13]),32);
    bufp->fullIData(oldp+254,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[14]),32);
    bufp->fullIData(oldp+255,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[15]),32);
    bufp->fullIData(oldp+256,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[16]),32);
    bufp->fullIData(oldp+257,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[17]),32);
    bufp->fullIData(oldp+258,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[18]),32);
    bufp->fullIData(oldp+259,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[19]),32);
    bufp->fullIData(oldp+260,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[20]),32);
    bufp->fullIData(oldp+261,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[21]),32);
    bufp->fullIData(oldp+262,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[22]),32);
    bufp->fullIData(oldp+263,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[23]),32);
    bufp->fullIData(oldp+264,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[24]),32);
    bufp->fullIData(oldp+265,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[25]),32);
    bufp->fullIData(oldp+266,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[26]),32);
    bufp->fullIData(oldp+267,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[27]),32);
    bufp->fullIData(oldp+268,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[28]),32);
    bufp->fullIData(oldp+269,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[29]),32);
    bufp->fullIData(oldp+270,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[30]),32);
    bufp->fullIData(oldp+271,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[31]),32);
    bufp->fullIData(oldp+272,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__read_csr_data),32);
    bufp->fullIData(oldp+273,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data),32);
    bufp->fullIData(oldp+274,(((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl))
                                ? 0xbU : 0U)),32);
    bufp->fullIData(oldp+275,((vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_lsu_res 
                               | vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__read_csr_data)),32);
    bufp->fullIData(oldp+276,(((~ vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_lsu_res) 
                               & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__read_csr_data)),32);
    bufp->fullCData(oldp+277,((0xfU & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl))),4);
    bufp->fullBit(oldp+278,(((0x300U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                >> 2U))));
    bufp->fullBit(oldp+279,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr));
    bufp->fullBit(oldp+280,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie));
    bufp->fullBit(oldp+281,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie));
    bufp->fullCData(oldp+282,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp),2);
    bufp->fullBit(oldp+283,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena));
    bufp->fullBit(oldp+284,((1U & ((~ ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                       >> 1U)) & ((1U 
                                                   & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl))
                                                   ? (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)
                                                   : 
                                                  ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                                    ? 
                                                   (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data 
                                                    >> 3U)
                                                    : (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)))))));
    bufp->fullBit(oldp+285,((1U & ((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl))
                                    ? (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)
                                    : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                       | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                           ? (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data 
                                              >> 7U)
                                           : (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)))))));
    bufp->fullCData(oldp+286,(((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl))
                                ? 3U : ((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl))
                                         ? 0U : (3U 
                                                 & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                                     ? 
                                                    (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data 
                                                     >> 0xdU)
                                                     : (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp)))))),2);
    bufp->fullBit(oldp+287,((1U & (((0x305U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_addr)) 
                                    & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                       >> 2U)) | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+288,(((0x305U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                >> 3U))));
    bufp->fullIData(oldp+289,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mtvec_base),30);
    bufp->fullBit(oldp+290,((1U & (((0x341U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_addr)) 
                                    & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                       >> 2U)) | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl)))));
    bufp->fullBit(oldp+291,((1U & (((0x341U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_addr)) 
                                    & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                       >> 3U)) | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+292,(((0x342U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                >> 2U))));
    bufp->fullBit(oldp+293,(((0x342U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                >> 3U))));
    bufp->fullIData(oldp+294,(vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ls_data),32);
    bufp->fullCData(oldp+295,((0xffU & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ls_data)),8);
    bufp->fullSData(oldp+296,((0xffffU & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ls_data)),16);
    bufp->fullBit(oldp+297,(vlSelf->clk));
    bufp->fullBit(oldp+298,(vlSelf->rst));
    bufp->fullIData(oldp+299,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_if_pc_jump)
                                ? (((0x42U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                                     ? vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1
                                     : vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc) 
                                   + ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_jump)
                                       ? 4U : vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm))
                                : 0U)),32);
    bufp->fullIData(oldp+300,((((~ (IData)(vlSelf->rst)) 
                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena))
                                ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                               [vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr]
                                : 0U)),32);
    bufp->fullIData(oldp+301,((((~ (IData)(vlSelf->rst)) 
                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena))
                                ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                               [vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr]
                                : 0U)),32);
    bufp->fullIData(oldp+302,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_re)
                                ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__load_data
                                : 0U)),32);
    bufp->fullBit(oldp+303,(((~ ((IData)(vlSelf->rst) 
                                 & (0U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)))) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena) 
                                & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag) 
                                   & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr) 
                                      == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))))));
    bufp->fullBit(oldp+304,(((~ ((IData)(vlSelf->rst) 
                                 & (0U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)))) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena) 
                                & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag) 
                                   & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr) 
                                      == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))))));
    bufp->fullIData(oldp+305,((((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward))) 
                                & vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res) 
                               | (((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward))) 
                                   & vlSelf->ysyx_25060170_fishtailcore__DOT__ls_data_forward) 
                                  | ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward))) 
                                     & vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rf_data)))),32);
    bufp->fullIData(oldp+306,((((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward))) 
                                & vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res) 
                               | (((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward))) 
                                   & vlSelf->ysyx_25060170_fishtailcore__DOT__ls_data_forward) 
                                  | ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward))) 
                                     & vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rf_data)))),32);
    bufp->fullBit(oldp+307,(((IData)(vlSelf->rst) | 
                             (((0xeU == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                               & (vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1 
                                  == vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op2)) 
                              | (((0x1cU == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                                  & (vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1 
                                     != vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op2)) 
                                 | (((0xe0U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2)) 
                                    | (((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2)) 
                                        & (0xdU == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))) 
                                       | (((0x38U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                                           & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2)) 
                                          | ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2)) 
                                             & (0x70U 
                                                == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc)))))))))));
    bufp->fullIData(oldp+308,(((0x42U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                                ? vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1
                                : vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc)),32);
    bufp->fullCData(oldp+309,(((IData)(vlSelf->rst)
                                ? 0U : ((0U == (3U 
                                                & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                         ? 3U : ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                                  ? 0xcU
                                                  : 0U)))),4);
    bufp->fullBit(oldp+310,(0U));
    bufp->fullBit(oldp+311,(1U));
    bufp->fullCData(oldp+312,(4U),8);
    bufp->fullCData(oldp+313,(0xfU),4);
    bufp->fullCData(oldp+314,(0U),2);
}
