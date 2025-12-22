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
    tracep->declBit(c+309,"clk", false,-1);
    tracep->declBit(c+310,"rst", false,-1);
    tracep->pushNamePrefix("ysyx_25060170_fishtailcore ");
    tracep->declBit(c+309,"clk", false,-1);
    tracep->declBit(c+310,"rst", false,-1);
    tracep->declBus(c+1,"if_id_inst", false,-1, 31,0);
    tracep->declBus(c+135,"bp_if_pc", false,-1, 31,0);
    tracep->declBit(c+136,"bp_predict", false,-1);
    tracep->declBus(c+311,"bp_rs1_data", false,-1, 31,0);
    tracep->declBus(c+12,"bp_rs1_addr", false,-1, 4,0);
    tracep->declBit(c+13,"bp_rs1_ena", false,-1);
    tracep->declBit(c+124,"id_if_pc_jump", false,-1);
    tracep->declBus(c+312,"id_jump_pc", false,-1, 31,0);
    tracep->declBit(c+327,"ls_pc_jump", false,-1);
    tracep->declBus(c+137,"ls_jump_pc", false,-1, 31,0);
    tracep->declBit(c+328,"id_ready", false,-1);
    tracep->declBit(c+16,"id_stall", false,-1);
    tracep->declBit(c+327,"if_valid", false,-1);
    tracep->declBus(c+138,"if_id_pc", false,-1, 31,0);
    tracep->declBus(c+139,"if_id_next_pc", false,-1, 31,0);
    tracep->declBus(c+1,"dpic_ifu_inst", false,-1, 31,0);
    tracep->declBus(c+329,"if_next_pc", false,-1, 31,0);
    tracep->declBit(c+327,"ls_flush", false,-1);
    tracep->declBit(c+125,"id_flush", false,-1);
    tracep->declBus(c+140,"if_id_reg_pc", false,-1, 31,0);
    tracep->declBus(c+141,"if_id_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+142,"if_id_reg_inst", false,-1, 31,0);
    tracep->declBit(c+143,"id_jump", false,-1);
    tracep->declBit(c+144,"ex_csr_ena", false,-1);
    tracep->declBit(c+145,"ls_csr_ena", false,-1);
    tracep->declBus(c+313,"rf_id_rs1_data", false,-1, 31,0);
    tracep->declBus(c+314,"rf_id_rs2_data", false,-1, 31,0);
    tracep->declBit(c+328,"ex_ready", false,-1);
    tracep->declBus(c+17,"idu_rs1_addr", false,-1, 4,0);
    tracep->declBit(c+18,"idu_rs1_ena", false,-1);
    tracep->declBus(c+19,"idu_rs2_addr", false,-1, 4,0);
    tracep->declBit(c+20,"idu_rs2_ena", false,-1);
    tracep->declBit(c+21,"idu_rd_ena", false,-1);
    tracep->declBus(c+22,"idu_rd_addr", false,-1, 4,0);
    tracep->declBus(c+23,"idu_alusrc", false,-1, 7,0);
    tracep->declBus(c+24,"idu_lsctl", false,-1, 3,0);
    tracep->declBus(c+25,"idu_wbctl", false,-1, 1,0);
    tracep->declBus(c+26,"idu_op1_sel", false,-1, 1,0);
    tracep->declBus(c+27,"idu_op2_sel", false,-1, 2,0);
    tracep->declBit(c+28,"idu_load_flag", false,-1);
    tracep->declBit(c+29,"idu_csr_ena", false,-1);
    tracep->declBus(c+126,"idu_op1", false,-1, 31,0);
    tracep->declBus(c+127,"idu_op2", false,-1, 31,0);
    tracep->declBus(c+30,"idu_imm", false,-1, 31,0);
    tracep->declBus(c+146,"idu_dpic_rd_addr", false,-1, 4,0);
    tracep->declBus(c+140,"idu_pc", false,-1, 31,0);
    tracep->declBus(c+141,"idu_next_pc", false,-1, 31,0);
    tracep->declBus(c+142,"idu_inst", false,-1, 31,0);
    tracep->declBus(c+147,"idu_csr_imm", false,-1, 4,0);
    tracep->declBit(c+128,"ex_branch", false,-1);
    tracep->declBit(c+148,"magic_flag", false,-1);
    tracep->declBus(c+149,"id_ex_reg_alusrc", false,-1, 7,0);
    tracep->declBit(c+327,"id_valid", false,-1);
    tracep->declBus(c+150,"id_ex_reg_pc", false,-1, 31,0);
    tracep->declBus(c+151,"id_ex_reg_inst", false,-1, 31,0);
    tracep->declBus(c+152,"id_ex_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+153,"id_ex_reg_op1", false,-1, 31,0);
    tracep->declBus(c+154,"id_ex_reg_op2", false,-1, 31,0);
    tracep->declBus(c+155,"id_ex_reg_op1_sel", false,-1, 1,0);
    tracep->declBus(c+156,"id_ex_reg_op2_sel", false,-1, 2,0);
    tracep->declBit(c+157,"id_ex_reg_rd_ena", false,-1);
    tracep->declBus(c+158,"id_ex_reg_rd_addr", false,-1, 4,0);
    tracep->declBus(c+159,"id_ex_reg_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+160,"id_ex_reg_imm", false,-1, 31,0);
    tracep->declBus(c+161,"id_ex_reg_lsctl", false,-1, 3,0);
    tracep->declBus(c+162,"id_ex_reg_wbctl", false,-1, 1,0);
    tracep->declBit(c+163,"id_ex_reg_load_flag", false,-1);
    tracep->declBit(c+328,"ls_ready", false,-1);
    tracep->declBus(c+151,"exu_inst", false,-1, 31,0);
    tracep->declBus(c+150,"exu_pc", false,-1, 31,0);
    tracep->declBus(c+152,"exu_next_pc", false,-1, 31,0);
    tracep->declBit(c+327,"ex_valid", false,-1);
    tracep->declBus(c+154,"exu_store_data", false,-1, 31,0);
    tracep->declBus(c+31,"exu_res", false,-1, 31,0);
    tracep->declBus(c+32,"exu_csr_addr", false,-1, 11,0);
    tracep->declBus(c+33,"exu_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+164,"ex_ls_reg_inst", false,-1, 31,0);
    tracep->declBus(c+165,"ex_ls_reg_store_data", false,-1, 31,0);
    tracep->declBus(c+137,"ex_ls_reg_exu_res", false,-1, 31,0);
    tracep->declBus(c+166,"ex_ls_reg_ls_ctl", false,-1, 3,0);
    tracep->declBus(c+167,"ex_ls_reg_wb_ctl", false,-1, 1,0);
    tracep->declBus(c+168,"ex_ls_reg_csr_ctl", false,-1, 6,0);
    tracep->declBit(c+169,"ex_ls_reg_rd_ena", false,-1);
    tracep->declBus(c+170,"ex_ls_reg_rd_addr", false,-1, 4,0);
    tracep->declBit(c+144,"ex_ls_reg_ls_csr_ena", false,-1);
    tracep->declBus(c+171,"ex_ls_reg_csr_addr", false,-1, 11,0);
    tracep->declBus(c+172,"ex_ls_reg_pc", false,-1, 31,0);
    tracep->declBus(c+173,"ex_ls_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+158,"ex_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+31,"ex_rd_data_forward", false,-1, 31,0);
    tracep->declBit(c+34,"ls_valid", false,-1);
    tracep->declBus(c+306,"dpic_ls_data", false,-1, 31,0);
    tracep->declBit(c+35,"ls_dpic_re", false,-1);
    tracep->declBit(c+36,"ls_dpic_we", false,-1);
    tracep->declBus(c+37,"ls_dpic_data", false,-1, 31,0);
    tracep->declBus(c+38,"ls_dpic_raddr", false,-1, 31,0);
    tracep->declBus(c+38,"ls_dpic_waddr", false,-1, 31,0);
    tracep->declBus(c+39,"ls_dpic_wlen", false,-1, 7,0);
    tracep->declBus(c+330,"ls_dpic_rlen", false,-1, 7,0);
    tracep->declBus(c+129,"ls_data_forward", false,-1, 31,0);
    tracep->declBus(c+315,"ls_wb_wbdata", false,-1, 31,0);
    tracep->declBus(c+172,"ls_pc", false,-1, 31,0);
    tracep->declBus(c+173,"ls_next_pc", false,-1, 31,0);
    tracep->declBus(c+164,"ls_inst", false,-1, 31,0);
    tracep->declBus(c+174,"ls_wb_reg_inst", false,-1, 31,0);
    tracep->declBus(c+175,"ls_wb_reg_pc", false,-1, 31,0);
    tracep->declBus(c+176,"ls_wb_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+177,"ls_wb_reg_wb_ctl", false,-1, 1,0);
    tracep->declBus(c+178,"ls_wb_reg_lsu_res", false,-1, 31,0);
    tracep->declBus(c+179,"ls_wb_reg_lsu_wb_data", false,-1, 31,0);
    tracep->declBit(c+180,"ls_wb_reg_rd_ena", false,-1);
    tracep->declBus(c+181,"ls_wb_reg_rd_addr", false,-1, 4,0);
    tracep->declBus(c+182,"ls_wb_reg_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+183,"ls_wb_reg_csr_addr", false,-1, 11,0);
    tracep->declBus(c+170,"ls_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+129,"ls_rd_data_forward", false,-1, 31,0);
    tracep->declBus(c+184,"wb_rf_data", false,-1, 31,0);
    tracep->declBit(c+328,"wb_ready", false,-1);
    tracep->declBit(c+180,"wb_rf_rd_ena", false,-1);
    tracep->declBus(c+181,"wb_rf_rd_addr", false,-1, 4,0);
    tracep->declBus(c+181,"wb_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+184,"wb_rd_data_forward", false,-1, 31,0);
    tracep->declBus(c+185,"wbu_dpic_mstatus", false,-1, 31,0);
    tracep->declBus(c+186,"wbu_dpic_mepc", false,-1, 31,0);
    tracep->declBus(c+187,"wbu_dpic_mtvec", false,-1, 31,0);
    tracep->declBus(c+188,"wbu_dpic_mcause", false,-1, 31,0);
    tracep->declBus(c+174,"wbu_dpic_inst", false,-1, 31,0);
    tracep->declBus(c+175,"wbu_dpic_pc", false,-1, 31,0);
    tracep->declBus(c+176,"wbu_dpic_next_pc", false,-1, 31,0);
    tracep->declBit(c+40,"wbu_dpic_ls_valid", false,-1);
    tracep->declBit(c+41,"wbu_dpic_id_stall", false,-1);
    tracep->declBus(c+189,"regs0", false,-1, 31,0);
    tracep->declBus(c+190,"regs1", false,-1, 31,0);
    tracep->declBus(c+191,"regs2", false,-1, 31,0);
    tracep->declBus(c+192,"regs3", false,-1, 31,0);
    tracep->declBus(c+193,"regs4", false,-1, 31,0);
    tracep->declBus(c+194,"regs5", false,-1, 31,0);
    tracep->declBus(c+195,"regs6", false,-1, 31,0);
    tracep->declBus(c+196,"regs7", false,-1, 31,0);
    tracep->declBus(c+197,"regs8", false,-1, 31,0);
    tracep->declBus(c+198,"regs9", false,-1, 31,0);
    tracep->declBus(c+199,"regs10", false,-1, 31,0);
    tracep->declBus(c+200,"regs11", false,-1, 31,0);
    tracep->declBus(c+201,"regs12", false,-1, 31,0);
    tracep->declBus(c+202,"regs13", false,-1, 31,0);
    tracep->declBus(c+203,"regs14", false,-1, 31,0);
    tracep->declBus(c+204,"regs15", false,-1, 31,0);
    tracep->declBus(c+205,"regs16", false,-1, 31,0);
    tracep->declBus(c+206,"regs17", false,-1, 31,0);
    tracep->declBus(c+207,"regs18", false,-1, 31,0);
    tracep->declBus(c+208,"regs19", false,-1, 31,0);
    tracep->declBus(c+209,"regs20", false,-1, 31,0);
    tracep->declBus(c+210,"regs21", false,-1, 31,0);
    tracep->declBus(c+211,"regs22", false,-1, 31,0);
    tracep->declBus(c+212,"regs23", false,-1, 31,0);
    tracep->declBus(c+213,"regs24", false,-1, 31,0);
    tracep->declBus(c+214,"regs25", false,-1, 31,0);
    tracep->declBus(c+215,"regs26", false,-1, 31,0);
    tracep->declBus(c+216,"regs27", false,-1, 31,0);
    tracep->declBus(c+217,"regs28", false,-1, 31,0);
    tracep->declBus(c+218,"regs29", false,-1, 31,0);
    tracep->declBus(c+219,"regs30", false,-1, 31,0);
    tracep->declBus(c+220,"regs31", false,-1, 31,0);
    tracep->pushNamePrefix("u_ysyx_25060170_DPIC ");
    tracep->declBit(c+309,"clk", false,-1);
    tracep->declBit(c+310,"rst", false,-1);
    tracep->declBus(c+329,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1,"inst_o", false,-1, 31,0);
    tracep->declBus(c+140,"ftrace_pc", false,-1, 31,0);
    tracep->declBus(c+146,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+30,"imm", false,-1, 31,0);
    tracep->declBus(c+189,"regs0", false,-1, 31,0);
    tracep->declBus(c+190,"regs1", false,-1, 31,0);
    tracep->declBus(c+191,"regs2", false,-1, 31,0);
    tracep->declBus(c+192,"regs3", false,-1, 31,0);
    tracep->declBus(c+193,"regs4", false,-1, 31,0);
    tracep->declBus(c+194,"regs5", false,-1, 31,0);
    tracep->declBus(c+195,"regs6", false,-1, 31,0);
    tracep->declBus(c+196,"regs7", false,-1, 31,0);
    tracep->declBus(c+197,"regs8", false,-1, 31,0);
    tracep->declBus(c+198,"regs9", false,-1, 31,0);
    tracep->declBus(c+199,"regs10", false,-1, 31,0);
    tracep->declBus(c+200,"regs11", false,-1, 31,0);
    tracep->declBus(c+201,"regs12", false,-1, 31,0);
    tracep->declBus(c+202,"regs13", false,-1, 31,0);
    tracep->declBus(c+203,"regs14", false,-1, 31,0);
    tracep->declBus(c+204,"regs15", false,-1, 31,0);
    tracep->declBus(c+205,"regs16", false,-1, 31,0);
    tracep->declBus(c+206,"regs17", false,-1, 31,0);
    tracep->declBus(c+207,"regs18", false,-1, 31,0);
    tracep->declBus(c+208,"regs19", false,-1, 31,0);
    tracep->declBus(c+209,"regs20", false,-1, 31,0);
    tracep->declBus(c+210,"regs21", false,-1, 31,0);
    tracep->declBus(c+211,"regs22", false,-1, 31,0);
    tracep->declBus(c+212,"regs23", false,-1, 31,0);
    tracep->declBus(c+213,"regs24", false,-1, 31,0);
    tracep->declBus(c+214,"regs25", false,-1, 31,0);
    tracep->declBus(c+215,"regs26", false,-1, 31,0);
    tracep->declBus(c+216,"regs27", false,-1, 31,0);
    tracep->declBus(c+217,"regs28", false,-1, 31,0);
    tracep->declBus(c+218,"regs29", false,-1, 31,0);
    tracep->declBus(c+219,"regs30", false,-1, 31,0);
    tracep->declBus(c+220,"regs31", false,-1, 31,0);
    tracep->declBus(c+185,"mstatus", false,-1, 31,0);
    tracep->declBus(c+187,"mtvec", false,-1, 31,0);
    tracep->declBus(c+186,"mepc", false,-1, 31,0);
    tracep->declBus(c+188,"mcause", false,-1, 31,0);
    tracep->declBit(c+35,"re", false,-1);
    tracep->declBit(c+36,"we", false,-1);
    tracep->declBus(c+37,"data_i", false,-1, 31,0);
    tracep->declBus(c+39,"wlen", false,-1, 7,0);
    tracep->declBus(c+330,"rlen", false,-1, 7,0);
    tracep->declBus(c+174,"wbu_dpic_inst", false,-1, 31,0);
    tracep->declBus(c+175,"wbu_dpic_pc", false,-1, 31,0);
    tracep->declBus(c+176,"wbu_dpic_next_pc", false,-1, 31,0);
    tracep->declBit(c+40,"wbu_dpic_ls_valid", false,-1);
    tracep->declBit(c+41,"wbu_dpic_id_stall", false,-1);
    tracep->declBus(c+306,"data_o", false,-1, 31,0);
    tracep->declBus(c+38,"raddr", false,-1, 31,0);
    tracep->declBus(c+38,"waddr", false,-1, 31,0);
    tracep->declBus(c+172,"ex_ls_reg_DPIC_pc_i", false,-1, 31,0);
    tracep->declBit(c+148,"magic_flag", false,-1);
    tracep->declBit(c+2,"jal", false,-1);
    tracep->declBit(c+3,"jalr", false,-1);
    tracep->declBit(c+221,"delay", false,-1);
    tracep->declBus(c+222,"last_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_bpu ");
    tracep->declBit(c+309,"clk", false,-1);
    tracep->declBit(c+310,"rst", false,-1);
    tracep->declBus(c+150,"pc_before_bxx", false,-1, 31,0);
    tracep->declBit(c+128,"branch_success", false,-1);
    tracep->declBit(c+143,"branch", false,-1);
    tracep->declBus(c+160,"bxx_imm", false,-1, 31,0);
    tracep->declBus(c+1,"inst_i", false,-1, 31,0);
    tracep->declBus(c+329,"pc_i", false,-1, 31,0);
    tracep->declBus(c+129,"ls_wb_forward_data", false,-1, 31,0);
    tracep->declBus(c+170,"ls_wb_forward_addr", false,-1, 4,0);
    tracep->declBus(c+31,"ex_ls_forward_data", false,-1, 31,0);
    tracep->declBus(c+158,"ex_ls_forward_addr", false,-1, 4,0);
    tracep->declBus(c+311,"bp_rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+181,"wb_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+184,"wb_rd_data_forward", false,-1, 31,0);
    tracep->declBus(c+135,"bp_pc_o", false,-1, 31,0);
    tracep->declBus(c+12,"bp_rs1_addr_o", false,-1, 4,0);
    tracep->declBit(c+13,"bp_rs1_ena_o", false,-1);
    tracep->declBit(c+136,"bp_predict_o", false,-1);
    tracep->declBus(c+4,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+223,"strongly_not_taken_state", false,-1);
    tracep->declBit(c+224,"weakly_not_taken_state", false,-1);
    tracep->declBit(c+225,"weakly_taken_state", false,-1);
    tracep->declBit(c+226,"strongly_taken_state", false,-1);
    tracep->declBus(c+5,"jal_imm", false,-1, 20,0);
    tracep->declBus(c+6,"b_imm", false,-1, 12,0);
    tracep->declBus(c+7,"jalr_imm", false,-1, 11,0);
    tracep->declBus(c+8,"opcode", false,-1, 6,0);
    tracep->declBus(c+316,"op1", false,-1, 31,0);
    tracep->declBus(c+317,"op2", false,-1, 31,0);
    tracep->declBit(c+14,"inst_jal", false,-1);
    tracep->declBit(c+13,"inst_jalr", false,-1);
    tracep->declBit(c+15,"inst_bxx", false,-1);
    tracep->declBus(c+318,"jump_pc", false,-1, 31,0);
    tracep->declBus(c+319,"jump_jalr_pc", false,-1, 31,0);
    tracep->declBus(c+9,"jal_offset", false,-1, 31,0);
    tracep->declBus(c+10,"br_offset", false,-1, 31,0);
    tracep->declBus(c+11,"jalr_offset", false,-1, 31,0);
    tracep->declBit(c+42,"ls_wb_forward_en", false,-1);
    tracep->declBit(c+43,"ex_ls_forward_en", false,-1);
    tracep->declBit(c+320,"wbu_forward_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_ex_ls_reg ");
    tracep->declBit(c+309,"clk", false,-1);
    tracep->declBit(c+310,"rst", false,-1);
    tracep->declBus(c+151,"inst_i", false,-1, 31,0);
    tracep->declBus(c+150,"pc_i", false,-1, 31,0);
    tracep->declBus(c+152,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+154,"store_data_i", false,-1, 31,0);
    tracep->declBus(c+31,"exu_res_i", false,-1, 31,0);
    tracep->declBus(c+161,"ls_ctl_i", false,-1, 3,0);
    tracep->declBus(c+162,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+33,"csr_ctl_i", false,-1, 6,0);
    tracep->declBit(c+157,"rd_ena_i", false,-1);
    tracep->declBus(c+158,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+144,"ex_csr_ena_i", false,-1);
    tracep->declBus(c+32,"csr_addr_i", false,-1, 11,0);
    tracep->declBit(c+327,"ex_valid_i", false,-1);
    tracep->declBit(c+328,"ls_ready_i", false,-1);
    tracep->declBit(c+327,"ls_flush_i", false,-1);
    tracep->declBus(c+164,"inst_o", false,-1, 31,0);
    tracep->declBus(c+172,"pc_o", false,-1, 31,0);
    tracep->declBus(c+173,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+165,"store_data_o", false,-1, 31,0);
    tracep->declBus(c+137,"exu_res_o", false,-1, 31,0);
    tracep->declBus(c+166,"ls_ctl_o", false,-1, 3,0);
    tracep->declBus(c+167,"wb_ctl_o", false,-1, 1,0);
    tracep->declBus(c+168,"csr_ctl_o", false,-1, 6,0);
    tracep->declBit(c+169,"rd_ena_o", false,-1);
    tracep->declBus(c+170,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+171,"csr_addr_o", false,-1, 11,0);
    tracep->declBit(c+145,"ls_csr_ena_o", false,-1);
    tracep->declBus(c+158,"ex_rd_addr_forward_o", false,-1, 4,0);
    tracep->declBit(c+144,"ex_csr_o", false,-1);
    tracep->declBus(c+31,"ex_rd_data_forward_o", false,-1, 31,0);
    tracep->declBit(c+327,"flush", false,-1);
    tracep->declBit(c+327,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_exu ");
    tracep->declBit(c+310,"rst", false,-1);
    tracep->declBus(c+153,"op1_i", false,-1, 31,0);
    tracep->declBus(c+154,"op2_i", false,-1, 31,0);
    tracep->declBus(c+155,"op1_sel_i", false,-1, 1,0);
    tracep->declBus(c+156,"op2_sel_i", false,-1, 2,0);
    tracep->declBus(c+158,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+159,"rs1_addr_i", false,-1, 4,0);
    tracep->declBus(c+160,"imm_i", false,-1, 31,0);
    tracep->declBus(c+150,"pc_i", false,-1, 31,0);
    tracep->declBus(c+152,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+151,"inst_i", false,-1, 31,0);
    tracep->declBus(c+149,"alu_sel_i", false,-1, 7,0);
    tracep->declBit(c+328,"ls_ready_i", false,-1);
    tracep->declBit(c+327,"id_valid_i", false,-1);
    tracep->declBit(c+327,"ex_valid_o", false,-1);
    tracep->declBit(c+328,"ex_ready_o", false,-1);
    tracep->declBus(c+151,"inst_o", false,-1, 31,0);
    tracep->declBus(c+150,"pc_o", false,-1, 31,0);
    tracep->declBus(c+152,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+154,"store_data_o", false,-1, 31,0);
    tracep->declBus(c+31,"exu_res_o", false,-1, 31,0);
    tracep->declBus(c+32,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+33,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+227,"op1", false,-1, 31,0);
    tracep->declBus(c+228,"op2", false,-1, 31,0);
    tracep->declBus(c+229,"op1_add_op2", false,-1, 31,0);
    tracep->declBus(c+230,"op1_sub_op2", false,-1, 31,0);
    tracep->declBit(c+231,"op1_lt_op2", false,-1);
    tracep->declBus(c+232,"op1_sra_op2", false,-1, 31,0);
    tracep->declQuad(c+233,"mul", false,-1, 63,0);
    tracep->declBus(c+235,"op1_mul_op2", false,-1, 31,0);
    tracep->declBus(c+236,"op1_mulh_op2", false,-1, 31,0);
    tracep->declBus(c+237,"div", false,-1, 31,0);
    tracep->declBus(c+238,"rem", false,-1, 31,0);
    tracep->declBus(c+44,"alu_res", false,-1, 31,0);
    tracep->declBit(c+45,"csr_wr_ena", false,-1);
    tracep->declBit(c+46,"csr_rd_ena", false,-1);
    tracep->declBit(c+47,"mret_ena", false,-1);
    tracep->declBit(c+48,"ecall_ena", false,-1);
    tracep->declBit(c+49,"csrrw_ena", false,-1);
    tracep->declBit(c+50,"csrrs_ena", false,-1);
    tracep->declBit(c+51,"csrrc_ena", false,-1);
    tracep->declBus(c+239,"csr_op", false,-1, 31,0);
    tracep->declBit(c+240,"csrrxi_ena", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_id_ex_reg ");
    tracep->declBit(c+309,"clk", false,-1);
    tracep->declBit(c+310,"rst", false,-1);
    tracep->declBus(c+142,"inst_i", false,-1, 31,0);
    tracep->declBus(c+140,"pc_i", false,-1, 31,0);
    tracep->declBus(c+141,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+126,"op1_i", false,-1, 31,0);
    tracep->declBus(c+127,"op2_i", false,-1, 31,0);
    tracep->declBus(c+26,"op1_sel_i", false,-1, 1,0);
    tracep->declBus(c+27,"op2_sel_i", false,-1, 2,0);
    tracep->declBit(c+21,"rd_ena_i", false,-1);
    tracep->declBus(c+22,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+147,"rs1_addr_i", false,-1, 4,0);
    tracep->declBus(c+30,"imm_i", false,-1, 31,0);
    tracep->declBus(c+23,"alusrc_i", false,-1, 7,0);
    tracep->declBus(c+24,"lsctl_i", false,-1, 3,0);
    tracep->declBus(c+25,"wbctl_i", false,-1, 1,0);
    tracep->declBit(c+29,"csr_ena_i", false,-1);
    tracep->declBit(c+28,"load_flag_i", false,-1);
    tracep->declBit(c+327,"id_valid_i", false,-1);
    tracep->declBit(c+125,"id_flush_i", false,-1);
    tracep->declBit(c+327,"ls_flush_i", false,-1);
    tracep->declBit(c+328,"ex_ready_i", false,-1);
    tracep->declBus(c+151,"inst_o", false,-1, 31,0);
    tracep->declBus(c+150,"pc_o", false,-1, 31,0);
    tracep->declBus(c+152,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+153,"op1_o", false,-1, 31,0);
    tracep->declBus(c+154,"op2_o", false,-1, 31,0);
    tracep->declBus(c+155,"op1_sel_o", false,-1, 1,0);
    tracep->declBus(c+156,"op2_sel_o", false,-1, 2,0);
    tracep->declBit(c+157,"rd_ena_o", false,-1);
    tracep->declBus(c+158,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+159,"rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+160,"imm_o", false,-1, 31,0);
    tracep->declBus(c+149,"alusrc_o", false,-1, 7,0);
    tracep->declBus(c+161,"lsctl_o", false,-1, 3,0);
    tracep->declBus(c+162,"wbctl_o", false,-1, 1,0);
    tracep->declBit(c+144,"csr_ena_o", false,-1);
    tracep->declBit(c+163,"load_flag_o", false,-1);
    tracep->declBit(c+125,"flush", false,-1);
    tracep->declBit(c+327,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_idu ");
    tracep->declBit(c+310,"rst", false,-1);
    tracep->declBus(c+142,"inst_i", false,-1, 31,0);
    tracep->declBus(c+140,"pc_i", false,-1, 31,0);
    tracep->declBus(c+141,"next_pc_i", false,-1, 31,0);
    tracep->declBit(c+143,"bp_jump_i", false,-1);
    tracep->declBus(c+158,"ex_addr_forward", false,-1, 4,0);
    tracep->declBus(c+31,"ex_data_forward", false,-1, 31,0);
    tracep->declBus(c+170,"ls_addr_forward", false,-1, 4,0);
    tracep->declBus(c+129,"ls_data_forward", false,-1, 31,0);
    tracep->declBus(c+181,"wb_addr_forward", false,-1, 4,0);
    tracep->declBus(c+184,"wb_data_forward", false,-1, 31,0);
    tracep->declBit(c+163,"ex_load_ena", false,-1);
    tracep->declBit(c+144,"ex_csr_ena", false,-1);
    tracep->declBit(c+145,"ls_csr_ena", false,-1);
    tracep->declBus(c+313,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+314,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+17,"rs1_addr", false,-1, 4,0);
    tracep->declBit(c+18,"rs1_ena", false,-1);
    tracep->declBus(c+19,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+20,"rs2_ena", false,-1);
    tracep->declBit(c+21,"rd_ena", false,-1);
    tracep->declBus(c+22,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+140,"pc_o", false,-1, 31,0);
    tracep->declBus(c+141,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+23,"alusrc_o", false,-1, 7,0);
    tracep->declBus(c+24,"lsctl_o", false,-1, 3,0);
    tracep->declBus(c+25,"wbctl_o", false,-1, 1,0);
    tracep->declBus(c+26,"op1_sel", false,-1, 1,0);
    tracep->declBus(c+27,"op2_sel", false,-1, 2,0);
    tracep->declBit(c+28,"load_flag_o", false,-1);
    tracep->declBit(c+29,"csr_ena_o", false,-1);
    tracep->declBus(c+126,"op1", false,-1, 31,0);
    tracep->declBus(c+127,"op2", false,-1, 31,0);
    tracep->declBus(c+30,"imm", false,-1, 31,0);
    tracep->declBus(c+146,"idu_dpic_rd_addr", false,-1, 4,0);
    tracep->declBus(c+142,"inst_o", false,-1, 31,0);
    tracep->declBus(c+147,"csr_imm", false,-1, 4,0);
    tracep->declBit(c+124,"jump_ena_o", false,-1);
    tracep->declBus(c+312,"jump_pc_o", false,-1, 31,0);
    tracep->declBit(c+128,"ex_branch", false,-1);
    tracep->declBit(c+327,"if_valid_i", false,-1);
    tracep->declBit(c+328,"ex_ready_i", false,-1);
    tracep->declBit(c+125,"id_flush_o", false,-1);
    tracep->declBit(c+16,"id_stall_o", false,-1);
    tracep->declBit(c+328,"id_ready_o", false,-1);
    tracep->declBit(c+327,"id_valid_o", false,-1);
    tracep->declBit(c+148,"magic_flag", false,-1);
    tracep->declBus(c+146,"rd", false,-1, 4,0);
    tracep->declBus(c+147,"rs1", false,-1, 4,0);
    tracep->declBus(c+241,"rs2", false,-1, 4,0);
    tracep->declBit(c+52,"branch", false,-1);
    tracep->declBit(c+321,"op1_relate", false,-1);
    tracep->declBit(c+322,"op2_relate", false,-1);
    tracep->declBit(c+53,"csr_op1_stall", false,-1);
    tracep->declBit(c+54,"csr_op2_stall", false,-1);
    tracep->declBit(c+16,"id_stall_ena", false,-1);
    tracep->declBit(c+55,"ex_op1_forward", false,-1);
    tracep->declBit(c+56,"ls_op1_forward", false,-1);
    tracep->declBit(c+57,"wb_op1_forward", false,-1);
    tracep->declBit(c+58,"ex_op2_forward", false,-1);
    tracep->declBit(c+59,"ls_op2_forward", false,-1);
    tracep->declBit(c+60,"wb_op2_forward", false,-1);
    tracep->declBit(c+61,"op1_forward_ena", false,-1);
    tracep->declBit(c+62,"op2_forward_ena", false,-1);
    tracep->declBus(c+323,"op1_forward_data", false,-1, 31,0);
    tracep->declBus(c+324,"op2_forward_data", false,-1, 31,0);
    tracep->declBit(c+130,"diff_sign", false,-1);
    tracep->declBit(c+131,"op_ltu_op2", false,-1);
    tracep->declBit(c+132,"op1_lt_op2", false,-1);
    tracep->declBus(c+325,"o1", false,-1, 31,0);
    tracep->declBus(c+63,"o2", false,-1, 31,0);
    tracep->pushNamePrefix("decoder ");
    tracep->declBit(c+310,"rst", false,-1);
    tracep->declBus(c+142,"inst", false,-1, 31,0);
    tracep->declBit(c+18,"rs1_ena", false,-1);
    tracep->declBit(c+20,"rs2_ena", false,-1);
    tracep->declBit(c+29,"csr_inst", false,-1);
    tracep->declBus(c+25,"wb_ctl", false,-1, 1,0);
    tracep->declBus(c+24,"mem_ctl", false,-1, 3,0);
    tracep->declBit(c+52,"branch", false,-1);
    tracep->declBus(c+30,"ext_imm", false,-1, 31,0);
    tracep->declBit(c+28,"load", false,-1);
    tracep->declBus(c+26,"op1_sel", false,-1, 1,0);
    tracep->declBus(c+27,"op2_sel", false,-1, 2,0);
    tracep->declBus(c+23,"alu_ctl", false,-1, 7,0);
    tracep->declBus(c+242,"opcode", false,-1, 6,0);
    tracep->declBus(c+243,"funct3", false,-1, 2,0);
    tracep->declBus(c+244,"funct7", false,-1, 6,0);
    tracep->declBus(c+245,"i_imm", false,-1, 11,0);
    tracep->declBus(c+246,"j_imm", false,-1, 20,1);
    tracep->declBus(c+247,"u_imm", false,-1, 19,0);
    tracep->declBus(c+248,"s_imm", false,-1, 11,0);
    tracep->declBus(c+249,"b_imm", false,-1, 12,1);
    tracep->declBus(c+64,"inst_type", false,-1, 7,0);
    tracep->declBit(c+65,"inst_lui", false,-1);
    tracep->declBit(c+66,"inst_auipc", false,-1);
    tracep->declBit(c+67,"inst_jal", false,-1);
    tracep->declBit(c+68,"inst_jalr", false,-1);
    tracep->declBit(c+69,"inst_sb", false,-1);
    tracep->declBit(c+70,"inst_sh", false,-1);
    tracep->declBit(c+71,"inst_sw", false,-1);
    tracep->declBit(c+72,"inst_sd", false,-1);
    tracep->declBit(c+73,"inst_lb", false,-1);
    tracep->declBit(c+74,"inst_lh", false,-1);
    tracep->declBit(c+75,"inst_lw", false,-1);
    tracep->declBit(c+76,"inst_ld", false,-1);
    tracep->declBit(c+77,"inst_lbu", false,-1);
    tracep->declBit(c+78,"inst_lhu", false,-1);
    tracep->declBit(c+79,"inst_lwu", false,-1);
    tracep->declBit(c+80,"inst_beq", false,-1);
    tracep->declBit(c+81,"inst_bne", false,-1);
    tracep->declBit(c+82,"inst_blt", false,-1);
    tracep->declBit(c+83,"inst_bge", false,-1);
    tracep->declBit(c+84,"inst_bltu", false,-1);
    tracep->declBit(c+85,"inst_bgeu", false,-1);
    tracep->declBit(c+86,"inst_add", false,-1);
    tracep->declBit(c+87,"inst_sub", false,-1);
    tracep->declBit(c+88,"inst_sll", false,-1);
    tracep->declBit(c+89,"inst_slt", false,-1);
    tracep->declBit(c+90,"inst_sltu", false,-1);
    tracep->declBit(c+91,"inst_xor", false,-1);
    tracep->declBit(c+92,"inst_srl", false,-1);
    tracep->declBit(c+93,"inst_sra", false,-1);
    tracep->declBit(c+94,"inst_or", false,-1);
    tracep->declBit(c+95,"inst_and", false,-1);
    tracep->declBit(c+96,"inst_div", false,-1);
    tracep->declBit(c+97,"inst_divu", false,-1);
    tracep->declBit(c+98,"inst_mul", false,-1);
    tracep->declBit(c+99,"inst_mulh", false,-1);
    tracep->declBit(c+100,"inst_mulhsu", false,-1);
    tracep->declBit(c+101,"inst_mulhu", false,-1);
    tracep->declBit(c+102,"inst_rem", false,-1);
    tracep->declBit(c+103,"inst_remu", false,-1);
    tracep->declBit(c+104,"inst_addi", false,-1);
    tracep->declBit(c+105,"inst_slti", false,-1);
    tracep->declBit(c+106,"inst_sltiu", false,-1);
    tracep->declBit(c+107,"inst_xori", false,-1);
    tracep->declBit(c+108,"inst_ori", false,-1);
    tracep->declBit(c+109,"inst_andi", false,-1);
    tracep->declBit(c+110,"inst_slli", false,-1);
    tracep->declBit(c+111,"inst_srli", false,-1);
    tracep->declBit(c+112,"inst_srai", false,-1);
    tracep->declBit(c+113,"inst_ecall", false,-1);
    tracep->declBit(c+114,"inst_mret", false,-1);
    tracep->declBit(c+115,"inst_csrrw", false,-1);
    tracep->declBit(c+116,"inst_csrrs", false,-1);
    tracep->declBit(c+117,"inst_csrrc", false,-1);
    tracep->declBit(c+118,"inst_csrrwi", false,-1);
    tracep->declBit(c+119,"inst_csrrsi", false,-1);
    tracep->declBit(c+120,"inst_csrrci", false,-1);
    tracep->declBit(c+121,"inst_ebreak", false,-1);
    tracep->declBit(c+122,"imm_ena", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_25060170_if_id_reg ");
    tracep->declBit(c+309,"clk", false,-1);
    tracep->declBit(c+310,"rst", false,-1);
    tracep->declBus(c+138,"pc_i", false,-1, 31,0);
    tracep->declBus(c+139,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+1,"inst_i", false,-1, 31,0);
    tracep->declBit(c+136,"bp_jump_i", false,-1);
    tracep->declBit(c+327,"if_valid_i", false,-1);
    tracep->declBit(c+125,"id_flush_i", false,-1);
    tracep->declBit(c+327,"ls_flush_i", false,-1);
    tracep->declBit(c+16,"id_stall_i", false,-1);
    tracep->declBit(c+328,"id_ready_i", false,-1);
    tracep->declBus(c+140,"pc_o", false,-1, 31,0);
    tracep->declBus(c+141,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+142,"inst_o", false,-1, 31,0);
    tracep->declBit(c+143,"id_jump_o", false,-1);
    tracep->declBit(c+133,"flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_ifu ");
    tracep->declBit(c+310,"rst", false,-1);
    tracep->declBit(c+309,"clk", false,-1);
    tracep->declBit(c+124,"id_pc_jump_i", false,-1);
    tracep->declBus(c+312,"id_pc_i", false,-1, 31,0);
    tracep->declBit(c+327,"ls_pc_jump_i", false,-1);
    tracep->declBus(c+137,"ls_pc_i", false,-1, 31,0);
    tracep->declBit(c+136,"bp_pc_jump_i", false,-1);
    tracep->declBus(c+135,"bp_pc_i", false,-1, 31,0);
    tracep->declBit(c+328,"id_ready_i", false,-1);
    tracep->declBit(c+16,"id_stall_i", false,-1);
    tracep->declBit(c+327,"if_valid_o", false,-1);
    tracep->declBus(c+1,"inst_i", false,-1, 31,0);
    tracep->declBus(c+138,"pc_o", false,-1, 31,0);
    tracep->declBus(c+1,"inst_o", false,-1, 31,0);
    tracep->declBus(c+139,"next_pc_o", false,-1, 31,0);
    tracep->declBit(c+16,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_ls_wb_reg ");
    tracep->declBit(c+309,"clk", false,-1);
    tracep->declBit(c+310,"rst", false,-1);
    tracep->declBus(c+164,"inst_i", false,-1, 31,0);
    tracep->declBus(c+172,"pc_i", false,-1, 31,0);
    tracep->declBus(c+173,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+167,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+137,"lsu_res_i", false,-1, 31,0);
    tracep->declBus(c+315,"lsu_wb_data_i", false,-1, 31,0);
    tracep->declBit(c+169,"rd_ena_i", false,-1);
    tracep->declBus(c+170,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+168,"csr_ctl_i", false,-1, 6,0);
    tracep->declBus(c+171,"csr_addr_i", false,-1, 11,0);
    tracep->declBus(c+129,"ls_data_forward_i", false,-1, 31,0);
    tracep->declBit(c+34,"ls_valid_i", false,-1);
    tracep->declBit(c+328,"wb_ready_i", false,-1);
    tracep->declBus(c+174,"inst_o", false,-1, 31,0);
    tracep->declBus(c+175,"pc_o", false,-1, 31,0);
    tracep->declBus(c+176,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+177,"wb_ctl_o", false,-1, 1,0);
    tracep->declBus(c+178,"lsu_res_o", false,-1, 31,0);
    tracep->declBus(c+179,"lsu_wb_data_o", false,-1, 31,0);
    tracep->declBit(c+180,"rd_ena_o", false,-1);
    tracep->declBus(c+181,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+182,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+183,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+170,"ls_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+129,"ls_rd_data_forward", false,-1, 31,0);
    tracep->declBit(c+327,"flush", false,-1);
    tracep->declBit(c+34,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_lsu ");
    tracep->declBit(c+309,"clk", false,-1);
    tracep->declBit(c+310,"rst", false,-1);
    tracep->declBus(c+172,"pc_i", false,-1, 31,0);
    tracep->declBus(c+173,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+164,"inst_i", false,-1, 31,0);
    tracep->declBus(c+137,"alu_res_i", false,-1, 31,0);
    tracep->declBus(c+165,"store_data_i", false,-1, 31,0);
    tracep->declBus(c+166,"ls_ctl_i", false,-1, 3,0);
    tracep->declBit(c+328,"wb_ready_i", false,-1);
    tracep->declBit(c+327,"ex_valid_i", false,-1);
    tracep->declBit(c+328,"ls_ready_o", false,-1);
    tracep->declBit(c+34,"ls_valid_o", false,-1);
    tracep->declBit(c+327,"ls_flush_o", false,-1);
    tracep->declBit(c+327,"ls_jump_o", false,-1);
    tracep->declBus(c+137,"ls_jump_pc_o", false,-1, 31,0);
    tracep->declBit(c+35,"re", false,-1);
    tracep->declBit(c+36,"we", false,-1);
    tracep->declBus(c+306,"data_i", false,-1, 31,0);
    tracep->declBus(c+37,"data_o", false,-1, 31,0);
    tracep->declBus(c+38,"raddr", false,-1, 31,0);
    tracep->declBus(c+38,"waddr", false,-1, 31,0);
    tracep->declBus(c+39,"wlen", false,-1, 7,0);
    tracep->declBus(c+330,"rlen", false,-1, 7,0);
    tracep->declBus(c+129,"ls_data_forward_o", false,-1, 31,0);
    tracep->declBus(c+315,"ls_data_o", false,-1, 31,0);
    tracep->declBus(c+164,"inst_o", false,-1, 31,0);
    tracep->declBus(c+172,"pc_o", false,-1, 31,0);
    tracep->declBus(c+173,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+134,"load_data", false,-1, 31,0);
    tracep->declBit(c+250,"data_ok", false,-1);
    tracep->declBus(c+251,"byte_sel", false,-1, 1,0);
    tracep->declBus(c+251,"half_sel", false,-1, 1,0);
    tracep->declBus(c+307,"data_byte", false,-1, 7,0);
    tracep->declBus(c+308,"data_half", false,-1, 15,0);
    tracep->declBus(c+306,"data_word", false,-1, 31,0);
    tracep->declBus(c+123,"sb_mask", false,-1, 3,0);
    tracep->declBus(c+326,"sh_mask", false,-1, 3,0);
    tracep->declBus(c+331,"sw_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_regfile ");
    tracep->declBit(c+309,"clk", false,-1);
    tracep->declBit(c+310,"rst", false,-1);
    tracep->declBus(c+181,"waddr", false,-1, 4,0);
    tracep->declBus(c+184,"wdata", false,-1, 31,0);
    tracep->declBit(c+180,"wen", false,-1);
    tracep->declBit(c+18,"ren1", false,-1);
    tracep->declBit(c+20,"ren2", false,-1);
    tracep->declBus(c+17,"raddr1", false,-1, 4,0);
    tracep->declBus(c+19,"raddr2", false,-1, 4,0);
    tracep->declBus(c+313,"rdata1", false,-1, 31,0);
    tracep->declBus(c+314,"rdata2", false,-1, 31,0);
    tracep->declBus(c+189,"regs0_zero", false,-1, 31,0);
    tracep->declBus(c+190,"regs1_ra", false,-1, 31,0);
    tracep->declBus(c+191,"regs2_sp", false,-1, 31,0);
    tracep->declBus(c+192,"regs3_gp", false,-1, 31,0);
    tracep->declBus(c+193,"regs4_tp", false,-1, 31,0);
    tracep->declBus(c+194,"regs5_t0", false,-1, 31,0);
    tracep->declBus(c+195,"regs6_t1", false,-1, 31,0);
    tracep->declBus(c+196,"regs7_t2", false,-1, 31,0);
    tracep->declBus(c+197,"regs8_s0", false,-1, 31,0);
    tracep->declBus(c+198,"regs9_s1", false,-1, 31,0);
    tracep->declBus(c+199,"regs10_a0", false,-1, 31,0);
    tracep->declBus(c+200,"regs11_a1", false,-1, 31,0);
    tracep->declBus(c+201,"regs12_a2", false,-1, 31,0);
    tracep->declBus(c+202,"regs13_a3", false,-1, 31,0);
    tracep->declBus(c+203,"regs14_a4", false,-1, 31,0);
    tracep->declBus(c+204,"regs15_a5", false,-1, 31,0);
    tracep->declBus(c+205,"regs16_a6", false,-1, 31,0);
    tracep->declBus(c+206,"regs17_a7", false,-1, 31,0);
    tracep->declBus(c+207,"regs18_s2", false,-1, 31,0);
    tracep->declBus(c+208,"regs19_s3", false,-1, 31,0);
    tracep->declBus(c+209,"regs20_s4", false,-1, 31,0);
    tracep->declBus(c+210,"regs21_s5", false,-1, 31,0);
    tracep->declBus(c+211,"regs22_s6", false,-1, 31,0);
    tracep->declBus(c+212,"regs23_s7", false,-1, 31,0);
    tracep->declBus(c+213,"regs24_t3", false,-1, 31,0);
    tracep->declBus(c+214,"regs25_t4", false,-1, 31,0);
    tracep->declBus(c+215,"regs26_t5", false,-1, 31,0);
    tracep->declBus(c+216,"regs27_t6", false,-1, 31,0);
    tracep->declBus(c+217,"regs28_t3", false,-1, 31,0);
    tracep->declBus(c+218,"regs29_t4", false,-1, 31,0);
    tracep->declBus(c+219,"regs30_t5", false,-1, 31,0);
    tracep->declBus(c+220,"regs31_t6", false,-1, 31,0);
    tracep->declBus(c+12,"bp_rs1_addr_i", false,-1, 4,0);
    tracep->declBit(c+13,"bp_rs1_ena_i", false,-1);
    tracep->declBus(c+311,"bp_rs1_data_o", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+252+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_wbu ");
    tracep->declBit(c+309,"clk", false,-1);
    tracep->declBit(c+310,"rst", false,-1);
    tracep->declBus(c+179,"ls_rd_data_i", false,-1, 31,0);
    tracep->declBus(c+177,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+178,"exu_res_i", false,-1, 31,0);
    tracep->declBus(c+175,"pc_i", false,-1, 31,0);
    tracep->declBus(c+176,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+174,"inst_i", false,-1, 31,0);
    tracep->declBus(c+181,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+180,"rd_ena_i", false,-1);
    tracep->declBus(c+182,"csr_ctl_i", false,-1, 6,0);
    tracep->declBus(c+183,"csr_addr_i", false,-1, 11,0);
    tracep->declBit(c+34,"ls_valid_i", false,-1);
    tracep->declBit(c+16,"id_stall_i", false,-1);
    tracep->declBus(c+184,"wb_data_o", false,-1, 31,0);
    tracep->declBit(c+328,"wb_ready_o", false,-1);
    tracep->declBit(c+180,"wb_rd_ena_o", false,-1);
    tracep->declBus(c+181,"wb_rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+181,"wb_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+184,"wb_rd_data_forward", false,-1, 31,0);
    tracep->declBus(c+185,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+186,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+187,"mtvec_o", false,-1, 31,0);
    tracep->declBus(c+188,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+174,"wbu_dpic_inst_o", false,-1, 31,0);
    tracep->declBus(c+175,"wbu_dpic_pc_o", false,-1, 31,0);
    tracep->declBus(c+176,"wbu_dpic_next_pc_o", false,-1, 31,0);
    tracep->declBit(c+40,"wbu_dpic_ls_valid_o", false,-1);
    tracep->declBit(c+41,"wbu_dpic_id_stall_o", false,-1);
    tracep->declBus(c+185,"mstatus", false,-1, 31,0);
    tracep->declBus(c+186,"mepc", false,-1, 31,0);
    tracep->declBus(c+187,"mtvec", false,-1, 31,0);
    tracep->declBus(c+188,"mcause", false,-1, 31,0);
    tracep->declBus(c+284,"read_csr_data", false,-1, 31,0);
    tracep->declBus(c+285,"write_csr_data", false,-1, 31,0);
    tracep->declBus(c+286,"mcause_value", false,-1, 31,0);
    tracep->declBus(c+287,"set_data", false,-1, 31,0);
    tracep->declBus(c+288,"clear_data", false,-1, 31,0);
    tracep->pushNamePrefix("u_ysyx_25060170_csr ");
    tracep->declBit(c+309,"clk", false,-1);
    tracep->declBit(c+310,"rst", false,-1);
    tracep->declBus(c+289,"csr_ctl", false,-1, 3,0);
    tracep->declBus(c+183,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+286,"mcause_value", false,-1, 31,0);
    tracep->declBus(c+285,"write_csr_data", false,-1, 31,0);
    tracep->declBus(c+284,"read_csr_data", false,-1, 31,0);
    tracep->declBus(c+185,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+186,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+187,"mtvec_o", false,-1, 31,0);
    tracep->declBus(c+188,"mcause_o", false,-1, 31,0);
    tracep->declBit(c+290,"mstatus_rd", false,-1);
    tracep->declBit(c+291,"mstatus_wr", false,-1);
    tracep->declBit(c+292,"mstatus_mie", false,-1);
    tracep->declBit(c+293,"mstatus_mpie", false,-1);
    tracep->declBus(c+294,"mstatus_mpp", false,-1, 1,0);
    tracep->declBus(c+185,"mstatus", false,-1, 31,0);
    tracep->declBit(c+295,"mstatus_ie_ena", false,-1);
    tracep->declBit(c+296,"mie_set", false,-1);
    tracep->declBit(c+297,"mpie_set", false,-1);
    tracep->declBus(c+298,"mpp_set", false,-1, 1,0);
    tracep->declBit(c+299,"mtvec_rd", false,-1);
    tracep->declBit(c+300,"mtvec_wr", false,-1);
    tracep->declBus(c+301,"mtvec_base", false,-1, 31,2);
    tracep->declBus(c+332,"mtvec_mode", false,-1, 1,0);
    tracep->declBus(c+187,"mtvec", false,-1, 31,0);
    tracep->declBit(c+302,"mepc_rd", false,-1);
    tracep->declBit(c+303,"mepc_wr", false,-1);
    tracep->declBus(c+186,"mepc", false,-1, 31,0);
    tracep->declBit(c+304,"mcause_rd", false,-1);
    tracep->declBit(c+305,"mcause_wr", false,-1);
    tracep->declBus(c+188,"mcause", false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst),32);
    bufp->fullBit(oldp+2,((0x6fU == (0x7fU & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst))));
    bufp->fullBit(oldp+3,((0x67U == (0x7fU & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst))));
    bufp->fullCData(oldp+4,((0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                      >> 7U))),5);
    bufp->fullIData(oldp+5,(((0x100000U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                           >> 0xbU)) 
                             | ((0xff000U & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst) 
                                | ((0x800U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                              >> 9U)) 
                                   | (0x7feU & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                >> 0x14U)))))),21);
    bufp->fullSData(oldp+6,(((0x1000U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                         >> 0x13U)) 
                             | ((0x800U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                           << 4U)) 
                                | ((0x7e0U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                              >> 0x14U)) 
                                   | (0x1eU & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                               >> 7U)))))),13);
    bufp->fullSData(oldp+7,((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                             >> 0x14U)),12);
    bufp->fullCData(oldp+8,((0x7fU & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst)),7);
    bufp->fullIData(oldp+9,((((- (IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
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
    bufp->fullIData(oldp+10,((((- (IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
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
    bufp->fullIData(oldp+11,((((- (IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                           >> 0x14U))),32);
    bufp->fullCData(oldp+12,(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr),5);
    bufp->fullBit(oldp+13,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr));
    bufp->fullBit(oldp+14,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal));
    bufp->fullBit(oldp+15,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_bxx));
    bufp->fullBit(oldp+16,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_stall));
    bufp->fullCData(oldp+17,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr),5);
    bufp->fullBit(oldp+18,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena));
    bufp->fullCData(oldp+19,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr),5);
    bufp->fullBit(oldp+20,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena));
    bufp->fullBit(oldp+21,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rd_ena));
    bufp->fullCData(oldp+22,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rd_ena)
                               ? (0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                           >> 7U)) : 0U)),5);
    bufp->fullCData(oldp+23,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc),8);
    bufp->fullCData(oldp+24,((0xfU & ((1U & (- (IData)(
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
    bufp->fullCData(oldp+25,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_wbctl),2);
    bufp->fullCData(oldp+26,(((2U & ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                                     | ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr))) 
                                        | (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc)))))) 
                              | (1U & (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena)))))),2);
    bufp->fullCData(oldp+27,(((2U & ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                                     | (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr))))) 
                              | ((4U & (- (IData)(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77eb01fa__0) 
                                                   | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                                                      | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0) 
                                                         | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70f4116c__0) 
                                                            | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
                                                               | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd9b03bc2__0))))))))) 
                                 | (1U & (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena))))))),3);
    bufp->fullBit(oldp+28,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag));
    bufp->fullBit(oldp+29,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw) 
                            | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs) 
                               | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc) 
                                  | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi) 
                                     | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi) 
                                        | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci))))))));
    bufp->fullIData(oldp+30,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res),32);
    bufp->fullSData(oldp+32,(((0U != (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_he71b3f47__0))
                               ? (0xfffU & vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm)
                               : 0U)),12);
    bufp->fullCData(oldp+33,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena) 
                               << 6U) | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena) 
                                          << 5U) | 
                                         (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena) 
                                           << 4U) | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_he71b3f47__0))))),7);
    bufp->fullBit(oldp+34,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h53258981__0));
    bufp->fullBit(oldp+35,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_re));
    bufp->fullBit(oldp+36,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_we));
    bufp->fullIData(oldp+37,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_data),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_raddr),32);
    bufp->fullCData(oldp+39,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen),8);
    bufp->fullBit(oldp+40,(vlSelf->ysyx_25060170_fishtailcore__DOT__wbu_dpic_ls_valid));
    bufp->fullBit(oldp+41,(vlSelf->ysyx_25060170_fishtailcore__DOT__wbu_dpic_id_stall));
    bufp->fullBit(oldp+42,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                            == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr))));
    bufp->fullBit(oldp+43,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                            == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr))));
    bufp->fullIData(oldp+44,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res),32);
    bufp->fullBit(oldp+45,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena));
    bufp->fullBit(oldp+46,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena));
    bufp->fullBit(oldp+47,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena));
    bufp->fullBit(oldp+48,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena));
    bufp->fullBit(oldp+49,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena));
    bufp->fullBit(oldp+50,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena));
    bufp->fullBit(oldp+51,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena));
    bufp->fullBit(oldp+52,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__branch));
    bufp->fullBit(oldp+53,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward) 
                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena)) 
                            | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward) 
                               & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_csr_ena)))));
    bufp->fullBit(oldp+54,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward) 
                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena)) 
                            | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward) 
                               & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_csr_ena)))));
    bufp->fullBit(oldp+55,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward));
    bufp->fullBit(oldp+56,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward));
    bufp->fullBit(oldp+57,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward));
    bufp->fullBit(oldp+58,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward));
    bufp->fullBit(oldp+59,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward));
    bufp->fullBit(oldp+60,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward));
    bufp->fullBit(oldp+61,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_forward_ena));
    bufp->fullBit(oldp+62,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op2_forward_ena));
    bufp->fullIData(oldp+63,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_jump)
                               ? 4U : vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm)),32);
    bufp->fullCData(oldp+64,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
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
    bufp->fullBit(oldp+65,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui));
    bufp->fullBit(oldp+66,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc));
    bufp->fullBit(oldp+67,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal));
    bufp->fullBit(oldp+68,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr));
    bufp->fullBit(oldp+69,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h489c6f46__0))));
    bufp->fullBit(oldp+70,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h489c6f46__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+71,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he80da865__0))));
    bufp->fullBit(oldp+72,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he80da865__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+73,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc65f4c50__0))));
    bufp->fullBit(oldp+74,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc65f4c50__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+75,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h1167153d__0))));
    bufp->fullBit(oldp+76,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h1167153d__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+77,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h29152e89__0))));
    bufp->fullBit(oldp+78,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h29152e89__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+79,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_heac6e652__0) 
                            & (IData)((0x2000U == (0x3000U 
                                                   & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst))))));
    bufp->fullBit(oldp+80,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7855af38__0))));
    bufp->fullBit(oldp+81,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7855af38__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+82,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2bc0716a__0))));
    bufp->fullBit(oldp+83,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2bc0716a__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+84,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h6fd23990__0))));
    bufp->fullBit(oldp+85,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h6fd23990__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+86,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                            & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h03cab0f1__0))));
    bufp->fullBit(oldp+87,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                            & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7b49f5a3__0))));
    bufp->fullBit(oldp+88,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h36e9ef3c__0))));
    bufp->fullBit(oldp+89,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he2955f6b__0))));
    bufp->fullBit(oldp+90,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h4c825e07__0))));
    bufp->fullBit(oldp+91,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h3b427111__0))));
    bufp->fullBit(oldp+92,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                            & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h03cab0f1__0))));
    bufp->fullBit(oldp+93,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                            & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7b49f5a3__0))));
    bufp->fullBit(oldp+94,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd7439362__0))));
    bufp->fullBit(oldp+95,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7a82fdcc__0))));
    bufp->fullBit(oldp+96,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h3b427111__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+97,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+98,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+99,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h36e9ef3c__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+100,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he2955f6b__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+101,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h4c825e07__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+102,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd7439362__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+103,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7a82fdcc__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+104,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h41ceee20__0))));
    bufp->fullBit(oldp+105,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc1b77381__0))));
    bufp->fullBit(oldp+106,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc1b77381__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+107,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_ha08c85bd__0))));
    bufp->fullBit(oldp+108,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5a06bcf6__0))));
    bufp->fullBit(oldp+109,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5a06bcf6__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+110,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h41ceee20__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+111,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x1eU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2e86cea5__0))));
    bufp->fullBit(oldp+112,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2e86cea5__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x1eU))));
    bufp->fullBit(oldp+113,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall));
    bufp->fullBit(oldp+114,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h84595378__0) 
                             & (IData)((0x30000000U 
                                        == (0x30000000U 
                                            & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst))))));
    bufp->fullBit(oldp+115,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw));
    bufp->fullBit(oldp+116,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs));
    bufp->fullBit(oldp+117,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc));
    bufp->fullBit(oldp+118,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi));
    bufp->fullBit(oldp+119,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi));
    bufp->fullBit(oldp+120,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci));
    bufp->fullBit(oldp+121,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h84595378__0) 
                             & (1U == (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                       >> 0x14U)))));
    bufp->fullBit(oldp+122,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77eb01fa__0) 
                             | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                                | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0) 
                                   | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70f4116c__0) 
                                      | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
                                         | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd9b03bc2__0))))))));
    bufp->fullCData(oldp+123,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask),4);
    bufp->fullBit(oldp+124,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_if_pc_jump));
    bufp->fullBit(oldp+125,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_flush));
    bufp->fullIData(oldp+126,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1),32);
    bufp->fullIData(oldp+127,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op2),32);
    bufp->fullBit(oldp+128,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_branch));
    bufp->fullIData(oldp+129,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_data_forward),32);
    bufp->fullBit(oldp+130,(((vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1 
                              ^ vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op2) 
                             >> 0x1fU)));
    bufp->fullBit(oldp+131,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2));
    bufp->fullBit(oldp+132,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2));
    bufp->fullBit(oldp+133,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if_id_reg__DOT__flush));
    bufp->fullIData(oldp+134,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__load_data),32);
    bufp->fullIData(oldp+135,(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_if_pc),32);
    bufp->fullBit(oldp+136,(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_predict));
    bufp->fullIData(oldp+137,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res),32);
    bufp->fullIData(oldp+138,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_pc),32);
    bufp->fullIData(oldp+139,(((IData)(4U) + vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_pc)),32);
    bufp->fullIData(oldp+140,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc),32);
    bufp->fullIData(oldp+141,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc),32);
    bufp->fullIData(oldp+142,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst),32);
    bufp->fullBit(oldp+143,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_jump));
    bufp->fullBit(oldp+144,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena));
    bufp->fullBit(oldp+145,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_csr_ena));
    bufp->fullCData(oldp+146,((0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+147,((0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                        >> 0xfU))),5);
    bufp->fullBit(oldp+148,((0x40000033U == vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    bufp->fullCData(oldp+149,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc),8);
    bufp->fullIData(oldp+150,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc),32);
    bufp->fullIData(oldp+151,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst),32);
    bufp->fullIData(oldp+152,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc),32);
    bufp->fullIData(oldp+153,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1),32);
    bufp->fullIData(oldp+154,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2),32);
    bufp->fullCData(oldp+155,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel),2);
    bufp->fullCData(oldp+156,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel),3);
    bufp->fullBit(oldp+157,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena));
    bufp->fullCData(oldp+158,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr),5);
    bufp->fullCData(oldp+159,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr),5);
    bufp->fullIData(oldp+160,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm),32);
    bufp->fullCData(oldp+161,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl),4);
    bufp->fullCData(oldp+162,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl),2);
    bufp->fullBit(oldp+163,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag));
    bufp->fullIData(oldp+164,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst),32);
    bufp->fullIData(oldp+165,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data),32);
    bufp->fullCData(oldp+166,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl),4);
    bufp->fullCData(oldp+167,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl),2);
    bufp->fullCData(oldp+168,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl),7);
    bufp->fullBit(oldp+169,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena));
    bufp->fullCData(oldp+170,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr),5);
    bufp->fullSData(oldp+171,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr),12);
    bufp->fullIData(oldp+172,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc),32);
    bufp->fullIData(oldp+173,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc),32);
    bufp->fullIData(oldp+174,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_inst),32);
    bufp->fullIData(oldp+175,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_pc),32);
    bufp->fullIData(oldp+176,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_next_pc),32);
    bufp->fullCData(oldp+177,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_wb_ctl),2);
    bufp->fullIData(oldp+178,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_lsu_res),32);
    bufp->fullIData(oldp+179,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_lsu_wb_data),32);
    bufp->fullBit(oldp+180,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_rd_ena));
    bufp->fullCData(oldp+181,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_rd_addr),5);
    bufp->fullCData(oldp+182,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl),7);
    bufp->fullSData(oldp+183,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_addr),12);
    bufp->fullIData(oldp+184,(vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rf_data),32);
    bufp->fullIData(oldp+185,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus),32);
    bufp->fullIData(oldp+186,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mepc),32);
    bufp->fullIData(oldp+187,((vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
                               << 2U)),32);
    bufp->fullIData(oldp+188,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mcause),32);
    bufp->fullIData(oldp+189,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0U]),32);
    bufp->fullIData(oldp+190,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [1U]),32);
    bufp->fullIData(oldp+191,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [2U]),32);
    bufp->fullIData(oldp+192,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [3U]),32);
    bufp->fullIData(oldp+193,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [4U]),32);
    bufp->fullIData(oldp+194,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [5U]),32);
    bufp->fullIData(oldp+195,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [6U]),32);
    bufp->fullIData(oldp+196,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [7U]),32);
    bufp->fullIData(oldp+197,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [8U]),32);
    bufp->fullIData(oldp+198,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [9U]),32);
    bufp->fullIData(oldp+199,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xaU]),32);
    bufp->fullIData(oldp+200,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xbU]),32);
    bufp->fullIData(oldp+201,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xcU]),32);
    bufp->fullIData(oldp+202,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xdU]),32);
    bufp->fullIData(oldp+203,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xeU]),32);
    bufp->fullIData(oldp+204,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xfU]),32);
    bufp->fullIData(oldp+205,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x10U]),32);
    bufp->fullIData(oldp+206,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x11U]),32);
    bufp->fullIData(oldp+207,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x12U]),32);
    bufp->fullIData(oldp+208,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x13U]),32);
    bufp->fullIData(oldp+209,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x14U]),32);
    bufp->fullIData(oldp+210,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x15U]),32);
    bufp->fullIData(oldp+211,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x16U]),32);
    bufp->fullIData(oldp+212,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x17U]),32);
    bufp->fullIData(oldp+213,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x18U]),32);
    bufp->fullIData(oldp+214,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x19U]),32);
    bufp->fullIData(oldp+215,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1aU]),32);
    bufp->fullIData(oldp+216,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1bU]),32);
    bufp->fullIData(oldp+217,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1cU]),32);
    bufp->fullIData(oldp+218,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1dU]),32);
    bufp->fullIData(oldp+219,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1eU]),32);
    bufp->fullIData(oldp+220,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1fU]),32);
    bufp->fullBit(oldp+221,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__delay));
    bufp->fullIData(oldp+222,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__last_pc),32);
    bufp->fullBit(oldp+223,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_not_taken_state));
    bufp->fullBit(oldp+224,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_not_taken_state));
    bufp->fullBit(oldp+225,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state));
    bufp->fullBit(oldp+226,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state));
    bufp->fullIData(oldp+227,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1),32);
    bufp->fullIData(oldp+228,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2),32);
    bufp->fullIData(oldp+229,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2),32);
    bufp->fullIData(oldp+230,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2),32);
    bufp->fullBit(oldp+231,((1U & (((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
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
    bufp->fullIData(oldp+232,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2),32);
    bufp->fullQData(oldp+233,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul),64);
    bufp->fullIData(oldp+235,((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul)),32);
    bufp->fullIData(oldp+236,((IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+237,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div),32);
    bufp->fullIData(oldp+238,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__rem),32);
    bufp->fullIData(oldp+239,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr),32);
    bufp->fullBit(oldp+240,(((0x94U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                             | ((0xc8U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                | (0xa4U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))))));
    bufp->fullCData(oldp+241,((0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+242,((0x7fU & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)),7);
    bufp->fullCData(oldp+243,((7U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+244,((vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0x19U)),7);
    bufp->fullSData(oldp+245,((vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+246,(((0x80000U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                            >> 0xcU)) 
                               | ((0x7f800U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                               >> 1U)) 
                                  | ((0x400U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                >> 0xaU)) 
                                     | (0x3ffU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                  >> 0x15U)))))),20);
    bufp->fullIData(oldp+247,((vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU)),20);
    bufp->fullSData(oldp+248,(((0xfe0U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                           >> 7U)))),12);
    bufp->fullSData(oldp+249,(((0x800U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                          >> 0x14U)) 
                               | ((0x400U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                             << 3U)) 
                                  | ((0x3f0U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                >> 0x15U)) 
                                     | (0xfU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                >> 8U)))))),12);
    bufp->fullBit(oldp+250,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__data_ok));
    bufp->fullCData(oldp+251,((3U & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res)),2);
    bufp->fullIData(oldp+252,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0]),32);
    bufp->fullIData(oldp+253,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[1]),32);
    bufp->fullIData(oldp+254,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[2]),32);
    bufp->fullIData(oldp+255,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[3]),32);
    bufp->fullIData(oldp+256,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[4]),32);
    bufp->fullIData(oldp+257,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[5]),32);
    bufp->fullIData(oldp+258,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[6]),32);
    bufp->fullIData(oldp+259,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[7]),32);
    bufp->fullIData(oldp+260,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[8]),32);
    bufp->fullIData(oldp+261,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[9]),32);
    bufp->fullIData(oldp+262,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[10]),32);
    bufp->fullIData(oldp+263,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[11]),32);
    bufp->fullIData(oldp+264,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[12]),32);
    bufp->fullIData(oldp+265,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[13]),32);
    bufp->fullIData(oldp+266,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[14]),32);
    bufp->fullIData(oldp+267,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[15]),32);
    bufp->fullIData(oldp+268,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[16]),32);
    bufp->fullIData(oldp+269,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[17]),32);
    bufp->fullIData(oldp+270,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[18]),32);
    bufp->fullIData(oldp+271,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[19]),32);
    bufp->fullIData(oldp+272,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[20]),32);
    bufp->fullIData(oldp+273,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[21]),32);
    bufp->fullIData(oldp+274,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[22]),32);
    bufp->fullIData(oldp+275,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[23]),32);
    bufp->fullIData(oldp+276,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[24]),32);
    bufp->fullIData(oldp+277,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[25]),32);
    bufp->fullIData(oldp+278,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[26]),32);
    bufp->fullIData(oldp+279,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[27]),32);
    bufp->fullIData(oldp+280,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[28]),32);
    bufp->fullIData(oldp+281,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[29]),32);
    bufp->fullIData(oldp+282,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[30]),32);
    bufp->fullIData(oldp+283,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[31]),32);
    bufp->fullIData(oldp+284,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__read_csr_data),32);
    bufp->fullIData(oldp+285,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data),32);
    bufp->fullIData(oldp+286,(((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl))
                                ? 0xbU : 0U)),32);
    bufp->fullIData(oldp+287,((vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_lsu_res 
                               | vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__read_csr_data)),32);
    bufp->fullIData(oldp+288,(((~ vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_lsu_res) 
                               & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__read_csr_data)),32);
    bufp->fullCData(oldp+289,((0xfU & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl))),4);
    bufp->fullBit(oldp+290,(((0x300U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                >> 2U))));
    bufp->fullBit(oldp+291,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr));
    bufp->fullBit(oldp+292,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie));
    bufp->fullBit(oldp+293,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie));
    bufp->fullCData(oldp+294,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp),2);
    bufp->fullBit(oldp+295,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena));
    bufp->fullBit(oldp+296,((1U & ((~ ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                       >> 1U)) & ((1U 
                                                   & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl))
                                                   ? (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)
                                                   : 
                                                  ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                                    ? 
                                                   (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data 
                                                    >> 3U)
                                                    : (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)))))));
    bufp->fullBit(oldp+297,((1U & ((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl))
                                    ? (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)
                                    : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                       | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                           ? (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data 
                                              >> 7U)
                                           : (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)))))));
    bufp->fullCData(oldp+298,(((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl))
                                ? 3U : ((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl))
                                         ? 0U : (3U 
                                                 & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                                     ? 
                                                    (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data 
                                                     >> 0xdU)
                                                     : (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp)))))),2);
    bufp->fullBit(oldp+299,((1U & (((0x305U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_addr)) 
                                    & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                       >> 2U)) | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+300,(((0x305U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                >> 3U))));
    bufp->fullIData(oldp+301,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mtvec_base),30);
    bufp->fullBit(oldp+302,((1U & (((0x341U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_addr)) 
                                    & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                       >> 2U)) | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl)))));
    bufp->fullBit(oldp+303,((1U & (((0x341U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_addr)) 
                                    & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                       >> 3U)) | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+304,(((0x342U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                >> 2U))));
    bufp->fullBit(oldp+305,(((0x342U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                >> 3U))));
    bufp->fullIData(oldp+306,(vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ls_data),32);
    bufp->fullCData(oldp+307,((0xffU & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ls_data)),8);
    bufp->fullSData(oldp+308,((0xffffU & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ls_data)),16);
    bufp->fullBit(oldp+309,(vlSelf->clk));
    bufp->fullBit(oldp+310,(vlSelf->rst));
    bufp->fullIData(oldp+311,((((~ (IData)(vlSelf->rst)) 
                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr))
                                ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                               [vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr]
                                : 0U)),32);
    bufp->fullIData(oldp+312,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_if_pc_jump)
                                ? (((0x42U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                                     ? vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1
                                     : vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc) 
                                   + ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_jump)
                                       ? 4U : vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm))
                                : 0U)),32);
    bufp->fullIData(oldp+313,((((~ (IData)(vlSelf->rst)) 
                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena))
                                ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                               [vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr]
                                : 0U)),32);
    bufp->fullIData(oldp+314,((((~ (IData)(vlSelf->rst)) 
                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena))
                                ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                               [vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr]
                                : 0U)),32);
    bufp->fullIData(oldp+315,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_re)
                                ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__load_data
                                : 0U)),32);
    bufp->fullIData(oldp+316,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr) 
                                & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                                   == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr)))
                                ? vlSelf->ysyx_25060170_fishtailcore__DOT__ls_data_forward
                                : (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr) 
                                    & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                                       == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))
                                    ? vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res
                                    : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgTmp_h15760a56__0)
                                        ? vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rf_data
                                        : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr)
                                            ? (((~ (IData)(vlSelf->rst)) 
                                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr))
                                                ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                               [vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr]
                                                : 0U)
                                            : vlSelf->ysyx_25060170_fishtailcore__DOT__if_next_pc))))),32);
    bufp->fullIData(oldp+317,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal)
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
                                    ? (((- (IData)(
                                                   (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                    >> 0x1fU))) 
                                        << 0xdU) | 
                                       ((0x1000U & 
                                         (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
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
                                                 ? 
                                                (((- (IData)(
                                                             (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                    >> 0x14U))
                                                 : 4U))))),32);
    bufp->fullIData(oldp+318,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc),32);
    bufp->fullIData(oldp+319,((0xfffffffeU & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc)),32);
    bufp->fullBit(oldp+320,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wbu_forward_en));
    bufp->fullBit(oldp+321,(((~ ((IData)(vlSelf->rst) 
                                 & (0U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)))) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena) 
                                & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag) 
                                   & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr) 
                                      == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))))));
    bufp->fullBit(oldp+322,(((~ ((IData)(vlSelf->rst) 
                                 & (0U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)))) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena) 
                                & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag) 
                                   & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr) 
                                      == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))))));
    bufp->fullIData(oldp+323,((((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward))) 
                                & vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res) 
                               | (((- (IData)(((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward)) 
                                               & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward)))) 
                                   & vlSelf->ysyx_25060170_fishtailcore__DOT__ls_data_forward) 
                                  | ((- (IData)(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward) 
                                                 & ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward)) 
                                                    & (~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward)))))) 
                                     & vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rf_data)))),32);
    bufp->fullIData(oldp+324,((((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward))) 
                                & vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res) 
                               | (((- (IData)(((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward)) 
                                               & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward)))) 
                                   & vlSelf->ysyx_25060170_fishtailcore__DOT__ls_data_forward) 
                                  | ((- (IData)(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward) 
                                                 & ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward)) 
                                                    & (~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward)))))) 
                                     & vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rf_data)))),32);
    bufp->fullIData(oldp+325,(((0x42U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                                ? vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1
                                : vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc)),32);
    bufp->fullCData(oldp+326,(((IData)(vlSelf->rst)
                                ? 0U : ((0U == (3U 
                                                & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                         ? 3U : ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                                  ? 0xcU
                                                  : 0U)))),4);
    bufp->fullBit(oldp+327,(0U));
    bufp->fullBit(oldp+328,(1U));
    bufp->fullIData(oldp+329,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_next_pc),32);
    bufp->fullCData(oldp+330,(4U),8);
    bufp->fullCData(oldp+331,(0xfU),4);
    bufp->fullCData(oldp+332,(0U),2);
}
