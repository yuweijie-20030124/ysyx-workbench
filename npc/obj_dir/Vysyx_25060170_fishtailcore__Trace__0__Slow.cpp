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
    tracep->declBit(c+338,"clk", false,-1);
    tracep->declBit(c+339,"rst", false,-1);
    tracep->pushNamePrefix("ysyx_25060170_fishtailcore ");
    tracep->declBit(c+338,"clk", false,-1);
    tracep->declBit(c+339,"rst", false,-1);
    tracep->declBus(c+2,"if_id_inst", false,-1, 31,0);
    tracep->declBus(c+144,"bp_if_pc", false,-1, 31,0);
    tracep->declBit(c+145,"bp_predict", false,-1);
    tracep->declBus(c+340,"bp_rs1_data", false,-1, 31,0);
    tracep->declBus(c+3,"bp_rs1_addr", false,-1, 4,0);
    tracep->declBit(c+4,"bp_rs1_ena", false,-1);
    tracep->declBit(c+146,"bp_if_jal_jalr", false,-1);
    tracep->declBit(c+5,"bp_if_branch", false,-1);
    tracep->declBit(c+6,"id_if_pc_jump", false,-1);
    tracep->declBus(c+7,"id_jump_pc", false,-1, 31,0);
    tracep->declBit(c+349,"ls_pc_jump", false,-1);
    tracep->declBus(c+147,"ls_jump_pc", false,-1, 31,0);
    tracep->declBit(c+1,"id_ready", false,-1);
    tracep->declBit(c+8,"id_stall", false,-1);
    tracep->declBit(c+9,"if_valid", false,-1);
    tracep->declBus(c+148,"if_id_pc", false,-1, 31,0);
    tracep->declBus(c+149,"if_id_next_pc", false,-1, 31,0);
    tracep->declBus(c+2,"dpic_ifu_inst", false,-1, 31,0);
    tracep->declBit(c+349,"ls_flush", false,-1);
    tracep->declBit(c+6,"id_flush", false,-1);
    tracep->declBus(c+150,"if_id_reg_pc", false,-1, 31,0);
    tracep->declBus(c+151,"if_id_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+152,"if_id_reg_inst", false,-1, 31,0);
    tracep->declBit(c+153,"id_jump", false,-1);
    tracep->declBit(c+154,"if_id_valid", false,-1);
    tracep->declBit(c+155,"ex_csr_ena", false,-1);
    tracep->declBit(c+156,"ls_csr_ena", false,-1);
    tracep->declBus(c+341,"rf_id_rs1_data", false,-1, 31,0);
    tracep->declBus(c+342,"rf_id_rs2_data", false,-1, 31,0);
    tracep->declBit(c+1,"ex_ready", false,-1);
    tracep->declBus(c+10,"idu_rs1_addr", false,-1, 4,0);
    tracep->declBit(c+11,"idu_rs1_ena", false,-1);
    tracep->declBus(c+12,"idu_rs2_addr", false,-1, 4,0);
    tracep->declBit(c+13,"idu_rs2_ena", false,-1);
    tracep->declBit(c+14,"idu_rd_ena", false,-1);
    tracep->declBus(c+15,"idu_rd_addr", false,-1, 4,0);
    tracep->declBus(c+16,"idu_alusrc", false,-1, 7,0);
    tracep->declBus(c+17,"idu_lsctl", false,-1, 3,0);
    tracep->declBus(c+18,"idu_wbctl", false,-1, 1,0);
    tracep->declBus(c+19,"idu_op1_sel", false,-1, 1,0);
    tracep->declBus(c+20,"idu_op2_sel", false,-1, 2,0);
    tracep->declBit(c+21,"idu_load_flag", false,-1);
    tracep->declBit(c+22,"idu_csr_ena", false,-1);
    tracep->declBus(c+23,"idu_op1", false,-1, 31,0);
    tracep->declBus(c+24,"idu_op2", false,-1, 31,0);
    tracep->declBus(c+25,"idu_imm", false,-1, 31,0);
    tracep->declBus(c+157,"idu_dpic_rd_addr", false,-1, 4,0);
    tracep->declBus(c+150,"idu_pc", false,-1, 31,0);
    tracep->declBus(c+26,"idu_next_pc", false,-1, 31,0);
    tracep->declBus(c+152,"idu_inst", false,-1, 31,0);
    tracep->declBus(c+158,"idu_csr_imm", false,-1, 4,0);
    tracep->declBit(c+27,"ex_branch", false,-1);
    tracep->declBit(c+159,"magic_flag", false,-1);
    tracep->declBus(c+160,"id_ex_reg_alusrc", false,-1, 7,0);
    tracep->declBit(c+154,"id_valid", false,-1);
    tracep->declBus(c+161,"id_ex_reg_pc", false,-1, 31,0);
    tracep->declBus(c+162,"id_ex_reg_inst", false,-1, 31,0);
    tracep->declBus(c+163,"id_ex_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+164,"id_ex_reg_op1", false,-1, 31,0);
    tracep->declBus(c+165,"id_ex_reg_op2", false,-1, 31,0);
    tracep->declBus(c+166,"id_ex_reg_op1_sel", false,-1, 1,0);
    tracep->declBus(c+167,"id_ex_reg_op2_sel", false,-1, 2,0);
    tracep->declBit(c+168,"id_ex_reg_rd_ena", false,-1);
    tracep->declBus(c+169,"id_ex_reg_rd_addr", false,-1, 4,0);
    tracep->declBus(c+170,"id_ex_reg_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+171,"id_ex_reg_imm", false,-1, 31,0);
    tracep->declBus(c+172,"id_ex_reg_lsctl", false,-1, 3,0);
    tracep->declBus(c+173,"id_ex_reg_wbctl", false,-1, 1,0);
    tracep->declBit(c+174,"id_ex_reg_load_flag", false,-1);
    tracep->declBit(c+175,"id_ex_valid", false,-1);
    tracep->declBit(c+1,"ls_ready", false,-1);
    tracep->declBus(c+162,"exu_inst", false,-1, 31,0);
    tracep->declBus(c+161,"exu_pc", false,-1, 31,0);
    tracep->declBus(c+163,"exu_next_pc", false,-1, 31,0);
    tracep->declBit(c+175,"ex_valid", false,-1);
    tracep->declBus(c+165,"exu_store_data", false,-1, 31,0);
    tracep->declBus(c+28,"exu_res", false,-1, 31,0);
    tracep->declBus(c+29,"exu_csr_addr", false,-1, 11,0);
    tracep->declBus(c+30,"exu_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+176,"ex_ls_reg_inst", false,-1, 31,0);
    tracep->declBus(c+177,"ex_ls_reg_store_data", false,-1, 31,0);
    tracep->declBus(c+147,"ex_ls_reg_exu_res", false,-1, 31,0);
    tracep->declBus(c+178,"ex_ls_reg_ls_ctl", false,-1, 3,0);
    tracep->declBus(c+179,"ex_ls_reg_wb_ctl", false,-1, 1,0);
    tracep->declBus(c+180,"ex_ls_reg_csr_ctl", false,-1, 6,0);
    tracep->declBit(c+181,"ex_ls_reg_rd_ena", false,-1);
    tracep->declBus(c+182,"ex_ls_reg_rd_addr", false,-1, 4,0);
    tracep->declBit(c+155,"ex_ls_reg_ls_csr_ena", false,-1);
    tracep->declBus(c+183,"ex_ls_reg_csr_addr", false,-1, 11,0);
    tracep->declBus(c+184,"ex_ls_reg_pc", false,-1, 31,0);
    tracep->declBus(c+185,"ex_ls_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+169,"ex_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+28,"ex_rd_data_forward", false,-1, 31,0);
    tracep->declBit(c+186,"ex_ls_valid", false,-1);
    tracep->declBit(c+31,"ls_valid", false,-1);
    tracep->declBit(c+32,"ls_dpic_we", false,-1);
    tracep->declBus(c+33,"ls_dpic_data", false,-1, 31,0);
    tracep->declBus(c+34,"ls_dpic_raddr", false,-1, 31,0);
    tracep->declBus(c+34,"ls_dpic_waddr", false,-1, 31,0);
    tracep->declBus(c+35,"ls_dpic_wlen", false,-1, 7,0);
    tracep->declBus(c+350,"ls_dpic_rlen", false,-1, 7,0);
    tracep->declBus(c+184,"ls_pc", false,-1, 31,0);
    tracep->declBus(c+185,"ls_next_pc", false,-1, 31,0);
    tracep->declBus(c+176,"ls_inst", false,-1, 31,0);
    tracep->declBit(c+36,"ls_mem_re", false,-1);
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
    tracep->declBus(c+182,"ls_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+147,"ls_rd_data_forward", false,-1, 31,0);
    tracep->declBit(c+197,"ls_mem_reg_re", false,-1);
    tracep->declBus(c+198,"ls_mem_reg_alu_res", false,-1, 31,0);
    tracep->declBus(c+187,"mem_inst", false,-1, 31,0);
    tracep->declBus(c+188,"mem_pc", false,-1, 31,0);
    tracep->declBus(c+189,"mem_next_pc", false,-1, 31,0);
    tracep->declBus(c+198,"mem_alu_res", false,-1, 31,0);
    tracep->declBit(c+192,"mem_rd_ena", false,-1);
    tracep->declBus(c+193,"mem_rd_addr", false,-1, 4,0);
    tracep->declBus(c+194,"mem_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+195,"mem_csr_addr", false,-1, 11,0);
    tracep->declBus(c+191,"mem_wbctl", false,-1, 1,0);
    tracep->declBit(c+199,"mem_valid", false,-1);
    tracep->declBit(c+351,"mem_ready", false,-1);
    tracep->declBus(c+343,"mem_data", false,-1, 31,0);
    tracep->declBus(c+200,"mem_wb_inst", false,-1, 31,0);
    tracep->declBus(c+201,"mem_wb_pc", false,-1, 31,0);
    tracep->declBus(c+202,"mem_wb_next_pc", false,-1, 31,0);
    tracep->declBus(c+203,"mem_wb_lsu_res", false,-1, 31,0);
    tracep->declBus(c+204,"mem_wb_alures_data", false,-1, 31,0);
    tracep->declBus(c+205,"mem_wb_wb_ctl", false,-1, 1,0);
    tracep->declBit(c+206,"mem_wb_rd_ena", false,-1);
    tracep->declBus(c+207,"mem_wb_rd_addr", false,-1, 4,0);
    tracep->declBus(c+208,"mem_wb_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+209,"mem_wb_csr_addr", false,-1, 11,0);
    tracep->declBit(c+210,"mem_valid_o", false,-1);
    tracep->declBus(c+211,"wb_rf_data", false,-1, 31,0);
    tracep->declBit(c+351,"wb_ready", false,-1);
    tracep->declBit(c+206,"wb_rf_rd_ena", false,-1);
    tracep->declBus(c+207,"wb_rf_rd_addr", false,-1, 4,0);
    tracep->declBus(c+207,"wb_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+211,"wb_rd_data_forward", false,-1, 31,0);
    tracep->declBus(c+212,"wbu_dpic_mstatus", false,-1, 31,0);
    tracep->declBus(c+213,"wbu_dpic_mepc", false,-1, 31,0);
    tracep->declBus(c+214,"wbu_dpic_mtvec", false,-1, 31,0);
    tracep->declBus(c+215,"wbu_dpic_mcause", false,-1, 31,0);
    tracep->declBus(c+200,"wbu_dpic_inst", false,-1, 31,0);
    tracep->declBus(c+201,"wbu_dpic_pc", false,-1, 31,0);
    tracep->declBus(c+202,"wbu_dpic_next_pc", false,-1, 31,0);
    tracep->declBit(c+210,"wbu_dpic_valid", false,-1);
    tracep->declBus(c+216,"regs0", false,-1, 31,0);
    tracep->declBus(c+217,"regs1", false,-1, 31,0);
    tracep->declBus(c+218,"regs2", false,-1, 31,0);
    tracep->declBus(c+219,"regs3", false,-1, 31,0);
    tracep->declBus(c+220,"regs4", false,-1, 31,0);
    tracep->declBus(c+221,"regs5", false,-1, 31,0);
    tracep->declBus(c+222,"regs6", false,-1, 31,0);
    tracep->declBus(c+223,"regs7", false,-1, 31,0);
    tracep->declBus(c+224,"regs8", false,-1, 31,0);
    tracep->declBus(c+225,"regs9", false,-1, 31,0);
    tracep->declBus(c+226,"regs10", false,-1, 31,0);
    tracep->declBus(c+227,"regs11", false,-1, 31,0);
    tracep->declBus(c+228,"regs12", false,-1, 31,0);
    tracep->declBus(c+229,"regs13", false,-1, 31,0);
    tracep->declBus(c+230,"regs14", false,-1, 31,0);
    tracep->declBus(c+231,"regs15", false,-1, 31,0);
    tracep->declBus(c+232,"regs16", false,-1, 31,0);
    tracep->declBus(c+233,"regs17", false,-1, 31,0);
    tracep->declBus(c+234,"regs18", false,-1, 31,0);
    tracep->declBus(c+235,"regs19", false,-1, 31,0);
    tracep->declBus(c+236,"regs20", false,-1, 31,0);
    tracep->declBus(c+237,"regs21", false,-1, 31,0);
    tracep->declBus(c+238,"regs22", false,-1, 31,0);
    tracep->declBus(c+239,"regs23", false,-1, 31,0);
    tracep->declBus(c+240,"regs24", false,-1, 31,0);
    tracep->declBus(c+241,"regs25", false,-1, 31,0);
    tracep->declBus(c+242,"regs26", false,-1, 31,0);
    tracep->declBus(c+243,"regs27", false,-1, 31,0);
    tracep->declBus(c+244,"regs28", false,-1, 31,0);
    tracep->declBus(c+245,"regs29", false,-1, 31,0);
    tracep->declBus(c+246,"regs30", false,-1, 31,0);
    tracep->declBus(c+247,"regs31", false,-1, 31,0);
    tracep->declBus(c+248,"DPIC_MEM_data", false,-1, 31,0);
    tracep->pushNamePrefix("u_ysyx_25060170_DPIC ");
    tracep->declBit(c+338,"clk", false,-1);
    tracep->declBit(c+339,"rst", false,-1);
    tracep->declBus(c+148,"pc_i", false,-1, 31,0);
    tracep->declBus(c+2,"inst_o", false,-1, 31,0);
    tracep->declBus(c+150,"ftrace_pc", false,-1, 31,0);
    tracep->declBus(c+157,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+25,"imm", false,-1, 31,0);
    tracep->declBus(c+216,"regs0", false,-1, 31,0);
    tracep->declBus(c+217,"regs1", false,-1, 31,0);
    tracep->declBus(c+218,"regs2", false,-1, 31,0);
    tracep->declBus(c+219,"regs3", false,-1, 31,0);
    tracep->declBus(c+220,"regs4", false,-1, 31,0);
    tracep->declBus(c+221,"regs5", false,-1, 31,0);
    tracep->declBus(c+222,"regs6", false,-1, 31,0);
    tracep->declBus(c+223,"regs7", false,-1, 31,0);
    tracep->declBus(c+224,"regs8", false,-1, 31,0);
    tracep->declBus(c+225,"regs9", false,-1, 31,0);
    tracep->declBus(c+226,"regs10", false,-1, 31,0);
    tracep->declBus(c+227,"regs11", false,-1, 31,0);
    tracep->declBus(c+228,"regs12", false,-1, 31,0);
    tracep->declBus(c+229,"regs13", false,-1, 31,0);
    tracep->declBus(c+230,"regs14", false,-1, 31,0);
    tracep->declBus(c+231,"regs15", false,-1, 31,0);
    tracep->declBus(c+232,"regs16", false,-1, 31,0);
    tracep->declBus(c+233,"regs17", false,-1, 31,0);
    tracep->declBus(c+234,"regs18", false,-1, 31,0);
    tracep->declBus(c+235,"regs19", false,-1, 31,0);
    tracep->declBus(c+236,"regs20", false,-1, 31,0);
    tracep->declBus(c+237,"regs21", false,-1, 31,0);
    tracep->declBus(c+238,"regs22", false,-1, 31,0);
    tracep->declBus(c+239,"regs23", false,-1, 31,0);
    tracep->declBus(c+240,"regs24", false,-1, 31,0);
    tracep->declBus(c+241,"regs25", false,-1, 31,0);
    tracep->declBus(c+242,"regs26", false,-1, 31,0);
    tracep->declBus(c+243,"regs27", false,-1, 31,0);
    tracep->declBus(c+244,"regs28", false,-1, 31,0);
    tracep->declBus(c+245,"regs29", false,-1, 31,0);
    tracep->declBus(c+246,"regs30", false,-1, 31,0);
    tracep->declBus(c+247,"regs31", false,-1, 31,0);
    tracep->declBus(c+212,"mstatus", false,-1, 31,0);
    tracep->declBus(c+214,"mtvec", false,-1, 31,0);
    tracep->declBus(c+213,"mepc", false,-1, 31,0);
    tracep->declBus(c+215,"mcause", false,-1, 31,0);
    tracep->declBit(c+36,"re", false,-1);
    tracep->declBit(c+32,"we", false,-1);
    tracep->declBus(c+33,"data_i", false,-1, 31,0);
    tracep->declBus(c+35,"wlen", false,-1, 7,0);
    tracep->declBus(c+350,"rlen", false,-1, 7,0);
    tracep->declBus(c+200,"wbu_dpic_inst", false,-1, 31,0);
    tracep->declBus(c+201,"wbu_dpic_pc", false,-1, 31,0);
    tracep->declBus(c+202,"wbu_dpic_next_pc", false,-1, 31,0);
    tracep->declBit(c+210,"wbu_dpic_valid", false,-1);
    tracep->declBus(c+248,"data_o", false,-1, 31,0);
    tracep->declBus(c+34,"raddr", false,-1, 31,0);
    tracep->declBus(c+34,"waddr", false,-1, 31,0);
    tracep->declBus(c+184,"ex_ls_reg_DPIC_pc_i", false,-1, 31,0);
    tracep->declBit(c+159,"magic_flag", false,-1);
    tracep->declBus(c+352,"dpic_loadread", false,-1, 31,0);
    tracep->declBus(c+37,"mem_data", false,-1, 31,0);
    tracep->declBus(c+353,"dpic_fetch", false,-1, 31,0);
    tracep->declBit(c+38,"jal", false,-1);
    tracep->declBit(c+39,"jalr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_bpu ");
    tracep->declBit(c+338,"clk", false,-1);
    tracep->declBit(c+339,"rst", false,-1);
    tracep->declBus(c+161,"pc_before_bxx", false,-1, 31,0);
    tracep->declBit(c+27,"branch_success", false,-1);
    tracep->declBit(c+153,"branch", false,-1);
    tracep->declBus(c+171,"bxx_imm", false,-1, 31,0);
    tracep->declBus(c+2,"inst_i", false,-1, 31,0);
    tracep->declBus(c+148,"pc_i", false,-1, 31,0);
    tracep->declBus(c+147,"ls_wb_forward_data", false,-1, 31,0);
    tracep->declBus(c+182,"ls_wb_forward_addr", false,-1, 4,0);
    tracep->declBus(c+28,"ex_ls_forward_data", false,-1, 31,0);
    tracep->declBus(c+169,"ex_ls_forward_addr", false,-1, 4,0);
    tracep->declBus(c+340,"bp_rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+207,"wb_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+211,"wb_rd_data_forward", false,-1, 31,0);
    tracep->declBus(c+144,"bp_pc_o", false,-1, 31,0);
    tracep->declBit(c+146,"jal_jalr_o", false,-1);
    tracep->declBit(c+5,"branch_o", false,-1);
    tracep->declBus(c+3,"bp_rs1_addr_o", false,-1, 4,0);
    tracep->declBit(c+4,"bp_rs1_ena_o", false,-1);
    tracep->declBit(c+145,"bp_predict_o", false,-1);
    tracep->declBit(c+40,"jal_jalr_temp", false,-1);
    tracep->declBus(c+41,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+249,"strongly_not_taken_state", false,-1);
    tracep->declBit(c+250,"weakly_not_taken_state", false,-1);
    tracep->declBit(c+251,"weakly_taken_state", false,-1);
    tracep->declBit(c+252,"strongly_taken_state", false,-1);
    tracep->declBus(c+42,"jal_imm", false,-1, 20,0);
    tracep->declBus(c+43,"b_imm", false,-1, 12,0);
    tracep->declBus(c+44,"jalr_imm", false,-1, 11,0);
    tracep->declBus(c+45,"opcode", false,-1, 6,0);
    tracep->declBus(c+344,"op1", false,-1, 31,0);
    tracep->declBus(c+46,"op2", false,-1, 31,0);
    tracep->declBit(c+47,"inst_jal", false,-1);
    tracep->declBit(c+4,"inst_jalr", false,-1);
    tracep->declBit(c+5,"inst_bxx", false,-1);
    tracep->declBus(c+48,"jump_pc", false,-1, 31,0);
    tracep->declBus(c+49,"jump_jalr_pc", false,-1, 31,0);
    tracep->declBus(c+50,"jal_offset", false,-1, 31,0);
    tracep->declBus(c+51,"br_offset", false,-1, 31,0);
    tracep->declBus(c+52,"jalr_offset", false,-1, 31,0);
    tracep->declBit(c+53,"ls_wb_forward_en", false,-1);
    tracep->declBit(c+54,"ex_ls_forward_en", false,-1);
    tracep->declBit(c+55,"wbu_forward_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_ex_ls_reg ");
    tracep->declBit(c+338,"clk", false,-1);
    tracep->declBit(c+339,"rst", false,-1);
    tracep->declBus(c+162,"inst_i", false,-1, 31,0);
    tracep->declBus(c+161,"pc_i", false,-1, 31,0);
    tracep->declBus(c+163,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+165,"store_data_i", false,-1, 31,0);
    tracep->declBus(c+28,"exu_res_i", false,-1, 31,0);
    tracep->declBus(c+172,"ls_ctl_i", false,-1, 3,0);
    tracep->declBus(c+173,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+30,"csr_ctl_i", false,-1, 6,0);
    tracep->declBit(c+168,"rd_ena_i", false,-1);
    tracep->declBus(c+169,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+155,"ex_csr_ena_i", false,-1);
    tracep->declBus(c+29,"csr_addr_i", false,-1, 11,0);
    tracep->declBit(c+175,"ex_valid_i", false,-1);
    tracep->declBit(c+1,"ls_ready_i", false,-1);
    tracep->declBit(c+349,"ls_flush_i", false,-1);
    tracep->declBit(c+186,"ex_valid_o", false,-1);
    tracep->declBus(c+176,"inst_o", false,-1, 31,0);
    tracep->declBus(c+184,"pc_o", false,-1, 31,0);
    tracep->declBus(c+185,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+177,"store_data_o", false,-1, 31,0);
    tracep->declBus(c+147,"exu_res_o", false,-1, 31,0);
    tracep->declBus(c+178,"ls_ctl_o", false,-1, 3,0);
    tracep->declBus(c+179,"wb_ctl_o", false,-1, 1,0);
    tracep->declBus(c+180,"csr_ctl_o", false,-1, 6,0);
    tracep->declBit(c+181,"rd_ena_o", false,-1);
    tracep->declBus(c+182,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+183,"csr_addr_o", false,-1, 11,0);
    tracep->declBit(c+156,"ls_csr_ena_o", false,-1);
    tracep->declBus(c+169,"ex_rd_addr_forward_o", false,-1, 4,0);
    tracep->declBit(c+155,"ex_csr_o", false,-1);
    tracep->declBus(c+28,"ex_rd_data_forward_o", false,-1, 31,0);
    tracep->declBit(c+349,"flush", false,-1);
    tracep->declBit(c+253,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_exu ");
    tracep->declBit(c+339,"rst", false,-1);
    tracep->declBus(c+164,"op1_i", false,-1, 31,0);
    tracep->declBus(c+165,"op2_i", false,-1, 31,0);
    tracep->declBus(c+166,"op1_sel_i", false,-1, 1,0);
    tracep->declBus(c+167,"op2_sel_i", false,-1, 2,0);
    tracep->declBus(c+169,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+170,"rs1_addr_i", false,-1, 4,0);
    tracep->declBus(c+171,"imm_i", false,-1, 31,0);
    tracep->declBus(c+161,"pc_i", false,-1, 31,0);
    tracep->declBus(c+163,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+162,"inst_i", false,-1, 31,0);
    tracep->declBus(c+160,"alu_sel_i", false,-1, 7,0);
    tracep->declBit(c+1,"ls_ready_i", false,-1);
    tracep->declBit(c+175,"id_valid_i", false,-1);
    tracep->declBit(c+175,"ex_valid_o", false,-1);
    tracep->declBit(c+1,"ex_ready_o", false,-1);
    tracep->declBus(c+162,"inst_o", false,-1, 31,0);
    tracep->declBus(c+161,"pc_o", false,-1, 31,0);
    tracep->declBus(c+163,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+165,"store_data_o", false,-1, 31,0);
    tracep->declBus(c+28,"exu_res_o", false,-1, 31,0);
    tracep->declBus(c+29,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+30,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+254,"op1", false,-1, 31,0);
    tracep->declBus(c+255,"op2", false,-1, 31,0);
    tracep->declBus(c+256,"op1_add_op2", false,-1, 31,0);
    tracep->declBus(c+257,"op1_sub_op2", false,-1, 31,0);
    tracep->declBit(c+258,"op1_lt_op2", false,-1);
    tracep->declBus(c+259,"op1_sra_op2", false,-1, 31,0);
    tracep->declQuad(c+260,"mul", false,-1, 63,0);
    tracep->declBus(c+262,"op1_mul_op2", false,-1, 31,0);
    tracep->declBus(c+263,"op1_mulh_op2", false,-1, 31,0);
    tracep->declBus(c+264,"div", false,-1, 31,0);
    tracep->declBus(c+265,"rem", false,-1, 31,0);
    tracep->declBus(c+56,"alu_res", false,-1, 31,0);
    tracep->declBit(c+57,"csr_wr_ena", false,-1);
    tracep->declBit(c+58,"csr_rd_ena", false,-1);
    tracep->declBit(c+59,"mret_ena", false,-1);
    tracep->declBit(c+60,"ecall_ena", false,-1);
    tracep->declBit(c+61,"csrrw_ena", false,-1);
    tracep->declBit(c+62,"csrrs_ena", false,-1);
    tracep->declBit(c+63,"csrrc_ena", false,-1);
    tracep->declBus(c+266,"csr_op", false,-1, 31,0);
    tracep->declBit(c+267,"csrrxi_ena", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_id_ex_reg ");
    tracep->declBit(c+338,"clk", false,-1);
    tracep->declBit(c+339,"rst", false,-1);
    tracep->declBus(c+152,"inst_i", false,-1, 31,0);
    tracep->declBus(c+150,"pc_i", false,-1, 31,0);
    tracep->declBus(c+26,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+23,"op1_i", false,-1, 31,0);
    tracep->declBus(c+24,"op2_i", false,-1, 31,0);
    tracep->declBus(c+19,"op1_sel_i", false,-1, 1,0);
    tracep->declBus(c+20,"op2_sel_i", false,-1, 2,0);
    tracep->declBit(c+14,"rd_ena_i", false,-1);
    tracep->declBus(c+15,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+158,"rs1_addr_i", false,-1, 4,0);
    tracep->declBus(c+25,"imm_i", false,-1, 31,0);
    tracep->declBus(c+16,"alusrc_i", false,-1, 7,0);
    tracep->declBus(c+17,"lsctl_i", false,-1, 3,0);
    tracep->declBus(c+18,"wbctl_i", false,-1, 1,0);
    tracep->declBit(c+22,"csr_ena_i", false,-1);
    tracep->declBit(c+21,"load_flag_i", false,-1);
    tracep->declBit(c+154,"id_valid_i", false,-1);
    tracep->declBit(c+6,"id_flush_i", false,-1);
    tracep->declBit(c+349,"ls_flush_i", false,-1);
    tracep->declBit(c+1,"ex_ready_i", false,-1);
    tracep->declBus(c+162,"inst_o", false,-1, 31,0);
    tracep->declBus(c+161,"pc_o", false,-1, 31,0);
    tracep->declBus(c+163,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+164,"op1_o", false,-1, 31,0);
    tracep->declBus(c+165,"op2_o", false,-1, 31,0);
    tracep->declBus(c+166,"op1_sel_o", false,-1, 1,0);
    tracep->declBus(c+167,"op2_sel_o", false,-1, 2,0);
    tracep->declBit(c+168,"rd_ena_o", false,-1);
    tracep->declBus(c+169,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+170,"rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+171,"imm_o", false,-1, 31,0);
    tracep->declBus(c+160,"alusrc_o", false,-1, 7,0);
    tracep->declBus(c+172,"lsctl_o", false,-1, 3,0);
    tracep->declBus(c+173,"wbctl_o", false,-1, 1,0);
    tracep->declBit(c+155,"csr_ena_o", false,-1);
    tracep->declBit(c+174,"load_flag_o", false,-1);
    tracep->declBit(c+175,"id_valid_o", false,-1);
    tracep->declBit(c+6,"flush", false,-1);
    tracep->declBit(c+268,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_idu ");
    tracep->declBit(c+339,"rst", false,-1);
    tracep->declBus(c+152,"inst_i", false,-1, 31,0);
    tracep->declBus(c+150,"pc_i", false,-1, 31,0);
    tracep->declBus(c+151,"next_pc_i", false,-1, 31,0);
    tracep->declBit(c+153,"bp_jump_i", false,-1);
    tracep->declBus(c+169,"ex_addr_forward", false,-1, 4,0);
    tracep->declBus(c+28,"ex_data_forward", false,-1, 31,0);
    tracep->declBus(c+182,"ls_addr_forward", false,-1, 4,0);
    tracep->declBus(c+147,"ls_data_forward", false,-1, 31,0);
    tracep->declBus(c+207,"wb_addr_forward", false,-1, 4,0);
    tracep->declBus(c+211,"wb_data_forward", false,-1, 31,0);
    tracep->declBit(c+174,"ex_load_ena", false,-1);
    tracep->declBit(c+155,"ex_csr_ena", false,-1);
    tracep->declBit(c+156,"ls_csr_ena", false,-1);
    tracep->declBus(c+341,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+342,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+10,"rs1_addr", false,-1, 4,0);
    tracep->declBit(c+11,"rs1_ena", false,-1);
    tracep->declBus(c+12,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+13,"rs2_ena", false,-1);
    tracep->declBit(c+14,"rd_ena", false,-1);
    tracep->declBus(c+15,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+150,"pc_o", false,-1, 31,0);
    tracep->declBus(c+26,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+16,"alusrc_o", false,-1, 7,0);
    tracep->declBus(c+17,"lsctl_o", false,-1, 3,0);
    tracep->declBus(c+18,"wbctl_o", false,-1, 1,0);
    tracep->declBus(c+19,"op1_sel", false,-1, 1,0);
    tracep->declBus(c+20,"op2_sel", false,-1, 2,0);
    tracep->declBit(c+21,"load_flag_o", false,-1);
    tracep->declBit(c+22,"csr_ena_o", false,-1);
    tracep->declBus(c+23,"op1", false,-1, 31,0);
    tracep->declBus(c+24,"op2", false,-1, 31,0);
    tracep->declBus(c+25,"imm", false,-1, 31,0);
    tracep->declBus(c+157,"idu_dpic_rd_addr", false,-1, 4,0);
    tracep->declBus(c+152,"inst_o", false,-1, 31,0);
    tracep->declBus(c+158,"csr_imm", false,-1, 4,0);
    tracep->declBit(c+6,"jump_ena_o", false,-1);
    tracep->declBus(c+7,"jump_pc_o", false,-1, 31,0);
    tracep->declBit(c+27,"ex_branch", false,-1);
    tracep->declBit(c+154,"if_valid_i", false,-1);
    tracep->declBit(c+1,"ex_ready_i", false,-1);
    tracep->declBit(c+6,"id_flush_o", false,-1);
    tracep->declBit(c+8,"id_stall_o", false,-1);
    tracep->declBit(c+1,"id_ready_o", false,-1);
    tracep->declBit(c+154,"id_valid_o", false,-1);
    tracep->declBit(c+159,"magic_flag", false,-1);
    tracep->declBus(c+157,"rd", false,-1, 4,0);
    tracep->declBus(c+158,"rs1", false,-1, 4,0);
    tracep->declBus(c+269,"rs2", false,-1, 4,0);
    tracep->declBit(c+64,"branch", false,-1);
    tracep->declBit(c+345,"op1_relate", false,-1);
    tracep->declBit(c+346,"op2_relate", false,-1);
    tracep->declBit(c+65,"csr_op1_stall", false,-1);
    tracep->declBit(c+66,"csr_op2_stall", false,-1);
    tracep->declBit(c+8,"id_stall_ena", false,-1);
    tracep->declBit(c+67,"ex_op1_forward", false,-1);
    tracep->declBit(c+68,"ls_op1_forward", false,-1);
    tracep->declBit(c+69,"wb_op1_forward", false,-1);
    tracep->declBit(c+70,"ex_op2_forward", false,-1);
    tracep->declBit(c+71,"ls_op2_forward", false,-1);
    tracep->declBit(c+72,"wb_op2_forward", false,-1);
    tracep->declBit(c+73,"op1_forward_ena", false,-1);
    tracep->declBit(c+74,"op2_forward_ena", false,-1);
    tracep->declBus(c+75,"op1_forward_data", false,-1, 31,0);
    tracep->declBus(c+76,"op2_forward_data", false,-1, 31,0);
    tracep->declBit(c+77,"diff_sign", false,-1);
    tracep->declBit(c+78,"op_ltu_op2", false,-1);
    tracep->declBit(c+79,"op1_lt_op2", false,-1);
    tracep->declBus(c+80,"o1", false,-1, 31,0);
    tracep->declBus(c+81,"o2", false,-1, 31,0);
    tracep->pushNamePrefix("decoder ");
    tracep->declBit(c+339,"rst", false,-1);
    tracep->declBus(c+152,"inst", false,-1, 31,0);
    tracep->declBit(c+11,"rs1_ena", false,-1);
    tracep->declBit(c+13,"rs2_ena", false,-1);
    tracep->declBit(c+22,"csr_inst", false,-1);
    tracep->declBus(c+18,"wb_ctl", false,-1, 1,0);
    tracep->declBus(c+17,"mem_ctl", false,-1, 3,0);
    tracep->declBit(c+64,"branch", false,-1);
    tracep->declBus(c+25,"ext_imm", false,-1, 31,0);
    tracep->declBit(c+21,"load", false,-1);
    tracep->declBus(c+19,"op1_sel", false,-1, 1,0);
    tracep->declBus(c+20,"op2_sel", false,-1, 2,0);
    tracep->declBus(c+16,"alu_ctl", false,-1, 7,0);
    tracep->declBus(c+270,"opcode", false,-1, 6,0);
    tracep->declBus(c+271,"funct3", false,-1, 2,0);
    tracep->declBus(c+272,"funct7", false,-1, 6,0);
    tracep->declBus(c+273,"i_imm", false,-1, 11,0);
    tracep->declBus(c+274,"j_imm", false,-1, 20,1);
    tracep->declBus(c+275,"u_imm", false,-1, 19,0);
    tracep->declBus(c+276,"s_imm", false,-1, 11,0);
    tracep->declBus(c+277,"b_imm", false,-1, 12,1);
    tracep->declBus(c+82,"inst_type", false,-1, 7,0);
    tracep->declBit(c+83,"inst_lui", false,-1);
    tracep->declBit(c+84,"inst_auipc", false,-1);
    tracep->declBit(c+85,"inst_jal", false,-1);
    tracep->declBit(c+86,"inst_jalr", false,-1);
    tracep->declBit(c+87,"inst_sb", false,-1);
    tracep->declBit(c+88,"inst_sh", false,-1);
    tracep->declBit(c+89,"inst_sw", false,-1);
    tracep->declBit(c+90,"inst_sd", false,-1);
    tracep->declBit(c+91,"inst_lb", false,-1);
    tracep->declBit(c+92,"inst_lh", false,-1);
    tracep->declBit(c+93,"inst_lw", false,-1);
    tracep->declBit(c+94,"inst_ld", false,-1);
    tracep->declBit(c+95,"inst_lbu", false,-1);
    tracep->declBit(c+96,"inst_lhu", false,-1);
    tracep->declBit(c+97,"inst_lwu", false,-1);
    tracep->declBit(c+98,"inst_beq", false,-1);
    tracep->declBit(c+99,"inst_bne", false,-1);
    tracep->declBit(c+100,"inst_blt", false,-1);
    tracep->declBit(c+101,"inst_bge", false,-1);
    tracep->declBit(c+102,"inst_bltu", false,-1);
    tracep->declBit(c+103,"inst_bgeu", false,-1);
    tracep->declBit(c+104,"inst_add", false,-1);
    tracep->declBit(c+105,"inst_sub", false,-1);
    tracep->declBit(c+106,"inst_sll", false,-1);
    tracep->declBit(c+107,"inst_slt", false,-1);
    tracep->declBit(c+108,"inst_sltu", false,-1);
    tracep->declBit(c+109,"inst_xor", false,-1);
    tracep->declBit(c+110,"inst_srl", false,-1);
    tracep->declBit(c+111,"inst_sra", false,-1);
    tracep->declBit(c+112,"inst_or", false,-1);
    tracep->declBit(c+113,"inst_and", false,-1);
    tracep->declBit(c+114,"inst_div", false,-1);
    tracep->declBit(c+115,"inst_divu", false,-1);
    tracep->declBit(c+116,"inst_mul", false,-1);
    tracep->declBit(c+117,"inst_mulh", false,-1);
    tracep->declBit(c+118,"inst_mulhsu", false,-1);
    tracep->declBit(c+119,"inst_mulhu", false,-1);
    tracep->declBit(c+120,"inst_rem", false,-1);
    tracep->declBit(c+121,"inst_remu", false,-1);
    tracep->declBit(c+122,"inst_addi", false,-1);
    tracep->declBit(c+123,"inst_slti", false,-1);
    tracep->declBit(c+124,"inst_sltiu", false,-1);
    tracep->declBit(c+125,"inst_xori", false,-1);
    tracep->declBit(c+126,"inst_ori", false,-1);
    tracep->declBit(c+127,"inst_andi", false,-1);
    tracep->declBit(c+128,"inst_slli", false,-1);
    tracep->declBit(c+129,"inst_srli", false,-1);
    tracep->declBit(c+130,"inst_srai", false,-1);
    tracep->declBit(c+131,"inst_ecall", false,-1);
    tracep->declBit(c+132,"inst_mret", false,-1);
    tracep->declBit(c+133,"inst_csrrw", false,-1);
    tracep->declBit(c+134,"inst_csrrs", false,-1);
    tracep->declBit(c+135,"inst_csrrc", false,-1);
    tracep->declBit(c+136,"inst_csrrwi", false,-1);
    tracep->declBit(c+137,"inst_csrrsi", false,-1);
    tracep->declBit(c+138,"inst_csrrci", false,-1);
    tracep->declBit(c+139,"inst_ebreak", false,-1);
    tracep->declBit(c+140,"imm_ena", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_25060170_if_id_reg ");
    tracep->declBit(c+338,"clk", false,-1);
    tracep->declBit(c+339,"rst", false,-1);
    tracep->declBus(c+148,"pc_i", false,-1, 31,0);
    tracep->declBus(c+149,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+2,"inst_i", false,-1, 31,0);
    tracep->declBit(c+145,"bp_jump_i", false,-1);
    tracep->declBit(c+9,"if_valid_i", false,-1);
    tracep->declBit(c+6,"id_flush_i", false,-1);
    tracep->declBit(c+349,"ls_flush_i", false,-1);
    tracep->declBit(c+8,"id_stall_i", false,-1);
    tracep->declBit(c+1,"id_ready_i", false,-1);
    tracep->declBus(c+150,"pc_o", false,-1, 31,0);
    tracep->declBus(c+151,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+152,"inst_o", false,-1, 31,0);
    tracep->declBit(c+153,"id_jump_o", false,-1);
    tracep->declBit(c+154,"if_valid_o", false,-1);
    tracep->declBit(c+141,"flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_ifu ");
    tracep->declBit(c+339,"rst", false,-1);
    tracep->declBit(c+338,"clk", false,-1);
    tracep->declBit(c+6,"id_pc_jump_i", false,-1);
    tracep->declBus(c+7,"id_pc_i", false,-1, 31,0);
    tracep->declBit(c+349,"ls_pc_jump_i", false,-1);
    tracep->declBus(c+147,"ls_pc_i", false,-1, 31,0);
    tracep->declBit(c+145,"bp_pc_jump_i", false,-1);
    tracep->declBus(c+144,"bp_pc_i", false,-1, 31,0);
    tracep->declBit(c+146,"jal_jalr_i", false,-1);
    tracep->declBit(c+5,"branch_i", false,-1);
    tracep->declBit(c+1,"id_ready_i", false,-1);
    tracep->declBit(c+8,"id_stall_i", false,-1);
    tracep->declBit(c+9,"if_valid_o", false,-1);
    tracep->declBus(c+2,"inst_i", false,-1, 31,0);
    tracep->declBus(c+148,"pc_o", false,-1, 31,0);
    tracep->declBus(c+2,"inst_o", false,-1, 31,0);
    tracep->declBus(c+149,"next_pc_o", false,-1, 31,0);
    tracep->declBit(c+8,"stall", false,-1);
    tracep->declBus(c+278,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_ls_mem_reg ");
    tracep->declBit(c+338,"clk", false,-1);
    tracep->declBit(c+339,"rst", false,-1);
    tracep->declBus(c+176,"inst_i", false,-1, 31,0);
    tracep->declBus(c+184,"pc_i", false,-1, 31,0);
    tracep->declBus(c+185,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+178,"ls_ctl_i", false,-1, 3,0);
    tracep->declBus(c+179,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+147,"alu_res_i", false,-1, 31,0);
    tracep->declBit(c+36,"re_i", false,-1);
    tracep->declBit(c+181,"rd_ena_i", false,-1);
    tracep->declBus(c+182,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+180,"csr_ctl_i", false,-1, 6,0);
    tracep->declBus(c+183,"csr_addr_i", false,-1, 11,0);
    tracep->declBit(c+31,"ls_valid_i", false,-1);
    tracep->declBit(c+351,"mem_ready_i", false,-1);
    tracep->declBit(c+196,"ls_valid_o", false,-1);
    tracep->declBus(c+187,"inst_o", false,-1, 31,0);
    tracep->declBus(c+188,"pc_o", false,-1, 31,0);
    tracep->declBus(c+189,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+190,"ls_ctl_o", false,-1, 3,0);
    tracep->declBus(c+191,"wb_ctl_o", false,-1, 1,0);
    tracep->declBus(c+198,"alu_res_o", false,-1, 31,0);
    tracep->declBit(c+197,"re_o", false,-1);
    tracep->declBit(c+192,"rd_ena_o", false,-1);
    tracep->declBus(c+193,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+194,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+195,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+182,"ls_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+147,"ls_rd_data_forward", false,-1, 31,0);
    tracep->declBit(c+349,"flush", false,-1);
    tracep->declBit(c+142,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_lsu ");
    tracep->declBit(c+338,"clk", false,-1);
    tracep->declBit(c+339,"rst", false,-1);
    tracep->declBus(c+184,"pc_i", false,-1, 31,0);
    tracep->declBus(c+185,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+176,"inst_i", false,-1, 31,0);
    tracep->declBus(c+147,"alu_res_i", false,-1, 31,0);
    tracep->declBus(c+177,"store_data_i", false,-1, 31,0);
    tracep->declBus(c+178,"ls_ctl_i", false,-1, 3,0);
    tracep->declBit(c+351,"mem_ready_i", false,-1);
    tracep->declBit(c+186,"ex_valid_i", false,-1);
    tracep->declBit(c+1,"ls_ready_o", false,-1);
    tracep->declBit(c+31,"ls_valid_o", false,-1);
    tracep->declBit(c+349,"ls_flush_o", false,-1);
    tracep->declBit(c+349,"ls_jump_o", false,-1);
    tracep->declBus(c+147,"ls_jump_pc_o", false,-1, 31,0);
    tracep->declBit(c+36,"re", false,-1);
    tracep->declBit(c+32,"we", false,-1);
    tracep->declBus(c+33,"data_o", false,-1, 31,0);
    tracep->declBus(c+34,"raddr", false,-1, 31,0);
    tracep->declBus(c+34,"waddr", false,-1, 31,0);
    tracep->declBus(c+35,"wlen", false,-1, 7,0);
    tracep->declBus(c+350,"rlen", false,-1, 7,0);
    tracep->declBus(c+176,"inst_o", false,-1, 31,0);
    tracep->declBus(c+184,"pc_o", false,-1, 31,0);
    tracep->declBus(c+185,"next_pc_o", false,-1, 31,0);
    tracep->declBit(c+279,"data_ok", false,-1);
    tracep->declBus(c+280,"byte_sel", false,-1, 1,0);
    tracep->declBus(c+280,"half_sel", false,-1, 1,0);
    tracep->declBus(c+143,"sb_mask", false,-1, 3,0);
    tracep->declBus(c+347,"sh_mask", false,-1, 3,0);
    tracep->declBus(c+354,"sw_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_mem ");
    tracep->declBit(c+338,"clk", false,-1);
    tracep->declBit(c+339,"rst", false,-1);
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
    tracep->declBus(c+248,"mem_data_i", false,-1, 31,0);
    tracep->declBit(c+196,"ls_valid_i", false,-1);
    tracep->declBit(c+351,"wb_ready_i", false,-1);
    tracep->declBit(c+199,"mem_valid_o", false,-1);
    tracep->declBit(c+351,"mem_ready_o", false,-1);
    tracep->declBus(c+187,"inst_o", false,-1, 31,0);
    tracep->declBus(c+188,"pc_o", false,-1, 31,0);
    tracep->declBus(c+189,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+191,"wb_ctl_o", false,-1, 1,0);
    tracep->declBus(c+198,"alu_res_o", false,-1, 31,0);
    tracep->declBit(c+192,"rd_ena_o", false,-1);
    tracep->declBus(c+193,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+194,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+195,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+343,"mem_data_o", false,-1, 31,0);
    tracep->declBus(c+348,"load_data", false,-1, 31,0);
    tracep->declBit(c+281,"data_ok", false,-1);
    tracep->declBus(c+282,"data_byte", false,-1, 7,0);
    tracep->declBus(c+283,"data_half", false,-1, 15,0);
    tracep->declBus(c+248,"data_word", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_mem_wb_reg ");
    tracep->declBit(c+338,"clk", false,-1);
    tracep->declBit(c+339,"rst", false,-1);
    tracep->declBus(c+187,"inst_i", false,-1, 31,0);
    tracep->declBus(c+188,"pc_i", false,-1, 31,0);
    tracep->declBus(c+189,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+191,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+343,"mem_data_i", false,-1, 31,0);
    tracep->declBus(c+198,"alu_res_i", false,-1, 31,0);
    tracep->declBit(c+192,"rd_ena_i", false,-1);
    tracep->declBus(c+193,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+194,"csr_ctl_i", false,-1, 6,0);
    tracep->declBus(c+195,"csr_addr_i", false,-1, 11,0);
    tracep->declBit(c+199,"mem_valid_i", false,-1);
    tracep->declBit(c+351,"wb_ready_i", false,-1);
    tracep->declBit(c+210,"mem_valid_o", false,-1);
    tracep->declBus(c+200,"inst_o", false,-1, 31,0);
    tracep->declBus(c+201,"pc_o", false,-1, 31,0);
    tracep->declBus(c+202,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+204,"alu_res_o", false,-1, 31,0);
    tracep->declBus(c+203,"mem_data_o", false,-1, 31,0);
    tracep->declBus(c+205,"wb_ctl_o", false,-1, 1,0);
    tracep->declBit(c+206,"rd_ena_o", false,-1);
    tracep->declBus(c+207,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+208,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+209,"csr_addr_o", false,-1, 11,0);
    tracep->declBit(c+349,"flush", false,-1);
    tracep->declBit(c+199,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_regfile ");
    tracep->declBit(c+338,"clk", false,-1);
    tracep->declBit(c+339,"rst", false,-1);
    tracep->declBus(c+207,"waddr", false,-1, 4,0);
    tracep->declBus(c+211,"wdata", false,-1, 31,0);
    tracep->declBit(c+206,"wen", false,-1);
    tracep->declBit(c+11,"ren1", false,-1);
    tracep->declBit(c+13,"ren2", false,-1);
    tracep->declBus(c+10,"raddr1", false,-1, 4,0);
    tracep->declBus(c+12,"raddr2", false,-1, 4,0);
    tracep->declBus(c+341,"rdata1", false,-1, 31,0);
    tracep->declBus(c+342,"rdata2", false,-1, 31,0);
    tracep->declBus(c+216,"regs0_zero", false,-1, 31,0);
    tracep->declBus(c+217,"regs1_ra", false,-1, 31,0);
    tracep->declBus(c+218,"regs2_sp", false,-1, 31,0);
    tracep->declBus(c+219,"regs3_gp", false,-1, 31,0);
    tracep->declBus(c+220,"regs4_tp", false,-1, 31,0);
    tracep->declBus(c+221,"regs5_t0", false,-1, 31,0);
    tracep->declBus(c+222,"regs6_t1", false,-1, 31,0);
    tracep->declBus(c+223,"regs7_t2", false,-1, 31,0);
    tracep->declBus(c+224,"regs8_s0", false,-1, 31,0);
    tracep->declBus(c+225,"regs9_s1", false,-1, 31,0);
    tracep->declBus(c+226,"regs10_a0", false,-1, 31,0);
    tracep->declBus(c+227,"regs11_a1", false,-1, 31,0);
    tracep->declBus(c+228,"regs12_a2", false,-1, 31,0);
    tracep->declBus(c+229,"regs13_a3", false,-1, 31,0);
    tracep->declBus(c+230,"regs14_a4", false,-1, 31,0);
    tracep->declBus(c+231,"regs15_a5", false,-1, 31,0);
    tracep->declBus(c+232,"regs16_a6", false,-1, 31,0);
    tracep->declBus(c+233,"regs17_a7", false,-1, 31,0);
    tracep->declBus(c+234,"regs18_s2", false,-1, 31,0);
    tracep->declBus(c+235,"regs19_s3", false,-1, 31,0);
    tracep->declBus(c+236,"regs20_s4", false,-1, 31,0);
    tracep->declBus(c+237,"regs21_s5", false,-1, 31,0);
    tracep->declBus(c+238,"regs22_s6", false,-1, 31,0);
    tracep->declBus(c+239,"regs23_s7", false,-1, 31,0);
    tracep->declBus(c+240,"regs24_t3", false,-1, 31,0);
    tracep->declBus(c+241,"regs25_t4", false,-1, 31,0);
    tracep->declBus(c+242,"regs26_t5", false,-1, 31,0);
    tracep->declBus(c+243,"regs27_t6", false,-1, 31,0);
    tracep->declBus(c+244,"regs28_t3", false,-1, 31,0);
    tracep->declBus(c+245,"regs29_t4", false,-1, 31,0);
    tracep->declBus(c+246,"regs30_t5", false,-1, 31,0);
    tracep->declBus(c+247,"regs31_t6", false,-1, 31,0);
    tracep->declBus(c+3,"bp_rs1_addr_i", false,-1, 4,0);
    tracep->declBit(c+4,"bp_rs1_ena_i", false,-1);
    tracep->declBus(c+340,"bp_rs1_data_o", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+284+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_wbu ");
    tracep->declBit(c+338,"clk", false,-1);
    tracep->declBit(c+339,"rst", false,-1);
    tracep->declBus(c+203,"ls_rd_data_i", false,-1, 31,0);
    tracep->declBus(c+205,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+204,"exu_res_i", false,-1, 31,0);
    tracep->declBus(c+201,"pc_i", false,-1, 31,0);
    tracep->declBus(c+202,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+200,"inst_i", false,-1, 31,0);
    tracep->declBus(c+207,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+206,"rd_ena_i", false,-1);
    tracep->declBus(c+208,"csr_ctl_i", false,-1, 6,0);
    tracep->declBus(c+209,"csr_addr_i", false,-1, 11,0);
    tracep->declBit(c+210,"ls_valid_i", false,-1);
    tracep->declBus(c+211,"wb_data_o", false,-1, 31,0);
    tracep->declBit(c+351,"wb_ready_o", false,-1);
    tracep->declBit(c+206,"wb_rd_ena_o", false,-1);
    tracep->declBus(c+207,"wb_rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+207,"wb_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+211,"wb_rd_data_forward", false,-1, 31,0);
    tracep->declBus(c+212,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+213,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+214,"mtvec_o", false,-1, 31,0);
    tracep->declBus(c+215,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+200,"wbu_dpic_inst_o", false,-1, 31,0);
    tracep->declBus(c+201,"wbu_dpic_pc_o", false,-1, 31,0);
    tracep->declBus(c+202,"wbu_dpic_next_pc_o", false,-1, 31,0);
    tracep->declBit(c+210,"wbu_dpic_valid_o", false,-1);
    tracep->declBus(c+212,"mstatus", false,-1, 31,0);
    tracep->declBus(c+213,"mepc", false,-1, 31,0);
    tracep->declBus(c+214,"mtvec", false,-1, 31,0);
    tracep->declBus(c+215,"mcause", false,-1, 31,0);
    tracep->declBus(c+316,"read_csr_data", false,-1, 31,0);
    tracep->declBus(c+317,"write_csr_data", false,-1, 31,0);
    tracep->declBus(c+318,"mcause_value", false,-1, 31,0);
    tracep->declBus(c+319,"set_data", false,-1, 31,0);
    tracep->declBus(c+320,"clear_data", false,-1, 31,0);
    tracep->pushNamePrefix("u_ysyx_25060170_csr ");
    tracep->declBit(c+338,"clk", false,-1);
    tracep->declBit(c+339,"rst", false,-1);
    tracep->declBus(c+321,"csr_ctl", false,-1, 3,0);
    tracep->declBus(c+209,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+318,"mcause_value", false,-1, 31,0);
    tracep->declBus(c+317,"write_csr_data", false,-1, 31,0);
    tracep->declBus(c+316,"read_csr_data", false,-1, 31,0);
    tracep->declBus(c+212,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+213,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+214,"mtvec_o", false,-1, 31,0);
    tracep->declBus(c+215,"mcause_o", false,-1, 31,0);
    tracep->declBit(c+322,"mstatus_rd", false,-1);
    tracep->declBit(c+323,"mstatus_wr", false,-1);
    tracep->declBit(c+324,"mstatus_mie", false,-1);
    tracep->declBit(c+325,"mstatus_mpie", false,-1);
    tracep->declBus(c+326,"mstatus_mpp", false,-1, 1,0);
    tracep->declBus(c+212,"mstatus", false,-1, 31,0);
    tracep->declBit(c+327,"mstatus_ie_ena", false,-1);
    tracep->declBit(c+328,"mie_set", false,-1);
    tracep->declBit(c+329,"mpie_set", false,-1);
    tracep->declBus(c+330,"mpp_set", false,-1, 1,0);
    tracep->declBit(c+331,"mtvec_rd", false,-1);
    tracep->declBit(c+332,"mtvec_wr", false,-1);
    tracep->declBus(c+333,"mtvec_base", false,-1, 31,2);
    tracep->declBus(c+355,"mtvec_mode", false,-1, 1,0);
    tracep->declBus(c+214,"mtvec", false,-1, 31,0);
    tracep->declBit(c+334,"mepc_rd", false,-1);
    tracep->declBit(c+335,"mepc_wr", false,-1);
    tracep->declBus(c+213,"mepc", false,-1, 31,0);
    tracep->declBit(c+336,"mcause_rd", false,-1);
    tracep->declBit(c+337,"mcause_wr", false,-1);
    tracep->declBus(c+215,"mcause", false,-1, 31,0);
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
    bufp->fullBit(oldp+1,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ready));
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
    bufp->fullBit(oldp+8,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_stall));
    bufp->fullBit(oldp+9,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_valid));
    bufp->fullCData(oldp+10,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr),5);
    bufp->fullBit(oldp+11,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena));
    bufp->fullCData(oldp+12,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr),5);
    bufp->fullBit(oldp+13,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena));
    bufp->fullBit(oldp+14,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rd_ena));
    bufp->fullCData(oldp+15,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rd_ena)
                               ? (0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                           >> 7U)) : 0U)),5);
    bufp->fullCData(oldp+16,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc),8);
    bufp->fullCData(oldp+17,((0xfU & ((1U & (- (IData)(
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
    bufp->fullCData(oldp+18,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_wbctl),2);
    bufp->fullCData(oldp+19,(((2U & ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                                     | ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr))) 
                                        | (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc)))))) 
                              | (1U & (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena)))))),2);
    bufp->fullCData(oldp+20,(((2U & ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                                     | (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr))))) 
                              | ((4U & (- (IData)(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77eb01fa__0) 
                                                   | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                                                      | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0) 
                                                         | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70f4116c__0) 
                                                            | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
                                                               | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd9b03bc2__0))))))))) 
                                 | (1U & (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena))))))),3);
    bufp->fullBit(oldp+21,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag));
    bufp->fullBit(oldp+22,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw) 
                            | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs) 
                               | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc) 
                                  | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi) 
                                     | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi) 
                                        | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci))))))));
    bufp->fullIData(oldp+23,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op2),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm),32);
    bufp->fullIData(oldp+26,((((0x21U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                               | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_if_pc_jump))
                               ? (vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm 
                                  + vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc)
                               : ((0x42U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                                   ? (0xfffffffeU & 
                                      (vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1 
                                       + vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm))
                                   : vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc))),32);
    bufp->fullBit(oldp+27,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_branch));
    bufp->fullIData(oldp+28,(vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res),32);
    bufp->fullSData(oldp+29,(((0U != (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_he71b3f47__0))
                               ? (0xfffU & vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm)
                               : 0U)),12);
    bufp->fullCData(oldp+30,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena) 
                               << 6U) | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena) 
                                          << 5U) | 
                                         (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena) 
                                           << 4U) | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_he71b3f47__0))))),7);
    bufp->fullBit(oldp+31,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_valid) 
                            | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h53258981__0))));
    bufp->fullBit(oldp+32,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_we));
    bufp->fullIData(oldp+33,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_data),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_raddr),32);
    bufp->fullCData(oldp+35,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen),8);
    bufp->fullBit(oldp+36,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_re));
    bufp->fullIData(oldp+37,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__mem_data),32);
    bufp->fullBit(oldp+38,((0x6fU == (0x7fU & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst))));
    bufp->fullBit(oldp+39,((0x67U == (0x7fU & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst))));
    bufp->fullBit(oldp+40,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jal_jalr_temp));
    bufp->fullCData(oldp+41,((0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                       >> 7U))),5);
    bufp->fullIData(oldp+42,(((0x100000U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                            >> 0xbU)) 
                              | ((0xff000U & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst) 
                                 | ((0x800U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                               >> 9U)) 
                                    | (0x7feU & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                 >> 0x14U)))))),21);
    bufp->fullSData(oldp+43,(((0x1000U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                          >> 0x13U)) 
                              | ((0x800U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                            << 4U)) 
                                 | ((0x7e0U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                               >> 0x14U)) 
                                    | (0x1eU & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                >> 7U)))))),13);
    bufp->fullSData(oldp+44,((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                              >> 0x14U)),12);
    bufp->fullCData(oldp+45,((0x7fU & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst)),7);
    bufp->fullIData(oldp+46,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal)
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
    bufp->fullBit(oldp+47,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal));
    bufp->fullIData(oldp+48,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc),32);
    bufp->fullIData(oldp+49,((0xfffffffeU & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc)),32);
    bufp->fullIData(oldp+50,((((- (IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
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
    bufp->fullIData(oldp+51,((((- (IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
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
    bufp->fullIData(oldp+52,((((- (IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                           >> 0x14U))),32);
    bufp->fullBit(oldp+53,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                            == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr))));
    bufp->fullBit(oldp+54,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                            == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr))));
    bufp->fullBit(oldp+55,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wbu_forward_en));
    bufp->fullIData(oldp+56,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res),32);
    bufp->fullBit(oldp+57,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena));
    bufp->fullBit(oldp+58,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena));
    bufp->fullBit(oldp+59,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena));
    bufp->fullBit(oldp+60,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena));
    bufp->fullBit(oldp+61,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena));
    bufp->fullBit(oldp+62,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena));
    bufp->fullBit(oldp+63,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena));
    bufp->fullBit(oldp+64,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__branch));
    bufp->fullBit(oldp+65,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward) 
                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena)) 
                            | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward) 
                               & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_csr_ena)))));
    bufp->fullBit(oldp+66,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward) 
                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena)) 
                            | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward) 
                               & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_csr_ena)))));
    bufp->fullBit(oldp+67,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward));
    bufp->fullBit(oldp+68,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward));
    bufp->fullBit(oldp+69,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward));
    bufp->fullBit(oldp+70,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward));
    bufp->fullBit(oldp+71,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward));
    bufp->fullBit(oldp+72,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward));
    bufp->fullBit(oldp+73,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_forward_ena));
    bufp->fullBit(oldp+74,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op2_forward_ena));
    bufp->fullIData(oldp+75,((((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward))) 
                               & vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res) 
                              | (((- (IData)(((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward)) 
                                              & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward)))) 
                                  & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res) 
                                 | ((- (IData)(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward) 
                                                & ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward)) 
                                                   & (~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward)))))) 
                                    & vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rf_data)))),32);
    bufp->fullIData(oldp+76,((((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward))) 
                               & vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res) 
                              | (((- (IData)(((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward)) 
                                              & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward)))) 
                                  & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res) 
                                 | ((- (IData)(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward) 
                                                & ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward)) 
                                                   & (~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward)))))) 
                                    & vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rf_data)))),32);
    bufp->fullBit(oldp+77,(((vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1 
                             ^ vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op2) 
                            >> 0x1fU)));
    bufp->fullBit(oldp+78,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2));
    bufp->fullBit(oldp+79,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2));
    bufp->fullIData(oldp+80,(((0x42U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                               ? vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1
                               : vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc)),32);
    bufp->fullIData(oldp+81,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_jump)
                               ? 4U : vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm)),32);
    bufp->fullCData(oldp+82,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
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
    bufp->fullBit(oldp+83,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui));
    bufp->fullBit(oldp+84,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc));
    bufp->fullBit(oldp+85,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal));
    bufp->fullBit(oldp+86,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr));
    bufp->fullBit(oldp+87,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h489c6f46__0))));
    bufp->fullBit(oldp+88,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h489c6f46__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+89,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he80da865__0))));
    bufp->fullBit(oldp+90,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he80da865__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+91,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc65f4c50__0))));
    bufp->fullBit(oldp+92,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc65f4c50__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+93,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h1167153d__0))));
    bufp->fullBit(oldp+94,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h1167153d__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+95,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h29152e89__0))));
    bufp->fullBit(oldp+96,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h29152e89__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+97,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_heac6e652__0) 
                            & (IData)((0x2000U == (0x3000U 
                                                   & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst))))));
    bufp->fullBit(oldp+98,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7855af38__0))));
    bufp->fullBit(oldp+99,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7855af38__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+100,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2bc0716a__0))));
    bufp->fullBit(oldp+101,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2bc0716a__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+102,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h6fd23990__0))));
    bufp->fullBit(oldp+103,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h6fd23990__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+104,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h03cab0f1__0))));
    bufp->fullBit(oldp+105,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7b49f5a3__0))));
    bufp->fullBit(oldp+106,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h36e9ef3c__0))));
    bufp->fullBit(oldp+107,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he2955f6b__0))));
    bufp->fullBit(oldp+108,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h4c825e07__0))));
    bufp->fullBit(oldp+109,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h3b427111__0))));
    bufp->fullBit(oldp+110,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h03cab0f1__0))));
    bufp->fullBit(oldp+111,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7b49f5a3__0))));
    bufp->fullBit(oldp+112,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd7439362__0))));
    bufp->fullBit(oldp+113,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7a82fdcc__0))));
    bufp->fullBit(oldp+114,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h3b427111__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+115,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+116,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+117,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h36e9ef3c__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+118,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he2955f6b__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+119,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h4c825e07__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+120,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd7439362__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+121,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7a82fdcc__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+122,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h41ceee20__0))));
    bufp->fullBit(oldp+123,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc1b77381__0))));
    bufp->fullBit(oldp+124,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc1b77381__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+125,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_ha08c85bd__0))));
    bufp->fullBit(oldp+126,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5a06bcf6__0))));
    bufp->fullBit(oldp+127,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5a06bcf6__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+128,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h41ceee20__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+129,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x1eU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2e86cea5__0))));
    bufp->fullBit(oldp+130,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2e86cea5__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x1eU))));
    bufp->fullBit(oldp+131,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall));
    bufp->fullBit(oldp+132,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h84595378__0) 
                             & (IData)((0x30000000U 
                                        == (0x30000000U 
                                            & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst))))));
    bufp->fullBit(oldp+133,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw));
    bufp->fullBit(oldp+134,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs));
    bufp->fullBit(oldp+135,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc));
    bufp->fullBit(oldp+136,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi));
    bufp->fullBit(oldp+137,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi));
    bufp->fullBit(oldp+138,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci));
    bufp->fullBit(oldp+139,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h84595378__0) 
                             & (1U == (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                       >> 0x14U)))));
    bufp->fullBit(oldp+140,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77eb01fa__0) 
                             | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                                | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0) 
                                   | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70f4116c__0) 
                                      | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
                                         | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd9b03bc2__0))))))));
    bufp->fullBit(oldp+141,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if_id_reg__DOT__flush));
    bufp->fullBit(oldp+142,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ls_mem_reg__DOT__stall));
    bufp->fullCData(oldp+143,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask),4);
    bufp->fullIData(oldp+144,(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_if_pc),32);
    bufp->fullBit(oldp+145,(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_predict));
    bufp->fullBit(oldp+146,(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_if_jal_jalr));
    bufp->fullIData(oldp+147,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res),32);
    bufp->fullIData(oldp+148,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_pc),32);
    bufp->fullIData(oldp+149,(((IData)(4U) + vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_pc)),32);
    bufp->fullIData(oldp+150,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc),32);
    bufp->fullIData(oldp+151,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc),32);
    bufp->fullIData(oldp+152,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst),32);
    bufp->fullBit(oldp+153,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_jump));
    bufp->fullBit(oldp+154,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_valid));
    bufp->fullBit(oldp+155,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena));
    bufp->fullBit(oldp+156,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_csr_ena));
    bufp->fullCData(oldp+157,((0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+158,((0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                        >> 0xfU))),5);
    bufp->fullBit(oldp+159,((0x40000033U == vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    bufp->fullCData(oldp+160,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc),8);
    bufp->fullIData(oldp+161,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc),32);
    bufp->fullIData(oldp+162,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst),32);
    bufp->fullIData(oldp+163,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc),32);
    bufp->fullIData(oldp+164,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1),32);
    bufp->fullIData(oldp+165,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2),32);
    bufp->fullCData(oldp+166,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel),2);
    bufp->fullCData(oldp+167,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel),3);
    bufp->fullBit(oldp+168,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena));
    bufp->fullCData(oldp+169,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr),5);
    bufp->fullCData(oldp+170,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr),5);
    bufp->fullIData(oldp+171,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm),32);
    bufp->fullCData(oldp+172,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl),4);
    bufp->fullCData(oldp+173,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl),2);
    bufp->fullBit(oldp+174,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag));
    bufp->fullBit(oldp+175,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_valid));
    bufp->fullIData(oldp+176,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst),32);
    bufp->fullIData(oldp+177,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data),32);
    bufp->fullCData(oldp+178,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl),4);
    bufp->fullCData(oldp+179,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl),2);
    bufp->fullCData(oldp+180,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl),7);
    bufp->fullBit(oldp+181,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena));
    bufp->fullCData(oldp+182,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr),5);
    bufp->fullSData(oldp+183,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr),12);
    bufp->fullIData(oldp+184,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc),32);
    bufp->fullIData(oldp+185,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc),32);
    bufp->fullBit(oldp+186,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_valid));
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
    bufp->fullBit(oldp+199,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_valid));
    bufp->fullIData(oldp+200,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_inst),32);
    bufp->fullIData(oldp+201,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_pc),32);
    bufp->fullIData(oldp+202,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc),32);
    bufp->fullIData(oldp+203,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res),32);
    bufp->fullIData(oldp+204,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data),32);
    bufp->fullCData(oldp+205,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl),2);
    bufp->fullBit(oldp+206,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena));
    bufp->fullCData(oldp+207,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr),5);
    bufp->fullCData(oldp+208,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl),7);
    bufp->fullSData(oldp+209,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr),12);
    bufp->fullBit(oldp+210,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_valid_o));
    bufp->fullIData(oldp+211,(vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rf_data),32);
    bufp->fullIData(oldp+212,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus),32);
    bufp->fullIData(oldp+213,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mepc),32);
    bufp->fullIData(oldp+214,((vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
                               << 2U)),32);
    bufp->fullIData(oldp+215,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mcause),32);
    bufp->fullIData(oldp+216,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0U]),32);
    bufp->fullIData(oldp+217,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [1U]),32);
    bufp->fullIData(oldp+218,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [2U]),32);
    bufp->fullIData(oldp+219,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [3U]),32);
    bufp->fullIData(oldp+220,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [4U]),32);
    bufp->fullIData(oldp+221,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [5U]),32);
    bufp->fullIData(oldp+222,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [6U]),32);
    bufp->fullIData(oldp+223,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [7U]),32);
    bufp->fullIData(oldp+224,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [8U]),32);
    bufp->fullIData(oldp+225,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [9U]),32);
    bufp->fullIData(oldp+226,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xaU]),32);
    bufp->fullIData(oldp+227,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xbU]),32);
    bufp->fullIData(oldp+228,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xcU]),32);
    bufp->fullIData(oldp+229,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xdU]),32);
    bufp->fullIData(oldp+230,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xeU]),32);
    bufp->fullIData(oldp+231,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xfU]),32);
    bufp->fullIData(oldp+232,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x10U]),32);
    bufp->fullIData(oldp+233,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x11U]),32);
    bufp->fullIData(oldp+234,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x12U]),32);
    bufp->fullIData(oldp+235,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x13U]),32);
    bufp->fullIData(oldp+236,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x14U]),32);
    bufp->fullIData(oldp+237,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x15U]),32);
    bufp->fullIData(oldp+238,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x16U]),32);
    bufp->fullIData(oldp+239,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x17U]),32);
    bufp->fullIData(oldp+240,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x18U]),32);
    bufp->fullIData(oldp+241,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x19U]),32);
    bufp->fullIData(oldp+242,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1aU]),32);
    bufp->fullIData(oldp+243,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1bU]),32);
    bufp->fullIData(oldp+244,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1cU]),32);
    bufp->fullIData(oldp+245,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1dU]),32);
    bufp->fullIData(oldp+246,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1eU]),32);
    bufp->fullIData(oldp+247,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1fU]),32);
    bufp->fullIData(oldp+248,(vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data),32);
    bufp->fullBit(oldp+249,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_not_taken_state));
    bufp->fullBit(oldp+250,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_not_taken_state));
    bufp->fullBit(oldp+251,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state));
    bufp->fullBit(oldp+252,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state));
    bufp->fullBit(oldp+253,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall));
    bufp->fullIData(oldp+254,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1),32);
    bufp->fullIData(oldp+255,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2),32);
    bufp->fullIData(oldp+256,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2),32);
    bufp->fullIData(oldp+257,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2),32);
    bufp->fullBit(oldp+258,((1U & (((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
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
    bufp->fullIData(oldp+259,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2),32);
    bufp->fullQData(oldp+260,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul),64);
    bufp->fullIData(oldp+262,((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul)),32);
    bufp->fullIData(oldp+263,((IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+264,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div),32);
    bufp->fullIData(oldp+265,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__rem),32);
    bufp->fullIData(oldp+266,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr),32);
    bufp->fullBit(oldp+267,(((0x94U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                             | ((0xc8U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                | (0xa4U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))))));
    bufp->fullBit(oldp+268,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_id_ex_reg__DOT__stall));
    bufp->fullCData(oldp+269,((0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+270,((0x7fU & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)),7);
    bufp->fullCData(oldp+271,((7U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+272,((vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0x19U)),7);
    bufp->fullSData(oldp+273,((vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+274,(((0x80000U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                            >> 0xcU)) 
                               | ((0x7f800U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                               >> 1U)) 
                                  | ((0x400U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                >> 0xaU)) 
                                     | (0x3ffU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                  >> 0x15U)))))),20);
    bufp->fullIData(oldp+275,((vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU)),20);
    bufp->fullSData(oldp+276,(((0xfe0U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                           >> 7U)))),12);
    bufp->fullSData(oldp+277,(((0x800U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                          >> 0x14U)) 
                               | ((0x400U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                             << 3U)) 
                                  | ((0x3f0U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                >> 0x15U)) 
                                     | (0xfU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                >> 8U)))))),12);
    bufp->fullIData(oldp+278,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ifu__DOT__pc),32);
    bufp->fullBit(oldp+279,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__data_ok));
    bufp->fullCData(oldp+280,((3U & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res)),2);
    bufp->fullBit(oldp+281,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_mem__DOT__data_ok));
    bufp->fullCData(oldp+282,((0xffU & vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data)),8);
    bufp->fullSData(oldp+283,((0xffffU & vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data)),16);
    bufp->fullIData(oldp+284,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0]),32);
    bufp->fullIData(oldp+285,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[1]),32);
    bufp->fullIData(oldp+286,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[2]),32);
    bufp->fullIData(oldp+287,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[3]),32);
    bufp->fullIData(oldp+288,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[4]),32);
    bufp->fullIData(oldp+289,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[5]),32);
    bufp->fullIData(oldp+290,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[6]),32);
    bufp->fullIData(oldp+291,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[7]),32);
    bufp->fullIData(oldp+292,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[8]),32);
    bufp->fullIData(oldp+293,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[9]),32);
    bufp->fullIData(oldp+294,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[10]),32);
    bufp->fullIData(oldp+295,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[11]),32);
    bufp->fullIData(oldp+296,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[12]),32);
    bufp->fullIData(oldp+297,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[13]),32);
    bufp->fullIData(oldp+298,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[14]),32);
    bufp->fullIData(oldp+299,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[15]),32);
    bufp->fullIData(oldp+300,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[16]),32);
    bufp->fullIData(oldp+301,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[17]),32);
    bufp->fullIData(oldp+302,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[18]),32);
    bufp->fullIData(oldp+303,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[19]),32);
    bufp->fullIData(oldp+304,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[20]),32);
    bufp->fullIData(oldp+305,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[21]),32);
    bufp->fullIData(oldp+306,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[22]),32);
    bufp->fullIData(oldp+307,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[23]),32);
    bufp->fullIData(oldp+308,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[24]),32);
    bufp->fullIData(oldp+309,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[25]),32);
    bufp->fullIData(oldp+310,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[26]),32);
    bufp->fullIData(oldp+311,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[27]),32);
    bufp->fullIData(oldp+312,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[28]),32);
    bufp->fullIData(oldp+313,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[29]),32);
    bufp->fullIData(oldp+314,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[30]),32);
    bufp->fullIData(oldp+315,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[31]),32);
    bufp->fullIData(oldp+316,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__read_csr_data),32);
    bufp->fullIData(oldp+317,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data),32);
    bufp->fullIData(oldp+318,(((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                ? 0xbU : 0U)),32);
    bufp->fullIData(oldp+319,((vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data 
                               | vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__read_csr_data)),32);
    bufp->fullIData(oldp+320,(((~ vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data) 
                               & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__read_csr_data)),32);
    bufp->fullCData(oldp+321,((0xfU & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))),4);
    bufp->fullBit(oldp+322,(((0x300U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 2U))));
    bufp->fullBit(oldp+323,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr));
    bufp->fullBit(oldp+324,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie));
    bufp->fullBit(oldp+325,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie));
    bufp->fullCData(oldp+326,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp),2);
    bufp->fullBit(oldp+327,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena));
    bufp->fullBit(oldp+328,((1U & ((~ ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 1U)) & ((1U 
                                                   & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                                   ? (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)
                                                   : 
                                                  ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                                    ? 
                                                   (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data 
                                                    >> 3U)
                                                    : (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)))))));
    bufp->fullBit(oldp+329,((1U & ((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                    ? (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)
                                    : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                           ? (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data 
                                              >> 7U)
                                           : (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)))))));
    bufp->fullCData(oldp+330,(((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                ? 3U : ((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                         ? 0U : (3U 
                                                 & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                                     ? 
                                                    (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data 
                                                     >> 0xdU)
                                                     : (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp)))))),2);
    bufp->fullBit(oldp+331,((1U & (((0x305U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                    & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 2U)) | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+332,(((0x305U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 3U))));
    bufp->fullIData(oldp+333,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mtvec_base),30);
    bufp->fullBit(oldp+334,((1U & (((0x341U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                    & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 2U)) | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl)))));
    bufp->fullBit(oldp+335,((1U & (((0x341U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                    & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 3U)) | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+336,(((0x342U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 2U))));
    bufp->fullBit(oldp+337,(((0x342U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 3U))));
    bufp->fullBit(oldp+338,(vlSelf->clk));
    bufp->fullBit(oldp+339,(vlSelf->rst));
    bufp->fullIData(oldp+340,((((~ (IData)(vlSelf->rst)) 
                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr))
                                ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                               [vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr]
                                : 0U)),32);
    bufp->fullIData(oldp+341,((((~ (IData)(vlSelf->rst)) 
                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena))
                                ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                               [vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr]
                                : 0U)),32);
    bufp->fullIData(oldp+342,((((~ (IData)(vlSelf->rst)) 
                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena))
                                ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                               [vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr]
                                : 0U)),32);
    bufp->fullIData(oldp+343,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re)
                                ? ((IData)(vlSelf->rst)
                                    ? 0U : ((8U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                             ? ((4U 
                                                 & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                 ? 
                                                ((2U 
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
                                                 : 
                                                ((2U 
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
                                             : 0U))
                                : 0U)),32);
    bufp->fullIData(oldp+344,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr) 
                                & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                                   == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr)))
                                ? vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
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
                                            : vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_pc))))),32);
    bufp->fullBit(oldp+345,(((~ ((IData)(vlSelf->rst) 
                                 & (0U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)))) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena) 
                                & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag) 
                                   & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr) 
                                      == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))))));
    bufp->fullBit(oldp+346,(((~ ((IData)(vlSelf->rst) 
                                 & (0U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)))) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena) 
                                & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag) 
                                   & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr) 
                                      == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))))));
    bufp->fullCData(oldp+347,(((IData)(vlSelf->rst)
                                ? 0U : ((0U == (3U 
                                                & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                         ? 3U : ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                                  ? 0xcU
                                                  : 0U)))),4);
    bufp->fullIData(oldp+348,(((IData)(vlSelf->rst)
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
    bufp->fullBit(oldp+349,(0U));
    bufp->fullCData(oldp+350,(4U),8);
    bufp->fullBit(oldp+351,(1U));
    bufp->fullIData(oldp+352,(2U),32);
    bufp->fullIData(oldp+353,(1U),32);
    bufp->fullCData(oldp+354,(0xfU),4);
    bufp->fullCData(oldp+355,(0U),2);
}
