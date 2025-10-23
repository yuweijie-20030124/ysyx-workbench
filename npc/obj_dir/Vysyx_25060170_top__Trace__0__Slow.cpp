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
    tracep->declBit(c+210,"clk", false,-1);
    tracep->declBit(c+211,"rst", false,-1);
    tracep->pushNamePrefix("ysyx_25060170_top ");
    tracep->declBit(c+210,"clk", false,-1);
    tracep->declBit(c+211,"rst", false,-1);
    tracep->declBus(c+119,"if_id_inst", false,-1, 31,0);
    tracep->declBus(c+119,"DPIC_if_inst", false,-1, 31,0);
    tracep->declBus(c+120,"if_id_pc", false,-1, 31,0);
    tracep->declBus(c+1,"id_reg_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+2,"id_reg_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+3,"id_reg_rd_addr", false,-1, 4,0);
    tracep->declBit(c+4,"id_reg_rs1_ena", false,-1);
    tracep->declBit(c+5,"id_reg_rs2_ena", false,-1);
    tracep->declBit(c+6,"id_reg_rd_ena", false,-1);
    tracep->declBus(c+7,"id_ex_imm", false,-1, 31,0);
    tracep->declBit(c+8,"id_ex_branch", false,-1);
    tracep->declBit(c+9,"id_ex_jump", false,-1);
    tracep->declBus(c+10,"id_ls_ctl", false,-1, 3,0);
    tracep->declBus(c+11,"id_wb_ctl", false,-1, 1,0);
    tracep->declBus(c+12,"id_ex_alu_sel", false,-1, 7,0);
    tracep->declBus(c+13,"id_ex_pc", false,-1, 31,0);
    tracep->declBus(c+14,"id_ex_op1", false,-1, 31,0);
    tracep->declBus(c+15,"id_ex_op2", false,-1, 31,0);
    tracep->declBus(c+16,"id_ex_csrctl", false,-1, 3,0);
    tracep->declBit(c+121,"magic_flag", false,-1);
    tracep->declBus(c+17,"ex_aludata", false,-1, 31,0);
    tracep->declBus(c+15,"ex_ls_store_data", false,-1, 31,0);
    tracep->declBus(c+18,"ex_if_pc", false,-1, 31,0);
    tracep->declBit(c+19,"ex_if_pc_sel", false,-1);
    tracep->declBus(c+122,"ex_dpic_mstatus", false,-1, 31,0);
    tracep->declBus(c+123,"ex_dpic_mepc", false,-1, 31,0);
    tracep->declBus(c+124,"ex_dpic_mtvec", false,-1, 31,0);
    tracep->declBus(c+125,"ex_dpic_mcause", false,-1, 31,0);
    tracep->declBus(c+212,"ls_wb_data", false,-1, 31,0);
    tracep->declBus(c+213,"wb_reg_rd_data", false,-1, 31,0);
    tracep->declBus(c+214,"reg_id_rs1_data", false,-1, 31,0);
    tracep->declBus(c+215,"reg_id_rs2_data", false,-1, 31,0);
    tracep->declBus(c+126,"regs0", false,-1, 31,0);
    tracep->declBus(c+127,"regs1", false,-1, 31,0);
    tracep->declBus(c+128,"regs2", false,-1, 31,0);
    tracep->declBus(c+129,"regs3", false,-1, 31,0);
    tracep->declBus(c+130,"regs4", false,-1, 31,0);
    tracep->declBus(c+131,"regs5", false,-1, 31,0);
    tracep->declBus(c+132,"regs6", false,-1, 31,0);
    tracep->declBus(c+133,"regs7", false,-1, 31,0);
    tracep->declBus(c+134,"regs8", false,-1, 31,0);
    tracep->declBus(c+135,"regs9", false,-1, 31,0);
    tracep->declBus(c+136,"regs10", false,-1, 31,0);
    tracep->declBus(c+137,"regs11", false,-1, 31,0);
    tracep->declBus(c+138,"regs12", false,-1, 31,0);
    tracep->declBus(c+139,"regs13", false,-1, 31,0);
    tracep->declBus(c+140,"regs14", false,-1, 31,0);
    tracep->declBus(c+141,"regs15", false,-1, 31,0);
    tracep->declBus(c+142,"regs16", false,-1, 31,0);
    tracep->declBus(c+143,"regs17", false,-1, 31,0);
    tracep->declBus(c+144,"regs18", false,-1, 31,0);
    tracep->declBus(c+145,"regs19", false,-1, 31,0);
    tracep->declBus(c+146,"regs20", false,-1, 31,0);
    tracep->declBus(c+147,"regs21", false,-1, 31,0);
    tracep->declBus(c+148,"regs22", false,-1, 31,0);
    tracep->declBus(c+149,"regs23", false,-1, 31,0);
    tracep->declBus(c+150,"regs24", false,-1, 31,0);
    tracep->declBus(c+151,"regs25", false,-1, 31,0);
    tracep->declBus(c+152,"regs26", false,-1, 31,0);
    tracep->declBus(c+153,"regs27", false,-1, 31,0);
    tracep->declBus(c+154,"regs28", false,-1, 31,0);
    tracep->declBus(c+155,"regs29", false,-1, 31,0);
    tracep->declBus(c+156,"regs30", false,-1, 31,0);
    tracep->declBus(c+157,"regs31", false,-1, 31,0);
    tracep->declBus(c+158,"rd", false,-1, 4,0);
    tracep->pushNamePrefix("dpic ");
    tracep->declBit(c+210,"clk", false,-1);
    tracep->declBit(c+211,"rst", false,-1);
    tracep->declBus(c+120,"pc_i", false,-1, 31,0);
    tracep->declBus(c+119,"inst_o", false,-1, 31,0);
    tracep->declBus(c+158,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+7,"imm", false,-1, 31,0);
    tracep->declBus(c+126,"regs0", false,-1, 31,0);
    tracep->declBus(c+127,"regs1", false,-1, 31,0);
    tracep->declBus(c+128,"regs2", false,-1, 31,0);
    tracep->declBus(c+129,"regs3", false,-1, 31,0);
    tracep->declBus(c+130,"regs4", false,-1, 31,0);
    tracep->declBus(c+131,"regs5", false,-1, 31,0);
    tracep->declBus(c+132,"regs6", false,-1, 31,0);
    tracep->declBus(c+133,"regs7", false,-1, 31,0);
    tracep->declBus(c+134,"regs8", false,-1, 31,0);
    tracep->declBus(c+135,"regs9", false,-1, 31,0);
    tracep->declBus(c+136,"regs10", false,-1, 31,0);
    tracep->declBus(c+137,"regs11", false,-1, 31,0);
    tracep->declBus(c+138,"regs12", false,-1, 31,0);
    tracep->declBus(c+139,"regs13", false,-1, 31,0);
    tracep->declBus(c+140,"regs14", false,-1, 31,0);
    tracep->declBus(c+141,"regs15", false,-1, 31,0);
    tracep->declBus(c+142,"regs16", false,-1, 31,0);
    tracep->declBus(c+143,"regs17", false,-1, 31,0);
    tracep->declBus(c+144,"regs18", false,-1, 31,0);
    tracep->declBus(c+145,"regs19", false,-1, 31,0);
    tracep->declBus(c+146,"regs20", false,-1, 31,0);
    tracep->declBus(c+147,"regs21", false,-1, 31,0);
    tracep->declBus(c+148,"regs22", false,-1, 31,0);
    tracep->declBus(c+149,"regs23", false,-1, 31,0);
    tracep->declBus(c+150,"regs24", false,-1, 31,0);
    tracep->declBus(c+151,"regs25", false,-1, 31,0);
    tracep->declBus(c+152,"regs26", false,-1, 31,0);
    tracep->declBus(c+153,"regs27", false,-1, 31,0);
    tracep->declBus(c+154,"regs28", false,-1, 31,0);
    tracep->declBus(c+155,"regs29", false,-1, 31,0);
    tracep->declBus(c+156,"regs30", false,-1, 31,0);
    tracep->declBus(c+157,"regs31", false,-1, 31,0);
    tracep->declBus(c+122,"mstatus", false,-1, 31,0);
    tracep->declBus(c+123,"mtvec", false,-1, 31,0);
    tracep->declBus(c+124,"mepc", false,-1, 31,0);
    tracep->declBus(c+125,"mcause", false,-1, 31,0);
    tracep->declBit(c+121,"magic_flag", false,-1);
    tracep->declBus(c+222,"rlen", false,-1, 7,0);
    tracep->declBit(c+159,"jal", false,-1);
    tracep->declBit(c+160,"jalr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu2 ");
    tracep->declBit(c+210,"clk", false,-1);
    tracep->declBit(c+211,"rst", false,-1);
    tracep->declBus(c+14,"op1", false,-1, 31,0);
    tracep->declBus(c+15,"op2", false,-1, 31,0);
    tracep->declBus(c+7,"imm", false,-1, 31,0);
    tracep->declBus(c+13,"pc_i", false,-1, 31,0);
    tracep->declBit(c+9,"jump_i", false,-1);
    tracep->declBus(c+12,"alu_sel", false,-1, 7,0);
    tracep->declBit(c+8,"branch_i", false,-1);
    tracep->declBus(c+16,"csr_ctl", false,-1, 3,0);
    tracep->declBus(c+15,"store_data", false,-1, 31,0);
    tracep->declBus(c+18,"jump_pc_o", false,-1, 31,0);
    tracep->declBit(c+19,"ex_pcsrc_o", false,-1);
    tracep->declBus(c+17,"exu_res", false,-1, 31,0);
    tracep->declBus(c+122,"csr_ex_mstatus", false,-1, 31,0);
    tracep->declBus(c+123,"csr_ex_mepc", false,-1, 31,0);
    tracep->declBus(c+124,"csr_ex_mtvec", false,-1, 31,0);
    tracep->declBus(c+125,"csr_ex_mcause", false,-1, 31,0);
    tracep->declBus(c+20,"op1_add_op2", false,-1, 31,0);
    tracep->declBus(c+21,"op1_sub_op2", false,-1, 31,0);
    tracep->declBit(c+22,"op1_lt_op2", false,-1);
    tracep->declBus(c+23,"op1_sra_op2", false,-1, 31,0);
    tracep->declQuad(c+24,"mul", false,-1, 63,0);
    tracep->declBus(c+26,"op1_mul_op2", false,-1, 31,0);
    tracep->declBus(c+27,"op1_mulh_op2", false,-1, 31,0);
    tracep->declBus(c+28,"div", false,-1, 31,0);
    tracep->declBus(c+29,"rem", false,-1, 31,0);
    tracep->declBus(c+30,"alu_res", false,-1, 31,0);
    tracep->declBit(c+31,"ex_branch", false,-1);
    tracep->declBus(c+32,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+33,"read_csr_data", false,-1, 31,0);
    tracep->declBus(c+34,"write_csr_data", false,-1, 31,0);
    tracep->declBus(c+35,"mcause_value", false,-1, 31,0);
    tracep->declBus(c+36,"set_data", false,-1, 31,0);
    tracep->declBus(c+37,"clear_data", false,-1, 31,0);
    tracep->pushNamePrefix("csr_operate ");
    tracep->declBit(c+210,"clk", false,-1);
    tracep->declBit(c+211,"rst", false,-1);
    tracep->declBus(c+16,"csr_ctl", false,-1, 3,0);
    tracep->declBus(c+32,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+35,"mcause_value", false,-1, 31,0);
    tracep->declBus(c+34,"write_csr_data", false,-1, 31,0);
    tracep->declBus(c+33,"read_csr_data", false,-1, 31,0);
    tracep->declBus(c+122,"mstatus_o", false,-1, 31,0);
    tracep->declBus(c+123,"mepc_o", false,-1, 31,0);
    tracep->declBus(c+124,"mtvec_o", false,-1, 31,0);
    tracep->declBus(c+125,"mcause_o", false,-1, 31,0);
    tracep->declBit(c+38,"mstatus_rd", false,-1);
    tracep->declBit(c+39,"mstatus_wr", false,-1);
    tracep->declBit(c+161,"mstatus_mie", false,-1);
    tracep->declBit(c+162,"mstatus_mpie", false,-1);
    tracep->declBus(c+163,"mstatus_mpp", false,-1, 1,0);
    tracep->declBus(c+122,"mstatus", false,-1, 31,0);
    tracep->declBit(c+40,"mstatus_ie_ena", false,-1);
    tracep->declBit(c+41,"mie_set", false,-1);
    tracep->declBit(c+42,"mpie_set", false,-1);
    tracep->declBus(c+43,"mpp_set", false,-1, 1,0);
    tracep->declBit(c+44,"mtvec_rd", false,-1);
    tracep->declBit(c+45,"mtvec_wr", false,-1);
    tracep->declBus(c+164,"mtvec_base", false,-1, 31,2);
    tracep->declBus(c+223,"mtvec_mode", false,-1, 1,0);
    tracep->declBus(c+124,"mtvec", false,-1, 31,0);
    tracep->declBit(c+46,"mepc_rd", false,-1);
    tracep->declBit(c+47,"mepc_wr", false,-1);
    tracep->declBus(c+123,"mepc", false,-1, 31,0);
    tracep->declBit(c+48,"mcause_rd", false,-1);
    tracep->declBit(c+49,"mcause_wr", false,-1);
    tracep->declBus(c+125,"mcause", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu1 ");
    tracep->declBit(c+211,"rst", false,-1);
    tracep->declBus(c+119,"inst_i", false,-1, 31,0);
    tracep->declBus(c+120,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1,"rs1_addr", false,-1, 4,0);
    tracep->declBit(c+4,"rs1_ena", false,-1);
    tracep->declBus(c+214,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+2,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+5,"rs2_ena", false,-1);
    tracep->declBus(c+215,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+6,"rd_ena", false,-1);
    tracep->declBus(c+3,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+12,"alusrc_o", false,-1, 7,0);
    tracep->declBus(c+10,"lsctl_o", false,-1, 3,0);
    tracep->declBus(c+11,"wbctl_o", false,-1, 1,0);
    tracep->declBit(c+8,"branch_o", false,-1);
    tracep->declBit(c+9,"jump_o", false,-1);
    tracep->declBus(c+16,"csr_ctl", false,-1, 3,0);
    tracep->declBus(c+14,"op1", false,-1, 31,0);
    tracep->declBus(c+15,"op2", false,-1, 31,0);
    tracep->declBus(c+7,"imm", false,-1, 31,0);
    tracep->declBus(c+158,"idu_dpic_rd_addr", false,-1, 4,0);
    tracep->declBus(c+13,"pc_o", false,-1, 31,0);
    tracep->declBit(c+121,"magic_flag", false,-1);
    tracep->declBus(c+158,"rd", false,-1, 4,0);
    tracep->declBus(c+165,"rs1", false,-1, 4,0);
    tracep->declBus(c+166,"rs2", false,-1, 4,0);
    tracep->declBit(c+50,"imm_ena", false,-1);
    tracep->declBit(c+51,"csr_wr_ena", false,-1);
    tracep->declBit(c+52,"csr_rd_ena", false,-1);
    tracep->declBit(c+53,"mret_ena", false,-1);
    tracep->declBit(c+54,"ecall_ena", false,-1);
    tracep->pushNamePrefix("decode ");
    tracep->declBit(c+211,"rst", false,-1);
    tracep->declBus(c+119,"inst", false,-1, 31,0);
    tracep->declBit(c+4,"rs1_ena", false,-1);
    tracep->declBit(c+5,"rs2_ena", false,-1);
    tracep->declBit(c+9,"jump", false,-1);
    tracep->declBus(c+11,"wb_ctl", false,-1, 1,0);
    tracep->declBus(c+10,"mem_ctl", false,-1, 3,0);
    tracep->declBit(c+8,"branch", false,-1);
    tracep->declBus(c+7,"ext_imm", false,-1, 31,0);
    tracep->declBit(c+50,"imm_ena", false,-1);
    tracep->declBus(c+12,"alu_ctl", false,-1, 7,0);
    tracep->declBus(c+167,"opcode", false,-1, 6,0);
    tracep->declBus(c+168,"funct3", false,-1, 2,0);
    tracep->declBus(c+169,"funct7", false,-1, 6,0);
    tracep->declBus(c+170,"i_imm", false,-1, 11,0);
    tracep->declBus(c+171,"j_imm", false,-1, 20,1);
    tracep->declBus(c+172,"u_imm", false,-1, 19,0);
    tracep->declBus(c+173,"s_imm", false,-1, 11,0);
    tracep->declBus(c+174,"b_imm", false,-1, 12,1);
    tracep->declBus(c+55,"inst_type", false,-1, 7,0);
    tracep->declBit(c+56,"inst_lui", false,-1);
    tracep->declBit(c+57,"inst_auipc", false,-1);
    tracep->declBit(c+58,"inst_jal", false,-1);
    tracep->declBit(c+59,"inst_jalr", false,-1);
    tracep->declBit(c+60,"inst_sb", false,-1);
    tracep->declBit(c+61,"inst_sh", false,-1);
    tracep->declBit(c+62,"inst_sw", false,-1);
    tracep->declBit(c+63,"inst_sd", false,-1);
    tracep->declBit(c+64,"inst_lb", false,-1);
    tracep->declBit(c+65,"inst_lh", false,-1);
    tracep->declBit(c+66,"inst_lw", false,-1);
    tracep->declBit(c+67,"inst_ld", false,-1);
    tracep->declBit(c+68,"inst_lbu", false,-1);
    tracep->declBit(c+69,"inst_lhu", false,-1);
    tracep->declBit(c+70,"inst_lwu", false,-1);
    tracep->declBit(c+71,"inst_beq", false,-1);
    tracep->declBit(c+72,"inst_bne", false,-1);
    tracep->declBit(c+73,"inst_blt", false,-1);
    tracep->declBit(c+74,"inst_bge", false,-1);
    tracep->declBit(c+75,"inst_bltu", false,-1);
    tracep->declBit(c+76,"inst_bgeu", false,-1);
    tracep->declBit(c+77,"inst_add", false,-1);
    tracep->declBit(c+78,"inst_sub", false,-1);
    tracep->declBit(c+79,"inst_sll", false,-1);
    tracep->declBit(c+80,"inst_slt", false,-1);
    tracep->declBit(c+81,"inst_sltu", false,-1);
    tracep->declBit(c+82,"inst_xor", false,-1);
    tracep->declBit(c+83,"inst_srl", false,-1);
    tracep->declBit(c+84,"inst_sra", false,-1);
    tracep->declBit(c+85,"inst_or", false,-1);
    tracep->declBit(c+86,"inst_and", false,-1);
    tracep->declBit(c+87,"inst_div", false,-1);
    tracep->declBit(c+88,"inst_divu", false,-1);
    tracep->declBit(c+89,"inst_mul", false,-1);
    tracep->declBit(c+90,"inst_mulh", false,-1);
    tracep->declBit(c+91,"inst_mulhsu", false,-1);
    tracep->declBit(c+92,"inst_mulhu", false,-1);
    tracep->declBit(c+93,"inst_rem", false,-1);
    tracep->declBit(c+94,"inst_remu", false,-1);
    tracep->declBit(c+95,"inst_addi", false,-1);
    tracep->declBit(c+96,"inst_slti", false,-1);
    tracep->declBit(c+97,"inst_sltiu", false,-1);
    tracep->declBit(c+98,"inst_xori", false,-1);
    tracep->declBit(c+99,"inst_ori", false,-1);
    tracep->declBit(c+100,"inst_andi", false,-1);
    tracep->declBit(c+101,"inst_slli", false,-1);
    tracep->declBit(c+102,"inst_srli", false,-1);
    tracep->declBit(c+103,"inst_srai", false,-1);
    tracep->declBit(c+104,"inst_ecall", false,-1);
    tracep->declBit(c+105,"inst_mret", false,-1);
    tracep->declBit(c+106,"inst_csrrw", false,-1);
    tracep->declBit(c+107,"inst_csrrs", false,-1);
    tracep->declBit(c+108,"inst_csrrc", false,-1);
    tracep->declBit(c+109,"inst_csrrwi", false,-1);
    tracep->declBit(c+110,"inst_csrrsi", false,-1);
    tracep->declBit(c+111,"inst_csrrci", false,-1);
    tracep->declBit(c+112,"inst_ebreak", false,-1);
    tracep->declBit(c+113,"inst_csr", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu0 ");
    tracep->declBit(c+210,"clk", false,-1);
    tracep->declBit(c+211,"rst", false,-1);
    tracep->declBit(c+19,"pcsrc_i", false,-1);
    tracep->declBus(c+18,"ex_pc_i", false,-1, 31,0);
    tracep->declBus(c+119,"inst_i", false,-1, 31,0);
    tracep->declBus(c+119,"inst_o", false,-1, 31,0);
    tracep->declBus(c+120,"pc_o", false,-1, 31,0);
    tracep->declBus(c+216,"pc_next", false,-1, 31,0);
    tracep->declBus(c+217,"pc_plus4", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu3 ");
    tracep->declBit(c+211,"rst", false,-1);
    tracep->declBit(c+210,"clk", false,-1);
    tracep->declBus(c+17,"alu_res", false,-1, 31,0);
    tracep->declBus(c+15,"store_data", false,-1, 31,0);
    tracep->declBus(c+10,"ls_ctl", false,-1, 3,0);
    tracep->declBus(c+212,"ls_data_o", false,-1, 31,0);
    tracep->declBus(c+114,"raddr", false,-1, 31,0);
    tracep->declBus(c+114,"waddr", false,-1, 31,0);
    tracep->declBus(c+222,"rlen", false,-1, 7,0);
    tracep->declBus(c+218,"wlen", false,-1, 7,0);
    tracep->declBus(c+207,"data_i", false,-1, 31,0);
    tracep->declBus(c+219,"data_o", false,-1, 31,0);
    tracep->declBit(c+115,"re", false,-1);
    tracep->declBit(c+116,"we", false,-1);
    tracep->declBus(c+220,"load_data", false,-1, 31,0);
    tracep->declBus(c+117,"byte_sel", false,-1, 1,0);
    tracep->declBus(c+117,"half_sel", false,-1, 1,0);
    tracep->declBus(c+208,"data_byte", false,-1, 7,0);
    tracep->declBus(c+209,"data_half", false,-1, 15,0);
    tracep->declBus(c+207,"data_word", false,-1, 31,0);
    tracep->declBus(c+118,"sb_mask", false,-1, 3,0);
    tracep->declBus(c+221,"sh_mask", false,-1, 3,0);
    tracep->declBus(c+224,"sw_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg3 ");
    tracep->declBit(c+210,"clk", false,-1);
    tracep->declBit(c+211,"rst", false,-1);
    tracep->declBus(c+3,"waddr", false,-1, 4,0);
    tracep->declBus(c+213,"wdata", false,-1, 31,0);
    tracep->declBit(c+6,"wen", false,-1);
    tracep->declBus(c+1,"raddr1", false,-1, 4,0);
    tracep->declBus(c+214,"rdata1", false,-1, 31,0);
    tracep->declBit(c+4,"ren1", false,-1);
    tracep->declBus(c+2,"raddr2", false,-1, 4,0);
    tracep->declBus(c+215,"rdata2", false,-1, 31,0);
    tracep->declBit(c+5,"ren2", false,-1);
    tracep->declBus(c+126,"regs0", false,-1, 31,0);
    tracep->declBus(c+127,"regs1", false,-1, 31,0);
    tracep->declBus(c+128,"regs2", false,-1, 31,0);
    tracep->declBus(c+129,"regs3", false,-1, 31,0);
    tracep->declBus(c+130,"regs4", false,-1, 31,0);
    tracep->declBus(c+131,"regs5", false,-1, 31,0);
    tracep->declBus(c+132,"regs6", false,-1, 31,0);
    tracep->declBus(c+133,"regs7", false,-1, 31,0);
    tracep->declBus(c+134,"regs8", false,-1, 31,0);
    tracep->declBus(c+135,"regs9", false,-1, 31,0);
    tracep->declBus(c+136,"regs10", false,-1, 31,0);
    tracep->declBus(c+137,"regs11", false,-1, 31,0);
    tracep->declBus(c+138,"regs12", false,-1, 31,0);
    tracep->declBus(c+139,"regs13", false,-1, 31,0);
    tracep->declBus(c+140,"regs14", false,-1, 31,0);
    tracep->declBus(c+141,"regs15", false,-1, 31,0);
    tracep->declBus(c+142,"regs16", false,-1, 31,0);
    tracep->declBus(c+143,"regs17", false,-1, 31,0);
    tracep->declBus(c+144,"regs18", false,-1, 31,0);
    tracep->declBus(c+145,"regs19", false,-1, 31,0);
    tracep->declBus(c+146,"regs20", false,-1, 31,0);
    tracep->declBus(c+147,"regs21", false,-1, 31,0);
    tracep->declBus(c+148,"regs22", false,-1, 31,0);
    tracep->declBus(c+149,"regs23", false,-1, 31,0);
    tracep->declBus(c+150,"regs24", false,-1, 31,0);
    tracep->declBus(c+151,"regs25", false,-1, 31,0);
    tracep->declBus(c+152,"regs26", false,-1, 31,0);
    tracep->declBus(c+153,"regs27", false,-1, 31,0);
    tracep->declBus(c+154,"regs28", false,-1, 31,0);
    tracep->declBus(c+155,"regs29", false,-1, 31,0);
    tracep->declBus(c+156,"regs30", false,-1, 31,0);
    tracep->declBus(c+157,"regs31", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+175+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu4 ");
    tracep->declBit(c+211,"rst", false,-1);
    tracep->declBus(c+212,"ls_rd_data", false,-1, 31,0);
    tracep->declBus(c+11,"wb_ctl", false,-1, 1,0);
    tracep->declBus(c+17,"exu_res", false,-1, 31,0);
    tracep->declBus(c+213,"wb_data", false,-1, 31,0);
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
    bufp->fullCData(oldp+1,(((IData)(vlSelf->ysyx_25060170_top__DOT__id_reg_rs1_ena)
                              ? (0x1fU & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                          >> 0xfU))
                              : 0U)),5);
    bufp->fullCData(oldp+2,(((IData)(vlSelf->ysyx_25060170_top__DOT__id_reg_rs2_ena)
                              ? (0x1fU & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                          >> 0x14U))
                              : 0U)),5);
    bufp->fullCData(oldp+3,(vlSelf->ysyx_25060170_top__DOT__id_reg_rd_addr),5);
    bufp->fullBit(oldp+4,(vlSelf->ysyx_25060170_top__DOT__id_reg_rs1_ena));
    bufp->fullBit(oldp+5,(vlSelf->ysyx_25060170_top__DOT__id_reg_rs2_ena));
    bufp->fullBit(oldp+6,(vlSelf->ysyx_25060170_top__DOT__id_reg_rd_ena));
    bufp->fullIData(oldp+7,(vlSelf->ysyx_25060170_top__DOT__id_ex_imm),32);
    bufp->fullBit(oldp+8,(vlSelf->ysyx_25060170_top__DOT__id_ex_branch));
    bufp->fullBit(oldp+9,(vlSelf->ysyx_25060170_top__DOT__id_ex_jump));
    bufp->fullCData(oldp+10,(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl),4);
    bufp->fullCData(oldp+11,(vlSelf->ysyx_25060170_top__DOT__id_wb_ctl),2);
    bufp->fullCData(oldp+12,(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel),8);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_25060170_top__DOT__id_ex_pc),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_25060170_top__DOT__id_ex_op1),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_25060170_top__DOT__id_ex_op2),32);
    bufp->fullCData(oldp+16,(vlSelf->ysyx_25060170_top__DOT__id_ex_csrctl),4);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_25060170_top__DOT__ex_aludata),32);
    bufp->fullIData(oldp+18,((((0x21U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                               | (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_branch))
                               ? (vlSelf->ysyx_25060170_top__DOT__id_ex_imm 
                                  + vlSelf->ysyx_25060170_top__DOT__id_ex_pc)
                               : ((0x42U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel))
                                   ? (0xfffffffeU & 
                                      (vlSelf->ysyx_25060170_top__DOT__id_ex_imm 
                                       + vlSelf->ysyx_25060170_top__DOT__id_ex_op1))
                                   : ((IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT____VdfgTmp_h485df6cb__0)
                                       ? vlSelf->ysyx_25060170_top__DOT__exu2__DOT__read_csr_data
                                       : 0U)))),32);
    bufp->fullBit(oldp+19,(((IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_jump) 
                            | (((IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_branch) 
                                & ((0xeU == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel))
                                    ? (vlSelf->ysyx_25060170_top__DOT__id_ex_op1 
                                       == vlSelf->ysyx_25060170_top__DOT__id_ex_op2)
                                    : ((0x1cU == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel))
                                        ? (vlSelf->ysyx_25060170_top__DOT__id_ex_op1 
                                           != vlSelf->ysyx_25060170_top__DOT__id_ex_op2)
                                        : ((0xe0U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel))
                                            ? (vlSelf->ysyx_25060170_top__DOT__id_ex_op1 
                                               < vlSelf->ysyx_25060170_top__DOT__id_ex_op2)
                                            : ((0xdU 
                                                == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                ? (vlSelf->ysyx_25060170_top__DOT__id_ex_op1 
                                                   >= vlSelf->ysyx_25060170_top__DOT__id_ex_op2)
                                                : (
                                                   (0x38U 
                                                    == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                    ? (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2)
                                                    : 
                                                   ((0x70U 
                                                     == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                                                    & (~ (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2))))))))) 
                               | (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT____VdfgTmp_h485df6cb__0)))));
    bufp->fullIData(oldp+20,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__op1_add_op2),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__op1_sub_op2),32);
    bufp->fullBit(oldp+22,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2));
    bufp->fullIData(oldp+23,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__op1_sra_op2),32);
    bufp->fullQData(oldp+24,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__mul),64);
    bufp->fullIData(oldp+26,((IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__mul)),32);
    bufp->fullIData(oldp+27,((IData)((vlSelf->ysyx_25060170_top__DOT__exu2__DOT__mul 
                                      >> 0x20U))),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__div),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__rem),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__alu_res),32);
    bufp->fullBit(oldp+31,(((IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_branch) 
                            & ((0xeU == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel))
                                ? (vlSelf->ysyx_25060170_top__DOT__id_ex_op1 
                                   == vlSelf->ysyx_25060170_top__DOT__id_ex_op2)
                                : ((0x1cU == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel))
                                    ? (vlSelf->ysyx_25060170_top__DOT__id_ex_op1 
                                       != vlSelf->ysyx_25060170_top__DOT__id_ex_op2)
                                    : ((0xe0U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel))
                                        ? (vlSelf->ysyx_25060170_top__DOT__id_ex_op1 
                                           < vlSelf->ysyx_25060170_top__DOT__id_ex_op2)
                                        : ((0xdU == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel))
                                            ? (vlSelf->ysyx_25060170_top__DOT__id_ex_op1 
                                               >= vlSelf->ysyx_25060170_top__DOT__id_ex_op2)
                                            : ((0x38U 
                                                == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                ? (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2)
                                                : (
                                                   (0x70U 
                                                    == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                                                   & (~ (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2)))))))))));
    bufp->fullSData(oldp+32,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_addr),12);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__read_csr_data),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__write_csr_data),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__mcause_value),32);
    bufp->fullIData(oldp+36,((vlSelf->ysyx_25060170_top__DOT__id_ex_op1 
                              | vlSelf->ysyx_25060170_top__DOT__exu2__DOT__read_csr_data)),32);
    bufp->fullIData(oldp+37,(((~ vlSelf->ysyx_25060170_top__DOT__id_ex_op1) 
                              & vlSelf->ysyx_25060170_top__DOT__exu2__DOT__read_csr_data)),32);
    bufp->fullBit(oldp+38,(((0x300U == (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                            & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena))));
    bufp->fullBit(oldp+39,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr));
    bufp->fullBit(oldp+40,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_ie_ena));
    bufp->fullBit(oldp+41,((1U & ((~ (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__ecall_ena)) 
                                  & ((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__mret_ena)
                                      ? (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpie)
                                      : ((IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr)
                                          ? (vlSelf->ysyx_25060170_top__DOT__exu2__DOT__write_csr_data 
                                             >> 3U)
                                          : (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mie)))))));
    bufp->fullBit(oldp+42,((1U & ((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__ecall_ena)
                                   ? (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mie)
                                   : ((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__mret_ena) 
                                      | ((IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr)
                                          ? (vlSelf->ysyx_25060170_top__DOT__exu2__DOT__write_csr_data 
                                             >> 7U)
                                          : (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpie)))))));
    bufp->fullCData(oldp+43,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__ecall_ena)
                               ? 3U : ((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__mret_ena)
                                        ? 0U : (3U 
                                                & ((IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr)
                                                    ? 
                                                   (vlSelf->ysyx_25060170_top__DOT__exu2__DOT__write_csr_data 
                                                    >> 0xdU)
                                                    : (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpp)))))),2);
    bufp->fullBit(oldp+44,((((0x305U == (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                             & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena)) 
                            | (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__ecall_ena))));
    bufp->fullBit(oldp+45,(((0x305U == (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                            & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena))));
    bufp->fullBit(oldp+46,((((0x341U == (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                             & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena)) 
                            | (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__mret_ena))));
    bufp->fullBit(oldp+47,((((0x341U == (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                             & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena)) 
                            | (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__ecall_ena))));
    bufp->fullBit(oldp+48,(((0x342U == (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                            & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena))));
    bufp->fullBit(oldp+49,(((0x342U == (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                            & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena))));
    bufp->fullBit(oldp+50,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h77eb01fa__0) 
                            | ((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hf62a170c__0) 
                               | ((IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_branch) 
                                  | ((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h70c0839c__0) 
                                     | ((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h70f4116c__0) 
                                        | ((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h77acc5df__0) 
                                           | (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgExtracted_hf20bcbe5__0)))))))));
    bufp->fullBit(oldp+51,(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena));
    bufp->fullBit(oldp+52,(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena));
    bufp->fullBit(oldp+53,(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__mret_ena));
    bufp->fullBit(oldp+54,(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__ecall_ena));
    bufp->fullCData(oldp+55,(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type),8);
    bufp->fullBit(oldp+56,(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_lui));
    bufp->fullBit(oldp+57,(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_auipc));
    bufp->fullBit(oldp+58,(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jal));
    bufp->fullBit(oldp+59,(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jalr));
    bufp->fullBit(oldp+60,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h489c6f46__0))));
    bufp->fullBit(oldp+61,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h489c6f46__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+62,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_he80da865__0))));
    bufp->fullBit(oldp+63,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_he80da865__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+64,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hc65f4c50__0))));
    bufp->fullBit(oldp+65,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hc65f4c50__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+66,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h1167153d__0))));
    bufp->fullBit(oldp+67,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h1167153d__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+68,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h29152e89__0))));
    bufp->fullBit(oldp+69,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h29152e89__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+70,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_heac6e652__0) 
                            & (IData)((0x2000U == (0x3000U 
                                                   & vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst))))));
    bufp->fullBit(oldp+71,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h7855af38__0))));
    bufp->fullBit(oldp+72,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h7855af38__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+73,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h2bc0716a__0))));
    bufp->fullBit(oldp+74,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h2bc0716a__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+75,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h6fd23990__0))));
    bufp->fullBit(oldp+76,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h6fd23990__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+77,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hb3c59122__0) 
                            & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h03cab0f1__0))));
    bufp->fullBit(oldp+78,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hb3c59122__0) 
                            & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h7b49f5a3__0))));
    bufp->fullBit(oldp+79,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h36e9ef3c__0))));
    bufp->fullBit(oldp+80,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_he2955f6b__0))));
    bufp->fullBit(oldp+81,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h4c825e07__0))));
    bufp->fullBit(oldp+82,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h3b427111__0))));
    bufp->fullBit(oldp+83,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hb3ea081b__0) 
                            & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h03cab0f1__0))));
    bufp->fullBit(oldp+84,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hb3ea081b__0) 
                            & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h7b49f5a3__0))));
    bufp->fullBit(oldp+85,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hd7439362__0))));
    bufp->fullBit(oldp+86,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h7a82fdcc__0))));
    bufp->fullBit(oldp+87,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h3b427111__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+88,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hb3ea081b__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+89,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hb3c59122__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+90,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h36e9ef3c__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+91,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_he2955f6b__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+92,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h4c825e07__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+93,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hd7439362__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+94,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h7a82fdcc__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+95,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h41ceee20__0))));
    bufp->fullBit(oldp+96,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hc1b77381__0))));
    bufp->fullBit(oldp+97,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hc1b77381__0) 
                            & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+98,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_ha08c85bd__0))));
    bufp->fullBit(oldp+99,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h5a06bcf6__0))));
    bufp->fullBit(oldp+100,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h5a06bcf6__0) 
                             & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+101,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h41ceee20__0) 
                             & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+102,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                 >> 0x1eU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h2e86cea5__0))));
    bufp->fullBit(oldp+103,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h2e86cea5__0) 
                             & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0x1eU))));
    bufp->fullBit(oldp+104,(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_ecall));
    bufp->fullBit(oldp+105,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h84595378__0) 
                             & (IData)((0x30000000U 
                                        == (0x30000000U 
                                            & vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst))))));
    bufp->fullBit(oldp+106,(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrw));
    bufp->fullBit(oldp+107,(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrs));
    bufp->fullBit(oldp+108,(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrc));
    bufp->fullBit(oldp+109,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hed177170__0) 
                             & (IData)((0x1000U == 
                                        (0x3000U & vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst))))));
    bufp->fullBit(oldp+110,(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrsi));
    bufp->fullBit(oldp+111,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hbd811272__0) 
                             & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+112,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h84595378__0) 
                             & (1U == (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                       >> 0x14U)))));
    bufp->fullBit(oldp+113,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrw) 
                             | ((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrs) 
                                | (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrc)))));
    bufp->fullIData(oldp+114,(vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__raddr),32);
    bufp->fullBit(oldp+115,(vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__re));
    bufp->fullBit(oldp+116,(((IData)(vlSelf->ysyx_25060170_top__DOT__lsu3__DOT____VdfgTmp_h0e831b4e__0) 
                             & (~ ((IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl) 
                                   >> 3U)))));
    bufp->fullCData(oldp+117,((3U & vlSelf->ysyx_25060170_top__DOT__ex_aludata)),2);
    bufp->fullCData(oldp+118,(vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__sb_mask),4);
    bufp->fullIData(oldp+119,(vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst),32);
    bufp->fullIData(oldp+120,(vlSelf->ysyx_25060170_top__DOT__if_id_pc),32);
    bufp->fullBit(oldp+121,((0x40000033U == vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst)));
    bufp->fullIData(oldp+122,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus),32);
    bufp->fullIData(oldp+123,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mepc),32);
    bufp->fullIData(oldp+124,((vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mtvec_base 
                               << 2U)),32);
    bufp->fullIData(oldp+125,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mcause),32);
    bufp->fullIData(oldp+126,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0U]),32);
    bufp->fullIData(oldp+127,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [1U]),32);
    bufp->fullIData(oldp+128,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [2U]),32);
    bufp->fullIData(oldp+129,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [3U]),32);
    bufp->fullIData(oldp+130,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [4U]),32);
    bufp->fullIData(oldp+131,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [5U]),32);
    bufp->fullIData(oldp+132,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [6U]),32);
    bufp->fullIData(oldp+133,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [7U]),32);
    bufp->fullIData(oldp+134,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [8U]),32);
    bufp->fullIData(oldp+135,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [9U]),32);
    bufp->fullIData(oldp+136,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0xaU]),32);
    bufp->fullIData(oldp+137,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0xbU]),32);
    bufp->fullIData(oldp+138,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0xcU]),32);
    bufp->fullIData(oldp+139,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0xdU]),32);
    bufp->fullIData(oldp+140,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0xeU]),32);
    bufp->fullIData(oldp+141,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0xfU]),32);
    bufp->fullIData(oldp+142,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0x10U]),32);
    bufp->fullIData(oldp+143,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0x11U]),32);
    bufp->fullIData(oldp+144,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0x12U]),32);
    bufp->fullIData(oldp+145,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0x13U]),32);
    bufp->fullIData(oldp+146,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0x14U]),32);
    bufp->fullIData(oldp+147,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0x15U]),32);
    bufp->fullIData(oldp+148,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0x16U]),32);
    bufp->fullIData(oldp+149,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0x17U]),32);
    bufp->fullIData(oldp+150,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0x18U]),32);
    bufp->fullIData(oldp+151,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0x19U]),32);
    bufp->fullIData(oldp+152,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0x1aU]),32);
    bufp->fullIData(oldp+153,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0x1bU]),32);
    bufp->fullIData(oldp+154,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0x1cU]),32);
    bufp->fullIData(oldp+155,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0x1dU]),32);
    bufp->fullIData(oldp+156,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0x1eU]),32);
    bufp->fullIData(oldp+157,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0x1fU]),32);
    bufp->fullCData(oldp+158,((0x1fU & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                        >> 7U))),5);
    bufp->fullBit(oldp+159,((0x6fU == (0x7fU & vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst))));
    bufp->fullBit(oldp+160,((0x67U == (0x7fU & vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst))));
    bufp->fullBit(oldp+161,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mie));
    bufp->fullBit(oldp+162,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpie));
    bufp->fullCData(oldp+163,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpp),2);
    bufp->fullIData(oldp+164,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mtvec_base),30);
    bufp->fullCData(oldp+165,((0x1fU & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+166,((0x1fU & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+167,((0x7fU & vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst)),7);
    bufp->fullCData(oldp+168,((7U & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+169,((vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0x19U)),7);
    bufp->fullSData(oldp+170,((vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+171,(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__j_imm),20);
    bufp->fullIData(oldp+172,((vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0xcU)),20);
    bufp->fullSData(oldp+173,(((0xfe0U & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                           >> 7U)))),12);
    bufp->fullSData(oldp+174,(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__b_imm),12);
    bufp->fullIData(oldp+175,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[0]),32);
    bufp->fullIData(oldp+176,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[1]),32);
    bufp->fullIData(oldp+177,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[2]),32);
    bufp->fullIData(oldp+178,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[3]),32);
    bufp->fullIData(oldp+179,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[4]),32);
    bufp->fullIData(oldp+180,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[5]),32);
    bufp->fullIData(oldp+181,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[6]),32);
    bufp->fullIData(oldp+182,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[7]),32);
    bufp->fullIData(oldp+183,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[8]),32);
    bufp->fullIData(oldp+184,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[9]),32);
    bufp->fullIData(oldp+185,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[10]),32);
    bufp->fullIData(oldp+186,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[11]),32);
    bufp->fullIData(oldp+187,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[12]),32);
    bufp->fullIData(oldp+188,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[13]),32);
    bufp->fullIData(oldp+189,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[14]),32);
    bufp->fullIData(oldp+190,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[15]),32);
    bufp->fullIData(oldp+191,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[16]),32);
    bufp->fullIData(oldp+192,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[17]),32);
    bufp->fullIData(oldp+193,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[18]),32);
    bufp->fullIData(oldp+194,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[19]),32);
    bufp->fullIData(oldp+195,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[20]),32);
    bufp->fullIData(oldp+196,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[21]),32);
    bufp->fullIData(oldp+197,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[22]),32);
    bufp->fullIData(oldp+198,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[23]),32);
    bufp->fullIData(oldp+199,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[24]),32);
    bufp->fullIData(oldp+200,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[25]),32);
    bufp->fullIData(oldp+201,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[26]),32);
    bufp->fullIData(oldp+202,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[27]),32);
    bufp->fullIData(oldp+203,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[28]),32);
    bufp->fullIData(oldp+204,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[29]),32);
    bufp->fullIData(oldp+205,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[30]),32);
    bufp->fullIData(oldp+206,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[31]),32);
    bufp->fullIData(oldp+207,(vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i),32);
    bufp->fullCData(oldp+208,((0xffU & vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i)),8);
    bufp->fullSData(oldp+209,((0xffffU & vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i)),16);
    bufp->fullBit(oldp+210,(vlSelf->clk));
    bufp->fullBit(oldp+211,(vlSelf->rst));
    bufp->fullIData(oldp+212,(((IData)(vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__re)
                                ? ((IData)(vlSelf->rst)
                                    ? 0U : ((8U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                             ? ((4U 
                                                 & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                                   ? 0U
                                                   : 
                                                  (0xffffU 
                                                   & vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                                   ? 
                                                  (0xffU 
                                                   & vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i)
                                                   : 0U))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                                   ? vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i
                                                   : 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i))
                                                   : 0U)))
                                             : 0U))
                                : 0U)),32);
    bufp->fullIData(oldp+213,(((IData)(vlSelf->rst)
                                ? 0U : ((1U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_wb_ctl))
                                         ? ((IData)(vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__re)
                                             ? ((IData)(vlSelf->rst)
                                                 ? 0U
                                                 : 
                                                ((8U 
                                                  & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                                     ? 0U
                                                     : 
                                                    (0xffffU 
                                                     & vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                                     ? 
                                                    (0xffU 
                                                     & vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i)
                                                     : 0U))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                                     ? vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i
                                                     : 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i 
                                                                     >> 0xfU)))) 
                                                      << 0x10U) 
                                                     | (0xffffU 
                                                        & vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i))
                                                     : 0U)))
                                                  : 0U))
                                             : 0U) : 
                                        ((2U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_wb_ctl))
                                          ? vlSelf->ysyx_25060170_top__DOT__ex_aludata
                                          : 0U)))),32);
    bufp->fullIData(oldp+214,((((~ (IData)(vlSelf->rst)) 
                                & (IData)(vlSelf->ysyx_25060170_top__DOT__id_reg_rs1_ena))
                                ? vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                               [((IData)(vlSelf->ysyx_25060170_top__DOT__id_reg_rs1_ena)
                                  ? (0x1fU & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                              >> 0xfU))
                                  : 0U)] : 0U)),32);
    bufp->fullIData(oldp+215,((((~ (IData)(vlSelf->rst)) 
                                & (IData)(vlSelf->ysyx_25060170_top__DOT__id_reg_rs2_ena))
                                ? vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                               [((IData)(vlSelf->ysyx_25060170_top__DOT__id_reg_rs2_ena)
                                  ? (0x1fU & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                              >> 0x14U))
                                  : 0U)] : 0U)),32);
    bufp->fullIData(oldp+216,(((IData)(vlSelf->rst)
                                ? 0x80000000U : (((IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_jump) 
                                                  | (((IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_branch) 
                                                      & ((0xeU 
                                                          == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                          ? 
                                                         (vlSelf->ysyx_25060170_top__DOT__id_ex_op1 
                                                          == vlSelf->ysyx_25060170_top__DOT__id_ex_op2)
                                                          : 
                                                         ((0x1cU 
                                                           == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                           ? 
                                                          (vlSelf->ysyx_25060170_top__DOT__id_ex_op1 
                                                           != vlSelf->ysyx_25060170_top__DOT__id_ex_op2)
                                                           : 
                                                          ((0xe0U 
                                                            == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                            ? 
                                                           (vlSelf->ysyx_25060170_top__DOT__id_ex_op1 
                                                            < vlSelf->ysyx_25060170_top__DOT__id_ex_op2)
                                                            : 
                                                           ((0xdU 
                                                             == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                             ? 
                                                            (vlSelf->ysyx_25060170_top__DOT__id_ex_op1 
                                                             >= vlSelf->ysyx_25060170_top__DOT__id_ex_op2)
                                                             : 
                                                            ((0x38U 
                                                              == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                              ? (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2)
                                                              : 
                                                             ((0x70U 
                                                               == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                                                              & (~ (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2))))))))) 
                                                     | (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT____VdfgTmp_h485df6cb__0)))
                                                  ? 
                                                 (((0x21U 
                                                    == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                                                   | (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_branch))
                                                   ? 
                                                  (vlSelf->ysyx_25060170_top__DOT__id_ex_imm 
                                                   + vlSelf->ysyx_25060170_top__DOT__id_ex_pc)
                                                   : 
                                                  ((0x42U 
                                                    == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                    ? 
                                                   (0xfffffffeU 
                                                    & (vlSelf->ysyx_25060170_top__DOT__id_ex_imm 
                                                       + vlSelf->ysyx_25060170_top__DOT__id_ex_op1))
                                                    : 
                                                   ((IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT____VdfgTmp_h485df6cb__0)
                                                     ? vlSelf->ysyx_25060170_top__DOT__exu2__DOT__read_csr_data
                                                     : 0U)))
                                                  : 
                                                 ((IData)(vlSelf->rst)
                                                   ? 0x80000000U
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->ysyx_25060170_top__DOT__if_id_pc))))),32);
    bufp->fullIData(oldp+217,(((IData)(vlSelf->rst)
                                ? 0x80000000U : ((IData)(4U) 
                                                 + vlSelf->ysyx_25060170_top__DOT__if_id_pc))),32);
    bufp->fullCData(oldp+218,(((IData)(vlSelf->rst)
                                ? 0U : ((1U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                         ? (IData)(vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__sb_mask)
                                         : ((2U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                             ? ((IData)(vlSelf->rst)
                                                 ? 0U
                                                 : 
                                                ((0U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->ysyx_25060170_top__DOT__ex_aludata))
                                                  ? 3U
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->ysyx_25060170_top__DOT__ex_aludata))
                                                   ? 0xcU
                                                   : 0U)))
                                             : ((4U 
                                                 == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                                 ? 0xfU
                                                 : 0U))))),8);
    bufp->fullIData(oldp+219,(((IData)(vlSelf->rst)
                                ? 0U : ((1U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                         ? ((vlSelf->ysyx_25060170_top__DOT__id_ex_op2 
                                             << 0x18U) 
                                            | ((0xff0000U 
                                                & (vlSelf->ysyx_25060170_top__DOT__id_ex_op2 
                                                   << 0x10U)) 
                                               | ((0xff00U 
                                                   & (vlSelf->ysyx_25060170_top__DOT__id_ex_op2 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & vlSelf->ysyx_25060170_top__DOT__id_ex_op2))))
                                         : ((2U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                             ? ((vlSelf->ysyx_25060170_top__DOT__id_ex_op2 
                                                 << 0x10U) 
                                                | (0xffffU 
                                                   & vlSelf->ysyx_25060170_top__DOT__id_ex_op2))
                                             : ((4U 
                                                 == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                                 ? vlSelf->ysyx_25060170_top__DOT__id_ex_op2
                                                 : 0U))))),32);
    bufp->fullIData(oldp+220,(((IData)(vlSelf->rst)
                                ? 0U : ((8U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                         ? ((4U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                             ? ((2U 
                                                 & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                                  ? 0U
                                                  : 
                                                 (0xffffU 
                                                  & vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                                  ? 
                                                 (0xffU 
                                                  & vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i)
                                                  : 0U))
                                             : ((2U 
                                                 & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                                  ? vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i
                                                  : 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i))
                                                  : 0U)))
                                         : 0U))),32);
    bufp->fullCData(oldp+221,(((IData)(vlSelf->rst)
                                ? 0U : ((0U == (3U 
                                                & vlSelf->ysyx_25060170_top__DOT__ex_aludata))
                                         ? 3U : ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->ysyx_25060170_top__DOT__ex_aludata))
                                                  ? 0xcU
                                                  : 0U)))),4);
    bufp->fullCData(oldp+222,(4U),8);
    bufp->fullCData(oldp+223,(0U),2);
    bufp->fullCData(oldp+224,(0xfU),4);
}
