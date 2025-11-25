// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_25060170_top__Syms.h"


VL_ATTR_COLD void Vysyx_25060170_top___024root__trace_init_sub__TOP__0(Vysyx_25060170_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+246,"clk", false,-1);
    tracep->declBit(c+247,"rst", false,-1);
    tracep->pushNamePrefix("ysyx_25060170_top ");
    tracep->declBit(c+246,"clk", false,-1);
    tracep->declBit(c+247,"rst", false,-1);
    tracep->declBit(c+88,"exu_ifu_pcsrc", false,-1);
    tracep->declBus(c+242,"dpic_ifu_inst", false,-1, 31,0);
    tracep->declBus(c+89,"ifu_idu_inst", false,-1, 31,0);
    tracep->declBus(c+243,"ifu_idu_pc", false,-1, 31,0);
    tracep->declBit(c+258,"if_id_reg_valid", false,-1);
    tracep->declBit(c+90,"if_id_reg_ready", false,-1);
    tracep->declBit(c+91,"ex_pcsrc_o", false,-1);
    tracep->declBus(c+1,"rs1_addr", false,-1, 4,0);
    tracep->declBit(c+2,"rs1_ena", false,-1);
    tracep->declBus(c+248,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+3,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+4,"rs2_ena", false,-1);
    tracep->declBus(c+249,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+5,"rd_ena", false,-1);
    tracep->declBus(c+6,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+7,"id_alusrc_o", false,-1, 7,0);
    tracep->declBus(c+8,"id_lsctl_o", false,-1, 3,0);
    tracep->declBus(c+9,"id_wbctl_o", false,-1, 1,0);
    tracep->declBit(c+10,"id_branch_o", false,-1);
    tracep->declBit(c+11,"id_jump_o", false,-1);
    tracep->declBus(c+12,"id_csr_ctl", false,-1, 2,0);
    tracep->declBit(c+13,"id_csr_rd_ena_o", false,-1);
    tracep->declBus(c+250,"id_op1_o", false,-1, 31,0);
    tracep->declBus(c+251,"id_op2_o", false,-1, 31,0);
    tracep->declBus(c+14,"id_imm_o", false,-1, 31,0);
    tracep->declBus(c+92,"idu_dpic_rd_addr", false,-1, 4,0);
    tracep->declBus(c+252,"id_pc_o", false,-1, 31,0);
    tracep->declBus(c+93,"id_csr_addr_o", false,-1, 11,0);
    tracep->declBit(c+94,"magic_flag", false,-1);
    tracep->declBus(c+95,"id_ex_reg_op1_o", false,-1, 31,0);
    tracep->declBus(c+96,"id_ex_reg_op2_o", false,-1, 31,0);
    tracep->declBus(c+97,"id_ex_reg_imm_o", false,-1, 31,0);
    tracep->declBus(c+98,"id_ex_reg_pc_o", false,-1, 31,0);
    tracep->declBus(c+99,"id_ex_reg_csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+100,"id_ex_reg_alusrc_o", false,-1, 7,0);
    tracep->declBus(c+101,"id_ex_reg_lsctl_o", false,-1, 3,0);
    tracep->declBit(c+102,"id_ex_reg_csr_rd_ena_o", false,-1);
    tracep->declBus(c+103,"id_ex_reg_wbctl_o", false,-1, 1,0);
    tracep->declBit(c+104,"id_ex_reg_branch_o", false,-1);
    tracep->declBit(c+105,"id_ex_reg_jump_o", false,-1);
    tracep->declBus(c+106,"id_ex_reg_csr_ctl_o", false,-1, 2,0);
    tracep->declBus(c+107,"id_ex_reg_rd_addr_o", false,-1, 4,0);
    tracep->declBit(c+108,"id_ex_reg_rd_ena_o", false,-1);
    tracep->declBit(c+109,"id_ex_reg_valid_o", false,-1);
    tracep->declBit(c+258,"id_ex_reg_next_ready_i", false,-1);
    tracep->declBus(c+96,"exu_store_data_o", false,-1, 31,0);
    tracep->declBus(c+110,"exu_jump_pc_o", false,-1, 31,0);
    tracep->declBus(c+15,"exu_res_o", false,-1, 31,0);
    tracep->declBus(c+101,"exu_ls_ctl_o", false,-1, 3,0);
    tracep->declBus(c+103,"exu_wb_ctl_o", false,-1, 1,0);
    tracep->declBus(c+106,"exu_csr_ctl_o", false,-1, 2,0);
    tracep->declBit(c+108,"exu_rd_ena_o", false,-1);
    tracep->declBus(c+107,"exu_rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+111,"exu_write_csr_data", false,-1, 31,0);
    tracep->declBus(c+112,"exu_mcause_value", false,-1, 31,0);
    tracep->declBus(c+113,"ex_ls_reg_store_data_o", false,-1, 31,0);
    tracep->declBus(c+114,"ex_ls_reg_exu_res_o", false,-1, 31,0);
    tracep->declBus(c+115,"ex_ls_reg_write_csr_data_o", false,-1, 31,0);
    tracep->declBus(c+116,"ex_ls_reg_mcause_value_o", false,-1, 31,0);
    tracep->declBus(c+117,"ex_ls_reg_ls_ctl_o", false,-1, 3,0);
    tracep->declBus(c+118,"ex_ls_reg_wb_ctl_o", false,-1, 1,0);
    tracep->declBit(c+119,"ex_ls_reg_rd_ena_o", false,-1);
    tracep->declBus(c+120,"ex_ls_reg_rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+121,"ex_ls_reg_csr_ctl_o", false,-1, 2,0);
    tracep->declBit(c+122,"ex_lsu_valid_i", false,-1);
    tracep->declBit(c+258,"ex_lsu_ready_o", false,-1);
    tracep->declBus(c+253,"lsu_ls_data_o", false,-1, 31,0);
    tracep->declBit(c+16,"dpic_lsu_re", false,-1);
    tracep->declBit(c+17,"dpic_lsu_we", false,-1);
    tracep->declBus(c+18,"dpic_lsu_data_o", false,-1, 31,0);
    tracep->declBus(c+118,"ls_wbctl_o", false,-1, 1,0);
    tracep->declBit(c+119,"lsu_rd_ena_o", false,-1);
    tracep->declBus(c+120,"lsu_rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+114,"ls_exures_o", false,-1, 31,0);
    tracep->declBus(c+115,"lsu_write_csr_data_o", false,-1, 31,0);
    tracep->declBus(c+116,"lsu_mcause_value_o", false,-1, 31,0);
    tracep->declBus(c+121,"lsu_csr_ctl_o", false,-1, 2,0);
    tracep->declBus(c+19,"dpic_lsu_raddr", false,-1, 31,0);
    tracep->declBus(c+19,"dpic_lsu_waddr", false,-1, 31,0);
    tracep->declBus(c+20,"dpic_lsu_wlen", false,-1, 7,0);
    tracep->declBus(c+259,"dpic_lsu_rlen", false,-1, 7,0);
    tracep->declBus(c+123,"lsu_wbu_reg_data_o", false,-1, 31,0);
    tracep->declBus(c+124,"lsu_wbu_reg_wbctl_o", false,-1, 1,0);
    tracep->declBus(c+125,"lsu_wbu_reg_exu_res_o", false,-1, 31,0);
    tracep->declBit(c+126,"lsu_wbu_reg_rd_ena_o", false,-1);
    tracep->declBus(c+127,"lsu_wbu_reg_rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+128,"lsu_wbu_reg_write_csr_data_o", false,-1, 31,0);
    tracep->declBus(c+129,"lsu_wbu_reg_mcause_value_o", false,-1, 31,0);
    tracep->declBit(c+130,"lsu_wbu_reg_valid_o", false,-1);
    tracep->declBus(c+131,"lsu_wbu_reg_csr_ctl_o", false,-1, 2,0);
    tracep->declBus(c+21,"wb_data_o", false,-1, 31,0);
    tracep->declBit(c+22,"inst_finish_o", false,-1);
    tracep->declBus(c+132,"dpicregs0", false,-1, 31,0);
    tracep->declBus(c+133,"dpicregs1", false,-1, 31,0);
    tracep->declBus(c+134,"dpicregs2", false,-1, 31,0);
    tracep->declBus(c+135,"dpicregs3", false,-1, 31,0);
    tracep->declBus(c+136,"dpicregs4", false,-1, 31,0);
    tracep->declBus(c+137,"dpicregs5", false,-1, 31,0);
    tracep->declBus(c+138,"dpicregs6", false,-1, 31,0);
    tracep->declBus(c+139,"dpicregs7", false,-1, 31,0);
    tracep->declBus(c+140,"dpicregs8", false,-1, 31,0);
    tracep->declBus(c+141,"dpicregs9", false,-1, 31,0);
    tracep->declBus(c+142,"dpicregs10", false,-1, 31,0);
    tracep->declBus(c+143,"dpicregs11", false,-1, 31,0);
    tracep->declBus(c+144,"dpicregs12", false,-1, 31,0);
    tracep->declBus(c+145,"dpicregs13", false,-1, 31,0);
    tracep->declBus(c+146,"dpicregs14", false,-1, 31,0);
    tracep->declBus(c+147,"dpicregs15", false,-1, 31,0);
    tracep->declBus(c+148,"dpicregs16", false,-1, 31,0);
    tracep->declBus(c+149,"dpicregs17", false,-1, 31,0);
    tracep->declBus(c+150,"dpicregs18", false,-1, 31,0);
    tracep->declBus(c+151,"dpicregs19", false,-1, 31,0);
    tracep->declBus(c+152,"dpicregs20", false,-1, 31,0);
    tracep->declBus(c+153,"dpicregs21", false,-1, 31,0);
    tracep->declBus(c+154,"dpicregs22", false,-1, 31,0);
    tracep->declBus(c+155,"dpicregs23", false,-1, 31,0);
    tracep->declBus(c+156,"dpicregs24", false,-1, 31,0);
    tracep->declBus(c+157,"dpicregs25", false,-1, 31,0);
    tracep->declBus(c+158,"dpicregs26", false,-1, 31,0);
    tracep->declBus(c+159,"dpicregs27", false,-1, 31,0);
    tracep->declBus(c+160,"dpicregs28", false,-1, 31,0);
    tracep->declBus(c+161,"dpicregs29", false,-1, 31,0);
    tracep->declBus(c+162,"dpicregs30", false,-1, 31,0);
    tracep->declBus(c+163,"dpicregs31", false,-1, 31,0);
    tracep->declBus(c+164,"dpicmstatus", false,-1, 31,0);
    tracep->declBus(c+165,"dpicmtvec", false,-1, 31,0);
    tracep->declBus(c+166,"dpicmepc", false,-1, 31,0);
    tracep->declBus(c+167,"dpicmcause", false,-1, 31,0);
    tracep->declBus(c+168,"read_csr_data", false,-1, 31,0);
    tracep->declBus(c+239,"dpic_lsu_data_i", false,-1, 31,0);
    tracep->pushNamePrefix("u_ysyx_25060170_DPIC ");
    tracep->declBit(c+246,"clk", false,-1);
    tracep->declBit(c+247,"rst", false,-1);
    tracep->declBus(c+243,"pc_i", false,-1, 31,0);
    tracep->declBus(c+242,"inst_o", false,-1, 31,0);
    tracep->declBus(c+92,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+14,"imm", false,-1, 31,0);
    tracep->declBus(c+132,"regs0", false,-1, 31,0);
    tracep->declBus(c+133,"regs1", false,-1, 31,0);
    tracep->declBus(c+134,"regs2", false,-1, 31,0);
    tracep->declBus(c+135,"regs3", false,-1, 31,0);
    tracep->declBus(c+136,"regs4", false,-1, 31,0);
    tracep->declBus(c+137,"regs5", false,-1, 31,0);
    tracep->declBus(c+138,"regs6", false,-1, 31,0);
    tracep->declBus(c+139,"regs7", false,-1, 31,0);
    tracep->declBus(c+140,"regs8", false,-1, 31,0);
    tracep->declBus(c+141,"regs9", false,-1, 31,0);
    tracep->declBus(c+142,"regs10", false,-1, 31,0);
    tracep->declBus(c+143,"regs11", false,-1, 31,0);
    tracep->declBus(c+144,"regs12", false,-1, 31,0);
    tracep->declBus(c+145,"regs13", false,-1, 31,0);
    tracep->declBus(c+146,"regs14", false,-1, 31,0);
    tracep->declBus(c+147,"regs15", false,-1, 31,0);
    tracep->declBus(c+148,"regs16", false,-1, 31,0);
    tracep->declBus(c+149,"regs17", false,-1, 31,0);
    tracep->declBus(c+150,"regs18", false,-1, 31,0);
    tracep->declBus(c+151,"regs19", false,-1, 31,0);
    tracep->declBus(c+152,"regs20", false,-1, 31,0);
    tracep->declBus(c+153,"regs21", false,-1, 31,0);
    tracep->declBus(c+154,"regs22", false,-1, 31,0);
    tracep->declBus(c+155,"regs23", false,-1, 31,0);
    tracep->declBus(c+156,"regs24", false,-1, 31,0);
    tracep->declBus(c+157,"regs25", false,-1, 31,0);
    tracep->declBus(c+158,"regs26", false,-1, 31,0);
    tracep->declBus(c+159,"regs27", false,-1, 31,0);
    tracep->declBus(c+160,"regs28", false,-1, 31,0);
    tracep->declBus(c+161,"regs29", false,-1, 31,0);
    tracep->declBus(c+162,"regs30", false,-1, 31,0);
    tracep->declBus(c+163,"regs31", false,-1, 31,0);
    tracep->declBus(c+164,"mstatus", false,-1, 31,0);
    tracep->declBus(c+165,"mtvec", false,-1, 31,0);
    tracep->declBus(c+166,"mepc", false,-1, 31,0);
    tracep->declBus(c+167,"mcause", false,-1, 31,0);
    tracep->declBit(c+16,"re", false,-1);
    tracep->declBit(c+17,"we", false,-1);
    tracep->declBus(c+18,"data_i", false,-1, 31,0);
    tracep->declBus(c+20,"wlen", false,-1, 7,0);
    tracep->declBus(c+259,"rlen", false,-1, 7,0);
    tracep->declBit(c+22,"inst_finish", false,-1);
    tracep->declBus(c+239,"data_o", false,-1, 31,0);
    tracep->declBus(c+19,"raddr", false,-1, 31,0);
    tracep->declBus(c+19,"waddr", false,-1, 31,0);
    tracep->declBit(c+94,"magic_flag", false,-1);
    tracep->declBit(c+244,"jal", false,-1);
    tracep->declBit(c+245,"jalr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_csr ");
    tracep->declBit(c+246,"clk", false,-1);
    tracep->declBit(c+247,"rst", false,-1);
    tracep->declBit(c+102,"csr_rd_ena", false,-1);
    tracep->declBus(c+131,"csr_ctl", false,-1, 2,0);
    tracep->declBus(c+99,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+129,"mcause_value", false,-1, 31,0);
    tracep->declBus(c+128,"write_csr_data", false,-1, 31,0);
    tracep->declBus(c+168,"read_csr_data", false,-1, 31,0);
    tracep->declBus(c+164,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+166,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+165,"mtvec_o", false,-1, 31,0);
    tracep->declBus(c+167,"mcause_o", false,-1, 31,0);
    tracep->declBit(c+169,"mstatus_rd", false,-1);
    tracep->declBit(c+169,"mstatus_wr", false,-1);
    tracep->declBit(c+170,"mstatus_mie", false,-1);
    tracep->declBit(c+171,"mstatus_mpie", false,-1);
    tracep->declBus(c+172,"mstatus_mpp", false,-1, 1,0);
    tracep->declBus(c+164,"mstatus", false,-1, 31,0);
    tracep->declBit(c+173,"mstatus_ie_ena", false,-1);
    tracep->declBit(c+174,"mie_set", false,-1);
    tracep->declBit(c+175,"mpie_set", false,-1);
    tracep->declBus(c+176,"mpp_set", false,-1, 1,0);
    tracep->declBit(c+177,"mtvec_rd", false,-1);
    tracep->declBit(c+178,"mtvec_wr", false,-1);
    tracep->declBus(c+179,"mtvec_base", false,-1, 31,2);
    tracep->declBus(c+260,"mtvec_mode", false,-1, 1,0);
    tracep->declBus(c+165,"mtvec", false,-1, 31,0);
    tracep->declBit(c+180,"mepc_rd", false,-1);
    tracep->declBit(c+181,"mepc_wr", false,-1);
    tracep->declBus(c+166,"mepc", false,-1, 31,0);
    tracep->declBit(c+182,"mcause_rd", false,-1);
    tracep->declBit(c+183,"mcause_wr", false,-1);
    tracep->declBus(c+167,"mcause", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_ex_lsu_reg ");
    tracep->declBit(c+246,"clk", false,-1);
    tracep->declBit(c+247,"rst", false,-1);
    tracep->declBit(c+109,"valid", false,-1);
    tracep->declBit(c+258,"ready", false,-1);
    tracep->declBit(c+122,"valid_o", false,-1);
    tracep->declBit(c+258,"next_ready", false,-1);
    tracep->declBus(c+96,"store_data_i", false,-1, 31,0);
    tracep->declBit(c+88,"ex_pcsrc_i", false,-1);
    tracep->declBus(c+15,"exu_res_i", false,-1, 31,0);
    tracep->declBus(c+111,"write_csr_data_i", false,-1, 31,0);
    tracep->declBit(c+108,"rd_ena_i", false,-1);
    tracep->declBus(c+107,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+112,"mcause_value_i", false,-1, 31,0);
    tracep->declBus(c+101,"ls_ctl_i", false,-1, 3,0);
    tracep->declBus(c+103,"wbctl_i", false,-1, 1,0);
    tracep->declBus(c+106,"csr_ctl_i", false,-1, 2,0);
    tracep->declBus(c+113,"store_data_o", false,-1, 31,0);
    tracep->declBus(c+114,"exu_res_o", false,-1, 31,0);
    tracep->declBus(c+115,"write_csr_data_o", false,-1, 31,0);
    tracep->declBit(c+119,"rd_ena_o", false,-1);
    tracep->declBus(c+120,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+116,"mcause_value_o", false,-1, 31,0);
    tracep->declBus(c+117,"ls_ctl_o", false,-1, 3,0);
    tracep->declBus(c+118,"wbctl_o", false,-1, 1,0);
    tracep->declBus(c+121,"csr_ctl_o", false,-1, 2,0);
    tracep->declBit(c+91,"ex_pcsrc_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_exu ");
    tracep->declBit(c+247,"rst", false,-1);
    tracep->declBus(c+95,"op1", false,-1, 31,0);
    tracep->declBus(c+96,"op2", false,-1, 31,0);
    tracep->declBus(c+97,"imm", false,-1, 31,0);
    tracep->declBus(c+98,"pc_i", false,-1, 31,0);
    tracep->declBit(c+105,"jump_i", false,-1);
    tracep->declBus(c+100,"alu_sel", false,-1, 7,0);
    tracep->declBit(c+104,"branch_i", false,-1);
    tracep->declBus(c+101,"ls_ctl_i", false,-1, 3,0);
    tracep->declBus(c+103,"wbctl_i", false,-1, 1,0);
    tracep->declBus(c+106,"csr_ctl", false,-1, 2,0);
    tracep->declBit(c+108,"rd_ena_i", false,-1);
    tracep->declBus(c+107,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+168,"read_csr_data", false,-1, 31,0);
    tracep->declBus(c+96,"store_data", false,-1, 31,0);
    tracep->declBus(c+110,"jump_pc_o", false,-1, 31,0);
    tracep->declBit(c+88,"ex_pcsrc_o", false,-1);
    tracep->declBus(c+15,"exu_res", false,-1, 31,0);
    tracep->declBus(c+101,"ls_ctl_o", false,-1, 3,0);
    tracep->declBus(c+103,"wbctl_o", false,-1, 1,0);
    tracep->declBus(c+106,"csr_ctl_o", false,-1, 2,0);
    tracep->declBit(c+108,"rd_ena_o", false,-1);
    tracep->declBus(c+107,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+111,"write_csr_data", false,-1, 31,0);
    tracep->declBus(c+112,"mcause_value", false,-1, 31,0);
    tracep->declBus(c+184,"op1_add_op2", false,-1, 31,0);
    tracep->declBus(c+185,"op1_sub_op2", false,-1, 31,0);
    tracep->declBit(c+186,"op1_lt_op2", false,-1);
    tracep->declBus(c+187,"op1_sra_op2", false,-1, 31,0);
    tracep->declQuad(c+188,"mul", false,-1, 63,0);
    tracep->declBus(c+190,"op1_mul_op2", false,-1, 31,0);
    tracep->declBus(c+191,"op1_mulh_op2", false,-1, 31,0);
    tracep->declBus(c+192,"div", false,-1, 31,0);
    tracep->declBus(c+193,"rem", false,-1, 31,0);
    tracep->declBus(c+23,"alu_res", false,-1, 31,0);
    tracep->declBit(c+194,"ex_branch", false,-1);
    tracep->declBus(c+195,"set_data", false,-1, 31,0);
    tracep->declBus(c+196,"clear_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_id_ex_reg ");
    tracep->declBit(c+246,"clk", false,-1);
    tracep->declBit(c+247,"rst", false,-1);
    tracep->declBus(c+250,"op1_i", false,-1, 31,0);
    tracep->declBus(c+251,"op2_i", false,-1, 31,0);
    tracep->declBus(c+14,"imm_i", false,-1, 31,0);
    tracep->declBus(c+252,"pc_i", false,-1, 31,0);
    tracep->declBus(c+93,"csr_addr_i", false,-1, 11,0);
    tracep->declBit(c+5,"rd_ena_i", false,-1);
    tracep->declBus(c+6,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+7,"alusrc_i", false,-1, 7,0);
    tracep->declBus(c+8,"lsctl_i", false,-1, 3,0);
    tracep->declBit(c+13,"csr_rd_ena_i", false,-1);
    tracep->declBus(c+9,"wbctl_i", false,-1, 1,0);
    tracep->declBit(c+10,"branch_i", false,-1);
    tracep->declBit(c+11,"jump_i", false,-1);
    tracep->declBus(c+12,"csr_ctl_i", false,-1, 2,0);
    tracep->declBit(c+90,"valid", false,-1);
    tracep->declBit(c+258,"ready", false,-1);
    tracep->declBus(c+95,"op1_o", false,-1, 31,0);
    tracep->declBus(c+96,"op2_o", false,-1, 31,0);
    tracep->declBus(c+97,"imm_o", false,-1, 31,0);
    tracep->declBus(c+98,"pc_o", false,-1, 31,0);
    tracep->declBus(c+99,"csr_addr_o", false,-1, 11,0);
    tracep->declBit(c+108,"rd_ena_o", false,-1);
    tracep->declBus(c+107,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+100,"alusrc_o", false,-1, 7,0);
    tracep->declBus(c+101,"lsctl_o", false,-1, 3,0);
    tracep->declBit(c+102,"csr_rd_ena_o", false,-1);
    tracep->declBus(c+103,"wbctl_o", false,-1, 1,0);
    tracep->declBit(c+104,"branch_o", false,-1);
    tracep->declBit(c+105,"jump_o", false,-1);
    tracep->declBus(c+106,"csr_ctl_o", false,-1, 2,0);
    tracep->declBit(c+109,"valid_o", false,-1);
    tracep->declBit(c+258,"next_ready", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_idu ");
    tracep->declBit(c+247,"rst", false,-1);
    tracep->declBus(c+89,"inst_i", false,-1, 31,0);
    tracep->declBus(c+243,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1,"rs1_addr", false,-1, 4,0);
    tracep->declBit(c+2,"rs1_ena", false,-1);
    tracep->declBus(c+248,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+3,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+4,"rs2_ena", false,-1);
    tracep->declBus(c+249,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+5,"rd_ena", false,-1);
    tracep->declBus(c+6,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+7,"alusrc_o", false,-1, 7,0);
    tracep->declBus(c+8,"lsctl_o", false,-1, 3,0);
    tracep->declBus(c+9,"wbctl_o", false,-1, 1,0);
    tracep->declBit(c+10,"branch_o", false,-1);
    tracep->declBit(c+11,"jump_o", false,-1);
    tracep->declBus(c+12,"csr_ctl", false,-1, 2,0);
    tracep->declBit(c+13,"csr_rd_ena_o", false,-1);
    tracep->declBus(c+250,"op1", false,-1, 31,0);
    tracep->declBus(c+251,"op2", false,-1, 31,0);
    tracep->declBus(c+14,"imm", false,-1, 31,0);
    tracep->declBus(c+92,"idu_dpic_rd_addr", false,-1, 4,0);
    tracep->declBus(c+252,"pc_o", false,-1, 31,0);
    tracep->declBus(c+93,"csr_addr_o", false,-1, 11,0);
    tracep->declBit(c+94,"magic_flag", false,-1);
    tracep->declBus(c+92,"rd", false,-1, 4,0);
    tracep->declBus(c+197,"rs1", false,-1, 4,0);
    tracep->declBus(c+198,"rs2", false,-1, 4,0);
    tracep->declBit(c+24,"imm_ena", false,-1);
    tracep->declBit(c+25,"csr_wr_ena", false,-1);
    tracep->declBit(c+13,"csr_rd_ena", false,-1);
    tracep->declBit(c+26,"mret_ena", false,-1);
    tracep->declBit(c+27,"ecall_ena", false,-1);
    tracep->pushNamePrefix("decode ");
    tracep->declBit(c+247,"rst", false,-1);
    tracep->declBus(c+89,"inst", false,-1, 31,0);
    tracep->declBit(c+2,"rs1_ena", false,-1);
    tracep->declBit(c+4,"rs2_ena", false,-1);
    tracep->declBit(c+11,"jump", false,-1);
    tracep->declBus(c+9,"wb_ctl", false,-1, 1,0);
    tracep->declBus(c+8,"mem_ctl", false,-1, 3,0);
    tracep->declBit(c+10,"branch", false,-1);
    tracep->declBus(c+14,"ext_imm", false,-1, 31,0);
    tracep->declBit(c+24,"imm_ena", false,-1);
    tracep->declBus(c+7,"alu_ctl", false,-1, 7,0);
    tracep->declBus(c+199,"opcode", false,-1, 6,0);
    tracep->declBus(c+200,"funct3", false,-1, 2,0);
    tracep->declBus(c+201,"funct7", false,-1, 6,0);
    tracep->declBus(c+93,"i_imm", false,-1, 11,0);
    tracep->declBus(c+202,"j_imm", false,-1, 20,1);
    tracep->declBus(c+203,"u_imm", false,-1, 19,0);
    tracep->declBus(c+204,"s_imm", false,-1, 11,0);
    tracep->declBus(c+205,"b_imm", false,-1, 12,1);
    tracep->declBus(c+28,"inst_type", false,-1, 7,0);
    tracep->declBit(c+29,"inst_lui", false,-1);
    tracep->declBit(c+30,"inst_auipc", false,-1);
    tracep->declBit(c+31,"inst_jal", false,-1);
    tracep->declBit(c+32,"inst_jalr", false,-1);
    tracep->declBit(c+33,"inst_sb", false,-1);
    tracep->declBit(c+34,"inst_sh", false,-1);
    tracep->declBit(c+35,"inst_sw", false,-1);
    tracep->declBit(c+36,"inst_sd", false,-1);
    tracep->declBit(c+37,"inst_lb", false,-1);
    tracep->declBit(c+38,"inst_lh", false,-1);
    tracep->declBit(c+39,"inst_lw", false,-1);
    tracep->declBit(c+40,"inst_ld", false,-1);
    tracep->declBit(c+41,"inst_lbu", false,-1);
    tracep->declBit(c+42,"inst_lhu", false,-1);
    tracep->declBit(c+43,"inst_lwu", false,-1);
    tracep->declBit(c+44,"inst_beq", false,-1);
    tracep->declBit(c+45,"inst_bne", false,-1);
    tracep->declBit(c+46,"inst_blt", false,-1);
    tracep->declBit(c+47,"inst_bge", false,-1);
    tracep->declBit(c+48,"inst_bltu", false,-1);
    tracep->declBit(c+49,"inst_bgeu", false,-1);
    tracep->declBit(c+50,"inst_add", false,-1);
    tracep->declBit(c+51,"inst_sub", false,-1);
    tracep->declBit(c+52,"inst_sll", false,-1);
    tracep->declBit(c+53,"inst_slt", false,-1);
    tracep->declBit(c+54,"inst_sltu", false,-1);
    tracep->declBit(c+55,"inst_xor", false,-1);
    tracep->declBit(c+56,"inst_srl", false,-1);
    tracep->declBit(c+57,"inst_sra", false,-1);
    tracep->declBit(c+58,"inst_or", false,-1);
    tracep->declBit(c+59,"inst_and", false,-1);
    tracep->declBit(c+60,"inst_div", false,-1);
    tracep->declBit(c+61,"inst_divu", false,-1);
    tracep->declBit(c+62,"inst_mul", false,-1);
    tracep->declBit(c+63,"inst_mulh", false,-1);
    tracep->declBit(c+64,"inst_mulhsu", false,-1);
    tracep->declBit(c+65,"inst_mulhu", false,-1);
    tracep->declBit(c+66,"inst_rem", false,-1);
    tracep->declBit(c+67,"inst_remu", false,-1);
    tracep->declBit(c+68,"inst_addi", false,-1);
    tracep->declBit(c+69,"inst_slti", false,-1);
    tracep->declBit(c+70,"inst_sltiu", false,-1);
    tracep->declBit(c+71,"inst_xori", false,-1);
    tracep->declBit(c+72,"inst_ori", false,-1);
    tracep->declBit(c+73,"inst_andi", false,-1);
    tracep->declBit(c+74,"inst_slli", false,-1);
    tracep->declBit(c+75,"inst_srli", false,-1);
    tracep->declBit(c+76,"inst_srai", false,-1);
    tracep->declBit(c+77,"inst_ecall", false,-1);
    tracep->declBit(c+78,"inst_mret", false,-1);
    tracep->declBit(c+79,"inst_csrrw", false,-1);
    tracep->declBit(c+80,"inst_csrrs", false,-1);
    tracep->declBit(c+81,"inst_csrrc", false,-1);
    tracep->declBit(c+82,"inst_csrrwi", false,-1);
    tracep->declBit(c+83,"inst_csrrsi", false,-1);
    tracep->declBit(c+84,"inst_csrrci", false,-1);
    tracep->declBit(c+85,"inst_ebreak", false,-1);
    tracep->declBit(c+86,"inst_csr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ysyx_25060170_if_id_reg ");
    tracep->declBit(c+246,"clk", false,-1);
    tracep->declBit(c+247,"rst", false,-1);
    tracep->declBit(c+91,"pcsrc_i", false,-1);
    tracep->declBus(c+110,"ex_pc_i", false,-1, 31,0);
    tracep->declBus(c+242,"inst_i", false,-1, 31,0);
    tracep->declBus(c+243,"pc_o", false,-1, 31,0);
    tracep->declBus(c+89,"inst_o", false,-1, 31,0);
    tracep->declBit(c+258,"valid", false,-1);
    tracep->declBit(c+90,"ready", false,-1);
    tracep->declBus(c+254,"pc_next", false,-1, 31,0);
    tracep->declBus(c+255,"pc_plus4", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_lsu ");
    tracep->declBit(c+247,"rst", false,-1);
    tracep->declBus(c+114,"alu_res", false,-1, 31,0);
    tracep->declBus(c+113,"store_data", false,-1, 31,0);
    tracep->declBus(c+117,"ls_ctl", false,-1, 3,0);
    tracep->declBus(c+118,"wb_ctl_i", false,-1, 1,0);
    tracep->declBit(c+119,"rd_ena_i", false,-1);
    tracep->declBus(c+120,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+114,"exu_res_i", false,-1, 31,0);
    tracep->declBus(c+115,"write_csr_data_i", false,-1, 31,0);
    tracep->declBus(c+116,"mcause_value_i", false,-1, 31,0);
    tracep->declBus(c+121,"csr_ctl_i", false,-1, 2,0);
    tracep->declBus(c+253,"ls_data_o", false,-1, 31,0);
    tracep->declBus(c+118,"wb_ctl_o", false,-1, 1,0);
    tracep->declBit(c+119,"rd_ena_o", false,-1);
    tracep->declBus(c+120,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+114,"exu_res_o", false,-1, 31,0);
    tracep->declBus(c+116,"mcause_value_o", false,-1, 31,0);
    tracep->declBus(c+115,"write_csr_data_o", false,-1, 31,0);
    tracep->declBus(c+121,"csr_ctl_o", false,-1, 2,0);
    tracep->declBit(c+16,"re", false,-1);
    tracep->declBit(c+17,"we", false,-1);
    tracep->declBus(c+239,"data_i", false,-1, 31,0);
    tracep->declBus(c+18,"data_o", false,-1, 31,0);
    tracep->declBus(c+19,"raddr", false,-1, 31,0);
    tracep->declBus(c+19,"waddr", false,-1, 31,0);
    tracep->declBus(c+20,"wlen", false,-1, 7,0);
    tracep->declBus(c+259,"rlen", false,-1, 7,0);
    tracep->declBus(c+256,"load_data", false,-1, 31,0);
    tracep->declBus(c+206,"byte_sel", false,-1, 1,0);
    tracep->declBus(c+206,"half_sel", false,-1, 1,0);
    tracep->declBus(c+240,"data_byte", false,-1, 7,0);
    tracep->declBus(c+241,"data_half", false,-1, 15,0);
    tracep->declBus(c+239,"data_word", false,-1, 31,0);
    tracep->declBus(c+87,"sb_mask", false,-1, 3,0);
    tracep->declBus(c+257,"sh_mask", false,-1, 3,0);
    tracep->declBus(c+261,"sw_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_lsu_wbu_reg ");
    tracep->declBit(c+246,"clk", false,-1);
    tracep->declBit(c+247,"rst", false,-1);
    tracep->declBus(c+253,"ls_data_i", false,-1, 31,0);
    tracep->declBus(c+118,"wbctl_i", false,-1, 1,0);
    tracep->declBus(c+114,"exu_res_i", false,-1, 31,0);
    tracep->declBit(c+119,"rd_ena_i", false,-1);
    tracep->declBus(c+120,"rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+115,"write_csr_data_i", false,-1, 31,0);
    tracep->declBus(c+116,"mcause_value_i", false,-1, 31,0);
    tracep->declBus(c+121,"csr_ctl_i", false,-1, 2,0);
    tracep->declBit(c+122,"valid", false,-1);
    tracep->declBit(c+258,"ready", false,-1);
    tracep->declBus(c+123,"ls_data_o", false,-1, 31,0);
    tracep->declBus(c+124,"wbctl_o", false,-1, 1,0);
    tracep->declBus(c+125,"exu_res_o", false,-1, 31,0);
    tracep->declBit(c+126,"rd_ena_o", false,-1);
    tracep->declBus(c+127,"rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+128,"write_csr_data_o", false,-1, 31,0);
    tracep->declBus(c+129,"mcause_value_o", false,-1, 31,0);
    tracep->declBus(c+131,"csr_ctl_o", false,-1, 2,0);
    tracep->declBit(c+130,"valid_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_regfile ");
    tracep->declBit(c+246,"clk", false,-1);
    tracep->declBit(c+247,"rst", false,-1);
    tracep->declBus(c+127,"waddr", false,-1, 4,0);
    tracep->declBus(c+21,"wdata", false,-1, 31,0);
    tracep->declBit(c+126,"wen", false,-1);
    tracep->declBus(c+1,"raddr1", false,-1, 4,0);
    tracep->declBus(c+248,"rdata1", false,-1, 31,0);
    tracep->declBit(c+2,"ren1", false,-1);
    tracep->declBus(c+3,"raddr2", false,-1, 4,0);
    tracep->declBus(c+249,"rdata2", false,-1, 31,0);
    tracep->declBit(c+4,"ren2", false,-1);
    tracep->declBus(c+132,"regs0", false,-1, 31,0);
    tracep->declBus(c+133,"regs1", false,-1, 31,0);
    tracep->declBus(c+134,"regs2", false,-1, 31,0);
    tracep->declBus(c+135,"regs3", false,-1, 31,0);
    tracep->declBus(c+136,"regs4", false,-1, 31,0);
    tracep->declBus(c+137,"regs5", false,-1, 31,0);
    tracep->declBus(c+138,"regs6", false,-1, 31,0);
    tracep->declBus(c+139,"regs7", false,-1, 31,0);
    tracep->declBus(c+140,"regs8", false,-1, 31,0);
    tracep->declBus(c+141,"regs9", false,-1, 31,0);
    tracep->declBus(c+142,"regs10", false,-1, 31,0);
    tracep->declBus(c+143,"regs11", false,-1, 31,0);
    tracep->declBus(c+144,"regs12", false,-1, 31,0);
    tracep->declBus(c+145,"regs13", false,-1, 31,0);
    tracep->declBus(c+146,"regs14", false,-1, 31,0);
    tracep->declBus(c+147,"regs15", false,-1, 31,0);
    tracep->declBus(c+148,"regs16", false,-1, 31,0);
    tracep->declBus(c+149,"regs17", false,-1, 31,0);
    tracep->declBus(c+150,"regs18", false,-1, 31,0);
    tracep->declBus(c+151,"regs19", false,-1, 31,0);
    tracep->declBus(c+152,"regs20", false,-1, 31,0);
    tracep->declBus(c+153,"regs21", false,-1, 31,0);
    tracep->declBus(c+154,"regs22", false,-1, 31,0);
    tracep->declBus(c+155,"regs23", false,-1, 31,0);
    tracep->declBus(c+156,"regs24", false,-1, 31,0);
    tracep->declBus(c+157,"regs25", false,-1, 31,0);
    tracep->declBus(c+158,"regs26", false,-1, 31,0);
    tracep->declBus(c+159,"regs27", false,-1, 31,0);
    tracep->declBus(c+160,"regs28", false,-1, 31,0);
    tracep->declBus(c+161,"regs29", false,-1, 31,0);
    tracep->declBus(c+162,"regs30", false,-1, 31,0);
    tracep->declBus(c+163,"regs31", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+207+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ysyx_25060170_wbu ");
    tracep->declBit(c+247,"rst", false,-1);
    tracep->declBus(c+123,"ls_rd_data", false,-1, 31,0);
    tracep->declBus(c+124,"wb_ctl", false,-1, 1,0);
    tracep->declBus(c+125,"exu_res", false,-1, 31,0);
    tracep->declBus(c+21,"wb_data", false,-1, 31,0);
    tracep->declBit(c+22,"inst_finish", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_25060170_top___024root__trace_init_top(Vysyx_25060170_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root__trace_init_top\n"); );
    // Body
    Vysyx_25060170_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_25060170_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_25060170_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_25060170_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_25060170_top___024root__trace_register(Vysyx_25060170_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_25060170_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_25060170_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_25060170_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_25060170_top___024root__trace_full_sub_0(Vysyx_25060170_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_25060170_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_25060170_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25060170_top___024root*>(voidSelf);
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_25060170_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_25060170_top___024root__trace_full_sub_0(Vysyx_25060170_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(((IData)(vlSelf->ysyx_25060170_top__DOT__rs1_ena)
                              ? (0x1fU & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                          >> 0xfU))
                              : 0U)),5);
    bufp->fullBit(oldp+2,(vlSelf->ysyx_25060170_top__DOT__rs1_ena));
    bufp->fullCData(oldp+3,(((IData)(vlSelf->ysyx_25060170_top__DOT__rs2_ena)
                              ? (0x1fU & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                          >> 0x14U))
                              : 0U)),5);
    bufp->fullBit(oldp+4,(vlSelf->ysyx_25060170_top__DOT__rs2_ena));
    bufp->fullBit(oldp+5,(vlSelf->ysyx_25060170_top__DOT__rd_ena));
    bufp->fullCData(oldp+6,(((IData)(vlSelf->ysyx_25060170_top__DOT__rd_ena)
                              ? (0x1fU & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                          >> 7U)) : 0U)),5);
    bufp->fullCData(oldp+7,(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o),8);
    bufp->fullCData(oldp+8,((0xfU & ((1U & (- (IData)(
                                                      (0x41U 
                                                       == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))))) 
                                     | ((2U & (- (IData)(
                                                         (0x82U 
                                                          == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))))) 
                                        | ((4U & (- (IData)(
                                                            (0x81U 
                                                             == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))))) 
                                           | ((5U & 
                                               (- (IData)(
                                                          (7U 
                                                           == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))))) 
                                              | ((9U 
                                                  & (- (IData)(
                                                               (0x1aU 
                                                                == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))))) 
                                                 | ((0xaU 
                                                     & (- (IData)(
                                                                  (0x34U 
                                                                   == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))))) 
                                                    | ((0xbU 
                                                        & (- (IData)(
                                                                     (0x68U 
                                                                      == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))))) 
                                                       | ((0xcU 
                                                           & (- (IData)(
                                                                        (0xd0U 
                                                                         == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))))) 
                                                          | ((0xdU 
                                                              & (- (IData)(
                                                                           (0xbU 
                                                                            == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))))) 
                                                             | ((0xeU 
                                                                 & (- (IData)(
                                                                              (0x16U 
                                                                               == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))))) 
                                                                | (- (IData)(
                                                                             (0x2cU 
                                                                              == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o)))))))))))))))),4);
    bufp->fullCData(oldp+9,(vlSelf->ysyx_25060170_top__DOT__id_wbctl_o),2);
    bufp->fullBit(oldp+10,(vlSelf->ysyx_25060170_top__DOT__id_branch_o));
    bufp->fullBit(oldp+11,(vlSelf->ysyx_25060170_top__DOT__id_jump_o));
    bufp->fullCData(oldp+12,((((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__csr_wr_ena) 
                               << 2U) | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__ecall_ena) 
                                          << 1U) | (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__mret_ena)))),3);
    bufp->fullBit(oldp+13,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__csr_rd_ena));
    bufp->fullIData(oldp+14,(vlSelf->ysyx_25060170_top__DOT__id_imm_o),32);
    bufp->fullIData(oldp+15,(((0U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_ctl_o))
                               ? vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__alu_res
                               : vlSelf->ysyx_25060170_top__DOT__read_csr_data)),32);
    bufp->fullBit(oldp+16,(vlSelf->ysyx_25060170_top__DOT__dpic_lsu_re));
    bufp->fullBit(oldp+17,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h0e831b4e__0) 
                            & (~ ((IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o) 
                                  >> 3U)))));
    bufp->fullIData(oldp+18,(vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_o),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_25060170_top__DOT__dpic_lsu_raddr),32);
    bufp->fullCData(oldp+20,(vlSelf->ysyx_25060170_top__DOT__dpic_lsu_wlen),8);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_25060170_top__DOT__wb_data_o),32);
    bufp->fullBit(oldp+22,(vlSelf->ysyx_25060170_top__DOT__inst_finish_o));
    bufp->fullIData(oldp+23,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__alu_res),32);
    bufp->fullBit(oldp+24,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77eb01fa__0) 
                            | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hf62a170c__0) 
                               | ((IData)(vlSelf->ysyx_25060170_top__DOT__id_branch_o) 
                                  | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h70c0839c__0) 
                                     | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h70f4116c__0) 
                                        | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77acc5df__0) 
                                           | (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hd9b03bc2__0)))))))));
    bufp->fullBit(oldp+25,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__csr_wr_ena));
    bufp->fullBit(oldp+26,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__mret_ena));
    bufp->fullBit(oldp+27,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__ecall_ena));
    bufp->fullCData(oldp+28,((((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77acc5df__0) 
                               << 7U) | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7773c72a__0) 
                                          << 6U) | 
                                         (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h70f4116c__0) 
                                           << 5U) | 
                                          (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h70c0839c__0) 
                                            << 4U) 
                                           | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77488b95__0) 
                                               << 3U) 
                                              | (((IData)(vlSelf->ysyx_25060170_top__DOT__id_branch_o) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hf62a170c__0) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77eb01fa__0))))))))),8);
    bufp->fullBit(oldp+29,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_lui));
    bufp->fullBit(oldp+30,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_auipc));
    bufp->fullBit(oldp+31,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_jal));
    bufp->fullBit(oldp+32,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_jalr));
    bufp->fullBit(oldp+33,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h489c6f46__0))));
    bufp->fullBit(oldp+34,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h489c6f46__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+35,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_he80da865__0))));
    bufp->fullBit(oldp+36,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_he80da865__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+37,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hc65f4c50__0))));
    bufp->fullBit(oldp+38,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hc65f4c50__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+39,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h1167153d__0))));
    bufp->fullBit(oldp+40,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h1167153d__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+41,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h29152e89__0))));
    bufp->fullBit(oldp+42,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h29152e89__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+43,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_heac6e652__0) 
                            & (IData)((0x2000U == (0x3000U 
                                                   & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst))))));
    bufp->fullBit(oldp+44,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7855af38__0))));
    bufp->fullBit(oldp+45,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7855af38__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+46,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h2bc0716a__0))));
    bufp->fullBit(oldp+47,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h2bc0716a__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+48,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h6fd23990__0))));
    bufp->fullBit(oldp+49,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h6fd23990__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+50,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hb3c59122__0) 
                            & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h03cab0f1__0))));
    bufp->fullBit(oldp+51,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hb3c59122__0) 
                            & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7b49f5a3__0))));
    bufp->fullBit(oldp+52,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h36e9ef3c__0))));
    bufp->fullBit(oldp+53,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_he2955f6b__0))));
    bufp->fullBit(oldp+54,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h4c825e07__0))));
    bufp->fullBit(oldp+55,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h3b427111__0))));
    bufp->fullBit(oldp+56,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hb3ea081b__0) 
                            & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h03cab0f1__0))));
    bufp->fullBit(oldp+57,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hb3ea081b__0) 
                            & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7b49f5a3__0))));
    bufp->fullBit(oldp+58,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hd7439362__0))));
    bufp->fullBit(oldp+59,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7a82fdcc__0))));
    bufp->fullBit(oldp+60,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h3b427111__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+61,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hb3ea081b__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+62,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hb3c59122__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+63,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h36e9ef3c__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+64,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_he2955f6b__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+65,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h4c825e07__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+66,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hd7439362__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+67,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7a82fdcc__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+68,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h41ceee20__0))));
    bufp->fullBit(oldp+69,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hc1b77381__0))));
    bufp->fullBit(oldp+70,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hc1b77381__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+71,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_ha08c85bd__0))));
    bufp->fullBit(oldp+72,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h5a06bcf6__0))));
    bufp->fullBit(oldp+73,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h5a06bcf6__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+74,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h41ceee20__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+75,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                >> 0x1eU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h2e86cea5__0))));
    bufp->fullBit(oldp+76,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h2e86cea5__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                               >> 0x1eU))));
    bufp->fullBit(oldp+77,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_ecall));
    bufp->fullBit(oldp+78,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h84595378__0) 
                            & (IData)((0x30000000U 
                                       == (0x30000000U 
                                           & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst))))));
    bufp->fullBit(oldp+79,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrw));
    bufp->fullBit(oldp+80,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrs));
    bufp->fullBit(oldp+81,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrc));
    bufp->fullBit(oldp+82,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hed177170__0) 
                            & (IData)((0x1000U == (0x3000U 
                                                   & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst))))));
    bufp->fullBit(oldp+83,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrsi));
    bufp->fullBit(oldp+84,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hbd811272__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+85,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h84595378__0) 
                            & (1U == (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+86,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrw) 
                            | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrs) 
                               | (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrc)))));
    bufp->fullCData(oldp+87,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_lsu__DOT__sb_mask),4);
    bufp->fullBit(oldp+88,(((IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_jump_o) 
                            | (((IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_branch_o) 
                                & ((0xeU == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                    ? (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                       == vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o)
                                    : ((0x1cU == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                        ? (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                           != vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o)
                                        : ((0xe0U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                            ? (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                               < vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o)
                                            : ((0xdU 
                                                == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                ? (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                                   >= vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o)
                                                : (
                                                   (0x38U 
                                                    == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                    ? (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_lt_op2)
                                                    : 
                                                   ((0x70U 
                                                     == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o)) 
                                                    & (~ (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_lt_op2))))))))) 
                               | (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_h485df6cb__0)))));
    bufp->fullIData(oldp+89,(vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst),32);
    bufp->fullBit(oldp+90,(vlSelf->ysyx_25060170_top__DOT__if_id_reg_ready));
    bufp->fullBit(oldp+91,(vlSelf->ysyx_25060170_top__DOT__ex_pcsrc_o));
    bufp->fullCData(oldp+92,((0x1fU & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                       >> 7U))),5);
    bufp->fullSData(oldp+93,((vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                              >> 0x14U)),12);
    bufp->fullBit(oldp+94,((0x40000033U == vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst)));
    bufp->fullIData(oldp+95,(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o),32);
    bufp->fullIData(oldp+96,(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o),32);
    bufp->fullIData(oldp+97,(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_imm_o),32);
    bufp->fullIData(oldp+98,(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_pc_o),32);
    bufp->fullSData(oldp+99,(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_addr_o),12);
    bufp->fullCData(oldp+100,(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o),8);
    bufp->fullCData(oldp+101,(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_lsctl_o),4);
    bufp->fullBit(oldp+102,(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_rd_ena_o));
    bufp->fullCData(oldp+103,(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_wbctl_o),2);
    bufp->fullBit(oldp+104,(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_branch_o));
    bufp->fullBit(oldp+105,(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_jump_o));
    bufp->fullCData(oldp+106,(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_ctl_o),3);
    bufp->fullCData(oldp+107,(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_rd_addr_o),5);
    bufp->fullBit(oldp+108,(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_rd_ena_o));
    bufp->fullBit(oldp+109,(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_valid_o));
    bufp->fullIData(oldp+110,((((0x21U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o)) 
                                | (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_branch_o))
                                ? (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_imm_o 
                                   + vlSelf->ysyx_25060170_top__DOT__id_ex_reg_pc_o)
                                : ((0x42U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                    ? (0xfffffffeU 
                                       & (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_imm_o 
                                          + vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o))
                                    : ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_h485df6cb__0)
                                        ? vlSelf->ysyx_25060170_top__DOT__read_csr_data
                                        : 0U)))),32);
    bufp->fullIData(oldp+111,(vlSelf->ysyx_25060170_top__DOT__exu_write_csr_data),32);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_25060170_top__DOT__exu_mcause_value),32);
    bufp->fullIData(oldp+113,(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_store_data_o),32);
    bufp->fullIData(oldp+114,(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_exu_res_o),32);
    bufp->fullIData(oldp+115,(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_write_csr_data_o),32);
    bufp->fullIData(oldp+116,(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_mcause_value_o),32);
    bufp->fullCData(oldp+117,(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o),4);
    bufp->fullCData(oldp+118,(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_wb_ctl_o),2);
    bufp->fullBit(oldp+119,(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_rd_ena_o));
    bufp->fullCData(oldp+120,(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_rd_addr_o),5);
    bufp->fullCData(oldp+121,(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_csr_ctl_o),3);
    bufp->fullBit(oldp+122,(vlSelf->ysyx_25060170_top__DOT__ex_lsu_valid_i));
    bufp->fullIData(oldp+123,(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_data_o),32);
    bufp->fullCData(oldp+124,(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_wbctl_o),2);
    bufp->fullIData(oldp+125,(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_exu_res_o),32);
    bufp->fullBit(oldp+126,(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_rd_ena_o));
    bufp->fullCData(oldp+127,(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_rd_addr_o),5);
    bufp->fullIData(oldp+128,(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_write_csr_data_o),32);
    bufp->fullIData(oldp+129,(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_mcause_value_o),32);
    bufp->fullBit(oldp+130,(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_valid_o));
    bufp->fullCData(oldp+131,(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o),3);
    bufp->fullIData(oldp+132,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0U]),32);
    bufp->fullIData(oldp+133,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [1U]),32);
    bufp->fullIData(oldp+134,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [2U]),32);
    bufp->fullIData(oldp+135,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [3U]),32);
    bufp->fullIData(oldp+136,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [4U]),32);
    bufp->fullIData(oldp+137,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [5U]),32);
    bufp->fullIData(oldp+138,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [6U]),32);
    bufp->fullIData(oldp+139,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [7U]),32);
    bufp->fullIData(oldp+140,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [8U]),32);
    bufp->fullIData(oldp+141,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [9U]),32);
    bufp->fullIData(oldp+142,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xaU]),32);
    bufp->fullIData(oldp+143,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xbU]),32);
    bufp->fullIData(oldp+144,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xcU]),32);
    bufp->fullIData(oldp+145,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xdU]),32);
    bufp->fullIData(oldp+146,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xeU]),32);
    bufp->fullIData(oldp+147,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0xfU]),32);
    bufp->fullIData(oldp+148,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x10U]),32);
    bufp->fullIData(oldp+149,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x11U]),32);
    bufp->fullIData(oldp+150,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x12U]),32);
    bufp->fullIData(oldp+151,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x13U]),32);
    bufp->fullIData(oldp+152,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x14U]),32);
    bufp->fullIData(oldp+153,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x15U]),32);
    bufp->fullIData(oldp+154,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x16U]),32);
    bufp->fullIData(oldp+155,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x17U]),32);
    bufp->fullIData(oldp+156,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x18U]),32);
    bufp->fullIData(oldp+157,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x19U]),32);
    bufp->fullIData(oldp+158,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1aU]),32);
    bufp->fullIData(oldp+159,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1bU]),32);
    bufp->fullIData(oldp+160,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1cU]),32);
    bufp->fullIData(oldp+161,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1dU]),32);
    bufp->fullIData(oldp+162,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1eU]),32);
    bufp->fullIData(oldp+163,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1fU]),32);
    bufp->fullIData(oldp+164,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus),32);
    bufp->fullIData(oldp+165,((vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
                               << 2U)),32);
    bufp->fullIData(oldp+166,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mepc),32);
    bufp->fullIData(oldp+167,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mcause),32);
    bufp->fullIData(oldp+168,(vlSelf->ysyx_25060170_top__DOT__read_csr_data),32);
    bufp->fullBit(oldp+169,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_rd));
    bufp->fullBit(oldp+170,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie));
    bufp->fullBit(oldp+171,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie));
    bufp->fullCData(oldp+172,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp),2);
    bufp->fullBit(oldp+173,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena));
    bufp->fullBit(oldp+174,((1U & ((~ ((IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o) 
                                       >> 1U)) & ((1U 
                                                   & (IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o))
                                                   ? (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)
                                                   : 
                                                  ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_rd)
                                                    ? 
                                                   (vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_write_csr_data_o 
                                                    >> 3U)
                                                    : (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)))))));
    bufp->fullBit(oldp+175,((1U & ((2U & (IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o))
                                    ? (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)
                                    : ((IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o) 
                                       | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_rd)
                                           ? (vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_write_csr_data_o 
                                              >> 7U)
                                           : (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)))))));
    bufp->fullCData(oldp+176,(((2U & (IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o))
                                ? 3U : ((1U & (IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o))
                                         ? 0U : (3U 
                                                 & ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_rd)
                                                     ? 
                                                    (vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_write_csr_data_o 
                                                     >> 0xdU)
                                                     : (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp)))))),2);
    bufp->fullBit(oldp+177,((1U & (((0x305U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_addr_o)) 
                                    & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_rd_ena_o)) 
                                   | ((IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o) 
                                      >> 1U)))));
    bufp->fullBit(oldp+178,(((0x305U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_addr_o)) 
                             & ((IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o) 
                                >> 2U))));
    bufp->fullIData(oldp+179,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mtvec_base),30);
    bufp->fullBit(oldp+180,((1U & (((0x341U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_addr_o)) 
                                    & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_rd_ena_o)) 
                                   | (IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o)))));
    bufp->fullBit(oldp+181,((1U & (((0x341U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_addr_o)) 
                                    & ((IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o) 
                                       >> 2U)) | ((IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+182,(((0x342U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_addr_o)) 
                             & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_rd_ena_o))));
    bufp->fullBit(oldp+183,(((0x342U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_addr_o)) 
                             & ((IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o) 
                                >> 2U))));
    bufp->fullIData(oldp+184,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2),32);
    bufp->fullIData(oldp+185,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2),32);
    bufp->fullBit(oldp+186,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_lt_op2));
    bufp->fullIData(oldp+187,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2),32);
    bufp->fullQData(oldp+188,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__mul),64);
    bufp->fullIData(oldp+190,((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__mul)),32);
    bufp->fullIData(oldp+191,((IData)((vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__mul 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+192,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__div),32);
    bufp->fullIData(oldp+193,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__rem),32);
    bufp->fullBit(oldp+194,(((IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_branch_o) 
                             & ((0xeU == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                 ? (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                    == vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o)
                                 : ((0x1cU == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                     ? (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                        != vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o)
                                     : ((0xe0U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                         ? (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                            < vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o)
                                         : ((0xdU == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                             ? (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                                >= vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o)
                                             : ((0x38U 
                                                 == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                 ? (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_lt_op2)
                                                 : 
                                                ((0x70U 
                                                  == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o)) 
                                                 & (~ (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_lt_op2)))))))))));
    bufp->fullIData(oldp+195,((vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                               | vlSelf->ysyx_25060170_top__DOT__read_csr_data)),32);
    bufp->fullIData(oldp+196,(((~ vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o) 
                               & vlSelf->ysyx_25060170_top__DOT__read_csr_data)),32);
    bufp->fullCData(oldp+197,((0x1fU & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+198,((0x1fU & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+199,((0x7fU & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst)),7);
    bufp->fullCData(oldp+200,((7U & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+201,((vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+202,(((0x80000U & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                            >> 0xcU)) 
                               | ((0x7f800U & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                               >> 1U)) 
                                  | ((0x400U & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                >> 0xaU)) 
                                     | (0x3ffU & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                  >> 0x15U)))))),20);
    bufp->fullIData(oldp+203,((vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                               >> 0xcU)),20);
    bufp->fullSData(oldp+204,(((0xfe0U & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                           >> 7U)))),12);
    bufp->fullSData(oldp+205,(((0x800U & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                          >> 0x14U)) 
                               | ((0x400U & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                             << 3U)) 
                                  | ((0x3f0U & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                >> 0x15U)) 
                                     | (0xfU & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                >> 8U)))))),12);
    bufp->fullCData(oldp+206,((3U & vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_exu_res_o)),2);
    bufp->fullIData(oldp+207,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[0]),32);
    bufp->fullIData(oldp+208,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[1]),32);
    bufp->fullIData(oldp+209,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[2]),32);
    bufp->fullIData(oldp+210,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[3]),32);
    bufp->fullIData(oldp+211,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[4]),32);
    bufp->fullIData(oldp+212,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[5]),32);
    bufp->fullIData(oldp+213,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[6]),32);
    bufp->fullIData(oldp+214,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[7]),32);
    bufp->fullIData(oldp+215,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[8]),32);
    bufp->fullIData(oldp+216,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[9]),32);
    bufp->fullIData(oldp+217,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[10]),32);
    bufp->fullIData(oldp+218,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[11]),32);
    bufp->fullIData(oldp+219,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[12]),32);
    bufp->fullIData(oldp+220,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[13]),32);
    bufp->fullIData(oldp+221,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[14]),32);
    bufp->fullIData(oldp+222,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[15]),32);
    bufp->fullIData(oldp+223,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[16]),32);
    bufp->fullIData(oldp+224,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[17]),32);
    bufp->fullIData(oldp+225,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[18]),32);
    bufp->fullIData(oldp+226,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[19]),32);
    bufp->fullIData(oldp+227,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[20]),32);
    bufp->fullIData(oldp+228,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[21]),32);
    bufp->fullIData(oldp+229,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[22]),32);
    bufp->fullIData(oldp+230,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[23]),32);
    bufp->fullIData(oldp+231,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[24]),32);
    bufp->fullIData(oldp+232,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[25]),32);
    bufp->fullIData(oldp+233,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[26]),32);
    bufp->fullIData(oldp+234,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[27]),32);
    bufp->fullIData(oldp+235,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[28]),32);
    bufp->fullIData(oldp+236,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[29]),32);
    bufp->fullIData(oldp+237,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[30]),32);
    bufp->fullIData(oldp+238,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[31]),32);
    bufp->fullIData(oldp+239,(vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i),32);
    bufp->fullCData(oldp+240,((0xffU & vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i)),8);
    bufp->fullSData(oldp+241,((0xffffU & vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i)),16);
    bufp->fullIData(oldp+242,(vlSelf->ysyx_25060170_top__DOT__dpic_ifu_inst),32);
    bufp->fullIData(oldp+243,(vlSelf->ysyx_25060170_top__DOT__ifu_idu_pc),32);
    bufp->fullBit(oldp+244,((0x6fU == (0x7fU & vlSelf->ysyx_25060170_top__DOT__dpic_ifu_inst))));
    bufp->fullBit(oldp+245,((0x67U == (0x7fU & vlSelf->ysyx_25060170_top__DOT__dpic_ifu_inst))));
    bufp->fullBit(oldp+246,(vlSelf->clk));
    bufp->fullBit(oldp+247,(vlSelf->rst));
    bufp->fullIData(oldp+248,((((~ (IData)(vlSelf->rst)) 
                                & (IData)(vlSelf->ysyx_25060170_top__DOT__rs1_ena))
                                ? vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                               [((IData)(vlSelf->ysyx_25060170_top__DOT__rs1_ena)
                                  ? (0x1fU & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                              >> 0xfU))
                                  : 0U)] : 0U)),32);
    bufp->fullIData(oldp+249,((((~ (IData)(vlSelf->rst)) 
                                & (IData)(vlSelf->ysyx_25060170_top__DOT__rs2_ena))
                                ? vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                               [((IData)(vlSelf->ysyx_25060170_top__DOT__rs2_ena)
                                  ? (0x1fU & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                              >> 0x14U))
                                  : 0U)] : 0U)),32);
    bufp->fullIData(oldp+250,(((IData)(vlSelf->rst)
                                ? 0U : ((IData)(vlSelf->ysyx_25060170_top__DOT__rs1_ena)
                                         ? (((~ (IData)(vlSelf->rst)) 
                                             & (IData)(vlSelf->ysyx_25060170_top__DOT__rs1_ena))
                                             ? vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                            [((IData)(vlSelf->ysyx_25060170_top__DOT__rs1_ena)
                                               ? (0x1fU 
                                                  & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                     >> 0xfU))
                                               : 0U)]
                                             : 0U) : 
                                        (((0xa0U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o)) 
                                          | (0x21U 
                                             == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o)))
                                          ? vlSelf->ysyx_25060170_top__DOT__ifu_idu_pc
                                          : ((((0x94U 
                                                == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o)) 
                                               | (0xc8U 
                                                  == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))) 
                                              | (0xa4U 
                                                 == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o)))
                                              ? (0x1fU 
                                                 & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                    >> 0xfU))
                                              : 0U))))),32);
    bufp->fullIData(oldp+251,(((IData)(vlSelf->rst)
                                ? 0U : ((IData)(vlSelf->ysyx_25060170_top__DOT__rs2_ena)
                                         ? (((~ (IData)(vlSelf->rst)) 
                                             & (IData)(vlSelf->ysyx_25060170_top__DOT__rs2_ena))
                                             ? vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                            [((IData)(vlSelf->ysyx_25060170_top__DOT__rs2_ena)
                                               ? (0x1fU 
                                                  & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                     >> 0x14U))
                                               : 0U)]
                                             : 0U) : 
                                        (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77eb01fa__0) 
                                          | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hf62a170c__0) 
                                             | ((IData)(vlSelf->ysyx_25060170_top__DOT__id_branch_o) 
                                                | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h70c0839c__0) 
                                                   | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h70f4116c__0) 
                                                      | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77acc5df__0) 
                                                         | (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hd9b03bc2__0)))))))
                                          ? vlSelf->ysyx_25060170_top__DOT__id_imm_o
                                          : 0U)))),32);
    bufp->fullIData(oldp+252,(((IData)(vlSelf->rst)
                                ? 0U : vlSelf->ysyx_25060170_top__DOT__ifu_idu_pc)),32);
    bufp->fullIData(oldp+253,(((IData)(vlSelf->ysyx_25060170_top__DOT__dpic_lsu_re)
                                ? ((IData)(vlSelf->rst)
                                    ? 0U : ((8U & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                             ? ((4U 
                                                 & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                                   ? 0U
                                                   : 
                                                  (0xffffU 
                                                   & vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                                   ? 
                                                  (0xffU 
                                                   & vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i)
                                                   : 0U))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                                   ? vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i
                                                   : 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i))
                                                   : 0U)))
                                             : 0U))
                                : 0U)),32);
    bufp->fullIData(oldp+254,(((0x80000000U & (- (IData)((IData)(vlSelf->rst)))) 
                               | (((- (IData)((1U & 
                                               ((~ (IData)(vlSelf->rst)) 
                                                & (~ (IData)(vlSelf->ysyx_25060170_top__DOT__ex_pcsrc_o)))))) 
                                   & ((0x80000000U 
                                       & (- (IData)((IData)(vlSelf->rst)))) 
                                      | ((- (IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelf->rst))))) 
                                         & ((IData)(4U) 
                                            + vlSelf->ysyx_25060170_top__DOT__ifu_idu_pc)))) 
                                  | ((- (IData)(((~ (IData)(vlSelf->rst)) 
                                                 & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_pcsrc_o)))) 
                                     & (((0x21U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o)) 
                                         | (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_branch_o))
                                         ? (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_imm_o 
                                            + vlSelf->ysyx_25060170_top__DOT__id_ex_reg_pc_o)
                                         : ((0x42U 
                                             == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                             ? (0xfffffffeU 
                                                & (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_imm_o 
                                                   + vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o))
                                             : ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_h485df6cb__0)
                                                 ? vlSelf->ysyx_25060170_top__DOT__read_csr_data
                                                 : 0U))))))),32);
    bufp->fullIData(oldp+255,(((0x80000000U & (- (IData)((IData)(vlSelf->rst)))) 
                               | ((- (IData)((1U & 
                                              (~ (IData)(vlSelf->rst))))) 
                                  & ((IData)(4U) + vlSelf->ysyx_25060170_top__DOT__ifu_idu_pc)))),32);
    bufp->fullIData(oldp+256,(((IData)(vlSelf->rst)
                                ? 0U : ((8U & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                         ? ((4U & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                             ? ((2U 
                                                 & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                                  ? 0U
                                                  : 
                                                 (0xffffU 
                                                  & vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                                  ? 
                                                 (0xffU 
                                                  & vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i)
                                                  : 0U))
                                             : ((2U 
                                                 & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                                  ? vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i
                                                  : 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i))
                                                  : 0U)))
                                         : 0U))),32);
    bufp->fullCData(oldp+257,(((IData)(vlSelf->rst)
                                ? 0U : ((0U == (3U 
                                                & vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_exu_res_o))
                                         ? 3U : ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_exu_res_o))
                                                  ? 0xcU
                                                  : 0U)))),4);
    bufp->fullBit(oldp+258,(1U));
    bufp->fullCData(oldp+259,(4U),8);
    bufp->fullCData(oldp+260,(0U),2);
    bufp->fullCData(oldp+261,(0xfU),4);
}
