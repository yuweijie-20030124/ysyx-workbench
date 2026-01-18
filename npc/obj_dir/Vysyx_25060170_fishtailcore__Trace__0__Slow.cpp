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
    tracep->declBit(c+337,"clk", false,-1);
    tracep->declBit(c+338,"rst", false,-1);
    tracep->pushNamePrefix("ysyx_25060170_fishtailcore ");
    tracep->declBit(c+337,"clk", false,-1);
    tracep->declBit(c+338,"rst", false,-1);
    tracep->declBus(c+131,"if_id_inst", false,-1, 31,0);
    tracep->declBus(c+132,"bp_if_pc", false,-1, 31,0);
    tracep->declBit(c+133,"bp_predict", false,-1);
    tracep->declBus(c+339,"bp_rs1_data", false,-1, 31,0);
    tracep->declBus(c+2,"bp_rs1_addr", false,-1, 4,0);
    tracep->declBit(c+3,"bp_rs1_ena", false,-1);
    tracep->declBit(c+134,"bp_if_jal_jalr", false,-1);
    tracep->declBit(c+4,"bp_if_branch", false,-1);
    tracep->declBit(c+5,"id_if_pc_jump", false,-1);
    tracep->declBus(c+6,"id_jump_pc", false,-1, 31,0);
    tracep->declBit(c+348,"ls_pc_jump", false,-1);
    tracep->declBus(c+135,"ls_jump_pc", false,-1, 31,0);
    tracep->declBit(c+1,"id_ready", false,-1);
    tracep->declBit(c+7,"id_stall", false,-1);
    tracep->declBit(c+8,"if_valid", false,-1);
    tracep->declBus(c+136,"if_id_pc", false,-1, 31,0);
    tracep->declBus(c+137,"if_id_next_pc", false,-1, 31,0);
    tracep->declBus(c+131,"dpic_ifu_inst", false,-1, 31,0);
    tracep->declBit(c+348,"ls_flush", false,-1);
    tracep->declBit(c+5,"id_flush", false,-1);
    tracep->declBus(c+138,"if_id_reg_pc", false,-1, 31,0);
    tracep->declBus(c+139,"if_id_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+140,"if_id_reg_inst", false,-1, 31,0);
    tracep->declBit(c+141,"id_jump", false,-1);
    tracep->declBit(c+142,"if_id_valid", false,-1);
    tracep->declBit(c+143,"ex_csr_ena", false,-1);
    tracep->declBit(c+144,"ls_csr_ena", false,-1);
    tracep->declBus(c+340,"rf_id_rs1_data", false,-1, 31,0);
    tracep->declBus(c+341,"rf_id_rs2_data", false,-1, 31,0);
    tracep->declBit(c+1,"ex_ready", false,-1);
    tracep->declBus(c+9,"idu_rs1_addr", false,-1, 4,0);
    tracep->declBit(c+10,"idu_rs1_ena", false,-1);
    tracep->declBus(c+11,"idu_rs2_addr", false,-1, 4,0);
    tracep->declBit(c+12,"idu_rs2_ena", false,-1);
    tracep->declBit(c+13,"idu_rd_ena", false,-1);
    tracep->declBus(c+14,"idu_rd_addr", false,-1, 4,0);
    tracep->declBus(c+15,"idu_alusrc", false,-1, 7,0);
    tracep->declBus(c+16,"idu_lsctl", false,-1, 3,0);
    tracep->declBus(c+17,"idu_wbctl", false,-1, 1,0);
    tracep->declBus(c+18,"idu_op1_sel", false,-1, 1,0);
    tracep->declBus(c+19,"idu_op2_sel", false,-1, 2,0);
    tracep->declBit(c+20,"idu_load_flag", false,-1);
    tracep->declBit(c+21,"idu_csr_ena", false,-1);
    tracep->declBus(c+22,"idu_op1", false,-1, 31,0);
    tracep->declBus(c+23,"idu_op2", false,-1, 31,0);
    tracep->declBus(c+24,"idu_imm", false,-1, 31,0);
    tracep->declBus(c+145,"idu_dpic_rd_addr", false,-1, 4,0);
    tracep->declBus(c+138,"idu_pc", false,-1, 31,0);
    tracep->declBus(c+25,"idu_next_pc", false,-1, 31,0);
    tracep->declBus(c+140,"idu_inst", false,-1, 31,0);
    tracep->declBus(c+146,"idu_csr_imm", false,-1, 4,0);
    tracep->declBit(c+26,"ex_branch", false,-1);
    tracep->declBit(c+147,"magic_flag", false,-1);
    tracep->declBus(c+148,"id_ex_reg_alusrc", false,-1, 7,0);
    tracep->declBit(c+142,"id_valid", false,-1);
    tracep->declBus(c+149,"id_ex_reg_pc", false,-1, 31,0);
    tracep->declBus(c+150,"id_ex_reg_inst", false,-1, 31,0);
    tracep->declBus(c+151,"id_ex_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+152,"id_ex_reg_op1", false,-1, 31,0);
    tracep->declBus(c+153,"id_ex_reg_op2", false,-1, 31,0);
    tracep->declBus(c+154,"id_ex_reg_op1_sel", false,-1, 1,0);
    tracep->declBus(c+155,"id_ex_reg_op2_sel", false,-1, 2,0);
    tracep->declBit(c+156,"id_ex_reg_rd_ena", false,-1);
    tracep->declBus(c+157,"id_ex_reg_rd_addr", false,-1, 4,0);
    tracep->declBus(c+158,"id_ex_reg_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+159,"id_ex_reg_imm", false,-1, 31,0);
    tracep->declBus(c+160,"id_ex_reg_lsctl", false,-1, 3,0);
    tracep->declBus(c+161,"id_ex_reg_wbctl", false,-1, 1,0);
    tracep->declBit(c+162,"id_ex_reg_load_flag", false,-1);
    tracep->declBit(c+163,"id_ex_valid", false,-1);
    tracep->declBit(c+1,"ls_ready", false,-1);
    tracep->declBus(c+150,"exu_inst", false,-1, 31,0);
    tracep->declBus(c+149,"exu_pc", false,-1, 31,0);
    tracep->declBus(c+151,"exu_next_pc", false,-1, 31,0);
    tracep->declBit(c+163,"ex_valid", false,-1);
    tracep->declBus(c+153,"exu_store_data", false,-1, 31,0);
    tracep->declBus(c+27,"exu_res", false,-1, 31,0);
    tracep->declBus(c+28,"exu_csr_addr", false,-1, 11,0);
    tracep->declBus(c+29,"exu_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+164,"ex_ls_reg_inst", false,-1, 31,0);
    tracep->declBus(c+165,"ex_ls_reg_store_data", false,-1, 31,0);
    tracep->declBus(c+135,"ex_ls_reg_exu_res", false,-1, 31,0);
    tracep->declBus(c+166,"ex_ls_reg_ls_ctl", false,-1, 3,0);
    tracep->declBus(c+167,"ex_ls_reg_wb_ctl", false,-1, 1,0);
    tracep->declBus(c+168,"ex_ls_reg_csr_ctl", false,-1, 6,0);
    tracep->declBit(c+169,"ex_ls_reg_rd_ena", false,-1);
    tracep->declBus(c+170,"ex_ls_reg_rd_addr", false,-1, 4,0);
    tracep->declBit(c+143,"ex_ls_reg_ls_csr_ena", false,-1);
    tracep->declBus(c+171,"ex_ls_reg_csr_addr", false,-1, 11,0);
    tracep->declBus(c+172,"ex_ls_reg_pc", false,-1, 31,0);
    tracep->declBus(c+173,"ex_ls_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+157,"ex_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+27,"ex_rd_data_forward", false,-1, 31,0);
    tracep->declBit(c+174,"ex_ls_valid", false,-1);
    tracep->declBit(c+30,"ls_valid", false,-1);
    tracep->declBit(c+31,"ls_dpic_we", false,-1);
    tracep->declBus(c+32,"ls_dpic_data", false,-1, 31,0);
    tracep->declBus(c+33,"ls_dpic_raddr", false,-1, 31,0);
    tracep->declBus(c+33,"ls_dpic_waddr", false,-1, 31,0);
    tracep->declBus(c+34,"ls_dpic_wlen", false,-1, 7,0);
    tracep->declBus(c+349,"ls_dpic_rlen", false,-1, 7,0);
    tracep->declBus(c+172,"ls_pc", false,-1, 31,0);
    tracep->declBus(c+173,"ls_next_pc", false,-1, 31,0);
    tracep->declBus(c+164,"ls_inst", false,-1, 31,0);
    tracep->declBit(c+35,"ls_mem_re", false,-1);
    tracep->declBus(c+175,"ls_mem_reg_inst", false,-1, 31,0);
    tracep->declBus(c+176,"ls_mem_reg_pc", false,-1, 31,0);
    tracep->declBus(c+177,"ls_mem_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+178,"ls_mem_reg_ls_ctl", false,-1, 3,0);
    tracep->declBus(c+179,"ls_mem_reg_wb_ctl", false,-1, 1,0);
    tracep->declBit(c+180,"ls_mem_reg_rd_ena", false,-1);
    tracep->declBus(c+181,"ls_mem_reg_rd_addr", false,-1, 4,0);
    tracep->declBus(c+182,"ls_mem_reg_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+183,"ls_mem_reg_csr_addr", false,-1, 11,0);
    tracep->declBit(c+184,"ls_mem_valid", false,-1);
    tracep->declBus(c+170,"ls_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+135,"ls_rd_data_forward", false,-1, 31,0);
    tracep->declBit(c+185,"ls_mem_reg_re", false,-1);
    tracep->declBus(c+186,"ls_mem_reg_alu_res", false,-1, 31,0);
    tracep->declBus(c+175,"mem_inst", false,-1, 31,0);
    tracep->declBus(c+176,"mem_pc", false,-1, 31,0);
    tracep->declBus(c+177,"mem_next_pc", false,-1, 31,0);
    tracep->declBus(c+186,"mem_alu_res", false,-1, 31,0);
    tracep->declBit(c+180,"mem_rd_ena", false,-1);
    tracep->declBus(c+181,"mem_rd_addr", false,-1, 4,0);
    tracep->declBus(c+182,"mem_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+183,"mem_csr_addr", false,-1, 11,0);
    tracep->declBus(c+179,"mem_wbctl", false,-1, 1,0);
    tracep->declBit(c+187,"mem_valid", false,-1);
    tracep->declBit(c+350,"mem_ready", false,-1);
    tracep->declBus(c+342,"mem_data", false,-1, 31,0);
    tracep->declBus(c+188,"mem_wb_inst", false,-1, 31,0);
    tracep->declBus(c+189,"mem_wb_pc", false,-1, 31,0);
    tracep->declBus(c+190,"mem_wb_next_pc", false,-1, 31,0);
    tracep->declBus(c+191,"mem_wb_lsu_res", false,-1, 31,0);
    tracep->declBus(c+192,"mem_wb_alures_data", false,-1, 31,0);
    tracep->declBus(c+193,"mem_wb_wb_ctl", false,-1, 1,0);
    tracep->declBit(c+194,"mem_wb_rd_ena", false,-1);
    tracep->declBus(c+195,"mem_wb_rd_addr", false,-1, 4,0);
    tracep->declBus(c+196,"mem_wb_csr_ctl", false,-1, 6,0);
    tracep->declBus(c+197,"mem_wb_csr_addr", false,-1, 11,0);
    tracep->declBit(c+198,"mem_valid_o", false,-1);
    tracep->declBus(c+199,"wb_rf_data", false,-1, 31,0);
    tracep->declBit(c+350,"wb_ready", false,-1);
    tracep->declBit(c+194,"wb_rf_rd_ena", false,-1);
    tracep->declBus(c+195,"wb_rf_rd_addr", false,-1, 4,0);
    tracep->declBus(c+195,"wb_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+199,"wb_rd_data_forward", false,-1, 31,0);
    tracep->declBus(c+200,"wbu_dpic_mstatus", false,-1, 31,0);
    tracep->declBus(c+201,"wbu_dpic_mepc", false,-1, 31,0);
    tracep->declBus(c+202,"wbu_dpic_mtvec", false,-1, 31,0);
    tracep->declBus(c+203,"wbu_dpic_mcause", false,-1, 31,0);
    tracep->declBus(c+188,"wbu_dpic_inst", false,-1, 31,0);
    tracep->declBus(c+189,"wbu_dpic_pc", false,-1, 31,0);
    tracep->declBus(c+190,"wbu_dpic_next_pc", false,-1, 31,0);
    tracep->declBit(c+198,"wbu_dpic_valid", false,-1);
    tracep->declBus(c+204,"regs0", false,-1, 31,0);
    tracep->declBus(c+205,"regs1", false,-1, 31,0);
    tracep->declBus(c+206,"regs2", false,-1, 31,0);
    tracep->declBus(c+207,"regs3", false,-1, 31,0);
    tracep->declBus(c+208,"regs4", false,-1, 31,0);
    tracep->declBus(c+209,"regs5", false,-1, 31,0);
    tracep->declBus(c+210,"regs6", false,-1, 31,0);
    tracep->declBus(c+211,"regs7", false,-1, 31,0);
    tracep->declBus(c+212,"regs8", false,-1, 31,0);
    tracep->declBus(c+213,"regs9", false,-1, 31,0);
    tracep->declBus(c+214,"regs10", false,-1, 31,0);
    tracep->declBus(c+215,"regs11", false,-1, 31,0);
    tracep->declBus(c+216,"regs12", false,-1, 31,0);
    tracep->declBus(c+217,"regs13", false,-1, 31,0);
    tracep->declBus(c+218,"regs14", false,-1, 31,0);
    tracep->declBus(c+219,"regs15", false,-1, 31,0);
    tracep->declBus(c+220,"regs16", false,-1, 31,0);
    tracep->declBus(c+221,"regs17", false,-1, 31,0);
    tracep->declBus(c+222,"regs18", false,-1, 31,0);
    tracep->declBus(c+223,"regs19", false,-1, 31,0);
    tracep->declBus(c+224,"regs20", false,-1, 31,0);
    tracep->declBus(c+225,"regs21", false,-1, 31,0);
    tracep->declBus(c+226,"regs22", false,-1, 31,0);
    tracep->declBus(c+227,"regs23", false,-1, 31,0);
    tracep->declBus(c+228,"regs24", false,-1, 31,0);
    tracep->declBus(c+229,"regs25", false,-1, 31,0);
    tracep->declBus(c+230,"regs26", false,-1, 31,0);
    tracep->declBus(c+231,"regs27", false,-1, 31,0);
    tracep->declBus(c+232,"regs28", false,-1, 31,0);
    tracep->declBus(c+233,"regs29", false,-1, 31,0);
    tracep->declBus(c+234,"regs30", false,-1, 31,0);
    tracep->declBus(c+235,"regs31", false,-1, 31,0);
    tracep->declBus(c+236,"DPIC_MEM_data", false,-1, 31,0);
    tracep->pushNamePrefix("u_ysyx_25060170_DPIC ");
    tracep->declBit(c+337,"clk", false,-1);
    tracep->declBit(c+338,"rst", false,-1);
    tracep->declBus(c+136,"pc_i", false,-1, 31,0);
    tracep->declBus(c+131,"inst_o", false,-1, 31,0);
    tracep->declBus(c+138,"ftrace_pc", false,-1, 31,0);
    tracep->declBus(c+145,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+24,"imm", false,-1, 31,0);
    tracep->declBus(c+204,"regs0", false,-1, 31,0);
    tracep->declBus(c+205,"regs1", false,-1, 31,0);
    tracep->declBus(c+206,"regs2", false,-1, 31,0);
    tracep->declBus(c+207,"regs3", false,-1, 31,0);
    tracep->declBus(c+208,"regs4", false,-1, 31,0);
    tracep->declBus(c+209,"regs5", false,-1, 31,0);
    tracep->declBus(c+210,"regs6", false,-1, 31,0);
    tracep->declBus(c+211,"regs7", false,-1, 31,0);
    tracep->declBus(c+212,"regs8", false,-1, 31,0);
    tracep->declBus(c+213,"regs9", false,-1, 31,0);
    tracep->declBus(c+214,"regs10", false,-1, 31,0);
    tracep->declBus(c+215,"regs11", false,-1, 31,0);
    tracep->declBus(c+216,"regs12", false,-1, 31,0);
    tracep->declBus(c+217,"regs13", false,-1, 31,0);
    tracep->declBus(c+218,"regs14", false,-1, 31,0);
    tracep->declBus(c+219,"regs15", false,-1, 31,0);
    tracep->declBus(c+220,"regs16", false,-1, 31,0);
    tracep->declBus(c+221,"regs17", false,-1, 31,0);
    tracep->declBus(c+222,"regs18", false,-1, 31,0);
    tracep->declBus(c+223,"regs19", false,-1, 31,0);
    tracep->declBus(c+224,"regs20", false,-1, 31,0);
    tracep->declBus(c+225,"regs21", false,-1, 31,0);
    tracep->declBus(c+226,"regs22", false,-1, 31,0);
    tracep->declBus(c+227,"regs23", false,-1, 31,0);
    tracep->declBus(c+228,"regs24", false,-1, 31,0);
    tracep->declBus(c+229,"regs25", false,-1, 31,0);
    tracep->declBus(c+230,"regs26", false,-1, 31,0);
    tracep->declBus(c+231,"regs27", false,-1, 31,0);
    tracep->declBus(c+232,"regs28", false,-1, 31,0);
    tracep->declBus(c+233,"regs29", false,-1, 31,0);
    tracep->declBus(c+234,"regs30", false,-1, 31,0);
    tracep->declBus(c+235,"regs31", false,-1, 31,0);
    tracep->declBus(c+200,"mstatus", false,-1, 31,0);
    tracep->declBus(c+202,"mtvec", false,-1, 31,0);
    tracep->declBus(c+201,"mepc", false,-1, 31,0);
    tracep->declBus(c+203,"mcause", false,-1, 31,0);
    tracep->declBit(c+35,"re", false,-1);
    tracep->declBit(c+31,"we", false,-1);
    tracep->declBus(c+32,"data_i", false,-1, 31,0);
    tracep->declBus(c+34,"wlen", false,-1, 7,0);
    tracep->declBus(c+349,"rlen", false,-1, 7,0);
    tracep->declBus(c+188,"wbu_dpic_inst", false,-1, 31,0);
    tracep->declBus(c+189,"wbu_dpic_pc", false,-1, 31,0);
    tracep->declBus(c+190,"wbu_dpic_next_pc", false,-1, 31,0);
    tracep->declBit(c+198,"wbu_dpic_valid", false,-1);
    tracep->declBus(c+236,"data_o", false,-1, 31,0);
    tracep->declBus(c+33,"raddr", false,-1, 31,0);
    tracep->declBus(c+33,"waddr", false,-1, 31,0);
    tracep->declBus(c+172,"ex_ls_reg_DPIC_pc_i", false,-1, 31,0);
    tracep->declBit(c+147,"magic_flag", false,-1);
    tracep->declBus(c+351,"dpic_loadread", false,-1, 31,0);
    tracep->declBus(c+352,"dpic_fetch", false,-1, 31,0);
    tracep->declBit(c+237,"jal", false,-1);
    tracep->declBit(c+238,"jalr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_bpu ");
    tracep->declBit(c+337,"clk", false,-1);
    tracep->declBit(c+338,"rst", false,-1);
    tracep->declBus(c+149,"pc_before_bxx", false,-1, 31,0);
    tracep->declBit(c+26,"branch_success", false,-1);
    tracep->declBit(c+141,"branch", false,-1);
    tracep->declBus(c+159,"bxx_imm", false,-1, 31,0);
    tracep->declBus(c+131,"inst_i", false,-1, 31,0);
    tracep->declBus(c+136,"pc_i", false,-1, 31,0);
    tracep->declBus(c+135,"ls_wb_forward_data", false,-1, 31,0);
    tracep->declBus(c+170,"ls_wb_forward_addr", false,-1, 4,0);
    tracep->declBus(c+27,"ex_ls_forward_data", false,-1, 31,0);
    tracep->declBus(c+157,"ex_ls_forward_addr", false,-1, 4,0);
    tracep->declBus(c+339,"bp_rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+195,"wb_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+199,"wb_rd_data_forward", false,-1, 31,0);
    tracep->declBus(c+132,"bp_pc_o", false,-1, 31,0);
    tracep->declBit(c+134,"jal_jalr_o", false,-1);
    tracep->declBit(c+4,"branch_o", false,-1);
    tracep->declBus(c+2,"bp_rs1_addr_o", false,-1, 4,0);
    tracep->declBit(c+3,"bp_rs1_ena_o", false,-1);
    tracep->declBit(c+133,"bp_predict_o", false,-1);
    tracep->declBit(c+36,"jal_jalr_temp", false,-1);
    tracep->declBus(c+239,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+240,"strongly_not_taken_state", false,-1);
    tracep->declBit(c+241,"weakly_not_taken_state", false,-1);
    tracep->declBit(c+242,"weakly_taken_state", false,-1);
    tracep->declBit(c+243,"strongly_taken_state", false,-1);
    tracep->declBus(c+244,"jal_imm", false,-1, 20,0);
    tracep->declBus(c+245,"b_imm", false,-1, 12,0);
    tracep->declBus(c+246,"jalr_imm", false,-1, 11,0);
    tracep->declBus(c+247,"opcode", false,-1, 6,0);
    tracep->declBus(c+343,"op1", false,-1, 31,0);
    tracep->declBus(c+37,"op2", false,-1, 31,0);
    tracep->declBit(c+38,"inst_jal", false,-1);
    tracep->declBit(c+3,"inst_jalr", false,-1);
    tracep->declBit(c+4,"inst_bxx", false,-1);
    tracep->declBus(c+39,"jump_pc", false,-1, 31,0);
    tracep->declBus(c+40,"jump_jalr_pc", false,-1, 31,0);
    tracep->declBus(c+248,"jal_offset", false,-1, 31,0);
    tracep->declBus(c+249,"br_offset", false,-1, 31,0);
    tracep->declBus(c+250,"jalr_offset", false,-1, 31,0);
    tracep->declBit(c+41,"ls_wb_forward_en", false,-1);
    tracep->declBit(c+42,"ex_ls_forward_en", false,-1);
    tracep->declBit(c+251,"wbu_forward_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_ex_ls_reg ");
    tracep->declBit(c+337,"clk", false,-1);
    tracep->declBit(c+338,"rst", false,-1);
    tracep->declBus(c+150,"inst_i", false,-1, 31,0);
    tracep->declBus(c+149,"pc_i", false,-1, 31,0);
    tracep->declBus(c+151,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+153,"store_data_i", false,-1, 31,0);
    tracep->declBus(c+27,"exu_res_i", false,-1, 31,0);
    tracep->declBus(c+160,"ls_ctl_i", false,-1, 3,0);
    tracep->declBus(c+161,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+29,"csr_ctl_i", false,-1, 6,0);
    tracep->declBit(c+156,"rd_ena_i", false,-1);
    tracep->declBus(c+157,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+143,"ex_csr_ena_i", false,-1);
    tracep->declBus(c+28,"csr_addr_i", false,-1, 11,0);
    tracep->declBit(c+163,"ex_valid_i", false,-1);
    tracep->declBit(c+1,"ls_ready_i", false,-1);
    tracep->declBit(c+348,"ls_flush_i", false,-1);
    tracep->declBit(c+174,"ex_valid_o", false,-1);
    tracep->declBus(c+164,"inst_o", false,-1, 31,0);
    tracep->declBus(c+172,"pc_o", false,-1, 31,0);
    tracep->declBus(c+173,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+165,"store_data_o", false,-1, 31,0);
    tracep->declBus(c+135,"exu_res_o", false,-1, 31,0);
    tracep->declBus(c+166,"ls_ctl_o", false,-1, 3,0);
    tracep->declBus(c+167,"wb_ctl_o", false,-1, 1,0);
    tracep->declBus(c+168,"csr_ctl_o", false,-1, 6,0);
    tracep->declBit(c+169,"rd_ena_o", false,-1);
    tracep->declBus(c+170,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+171,"csr_addr_o", false,-1, 11,0);
    tracep->declBit(c+144,"ls_csr_ena_o", false,-1);
    tracep->declBus(c+157,"ex_rd_addr_forward_o", false,-1, 4,0);
    tracep->declBit(c+143,"ex_csr_o", false,-1);
    tracep->declBus(c+27,"ex_rd_data_forward_o", false,-1, 31,0);
    tracep->declBit(c+348,"flush", false,-1);
    tracep->declBit(c+252,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_exu ");
    tracep->declBit(c+338,"rst", false,-1);
    tracep->declBus(c+152,"op1_i", false,-1, 31,0);
    tracep->declBus(c+153,"op2_i", false,-1, 31,0);
    tracep->declBus(c+154,"op1_sel_i", false,-1, 1,0);
    tracep->declBus(c+155,"op2_sel_i", false,-1, 2,0);
    tracep->declBus(c+157,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+158,"rs1_addr_i", false,-1, 4,0);
    tracep->declBus(c+159,"imm_i", false,-1, 31,0);
    tracep->declBus(c+149,"pc_i", false,-1, 31,0);
    tracep->declBus(c+151,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+150,"inst_i", false,-1, 31,0);
    tracep->declBus(c+148,"alu_sel_i", false,-1, 7,0);
    tracep->declBit(c+1,"ls_ready_i", false,-1);
    tracep->declBit(c+163,"id_valid_i", false,-1);
    tracep->declBit(c+163,"ex_valid_o", false,-1);
    tracep->declBit(c+1,"ex_ready_o", false,-1);
    tracep->declBus(c+150,"inst_o", false,-1, 31,0);
    tracep->declBus(c+149,"pc_o", false,-1, 31,0);
    tracep->declBus(c+151,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+153,"store_data_o", false,-1, 31,0);
    tracep->declBus(c+27,"exu_res_o", false,-1, 31,0);
    tracep->declBus(c+28,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+29,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+253,"op1", false,-1, 31,0);
    tracep->declBus(c+254,"op2", false,-1, 31,0);
    tracep->declBus(c+255,"op1_add_op2", false,-1, 31,0);
    tracep->declBus(c+256,"op1_sub_op2", false,-1, 31,0);
    tracep->declBit(c+257,"op1_lt_op2", false,-1);
    tracep->declBus(c+258,"op1_sra_op2", false,-1, 31,0);
    tracep->declQuad(c+259,"mul", false,-1, 63,0);
    tracep->declBus(c+261,"op1_mul_op2", false,-1, 31,0);
    tracep->declBus(c+262,"op1_mulh_op2", false,-1, 31,0);
    tracep->declBus(c+263,"div", false,-1, 31,0);
    tracep->declBus(c+264,"rem", false,-1, 31,0);
    tracep->declBus(c+43,"alu_res", false,-1, 31,0);
    tracep->declBit(c+44,"csr_wr_ena", false,-1);
    tracep->declBit(c+45,"csr_rd_ena", false,-1);
    tracep->declBit(c+46,"mret_ena", false,-1);
    tracep->declBit(c+47,"ecall_ena", false,-1);
    tracep->declBit(c+48,"csrrw_ena", false,-1);
    tracep->declBit(c+49,"csrrs_ena", false,-1);
    tracep->declBit(c+50,"csrrc_ena", false,-1);
    tracep->declBus(c+265,"csr_op", false,-1, 31,0);
    tracep->declBit(c+266,"csrrxi_ena", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_id_ex_reg ");
    tracep->declBit(c+337,"clk", false,-1);
    tracep->declBit(c+338,"rst", false,-1);
    tracep->declBus(c+140,"inst_i", false,-1, 31,0);
    tracep->declBus(c+138,"pc_i", false,-1, 31,0);
    tracep->declBus(c+25,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+22,"op1_i", false,-1, 31,0);
    tracep->declBus(c+23,"op2_i", false,-1, 31,0);
    tracep->declBus(c+18,"op1_sel_i", false,-1, 1,0);
    tracep->declBus(c+19,"op2_sel_i", false,-1, 2,0);
    tracep->declBit(c+13,"rd_ena_i", false,-1);
    tracep->declBus(c+14,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+146,"rs1_addr_i", false,-1, 4,0);
    tracep->declBus(c+24,"imm_i", false,-1, 31,0);
    tracep->declBus(c+15,"alusrc_i", false,-1, 7,0);
    tracep->declBus(c+16,"lsctl_i", false,-1, 3,0);
    tracep->declBus(c+17,"wbctl_i", false,-1, 1,0);
    tracep->declBit(c+21,"csr_ena_i", false,-1);
    tracep->declBit(c+20,"load_flag_i", false,-1);
    tracep->declBit(c+142,"id_valid_i", false,-1);
    tracep->declBit(c+5,"id_flush_i", false,-1);
    tracep->declBit(c+348,"ls_flush_i", false,-1);
    tracep->declBit(c+1,"ex_ready_i", false,-1);
    tracep->declBus(c+150,"inst_o", false,-1, 31,0);
    tracep->declBus(c+149,"pc_o", false,-1, 31,0);
    tracep->declBus(c+151,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+152,"op1_o", false,-1, 31,0);
    tracep->declBus(c+153,"op2_o", false,-1, 31,0);
    tracep->declBus(c+154,"op1_sel_o", false,-1, 1,0);
    tracep->declBus(c+155,"op2_sel_o", false,-1, 2,0);
    tracep->declBit(c+156,"rd_ena_o", false,-1);
    tracep->declBus(c+157,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+158,"rs1_addr_o", false,-1, 4,0);
    tracep->declBus(c+159,"imm_o", false,-1, 31,0);
    tracep->declBus(c+148,"alusrc_o", false,-1, 7,0);
    tracep->declBus(c+160,"lsctl_o", false,-1, 3,0);
    tracep->declBus(c+161,"wbctl_o", false,-1, 1,0);
    tracep->declBit(c+143,"csr_ena_o", false,-1);
    tracep->declBit(c+162,"load_flag_o", false,-1);
    tracep->declBit(c+163,"id_valid_o", false,-1);
    tracep->declBit(c+5,"flush", false,-1);
    tracep->declBit(c+267,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_idu ");
    tracep->declBit(c+338,"rst", false,-1);
    tracep->declBus(c+140,"inst_i", false,-1, 31,0);
    tracep->declBus(c+138,"pc_i", false,-1, 31,0);
    tracep->declBus(c+139,"next_pc_i", false,-1, 31,0);
    tracep->declBit(c+141,"bp_jump_i", false,-1);
    tracep->declBus(c+157,"ex_addr_forward", false,-1, 4,0);
    tracep->declBus(c+27,"ex_data_forward", false,-1, 31,0);
    tracep->declBus(c+170,"ls_addr_forward", false,-1, 4,0);
    tracep->declBus(c+135,"ls_data_forward", false,-1, 31,0);
    tracep->declBus(c+195,"wb_addr_forward", false,-1, 4,0);
    tracep->declBus(c+199,"wb_data_forward", false,-1, 31,0);
    tracep->declBit(c+162,"ex_load_ena", false,-1);
    tracep->declBit(c+143,"ex_csr_ena", false,-1);
    tracep->declBit(c+144,"ls_csr_ena", false,-1);
    tracep->declBus(c+340,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+341,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+9,"rs1_addr", false,-1, 4,0);
    tracep->declBit(c+10,"rs1_ena", false,-1);
    tracep->declBus(c+11,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+12,"rs2_ena", false,-1);
    tracep->declBit(c+13,"rd_ena", false,-1);
    tracep->declBus(c+14,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+138,"pc_o", false,-1, 31,0);
    tracep->declBus(c+25,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+15,"alusrc_o", false,-1, 7,0);
    tracep->declBus(c+16,"lsctl_o", false,-1, 3,0);
    tracep->declBus(c+17,"wbctl_o", false,-1, 1,0);
    tracep->declBus(c+18,"op1_sel", false,-1, 1,0);
    tracep->declBus(c+19,"op2_sel", false,-1, 2,0);
    tracep->declBit(c+20,"load_flag_o", false,-1);
    tracep->declBit(c+21,"csr_ena_o", false,-1);
    tracep->declBus(c+22,"op1", false,-1, 31,0);
    tracep->declBus(c+23,"op2", false,-1, 31,0);
    tracep->declBus(c+24,"imm", false,-1, 31,0);
    tracep->declBus(c+145,"idu_dpic_rd_addr", false,-1, 4,0);
    tracep->declBus(c+140,"inst_o", false,-1, 31,0);
    tracep->declBus(c+146,"csr_imm", false,-1, 4,0);
    tracep->declBit(c+5,"jump_ena_o", false,-1);
    tracep->declBus(c+6,"jump_pc_o", false,-1, 31,0);
    tracep->declBit(c+26,"ex_branch", false,-1);
    tracep->declBit(c+142,"if_valid_i", false,-1);
    tracep->declBit(c+1,"ex_ready_i", false,-1);
    tracep->declBit(c+5,"id_flush_o", false,-1);
    tracep->declBit(c+7,"id_stall_o", false,-1);
    tracep->declBit(c+1,"id_ready_o", false,-1);
    tracep->declBit(c+142,"id_valid_o", false,-1);
    tracep->declBit(c+147,"magic_flag", false,-1);
    tracep->declBus(c+145,"rd", false,-1, 4,0);
    tracep->declBus(c+146,"rs1", false,-1, 4,0);
    tracep->declBus(c+268,"rs2", false,-1, 4,0);
    tracep->declBit(c+51,"branch", false,-1);
    tracep->declBit(c+344,"op1_relate", false,-1);
    tracep->declBit(c+345,"op2_relate", false,-1);
    tracep->declBit(c+52,"csr_op1_stall", false,-1);
    tracep->declBit(c+53,"csr_op2_stall", false,-1);
    tracep->declBit(c+7,"id_stall_ena", false,-1);
    tracep->declBit(c+54,"ex_op1_forward", false,-1);
    tracep->declBit(c+55,"ls_op1_forward", false,-1);
    tracep->declBit(c+56,"wb_op1_forward", false,-1);
    tracep->declBit(c+57,"ex_op2_forward", false,-1);
    tracep->declBit(c+58,"ls_op2_forward", false,-1);
    tracep->declBit(c+59,"wb_op2_forward", false,-1);
    tracep->declBit(c+60,"op1_forward_ena", false,-1);
    tracep->declBit(c+61,"op2_forward_ena", false,-1);
    tracep->declBus(c+62,"op1_forward_data", false,-1, 31,0);
    tracep->declBus(c+63,"op2_forward_data", false,-1, 31,0);
    tracep->declBit(c+64,"diff_sign", false,-1);
    tracep->declBit(c+65,"op_ltu_op2", false,-1);
    tracep->declBit(c+66,"op1_lt_op2", false,-1);
    tracep->declBus(c+67,"o1", false,-1, 31,0);
    tracep->declBus(c+68,"o2", false,-1, 31,0);
    tracep->pushNamePrefix("decoder ");
    tracep->declBit(c+338,"rst", false,-1);
    tracep->declBus(c+140,"inst", false,-1, 31,0);
    tracep->declBit(c+10,"rs1_ena", false,-1);
    tracep->declBit(c+12,"rs2_ena", false,-1);
    tracep->declBit(c+21,"csr_inst", false,-1);
    tracep->declBus(c+17,"wb_ctl", false,-1, 1,0);
    tracep->declBus(c+16,"mem_ctl", false,-1, 3,0);
    tracep->declBit(c+51,"branch", false,-1);
    tracep->declBus(c+24,"ext_imm", false,-1, 31,0);
    tracep->declBit(c+20,"load", false,-1);
    tracep->declBus(c+18,"op1_sel", false,-1, 1,0);
    tracep->declBus(c+19,"op2_sel", false,-1, 2,0);
    tracep->declBus(c+15,"alu_ctl", false,-1, 7,0);
    tracep->declBus(c+269,"opcode", false,-1, 6,0);
    tracep->declBus(c+270,"funct3", false,-1, 2,0);
    tracep->declBus(c+271,"funct7", false,-1, 6,0);
    tracep->declBus(c+272,"i_imm", false,-1, 11,0);
    tracep->declBus(c+273,"j_imm", false,-1, 20,1);
    tracep->declBus(c+274,"u_imm", false,-1, 19,0);
    tracep->declBus(c+275,"s_imm", false,-1, 11,0);
    tracep->declBus(c+276,"b_imm", false,-1, 12,1);
    tracep->declBus(c+69,"inst_type", false,-1, 7,0);
    tracep->declBit(c+70,"inst_lui", false,-1);
    tracep->declBit(c+71,"inst_auipc", false,-1);
    tracep->declBit(c+72,"inst_jal", false,-1);
    tracep->declBit(c+73,"inst_jalr", false,-1);
    tracep->declBit(c+74,"inst_sb", false,-1);
    tracep->declBit(c+75,"inst_sh", false,-1);
    tracep->declBit(c+76,"inst_sw", false,-1);
    tracep->declBit(c+77,"inst_sd", false,-1);
    tracep->declBit(c+78,"inst_lb", false,-1);
    tracep->declBit(c+79,"inst_lh", false,-1);
    tracep->declBit(c+80,"inst_lw", false,-1);
    tracep->declBit(c+81,"inst_ld", false,-1);
    tracep->declBit(c+82,"inst_lbu", false,-1);
    tracep->declBit(c+83,"inst_lhu", false,-1);
    tracep->declBit(c+84,"inst_lwu", false,-1);
    tracep->declBit(c+85,"inst_beq", false,-1);
    tracep->declBit(c+86,"inst_bne", false,-1);
    tracep->declBit(c+87,"inst_blt", false,-1);
    tracep->declBit(c+88,"inst_bge", false,-1);
    tracep->declBit(c+89,"inst_bltu", false,-1);
    tracep->declBit(c+90,"inst_bgeu", false,-1);
    tracep->declBit(c+91,"inst_add", false,-1);
    tracep->declBit(c+92,"inst_sub", false,-1);
    tracep->declBit(c+93,"inst_sll", false,-1);
    tracep->declBit(c+94,"inst_slt", false,-1);
    tracep->declBit(c+95,"inst_sltu", false,-1);
    tracep->declBit(c+96,"inst_xor", false,-1);
    tracep->declBit(c+97,"inst_srl", false,-1);
    tracep->declBit(c+98,"inst_sra", false,-1);
    tracep->declBit(c+99,"inst_or", false,-1);
    tracep->declBit(c+100,"inst_and", false,-1);
    tracep->declBit(c+101,"inst_div", false,-1);
    tracep->declBit(c+102,"inst_divu", false,-1);
    tracep->declBit(c+103,"inst_mul", false,-1);
    tracep->declBit(c+104,"inst_mulh", false,-1);
    tracep->declBit(c+105,"inst_mulhsu", false,-1);
    tracep->declBit(c+106,"inst_mulhu", false,-1);
    tracep->declBit(c+107,"inst_rem", false,-1);
    tracep->declBit(c+108,"inst_remu", false,-1);
    tracep->declBit(c+109,"inst_addi", false,-1);
    tracep->declBit(c+110,"inst_slti", false,-1);
    tracep->declBit(c+111,"inst_sltiu", false,-1);
    tracep->declBit(c+112,"inst_xori", false,-1);
    tracep->declBit(c+113,"inst_ori", false,-1);
    tracep->declBit(c+114,"inst_andi", false,-1);
    tracep->declBit(c+115,"inst_slli", false,-1);
    tracep->declBit(c+116,"inst_srli", false,-1);
    tracep->declBit(c+117,"inst_srai", false,-1);
    tracep->declBit(c+118,"inst_ecall", false,-1);
    tracep->declBit(c+119,"inst_mret", false,-1);
    tracep->declBit(c+120,"inst_csrrw", false,-1);
    tracep->declBit(c+121,"inst_csrrs", false,-1);
    tracep->declBit(c+122,"inst_csrrc", false,-1);
    tracep->declBit(c+123,"inst_csrrwi", false,-1);
    tracep->declBit(c+124,"inst_csrrsi", false,-1);
    tracep->declBit(c+125,"inst_csrrci", false,-1);
    tracep->declBit(c+126,"inst_ebreak", false,-1);
    tracep->declBit(c+127,"imm_ena", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_25060170_if_id_reg ");
    tracep->declBit(c+337,"clk", false,-1);
    tracep->declBit(c+338,"rst", false,-1);
    tracep->declBus(c+136,"pc_i", false,-1, 31,0);
    tracep->declBus(c+137,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+131,"inst_i", false,-1, 31,0);
    tracep->declBit(c+133,"bp_jump_i", false,-1);
    tracep->declBit(c+8,"if_valid_i", false,-1);
    tracep->declBit(c+5,"id_flush_i", false,-1);
    tracep->declBit(c+348,"ls_flush_i", false,-1);
    tracep->declBit(c+7,"id_stall_i", false,-1);
    tracep->declBit(c+1,"id_ready_i", false,-1);
    tracep->declBus(c+138,"pc_o", false,-1, 31,0);
    tracep->declBus(c+139,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+140,"inst_o", false,-1, 31,0);
    tracep->declBit(c+141,"id_jump_o", false,-1);
    tracep->declBit(c+142,"if_valid_o", false,-1);
    tracep->declBit(c+128,"flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_ifu ");
    tracep->declBit(c+338,"rst", false,-1);
    tracep->declBit(c+337,"clk", false,-1);
    tracep->declBit(c+5,"id_pc_jump_i", false,-1);
    tracep->declBus(c+6,"id_pc_i", false,-1, 31,0);
    tracep->declBit(c+348,"ls_pc_jump_i", false,-1);
    tracep->declBus(c+135,"ls_pc_i", false,-1, 31,0);
    tracep->declBit(c+133,"bp_pc_jump_i", false,-1);
    tracep->declBus(c+132,"bp_pc_i", false,-1, 31,0);
    tracep->declBit(c+134,"jal_jalr_i", false,-1);
    tracep->declBit(c+4,"branch_i", false,-1);
    tracep->declBit(c+1,"id_ready_i", false,-1);
    tracep->declBit(c+7,"id_stall_i", false,-1);
    tracep->declBit(c+8,"if_valid_o", false,-1);
    tracep->declBus(c+131,"inst_i", false,-1, 31,0);
    tracep->declBus(c+136,"pc_o", false,-1, 31,0);
    tracep->declBus(c+131,"inst_o", false,-1, 31,0);
    tracep->declBus(c+137,"next_pc_o", false,-1, 31,0);
    tracep->declBit(c+7,"stall", false,-1);
    tracep->declBus(c+277,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_ls_mem_reg ");
    tracep->declBit(c+337,"clk", false,-1);
    tracep->declBit(c+338,"rst", false,-1);
    tracep->declBus(c+164,"inst_i", false,-1, 31,0);
    tracep->declBus(c+172,"pc_i", false,-1, 31,0);
    tracep->declBus(c+173,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+166,"ls_ctl_i", false,-1, 3,0);
    tracep->declBus(c+167,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+135,"alu_res_i", false,-1, 31,0);
    tracep->declBit(c+35,"re_i", false,-1);
    tracep->declBit(c+169,"rd_ena_i", false,-1);
    tracep->declBus(c+170,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+168,"csr_ctl_i", false,-1, 6,0);
    tracep->declBus(c+171,"csr_addr_i", false,-1, 11,0);
    tracep->declBit(c+30,"ls_valid_i", false,-1);
    tracep->declBit(c+350,"mem_ready_i", false,-1);
    tracep->declBit(c+184,"ls_valid_o", false,-1);
    tracep->declBus(c+175,"inst_o", false,-1, 31,0);
    tracep->declBus(c+176,"pc_o", false,-1, 31,0);
    tracep->declBus(c+177,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+178,"ls_ctl_o", false,-1, 3,0);
    tracep->declBus(c+179,"wb_ctl_o", false,-1, 1,0);
    tracep->declBus(c+186,"alu_res_o", false,-1, 31,0);
    tracep->declBit(c+185,"re_o", false,-1);
    tracep->declBit(c+180,"rd_ena_o", false,-1);
    tracep->declBus(c+181,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+182,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+183,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+170,"ls_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+135,"ls_rd_data_forward", false,-1, 31,0);
    tracep->declBit(c+348,"flush", false,-1);
    tracep->declBit(c+129,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_lsu ");
    tracep->declBit(c+337,"clk", false,-1);
    tracep->declBit(c+338,"rst", false,-1);
    tracep->declBus(c+172,"pc_i", false,-1, 31,0);
    tracep->declBus(c+173,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+164,"inst_i", false,-1, 31,0);
    tracep->declBus(c+135,"alu_res_i", false,-1, 31,0);
    tracep->declBus(c+165,"store_data_i", false,-1, 31,0);
    tracep->declBus(c+166,"ls_ctl_i", false,-1, 3,0);
    tracep->declBit(c+350,"mem_ready_i", false,-1);
    tracep->declBit(c+174,"ex_valid_i", false,-1);
    tracep->declBit(c+1,"ls_ready_o", false,-1);
    tracep->declBit(c+30,"ls_valid_o", false,-1);
    tracep->declBit(c+348,"ls_flush_o", false,-1);
    tracep->declBit(c+348,"ls_jump_o", false,-1);
    tracep->declBus(c+135,"ls_jump_pc_o", false,-1, 31,0);
    tracep->declBit(c+35,"re", false,-1);
    tracep->declBit(c+31,"we", false,-1);
    tracep->declBus(c+32,"data_o", false,-1, 31,0);
    tracep->declBus(c+33,"raddr", false,-1, 31,0);
    tracep->declBus(c+33,"waddr", false,-1, 31,0);
    tracep->declBus(c+34,"wlen", false,-1, 7,0);
    tracep->declBus(c+349,"rlen", false,-1, 7,0);
    tracep->declBus(c+164,"inst_o", false,-1, 31,0);
    tracep->declBus(c+172,"pc_o", false,-1, 31,0);
    tracep->declBus(c+173,"next_pc_o", false,-1, 31,0);
    tracep->declBit(c+278,"data_ok", false,-1);
    tracep->declBus(c+279,"byte_sel", false,-1, 1,0);
    tracep->declBus(c+279,"half_sel", false,-1, 1,0);
    tracep->declBus(c+130,"sb_mask", false,-1, 3,0);
    tracep->declBus(c+346,"sh_mask", false,-1, 3,0);
    tracep->declBus(c+353,"sw_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_mem ");
    tracep->declBit(c+337,"clk", false,-1);
    tracep->declBit(c+338,"rst", false,-1);
    tracep->declBus(c+175,"inst_i", false,-1, 31,0);
    tracep->declBus(c+176,"pc_i", false,-1, 31,0);
    tracep->declBus(c+177,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+179,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+186,"alu_res_i", false,-1, 31,0);
    tracep->declBit(c+185,"re", false,-1);
    tracep->declBit(c+180,"rd_ena_i", false,-1);
    tracep->declBus(c+181,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+182,"csr_ctl_i", false,-1, 6,0);
    tracep->declBus(c+183,"csr_addr_i", false,-1, 11,0);
    tracep->declBus(c+178,"ls_ctl_i", false,-1, 3,0);
    tracep->declBus(c+236,"mem_data_i", false,-1, 31,0);
    tracep->declBit(c+184,"ls_valid_i", false,-1);
    tracep->declBit(c+350,"wb_ready_i", false,-1);
    tracep->declBit(c+187,"mem_valid_o", false,-1);
    tracep->declBit(c+350,"mem_ready_o", false,-1);
    tracep->declBus(c+175,"inst_o", false,-1, 31,0);
    tracep->declBus(c+176,"pc_o", false,-1, 31,0);
    tracep->declBus(c+177,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+179,"wb_ctl_o", false,-1, 1,0);
    tracep->declBus(c+186,"alu_res_o", false,-1, 31,0);
    tracep->declBit(c+180,"rd_ena_o", false,-1);
    tracep->declBus(c+181,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+182,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+183,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+342,"mem_data_o", false,-1, 31,0);
    tracep->declBus(c+347,"load_data", false,-1, 31,0);
    tracep->declBit(c+280,"data_ok", false,-1);
    tracep->declBus(c+281,"data_byte", false,-1, 7,0);
    tracep->declBus(c+282,"data_half", false,-1, 15,0);
    tracep->declBus(c+236,"data_word", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_mem_wb_reg ");
    tracep->declBit(c+337,"clk", false,-1);
    tracep->declBit(c+338,"rst", false,-1);
    tracep->declBus(c+175,"inst_i", false,-1, 31,0);
    tracep->declBus(c+176,"pc_i", false,-1, 31,0);
    tracep->declBus(c+177,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+179,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+342,"mem_data_i", false,-1, 31,0);
    tracep->declBus(c+186,"alu_res_i", false,-1, 31,0);
    tracep->declBit(c+180,"rd_ena_i", false,-1);
    tracep->declBus(c+181,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+182,"csr_ctl_i", false,-1, 6,0);
    tracep->declBus(c+183,"csr_addr_i", false,-1, 11,0);
    tracep->declBit(c+187,"mem_valid_i", false,-1);
    tracep->declBit(c+350,"wb_ready_i", false,-1);
    tracep->declBit(c+198,"mem_valid_o", false,-1);
    tracep->declBus(c+188,"inst_o", false,-1, 31,0);
    tracep->declBus(c+189,"pc_o", false,-1, 31,0);
    tracep->declBus(c+190,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+192,"alu_res_o", false,-1, 31,0);
    tracep->declBus(c+191,"mem_data_o", false,-1, 31,0);
    tracep->declBus(c+193,"wb_ctl_o", false,-1, 1,0);
    tracep->declBit(c+194,"rd_ena_o", false,-1);
    tracep->declBus(c+195,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+196,"csr_ctl_o", false,-1, 6,0);
    tracep->declBus(c+197,"csr_addr_o", false,-1, 11,0);
    tracep->declBit(c+348,"flush", false,-1);
    tracep->declBit(c+187,"stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_regfile ");
    tracep->declBit(c+337,"clk", false,-1);
    tracep->declBit(c+338,"rst", false,-1);
    tracep->declBus(c+195,"waddr", false,-1, 4,0);
    tracep->declBus(c+199,"wdata", false,-1, 31,0);
    tracep->declBit(c+194,"wen", false,-1);
    tracep->declBit(c+10,"ren1", false,-1);
    tracep->declBit(c+12,"ren2", false,-1);
    tracep->declBus(c+9,"raddr1", false,-1, 4,0);
    tracep->declBus(c+11,"raddr2", false,-1, 4,0);
    tracep->declBus(c+340,"rdata1", false,-1, 31,0);
    tracep->declBus(c+341,"rdata2", false,-1, 31,0);
    tracep->declBus(c+204,"regs0_zero", false,-1, 31,0);
    tracep->declBus(c+205,"regs1_ra", false,-1, 31,0);
    tracep->declBus(c+206,"regs2_sp", false,-1, 31,0);
    tracep->declBus(c+207,"regs3_gp", false,-1, 31,0);
    tracep->declBus(c+208,"regs4_tp", false,-1, 31,0);
    tracep->declBus(c+209,"regs5_t0", false,-1, 31,0);
    tracep->declBus(c+210,"regs6_t1", false,-1, 31,0);
    tracep->declBus(c+211,"regs7_t2", false,-1, 31,0);
    tracep->declBus(c+212,"regs8_s0", false,-1, 31,0);
    tracep->declBus(c+213,"regs9_s1", false,-1, 31,0);
    tracep->declBus(c+214,"regs10_a0", false,-1, 31,0);
    tracep->declBus(c+215,"regs11_a1", false,-1, 31,0);
    tracep->declBus(c+216,"regs12_a2", false,-1, 31,0);
    tracep->declBus(c+217,"regs13_a3", false,-1, 31,0);
    tracep->declBus(c+218,"regs14_a4", false,-1, 31,0);
    tracep->declBus(c+219,"regs15_a5", false,-1, 31,0);
    tracep->declBus(c+220,"regs16_a6", false,-1, 31,0);
    tracep->declBus(c+221,"regs17_a7", false,-1, 31,0);
    tracep->declBus(c+222,"regs18_s2", false,-1, 31,0);
    tracep->declBus(c+223,"regs19_s3", false,-1, 31,0);
    tracep->declBus(c+224,"regs20_s4", false,-1, 31,0);
    tracep->declBus(c+225,"regs21_s5", false,-1, 31,0);
    tracep->declBus(c+226,"regs22_s6", false,-1, 31,0);
    tracep->declBus(c+227,"regs23_s7", false,-1, 31,0);
    tracep->declBus(c+228,"regs24_t3", false,-1, 31,0);
    tracep->declBus(c+229,"regs25_t4", false,-1, 31,0);
    tracep->declBus(c+230,"regs26_t5", false,-1, 31,0);
    tracep->declBus(c+231,"regs27_t6", false,-1, 31,0);
    tracep->declBus(c+232,"regs28_t3", false,-1, 31,0);
    tracep->declBus(c+233,"regs29_t4", false,-1, 31,0);
    tracep->declBus(c+234,"regs30_t5", false,-1, 31,0);
    tracep->declBus(c+235,"regs31_t6", false,-1, 31,0);
    tracep->declBus(c+2,"bp_rs1_addr_i", false,-1, 4,0);
    tracep->declBit(c+3,"bp_rs1_ena_i", false,-1);
    tracep->declBus(c+339,"bp_rs1_data_o", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+283+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_wbu ");
    tracep->declBit(c+337,"clk", false,-1);
    tracep->declBit(c+338,"rst", false,-1);
    tracep->declBus(c+191,"ls_rd_data_i", false,-1, 31,0);
    tracep->declBus(c+193,"wb_ctl_i", false,-1, 1,0);
    tracep->declBus(c+192,"exu_res_i", false,-1, 31,0);
    tracep->declBus(c+189,"pc_i", false,-1, 31,0);
    tracep->declBus(c+190,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+188,"inst_i", false,-1, 31,0);
    tracep->declBus(c+195,"rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+194,"rd_ena_i", false,-1);
    tracep->declBus(c+196,"csr_ctl_i", false,-1, 6,0);
    tracep->declBus(c+197,"csr_addr_i", false,-1, 11,0);
    tracep->declBit(c+198,"ls_valid_i", false,-1);
    tracep->declBus(c+199,"wb_data_o", false,-1, 31,0);
    tracep->declBit(c+350,"wb_ready_o", false,-1);
    tracep->declBit(c+194,"wb_rd_ena_o", false,-1);
    tracep->declBus(c+195,"wb_rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+195,"wb_rd_addr_forward", false,-1, 4,0);
    tracep->declBus(c+199,"wb_rd_data_forward", false,-1, 31,0);
    tracep->declBus(c+200,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+201,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+202,"mtvec_o", false,-1, 31,0);
    tracep->declBus(c+203,"mcause_o", false,-1, 31,0);
    tracep->declBus(c+188,"wbu_dpic_inst_o", false,-1, 31,0);
    tracep->declBus(c+189,"wbu_dpic_pc_o", false,-1, 31,0);
    tracep->declBus(c+190,"wbu_dpic_next_pc_o", false,-1, 31,0);
    tracep->declBit(c+198,"wbu_dpic_valid_o", false,-1);
    tracep->declBus(c+200,"mstatus", false,-1, 31,0);
    tracep->declBus(c+201,"mepc", false,-1, 31,0);
    tracep->declBus(c+202,"mtvec", false,-1, 31,0);
    tracep->declBus(c+203,"mcause", false,-1, 31,0);
    tracep->declBus(c+315,"read_csr_data", false,-1, 31,0);
    tracep->declBus(c+316,"write_csr_data", false,-1, 31,0);
    tracep->declBus(c+317,"mcause_value", false,-1, 31,0);
    tracep->declBus(c+318,"set_data", false,-1, 31,0);
    tracep->declBus(c+319,"clear_data", false,-1, 31,0);
    tracep->pushNamePrefix("u_ysyx_25060170_csr ");
    tracep->declBit(c+337,"clk", false,-1);
    tracep->declBit(c+338,"rst", false,-1);
    tracep->declBus(c+320,"csr_ctl", false,-1, 3,0);
    tracep->declBus(c+197,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+317,"mcause_value", false,-1, 31,0);
    tracep->declBus(c+316,"write_csr_data", false,-1, 31,0);
    tracep->declBus(c+315,"read_csr_data", false,-1, 31,0);
    tracep->declBus(c+200,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+201,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+202,"mtvec_o", false,-1, 31,0);
    tracep->declBus(c+203,"mcause_o", false,-1, 31,0);
    tracep->declBit(c+321,"mstatus_rd", false,-1);
    tracep->declBit(c+322,"mstatus_wr", false,-1);
    tracep->declBit(c+323,"mstatus_mie", false,-1);
    tracep->declBit(c+324,"mstatus_mpie", false,-1);
    tracep->declBus(c+325,"mstatus_mpp", false,-1, 1,0);
    tracep->declBus(c+200,"mstatus", false,-1, 31,0);
    tracep->declBit(c+326,"mstatus_ie_ena", false,-1);
    tracep->declBit(c+327,"mie_set", false,-1);
    tracep->declBit(c+328,"mpie_set", false,-1);
    tracep->declBus(c+329,"mpp_set", false,-1, 1,0);
    tracep->declBit(c+330,"mtvec_rd", false,-1);
    tracep->declBit(c+331,"mtvec_wr", false,-1);
    tracep->declBus(c+332,"mtvec_base", false,-1, 31,2);
    tracep->declBus(c+354,"mtvec_mode", false,-1, 1,0);
    tracep->declBus(c+202,"mtvec", false,-1, 31,0);
    tracep->declBit(c+333,"mepc_rd", false,-1);
    tracep->declBit(c+334,"mepc_wr", false,-1);
    tracep->declBus(c+201,"mepc", false,-1, 31,0);
    tracep->declBit(c+335,"mcause_rd", false,-1);
    tracep->declBit(c+336,"mcause_wr", false,-1);
    tracep->declBus(c+203,"mcause", false,-1, 31,0);
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
    bufp->fullCData(oldp+2,(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr),5);
    bufp->fullBit(oldp+3,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr));
    bufp->fullBit(oldp+4,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_bxx));
    bufp->fullBit(oldp+5,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_if_pc_jump));
    bufp->fullIData(oldp+6,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_if_pc_jump)
                              ? (((0x42U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                                   ? vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1
                                   : vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc) 
                                 + ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_jump)
                                     ? 4U : vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm))
                              : 0U)),32);
    bufp->fullBit(oldp+7,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_stall));
    bufp->fullBit(oldp+8,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_valid));
    bufp->fullCData(oldp+9,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr),5);
    bufp->fullBit(oldp+10,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena));
    bufp->fullCData(oldp+11,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr),5);
    bufp->fullBit(oldp+12,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena));
    bufp->fullBit(oldp+13,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rd_ena));
    bufp->fullCData(oldp+14,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rd_ena)
                               ? (0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                           >> 7U)) : 0U)),5);
    bufp->fullCData(oldp+15,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc),8);
    bufp->fullCData(oldp+16,((0xfU & ((1U & (- (IData)(
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
    bufp->fullCData(oldp+17,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_wbctl),2);
    bufp->fullCData(oldp+18,(((2U & ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                                     | ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr))) 
                                        | (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc)))))) 
                              | (1U & (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena)))))),2);
    bufp->fullCData(oldp+19,(((2U & ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                                     | (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr))))) 
                              | ((4U & (- (IData)(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77eb01fa__0) 
                                                   | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                                                      | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0) 
                                                         | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70f4116c__0) 
                                                            | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
                                                               | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd9b03bc2__0))))))))) 
                                 | (1U & (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena))))))),3);
    bufp->fullBit(oldp+20,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag));
    bufp->fullBit(oldp+21,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw) 
                            | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs) 
                               | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc) 
                                  | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi) 
                                     | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi) 
                                        | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci))))))));
    bufp->fullIData(oldp+22,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op2),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm),32);
    bufp->fullIData(oldp+25,((((0x21U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                               | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_if_pc_jump))
                               ? (vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm 
                                  + vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc)
                               : ((0x42U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                                   ? (0xfffffffeU & 
                                      (vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1 
                                       + vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm))
                                   : vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc))),32);
    bufp->fullBit(oldp+26,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_branch));
    bufp->fullIData(oldp+27,(vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res),32);
    bufp->fullSData(oldp+28,(((0U != (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_he71b3f47__0))
                               ? (0xfffU & vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm)
                               : 0U)),12);
    bufp->fullCData(oldp+29,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena) 
                               << 6U) | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena) 
                                          << 5U) | 
                                         (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena) 
                                           << 4U) | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_he71b3f47__0))))),7);
    bufp->fullBit(oldp+30,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_valid) 
                            | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h53258981__0))));
    bufp->fullBit(oldp+31,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_we));
    bufp->fullIData(oldp+32,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_data),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_raddr),32);
    bufp->fullCData(oldp+34,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen),8);
    bufp->fullBit(oldp+35,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_re));
    bufp->fullBit(oldp+36,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jal_jalr_temp));
    bufp->fullIData(oldp+37,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal)
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
    bufp->fullBit(oldp+38,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal));
    bufp->fullIData(oldp+39,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc),32);
    bufp->fullIData(oldp+40,((0xfffffffeU & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc)),32);
    bufp->fullBit(oldp+41,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                            == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr))));
    bufp->fullBit(oldp+42,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                            == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr))));
    bufp->fullIData(oldp+43,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res),32);
    bufp->fullBit(oldp+44,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena));
    bufp->fullBit(oldp+45,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena));
    bufp->fullBit(oldp+46,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena));
    bufp->fullBit(oldp+47,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena));
    bufp->fullBit(oldp+48,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena));
    bufp->fullBit(oldp+49,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena));
    bufp->fullBit(oldp+50,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena));
    bufp->fullBit(oldp+51,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__branch));
    bufp->fullBit(oldp+52,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward) 
                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena)) 
                            | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward) 
                               & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_csr_ena)))));
    bufp->fullBit(oldp+53,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward) 
                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena)) 
                            | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward) 
                               & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_csr_ena)))));
    bufp->fullBit(oldp+54,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward));
    bufp->fullBit(oldp+55,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward));
    bufp->fullBit(oldp+56,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward));
    bufp->fullBit(oldp+57,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward));
    bufp->fullBit(oldp+58,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward));
    bufp->fullBit(oldp+59,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward));
    bufp->fullBit(oldp+60,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_forward_ena));
    bufp->fullBit(oldp+61,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op2_forward_ena));
    bufp->fullIData(oldp+62,((((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward))) 
                               & vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res) 
                              | (((- (IData)(((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward)) 
                                              & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward)))) 
                                  & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res) 
                                 | ((- (IData)(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward) 
                                                & ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward)) 
                                                   & (~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward)))))) 
                                    & vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rf_data)))),32);
    bufp->fullIData(oldp+63,((((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward))) 
                               & vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res) 
                              | (((- (IData)(((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward)) 
                                              & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward)))) 
                                  & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res) 
                                 | ((- (IData)(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward) 
                                                & ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward)) 
                                                   & (~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward)))))) 
                                    & vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rf_data)))),32);
    bufp->fullBit(oldp+64,(((vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1 
                             ^ vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op2) 
                            >> 0x1fU)));
    bufp->fullBit(oldp+65,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2));
    bufp->fullBit(oldp+66,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2));
    bufp->fullIData(oldp+67,(((0x42U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                               ? vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1
                               : vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc)),32);
    bufp->fullIData(oldp+68,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_jump)
                               ? 4U : vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm)),32);
    bufp->fullCData(oldp+69,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
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
    bufp->fullBit(oldp+70,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui));
    bufp->fullBit(oldp+71,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc));
    bufp->fullBit(oldp+72,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal));
    bufp->fullBit(oldp+73,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr));
    bufp->fullBit(oldp+74,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h489c6f46__0))));
    bufp->fullBit(oldp+75,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h489c6f46__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+76,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he80da865__0))));
    bufp->fullBit(oldp+77,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he80da865__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+78,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc65f4c50__0))));
    bufp->fullBit(oldp+79,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc65f4c50__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+80,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h1167153d__0))));
    bufp->fullBit(oldp+81,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h1167153d__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+82,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h29152e89__0))));
    bufp->fullBit(oldp+83,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h29152e89__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+84,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_heac6e652__0) 
                            & (IData)((0x2000U == (0x3000U 
                                                   & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst))))));
    bufp->fullBit(oldp+85,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7855af38__0))));
    bufp->fullBit(oldp+86,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7855af38__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+87,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2bc0716a__0))));
    bufp->fullBit(oldp+88,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2bc0716a__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+89,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h6fd23990__0))));
    bufp->fullBit(oldp+90,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h6fd23990__0) 
                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+91,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                            & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h03cab0f1__0))));
    bufp->fullBit(oldp+92,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                            & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7b49f5a3__0))));
    bufp->fullBit(oldp+93,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h36e9ef3c__0))));
    bufp->fullBit(oldp+94,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he2955f6b__0))));
    bufp->fullBit(oldp+95,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h4c825e07__0))));
    bufp->fullBit(oldp+96,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h3b427111__0))));
    bufp->fullBit(oldp+97,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                            & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h03cab0f1__0))));
    bufp->fullBit(oldp+98,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                            & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7b49f5a3__0))));
    bufp->fullBit(oldp+99,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd7439362__0))));
    bufp->fullBit(oldp+100,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7a82fdcc__0))));
    bufp->fullBit(oldp+101,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h3b427111__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+102,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+103,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+104,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h36e9ef3c__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+105,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he2955f6b__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+106,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h4c825e07__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+107,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd7439362__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+108,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7a82fdcc__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x19U))));
    bufp->fullBit(oldp+109,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h41ceee20__0))));
    bufp->fullBit(oldp+110,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc1b77381__0))));
    bufp->fullBit(oldp+111,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc1b77381__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+112,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_ha08c85bd__0))));
    bufp->fullBit(oldp+113,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5a06bcf6__0))));
    bufp->fullBit(oldp+114,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5a06bcf6__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+115,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h41ceee20__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+116,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x1eU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2e86cea5__0))));
    bufp->fullBit(oldp+117,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2e86cea5__0) 
                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x1eU))));
    bufp->fullBit(oldp+118,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall));
    bufp->fullBit(oldp+119,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h84595378__0) 
                             & (IData)((0x30000000U 
                                        == (0x30000000U 
                                            & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst))))));
    bufp->fullBit(oldp+120,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw));
    bufp->fullBit(oldp+121,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs));
    bufp->fullBit(oldp+122,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc));
    bufp->fullBit(oldp+123,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi));
    bufp->fullBit(oldp+124,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi));
    bufp->fullBit(oldp+125,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci));
    bufp->fullBit(oldp+126,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h84595378__0) 
                             & (1U == (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                       >> 0x14U)))));
    bufp->fullBit(oldp+127,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77eb01fa__0) 
                             | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                                | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0) 
                                   | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70f4116c__0) 
                                      | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
                                         | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd9b03bc2__0))))))));
    bufp->fullBit(oldp+128,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if_id_reg__DOT__flush));
    bufp->fullBit(oldp+129,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ls_mem_reg__DOT__stall));
    bufp->fullCData(oldp+130,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask),4);
    bufp->fullIData(oldp+131,(vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst),32);
    bufp->fullIData(oldp+132,(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_if_pc),32);
    bufp->fullBit(oldp+133,(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_predict));
    bufp->fullBit(oldp+134,(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_if_jal_jalr));
    bufp->fullIData(oldp+135,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res),32);
    bufp->fullIData(oldp+136,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_pc),32);
    bufp->fullIData(oldp+137,(((IData)(4U) + vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_pc)),32);
    bufp->fullIData(oldp+138,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc),32);
    bufp->fullIData(oldp+139,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc),32);
    bufp->fullIData(oldp+140,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst),32);
    bufp->fullBit(oldp+141,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_jump));
    bufp->fullBit(oldp+142,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_valid));
    bufp->fullBit(oldp+143,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena));
    bufp->fullBit(oldp+144,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_csr_ena));
    bufp->fullCData(oldp+145,((0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+146,((0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                        >> 0xfU))),5);
    bufp->fullBit(oldp+147,((0x40000033U == vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    bufp->fullCData(oldp+148,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc),8);
    bufp->fullIData(oldp+149,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc),32);
    bufp->fullIData(oldp+150,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst),32);
    bufp->fullIData(oldp+151,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc),32);
    bufp->fullIData(oldp+152,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1),32);
    bufp->fullIData(oldp+153,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2),32);
    bufp->fullCData(oldp+154,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel),2);
    bufp->fullCData(oldp+155,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel),3);
    bufp->fullBit(oldp+156,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena));
    bufp->fullCData(oldp+157,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr),5);
    bufp->fullCData(oldp+158,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr),5);
    bufp->fullIData(oldp+159,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm),32);
    bufp->fullCData(oldp+160,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl),4);
    bufp->fullCData(oldp+161,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl),2);
    bufp->fullBit(oldp+162,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag));
    bufp->fullBit(oldp+163,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_valid));
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
    bufp->fullBit(oldp+174,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_valid));
    bufp->fullIData(oldp+175,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst),32);
    bufp->fullIData(oldp+176,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc),32);
    bufp->fullIData(oldp+177,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc),32);
    bufp->fullCData(oldp+178,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl),4);
    bufp->fullCData(oldp+179,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl),2);
    bufp->fullBit(oldp+180,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena));
    bufp->fullCData(oldp+181,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr),5);
    bufp->fullCData(oldp+182,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl),7);
    bufp->fullSData(oldp+183,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr),12);
    bufp->fullBit(oldp+184,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_valid));
    bufp->fullBit(oldp+185,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re));
    bufp->fullIData(oldp+186,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res),32);
    bufp->fullBit(oldp+187,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_valid));
    bufp->fullIData(oldp+188,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_inst),32);
    bufp->fullIData(oldp+189,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_pc),32);
    bufp->fullIData(oldp+190,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc),32);
    bufp->fullIData(oldp+191,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res),32);
    bufp->fullIData(oldp+192,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data),32);
    bufp->fullCData(oldp+193,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl),2);
    bufp->fullBit(oldp+194,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena));
    bufp->fullCData(oldp+195,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr),5);
    bufp->fullCData(oldp+196,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl),7);
    bufp->fullSData(oldp+197,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr),12);
    bufp->fullBit(oldp+198,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_valid_o));
    bufp->fullIData(oldp+199,(vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rf_data),32);
    bufp->fullIData(oldp+200,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus),32);
    bufp->fullIData(oldp+201,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mepc),32);
    bufp->fullIData(oldp+202,((vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
                               << 2U)),32);
    bufp->fullIData(oldp+203,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mcause),32);
    bufp->fullIData(oldp+204,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0U]),32);
    bufp->fullIData(oldp+205,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [1U]),32);
    bufp->fullIData(oldp+206,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [2U]),32);
    bufp->fullIData(oldp+207,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [3U]),32);
    bufp->fullIData(oldp+208,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [4U]),32);
    bufp->fullIData(oldp+209,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [5U]),32);
    bufp->fullIData(oldp+210,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [6U]),32);
    bufp->fullIData(oldp+211,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [7U]),32);
    bufp->fullIData(oldp+212,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [8U]),32);
    bufp->fullIData(oldp+213,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [9U]),32);
    bufp->fullIData(oldp+214,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xaU]),32);
    bufp->fullIData(oldp+215,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xbU]),32);
    bufp->fullIData(oldp+216,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xcU]),32);
    bufp->fullIData(oldp+217,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xdU]),32);
    bufp->fullIData(oldp+218,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xeU]),32);
    bufp->fullIData(oldp+219,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xfU]),32);
    bufp->fullIData(oldp+220,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x10U]),32);
    bufp->fullIData(oldp+221,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x11U]),32);
    bufp->fullIData(oldp+222,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x12U]),32);
    bufp->fullIData(oldp+223,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x13U]),32);
    bufp->fullIData(oldp+224,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x14U]),32);
    bufp->fullIData(oldp+225,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x15U]),32);
    bufp->fullIData(oldp+226,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x16U]),32);
    bufp->fullIData(oldp+227,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x17U]),32);
    bufp->fullIData(oldp+228,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x18U]),32);
    bufp->fullIData(oldp+229,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x19U]),32);
    bufp->fullIData(oldp+230,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1aU]),32);
    bufp->fullIData(oldp+231,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1bU]),32);
    bufp->fullIData(oldp+232,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1cU]),32);
    bufp->fullIData(oldp+233,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1dU]),32);
    bufp->fullIData(oldp+234,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1eU]),32);
    bufp->fullIData(oldp+235,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1fU]),32);
    bufp->fullIData(oldp+236,(vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data),32);
    bufp->fullBit(oldp+237,((0x6fU == (0x7fU & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst))));
    bufp->fullBit(oldp+238,((0x67U == (0x7fU & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst))));
    bufp->fullCData(oldp+239,((0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                        >> 7U))),5);
    bufp->fullBit(oldp+240,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_not_taken_state));
    bufp->fullBit(oldp+241,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_not_taken_state));
    bufp->fullBit(oldp+242,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state));
    bufp->fullBit(oldp+243,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state));
    bufp->fullIData(oldp+244,(((0x100000U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                             >> 0xbU)) 
                               | ((0xff000U & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst) 
                                  | ((0x800U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                >> 9U)) 
                                     | (0x7feU & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                  >> 0x14U)))))),21);
    bufp->fullSData(oldp+245,(((0x1000U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                           >> 0x13U)) 
                               | ((0x800U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                             << 4U)) 
                                  | ((0x7e0U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                >> 0x14U)) 
                                     | (0x1eU & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                 >> 7U)))))),13);
    bufp->fullSData(oldp+246,((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                               >> 0x14U)),12);
    bufp->fullCData(oldp+247,((0x7fU & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst)),7);
    bufp->fullIData(oldp+248,((((- (IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
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
    bufp->fullIData(oldp+249,((((- (IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
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
    bufp->fullIData(oldp+250,((((- (IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                            >> 0x14U))),32);
    bufp->fullBit(oldp+251,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wbu_forward_en));
    bufp->fullBit(oldp+252,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall));
    bufp->fullIData(oldp+253,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1),32);
    bufp->fullIData(oldp+254,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2),32);
    bufp->fullIData(oldp+255,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2),32);
    bufp->fullIData(oldp+256,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2),32);
    bufp->fullBit(oldp+257,((1U & (((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
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
    bufp->fullIData(oldp+258,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2),32);
    bufp->fullQData(oldp+259,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul),64);
    bufp->fullIData(oldp+261,((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul)),32);
    bufp->fullIData(oldp+262,((IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+263,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div),32);
    bufp->fullIData(oldp+264,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__rem),32);
    bufp->fullIData(oldp+265,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr),32);
    bufp->fullBit(oldp+266,(((0x94U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                             | ((0xc8U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                | (0xa4U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))))));
    bufp->fullBit(oldp+267,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_id_ex_reg__DOT__stall));
    bufp->fullCData(oldp+268,((0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+269,((0x7fU & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)),7);
    bufp->fullCData(oldp+270,((7U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+271,((vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0x19U)),7);
    bufp->fullSData(oldp+272,((vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+273,(((0x80000U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                            >> 0xcU)) 
                               | ((0x7f800U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                               >> 1U)) 
                                  | ((0x400U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                >> 0xaU)) 
                                     | (0x3ffU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                  >> 0x15U)))))),20);
    bufp->fullIData(oldp+274,((vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0xcU)),20);
    bufp->fullSData(oldp+275,(((0xfe0U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                           >> 7U)))),12);
    bufp->fullSData(oldp+276,(((0x800U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                          >> 0x14U)) 
                               | ((0x400U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                             << 3U)) 
                                  | ((0x3f0U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                >> 0x15U)) 
                                     | (0xfU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                >> 8U)))))),12);
    bufp->fullIData(oldp+277,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ifu__DOT__pc),32);
    bufp->fullBit(oldp+278,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__data_ok));
    bufp->fullCData(oldp+279,((3U & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res)),2);
    bufp->fullBit(oldp+280,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_mem__DOT__data_ok));
    bufp->fullCData(oldp+281,((0xffU & vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data)),8);
    bufp->fullSData(oldp+282,((0xffffU & vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data)),16);
    bufp->fullIData(oldp+283,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0]),32);
    bufp->fullIData(oldp+284,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[1]),32);
    bufp->fullIData(oldp+285,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[2]),32);
    bufp->fullIData(oldp+286,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[3]),32);
    bufp->fullIData(oldp+287,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[4]),32);
    bufp->fullIData(oldp+288,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[5]),32);
    bufp->fullIData(oldp+289,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[6]),32);
    bufp->fullIData(oldp+290,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[7]),32);
    bufp->fullIData(oldp+291,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[8]),32);
    bufp->fullIData(oldp+292,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[9]),32);
    bufp->fullIData(oldp+293,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[10]),32);
    bufp->fullIData(oldp+294,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[11]),32);
    bufp->fullIData(oldp+295,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[12]),32);
    bufp->fullIData(oldp+296,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[13]),32);
    bufp->fullIData(oldp+297,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[14]),32);
    bufp->fullIData(oldp+298,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[15]),32);
    bufp->fullIData(oldp+299,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[16]),32);
    bufp->fullIData(oldp+300,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[17]),32);
    bufp->fullIData(oldp+301,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[18]),32);
    bufp->fullIData(oldp+302,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[19]),32);
    bufp->fullIData(oldp+303,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[20]),32);
    bufp->fullIData(oldp+304,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[21]),32);
    bufp->fullIData(oldp+305,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[22]),32);
    bufp->fullIData(oldp+306,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[23]),32);
    bufp->fullIData(oldp+307,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[24]),32);
    bufp->fullIData(oldp+308,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[25]),32);
    bufp->fullIData(oldp+309,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[26]),32);
    bufp->fullIData(oldp+310,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[27]),32);
    bufp->fullIData(oldp+311,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[28]),32);
    bufp->fullIData(oldp+312,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[29]),32);
    bufp->fullIData(oldp+313,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[30]),32);
    bufp->fullIData(oldp+314,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[31]),32);
    bufp->fullIData(oldp+315,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__read_csr_data),32);
    bufp->fullIData(oldp+316,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data),32);
    bufp->fullIData(oldp+317,(((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                ? 0xbU : 0U)),32);
    bufp->fullIData(oldp+318,((vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data 
                               | vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__read_csr_data)),32);
    bufp->fullIData(oldp+319,(((~ vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data) 
                               & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__read_csr_data)),32);
    bufp->fullCData(oldp+320,((0xfU & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))),4);
    bufp->fullBit(oldp+321,(((0x300U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 2U))));
    bufp->fullBit(oldp+322,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr));
    bufp->fullBit(oldp+323,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie));
    bufp->fullBit(oldp+324,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie));
    bufp->fullCData(oldp+325,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp),2);
    bufp->fullBit(oldp+326,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena));
    bufp->fullBit(oldp+327,((1U & ((~ ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 1U)) & ((1U 
                                                   & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                                   ? (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)
                                                   : 
                                                  ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                                    ? 
                                                   (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data 
                                                    >> 3U)
                                                    : (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)))))));
    bufp->fullBit(oldp+328,((1U & ((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                    ? (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)
                                    : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                           ? (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data 
                                              >> 7U)
                                           : (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)))))));
    bufp->fullCData(oldp+329,(((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                ? 3U : ((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                         ? 0U : (3U 
                                                 & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                                     ? 
                                                    (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data 
                                                     >> 0xdU)
                                                     : (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp)))))),2);
    bufp->fullBit(oldp+330,((1U & (((0x305U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                    & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 2U)) | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+331,(((0x305U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 3U))));
    bufp->fullIData(oldp+332,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mtvec_base),30);
    bufp->fullBit(oldp+333,((1U & (((0x341U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                    & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 2U)) | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl)))));
    bufp->fullBit(oldp+334,((1U & (((0x341U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                    & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 3U)) | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+335,(((0x342U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 2U))));
    bufp->fullBit(oldp+336,(((0x342U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 3U))));
    bufp->fullBit(oldp+337,(vlSelf->clk));
    bufp->fullBit(oldp+338,(vlSelf->rst));
    bufp->fullIData(oldp+339,((((~ (IData)(vlSelf->rst)) 
                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr))
                                ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                               [vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr]
                                : 0U)),32);
    bufp->fullIData(oldp+340,((((~ (IData)(vlSelf->rst)) 
                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena))
                                ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                               [vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr]
                                : 0U)),32);
    bufp->fullIData(oldp+341,((((~ (IData)(vlSelf->rst)) 
                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena))
                                ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                               [vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr]
                                : 0U)),32);
    bufp->fullIData(oldp+342,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re)
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
    bufp->fullIData(oldp+343,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr) 
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
    bufp->fullBit(oldp+344,(((~ ((IData)(vlSelf->rst) 
                                 & (0U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)))) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena) 
                                & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag) 
                                   & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr) 
                                      == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))))));
    bufp->fullBit(oldp+345,(((~ ((IData)(vlSelf->rst) 
                                 & (0U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)))) 
                             & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena) 
                                & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag) 
                                   & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr) 
                                      == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))))));
    bufp->fullCData(oldp+346,(((IData)(vlSelf->rst)
                                ? 0U : ((0U == (3U 
                                                & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                         ? 3U : ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                                  ? 0xcU
                                                  : 0U)))),4);
    bufp->fullIData(oldp+347,(((IData)(vlSelf->rst)
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
    bufp->fullBit(oldp+348,(0U));
    bufp->fullCData(oldp+349,(4U),8);
    bufp->fullBit(oldp+350,(1U));
    bufp->fullIData(oldp+351,(2U),32);
    bufp->fullIData(oldp+352,(1U),32);
    bufp->fullCData(oldp+353,(0xfU),4);
    bufp->fullCData(oldp+354,(0U),2);
}
