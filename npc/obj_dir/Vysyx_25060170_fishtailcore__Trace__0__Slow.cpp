// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vysyx_25060170_fishtailcore__Syms.h"


VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root__trace_init_sub__TOP__0(Vysyx_25060170_fishtailcore___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root__trace_init_sub__TOP__0\n"); );
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+337,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("ysyx_25060170_fishtailcore", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+337,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"if_id_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"bp_if_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+133,0,"bp_predict",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+339,0,"bp_rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"bp_rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+3,0,"bp_rs1_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"bp_if_jal_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"bp_if_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"id_if_pc_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"id_jump_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+348,0,"ls_pc_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"ls_jump_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"id_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"id_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"if_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"if_id_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"if_id_next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"dpic_ifu_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+348,0,"ls_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"id_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+138,0,"if_id_reg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"if_id_reg_next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"if_id_reg_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+141,0,"id_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"if_id_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"ex_csr_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"ls_csr_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"rf_id_rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+341,0,"rf_id_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"ex_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"idu_rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+10,0,"idu_rs1_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"idu_rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+12,0,"idu_rs2_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"idu_rd_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"idu_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"idu_alusrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"idu_lsctl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17,0,"idu_wbctl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+18,0,"idu_op1_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+19,0,"idu_op2_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+20,0,"idu_load_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"idu_csr_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"idu_op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"idu_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"idu_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"idu_dpic_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+138,0,"idu_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"idu_next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"idu_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"idu_csr_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+26,0,"ex_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"magic_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+148,0,"id_ex_reg_alusrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+142,0,"id_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"id_ex_reg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"id_ex_reg_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"id_ex_reg_next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"id_ex_reg_op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"id_ex_reg_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"id_ex_reg_op1_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+155,0,"id_ex_reg_op2_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+156,0,"id_ex_reg_rd_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+157,0,"id_ex_reg_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+158,0,"id_ex_reg_rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+159,0,"id_ex_reg_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"id_ex_reg_lsctl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+161,0,"id_ex_reg_wbctl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+162,0,"id_ex_reg_load_flag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"id_ex_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"ls_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"exu_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"exu_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"exu_next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+163,0,"ex_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"exu_store_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"exu_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"exu_csr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+29,0,"exu_csr_ctl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+164,0,"ex_ls_reg_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"ex_ls_reg_store_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"ex_ls_reg_exu_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,0,"ex_ls_reg_ls_ctl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+167,0,"ex_ls_reg_wb_ctl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+168,0,"ex_ls_reg_csr_ctl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+169,0,"ex_ls_reg_rd_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"ex_ls_reg_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+143,0,"ex_ls_reg_ls_csr_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+171,0,"ex_ls_reg_csr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+172,0,"ex_ls_reg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"ex_ls_reg_next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"ex_rd_addr_forward",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+27,0,"ex_rd_data_forward",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+174,0,"ex_ls_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"ls_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"ls_dpic_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"ls_dpic_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"ls_dpic_raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"ls_dpic_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"ls_dpic_wlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+349,0,"ls_dpic_rlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+172,0,"ls_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"ls_next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+164,0,"ls_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+35,0,"ls_mem_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"ls_mem_reg_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"ls_mem_reg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"ls_mem_reg_next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"ls_mem_reg_ls_ctl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+179,0,"ls_mem_reg_wb_ctl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+180,0,"ls_mem_reg_rd_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+181,0,"ls_mem_reg_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+182,0,"ls_mem_reg_csr_ctl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+183,0,"ls_mem_reg_csr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+184,0,"ls_mem_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"ls_rd_addr_forward",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+135,0,"ls_rd_data_forward",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+185,0,"ls_mem_reg_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+186,0,"ls_mem_reg_alu_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"mem_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"mem_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"mem_next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"mem_alu_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+180,0,"mem_rd_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+181,0,"mem_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+182,0,"mem_csr_ctl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+183,0,"mem_csr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+179,0,"mem_wbctl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+187,0,"mem_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+350,0,"mem_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+342,0,"mem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"mem_wb_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"mem_wb_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"mem_wb_next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"mem_wb_lsu_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"mem_wb_alures_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"mem_wb_wb_ctl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+194,0,"mem_wb_rd_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+195,0,"mem_wb_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+196,0,"mem_wb_csr_ctl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+197,0,"mem_wb_csr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+198,0,"mem_valid_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+199,0,"wb_rf_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+350,0,"wb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"wb_rf_rd_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+195,0,"wb_rf_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+195,0,"wb_rd_addr_forward",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+199,0,"wb_rd_data_forward",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"wbu_dpic_mstatus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+201,0,"wbu_dpic_mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"wbu_dpic_mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"wbu_dpic_mcause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"wbu_dpic_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"wbu_dpic_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"wbu_dpic_next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+198,0,"wbu_dpic_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+204,0,"regs0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"regs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,0,"regs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+207,0,"regs3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"regs4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"regs5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+210,0,"regs6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"regs7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,0,"regs8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"regs9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+214,0,"regs10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+215,0,"regs11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+216,0,"regs12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+217,0,"regs13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+218,0,"regs14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"regs15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"regs16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"regs17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"regs18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"regs19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"regs20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"regs21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+226,0,"regs22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+227,0,"regs23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+228,0,"regs24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+229,0,"regs25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"regs26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"regs27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"regs28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"regs29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"regs30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"regs31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"DPIC_MEM_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_ysyx_25060170_DPIC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+337,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"ftrace_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+24,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"regs0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"regs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,0,"regs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+207,0,"regs3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"regs4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"regs5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+210,0,"regs6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"regs7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,0,"regs8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"regs9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+214,0,"regs10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+215,0,"regs11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+216,0,"regs12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+217,0,"regs13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+218,0,"regs14",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"regs15",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"regs16",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"regs17",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"regs18",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"regs19",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"regs20",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"regs21",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+226,0,"regs22",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+227,0,"regs23",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+228,0,"regs24",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+229,0,"regs25",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"regs26",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"regs27",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"regs28",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"regs29",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"regs30",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"regs31",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"mstatus",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"mtvec",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+201,0,"mepc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"mcause",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+35,0,"re",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"wlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+349,0,"rlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+188,0,"wbu_dpic_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"wbu_dpic_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"wbu_dpic_next_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+198,0,"wbu_dpic_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+236,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"ex_ls_reg_DPIC_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+147,0,"magic_flag",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+351,0,"dpic_loadread",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+352,0,"dpic_fetch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+237,0,"jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25060170_bpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+337,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"pc_before_bxx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+26,0,"branch_success",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+159,0,"bxx_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"ls_wb_forward_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"ls_wb_forward_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+27,0,"ex_ls_forward_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"ex_ls_forward_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+339,0,"bp_rs1_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"wb_rd_addr_forward",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+199,0,"wb_rd_data_forward",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"bp_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+134,0,"jal_jalr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"branch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"bp_rs1_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+3,0,"bp_rs1_ena_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"bp_predict_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"jal_jalr_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+239,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+240,0,"strongly_not_taken_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"weakly_not_taken_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"weakly_taken_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"strongly_taken_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+244,0,"jal_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+245,0,"b_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+246,0,"jalr_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+247,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+343,0,"op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,0,"inst_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"inst_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"inst_bxx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"jump_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"jump_jalr_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"jal_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+249,0,"br_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+250,0,"jalr_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"ls_wb_forward_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"ex_ls_forward_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"wbu_forward_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25060170_ex_ls_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+337,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"next_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"store_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"exu_res_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"ls_ctl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+161,0,"wb_ctl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+29,0,"csr_ctl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+156,0,"rd_ena_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+157,0,"rd_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+143,0,"ex_csr_ena_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"csr_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+163,0,"ex_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"ls_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+348,0,"ls_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"ex_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+164,0,"inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"next_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"store_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"exu_res_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,0,"ls_ctl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+167,0,"wb_ctl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+168,0,"csr_ctl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+169,0,"rd_ena_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"rd_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+171,0,"csr_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+144,0,"ls_csr_ena_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+157,0,"ex_rd_addr_forward_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+143,0,"ex_csr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"ex_rd_data_forward_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+348,0,"flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25060170_exu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+338,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+152,0,"op1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"op2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"op1_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+155,0,"op2_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+157,0,"rd_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+158,0,"rs1_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+159,0,"imm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"next_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"alu_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1,0,"ls_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"id_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"ex_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"ex_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"next_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"store_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"exu_res_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"csr_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+29,0,"csr_ctl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+253,0,"op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+255,0,"op1_add_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+256,0,"op1_sub_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+257,0,"op1_lt_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+258,0,"op1_sra_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+259,0,"mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+261,0,"op1_mul_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"op1_mulh_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+263,0,"div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+264,0,"rem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"alu_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+44,0,"csr_wr_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"csr_rd_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"mret_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"ecall_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"csrrw_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"csrrs_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"csrrc_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+265,0,"csr_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+266,0,"csrrxi_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25060170_id_ex_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+337,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"next_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"op1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"op2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"op1_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+19,0,"op2_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+13,0,"rd_ena_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"rd_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+146,0,"rs1_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+24,0,"imm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"alusrc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"lsctl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17,0,"wbctl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+21,0,"csr_ena_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"load_flag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"id_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"id_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+348,0,"ls_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"ex_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"next_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"op1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"op2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"op1_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+155,0,"op2_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+156,0,"rd_ena_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+157,0,"rd_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+158,0,"rs1_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+159,0,"imm_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"alusrc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+160,0,"lsctl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+161,0,"wbctl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+143,0,"csr_ena_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"load_flag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"id_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25060170_idu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+338,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"next_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+141,0,"bp_jump_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+157,0,"ex_addr_forward",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+27,0,"ex_data_forward",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"ls_addr_forward",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+135,0,"ls_data_forward",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"wb_addr_forward",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+199,0,"wb_data_forward",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"ex_load_ena",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"ex_csr_ena",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"ls_csr_ena",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+341,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"rs1_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+10,0,"rs1_ena",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"rs2_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+12,0,"rs2_ena",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"rd_ena",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+138,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"next_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"alusrc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"lsctl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17,0,"wbctl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+18,0,"op1_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+19,0,"op2_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+20,0,"load_flag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"csr_ena_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"op1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"op2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"idu_dpic_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+140,0,"inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"csr_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+5,0,"jump_ena_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"jump_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+26,0,"ex_branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"if_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"ex_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"id_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"id_stall_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"id_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"id_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"magic_flag",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+145,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+146,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+268,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+51,0,"branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+344,0,"op1_relate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+345,0,"op2_relate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"csr_op1_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"csr_op2_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"id_stall_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"ex_op1_forward",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"ls_op1_forward",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"wb_op1_forward",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"ex_op2_forward",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"ls_op2_forward",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"wb_op2_forward",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"op1_forward_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"op2_forward_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"op1_forward_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"op2_forward_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+64,0,"diff_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"op_ltu_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"op1_lt_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"o1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"o2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("decoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+338,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"rs1_ena",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"rs2_ena",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"csr_inst",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"wb_ctl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+16,0,"mem_ctl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+51,0,"branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"ext_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"load",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"op1_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+19,0,"op2_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+15,0,"alu_ctl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+269,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+270,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+271,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+272,0,"i_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+273,0,"j_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,1);
    tracep->declBus(c+274,0,"u_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+275,0,"s_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+276,0,"b_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,1);
    tracep->declBus(c+69,0,"inst_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+70,0,"inst_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"inst_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"inst_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"inst_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"inst_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"inst_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"inst_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"inst_sd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"inst_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"inst_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"inst_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"inst_ld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"inst_lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"inst_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"inst_lwu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"inst_beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"inst_bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"inst_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"inst_bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"inst_bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"inst_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"inst_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"inst_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"inst_sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"inst_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"inst_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"inst_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"inst_srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"inst_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"inst_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"inst_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"inst_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"inst_divu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"inst_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"inst_mulh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"inst_mulhsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"inst_mulhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"inst_rem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"inst_remu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"inst_addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"inst_slti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"inst_sltiu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"inst_xori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"inst_ori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"inst_andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"inst_slli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"inst_srli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"inst_srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"inst_ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"inst_mret",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"inst_csrrw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"inst_csrrs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"inst_csrrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"inst_csrrwi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"inst_csrrsi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"inst_csrrci",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"inst_ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"imm_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25060170_if_id_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+337,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"next_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+133,0,"bp_jump_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"if_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"id_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+348,0,"ls_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"id_stall_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"id_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+138,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"next_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+141,0,"id_jump_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"if_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25060170_ifu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+338,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"id_pc_jump_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"id_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+348,0,"ls_pc_jump_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"ls_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+133,0,"bp_pc_jump_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"bp_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+134,0,"jal_jalr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"branch_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"id_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"id_stall_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"if_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"next_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+277,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25060170_ls_mem_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+337,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+164,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"next_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,0,"ls_ctl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+167,0,"wb_ctl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+135,0,"alu_res_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+35,0,"re_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"rd_ena_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"rd_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+168,0,"csr_ctl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+171,0,"csr_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+30,0,"ls_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+350,0,"mem_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"ls_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"next_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"ls_ctl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+179,0,"wb_ctl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+186,0,"alu_res_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+185,0,"re_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"rd_ena_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+181,0,"rd_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+182,0,"csr_ctl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+183,0,"csr_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+170,0,"ls_rd_addr_forward",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+135,0,"ls_rd_data_forward",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+348,0,"flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25060170_lsu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+337,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"next_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+164,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"alu_res_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"store_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,0,"ls_ctl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+350,0,"mem_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"ex_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"ls_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"ls_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+348,0,"ls_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+348,0,"ls_jump_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"ls_jump_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+35,0,"re",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"raddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"waddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"wlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+349,0,"rlen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+164,0,"inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"next_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+278,0,"data_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+279,0,"byte_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+279,0,"half_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+130,0,"sb_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+346,0,"sh_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+353,0,"sw_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25060170_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+337,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"next_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"wb_ctl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+186,0,"alu_res_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+185,0,"re",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"rd_ena_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+181,0,"rd_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+182,0,"csr_ctl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+183,0,"csr_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+178,0,"ls_ctl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+236,0,"mem_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+184,0,"ls_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+350,0,"wb_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"mem_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+350,0,"mem_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"next_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"wb_ctl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+186,0,"alu_res_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+180,0,"rd_ena_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+181,0,"rd_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+182,0,"csr_ctl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+183,0,"csr_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+342,0,"mem_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+347,0,"load_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+280,0,"data_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+281,0,"data_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+282,0,"data_half",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+236,0,"data_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25060170_mem_wb_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+337,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"next_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"wb_ctl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+342,0,"mem_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"alu_res_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+180,0,"rd_ena_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+181,0,"rd_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+182,0,"csr_ctl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+183,0,"csr_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+187,0,"mem_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+350,0,"wb_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"mem_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+188,0,"inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"next_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+192,0,"alu_res_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"mem_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"wb_ctl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+194,0,"rd_ena_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+195,0,"rd_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+196,0,"csr_ctl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+197,0,"csr_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+348,0,"flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25060170_regfile", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+337,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+195,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+199,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+194,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"ren1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"ren2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"raddr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+11,0,"raddr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+340,0,"rdata1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+341,0,"rdata2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+204,0,"regs0_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"regs1_ra",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,0,"regs2_sp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+207,0,"regs3_gp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"regs4_tp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"regs5_t0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+210,0,"regs6_t1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"regs7_t2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,0,"regs8_s0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"regs9_s1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+214,0,"regs10_a0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+215,0,"regs11_a1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+216,0,"regs12_a2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+217,0,"regs13_a3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+218,0,"regs14_a4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"regs15_a5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"regs16_a6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"regs17_a7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"regs18_s2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"regs19_s3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+224,0,"regs20_s4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"regs21_s5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+226,0,"regs22_s6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+227,0,"regs23_s7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+228,0,"regs24_t3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+229,0,"regs25_t4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"regs26_t5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"regs27_t6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+232,0,"regs28_t3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"regs29_t4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"regs30_t5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"regs31_t6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"bp_rs1_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+3,0,"bp_rs1_ena_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+339,0,"bp_rs1_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+283+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_ysyx_25060170_wbu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+337,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+191,0,"ls_rd_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"wb_ctl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+192,0,"exu_res_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"next_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"rd_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+194,0,"rd_ena_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+196,0,"csr_ctl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+197,0,"csr_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+198,0,"ls_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+199,0,"wb_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+350,0,"wb_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"wb_rd_ena_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+195,0,"wb_rd_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+195,0,"wb_rd_addr_forward",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+199,0,"wb_rd_data_forward",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"mstatus_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+201,0,"mepc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"mtvec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"mcause_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+188,0,"wbu_dpic_inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"wbu_dpic_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"wbu_dpic_next_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+198,0,"wbu_dpic_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+200,0,"mstatus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+201,0,"mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"mcause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+315,0,"read_csr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+316,0,"write_csr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+317,0,"mcause_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+318,0,"set_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+319,0,"clear_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_ysyx_25060170_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+337,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+320,0,"csr_ctl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+197,0,"csr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+317,0,"mcause_value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+316,0,"write_csr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+315,0,"read_csr_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+200,0,"mstatus_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+201,0,"mepc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"mtvec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"mcause_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+321,0,"mstatus_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+322,0,"mstatus_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"mstatus_mie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"mstatus_mpie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+325,0,"mstatus_mpp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+200,0,"mstatus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+326,0,"mstatus_ie_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"mie_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+328,0,"mpie_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+329,0,"mpp_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+330,0,"mtvec_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"mtvec_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+332,0,"mtvec_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,2);
    tracep->declBus(c+354,0,"mtvec_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+202,0,"mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+333,0,"mepc_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+334,0,"mepc_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+201,0,"mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+335,0,"mcause_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"mcause_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+203,0,"mcause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root__trace_init_top(Vysyx_25060170_fishtailcore___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root__trace_init_top\n"); );
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_25060170_fishtailcore___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_25060170_fishtailcore___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_25060170_fishtailcore___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root__trace_register(Vysyx_25060170_fishtailcore___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root__trace_register\n"); );
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vysyx_25060170_fishtailcore___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vysyx_25060170_fishtailcore___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vysyx_25060170_fishtailcore___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vysyx_25060170_fishtailcore___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root__trace_const_0_sub_0(Vysyx_25060170_fishtailcore___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root__trace_const_0\n"); );
    // Body
    Vysyx_25060170_fishtailcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25060170_fishtailcore___024root*>(voidSelf);
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vysyx_25060170_fishtailcore___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root__trace_const_0_sub_0(Vysyx_25060170_fishtailcore___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root__trace_const_0_sub_0\n"); );
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+348,(0U));
    bufp->fullCData(oldp+349,(4U),8);
    bufp->fullBit(oldp+350,(1U));
    bufp->fullIData(oldp+351,(2U),32);
    bufp->fullIData(oldp+352,(1U),32);
    bufp->fullCData(oldp+353,(0x0fU),4);
    bufp->fullCData(oldp+354,(0U),2);
}

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root__trace_full_0_sub_0(Vysyx_25060170_fishtailcore___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root__trace_full_0\n"); );
    // Body
    Vysyx_25060170_fishtailcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25060170_fishtailcore___024root*>(voidSelf);
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vysyx_25060170_fishtailcore___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root__trace_full_0_sub_0(Vysyx_25060170_fishtailcore___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root__trace_full_0_sub_0\n"); );
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+1,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__ls_ready_i));
    bufp->fullCData(oldp+2,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_addr_o),5);
    bufp->fullBit(oldp+3,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o));
    bufp->fullBit(oldp+4,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__branch_o));
    bufp->fullBit(oldp+5,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_if_pc_jump));
    bufp->fullIData(oldp+6,(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_if_pc_jump)
                              ? (((0x42U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                                   ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op1
                                   : vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_pc) 
                                 + ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_jump)
                                     ? 4U : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__imm))
                              : 0U)),32);
    bufp->fullBit(oldp+7,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_stall));
    bufp->fullBit(oldp+8,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_valid));
    bufp->fullCData(oldp+9,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_addr),5);
    bufp->fullBit(oldp+10,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_ena));
    bufp->fullCData(oldp+11,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_addr),5);
    bufp->fullBit(oldp+12,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_ena));
    bufp->fullBit(oldp+13,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rd_ena));
    bufp->fullCData(oldp+14,(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rd_ena)
                               ? (0x0000001fU & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                 >> 7U))
                               : 0U)),5);
    bufp->fullCData(oldp+15,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc),8);
    bufp->fullCData(oldp+16,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_lsctl),4);
    bufp->fullCData(oldp+17,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_wbctl),2);
    bufp->fullCData(oldp+18,(((2U & ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                                     | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr))) 
                                        | (- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc)))))) 
                              | (1U & (- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_ena)))))),2);
    bufp->fullCData(oldp+19,(((2U & ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                                     | (- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr))))) 
                              | ((4U & (- (IData)(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__) 
                                                   | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_25) 
                                                      | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__5__KET__) 
                                                         | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__) 
                                                            | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_27)))))))) 
                                 | (1U & (- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_ena))))))),3);
    bufp->fullBit(oldp+20,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_load_flag));
    bufp->fullBit(oldp+21,(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_24) 
                            | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)))));
    bufp->fullIData(oldp+22,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op1),32);
    bufp->fullIData(oldp+23,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op2),32);
    bufp->fullIData(oldp+24,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__imm),32);
    bufp->fullIData(oldp+25,((((0x21U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                               | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_if_pc_jump))
                               ? (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__imm 
                                  + vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_pc)
                               : ((0x42U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                                   ? (0xfffffffeU & 
                                      (vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op1 
                                       + vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__imm))
                                   : vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc))),32);
    bufp->fullBit(oldp+26,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__branch_success));
    bufp->fullIData(oldp+27,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__ex_ls_forward_data),32);
    bufp->fullSData(oldp+28,(((0U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgRegularize_ha169a72f_0_2))
                               ? (0x00000fffU & vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm)
                               : 0U)),12);
    bufp->fullCData(oldp+29,((((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena) 
                               << 6U) | (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena) 
                                          << 5U) | 
                                         (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena) 
                                           << 4U) | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgRegularize_ha169a72f_0_2))))),7);
    bufp->fullBit(oldp+30,(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_valid) 
                            | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h2fce64a5_0_0))));
    bufp->fullBit(oldp+31,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__we));
    bufp->fullIData(oldp+32,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_dpic_data),32);
    bufp->fullIData(oldp+33,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__raddr),32);
    bufp->fullCData(oldp+34,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen),8);
    bufp->fullBit(oldp+35,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__re));
    bufp->fullBit(oldp+36,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jal_jalr_temp));
    bufp->fullIData(oldp+37,(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal)
                               ? ((((0x00000ffeU & 
                                     ((- (IData)((vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                  >> 0x0000001fU))) 
                                      << 1U)) | (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                 >> 0x0000001fU)) 
                                   << 0x00000014U) 
                                  | ((((0x000001feU 
                                        & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                           >> 0x0000000bU)) 
                                       | (1U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                >> 0x00000014U))) 
                                      << 0x0000000bU) 
                                     | (0x000007feU 
                                        & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                           >> 0x00000014U))))
                               : ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__branch_o)
                                   ? (((- (IData)((vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                   >> 0x0000001fU))) 
                                       << 0x0000000dU) 
                                      | ((((2U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                  >> 0x0000001eU)) 
                                           | (1U & 
                                              (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                               >> 7U))) 
                                          << 0x0000000bU) 
                                         | ((0x000007e0U 
                                             & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                >> 0x00000014U)) 
                                            | (0x0000001eU 
                                               & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                  >> 7U)))))
                                   : ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgRegularize_hf5181b73_0_2)
                                       ? 0U : ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o)
                                                ? (
                                                   ((- (IData)(
                                                               (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                                >> 0x0000001fU))) 
                                                    << 0x0000000cU) 
                                                   | (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                      >> 0x00000014U))
                                                : 4U))))),32);
    bufp->fullBit(oldp+38,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal));
    bufp->fullIData(oldp+39,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc),32);
    bufp->fullIData(oldp+40,((0xfffffffeU & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc)),32);
    bufp->fullBit(oldp+41,(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_addr_o) 
                            == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr))));
    bufp->fullBit(oldp+42,(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_addr_o) 
                            == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr))));
    bufp->fullIData(oldp+43,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res),32);
    bufp->fullBit(oldp+44,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena));
    bufp->fullBit(oldp+45,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena));
    bufp->fullBit(oldp+46,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena));
    bufp->fullBit(oldp+47,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena));
    bufp->fullBit(oldp+48,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena));
    bufp->fullBit(oldp+49,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena));
    bufp->fullBit(oldp+50,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena));
    bufp->fullBit(oldp+51,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__branch));
    bufp->fullBit(oldp+52,((((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward) 
                             & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena)) 
                            | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward) 
                               & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_csr_ena)))));
    bufp->fullBit(oldp+53,((((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward) 
                             & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena)) 
                            | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward) 
                               & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_csr_ena)))));
    bufp->fullBit(oldp+54,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward));
    bufp->fullBit(oldp+55,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward));
    bufp->fullBit(oldp+56,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward));
    bufp->fullBit(oldp+57,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward));
    bufp->fullBit(oldp+58,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward));
    bufp->fullBit(oldp+59,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward));
    bufp->fullBit(oldp+60,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_forward_ena));
    bufp->fullBit(oldp+61,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op2_forward_ena));
    bufp->fullIData(oldp+62,((((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward))) 
                               & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__ex_ls_forward_data) 
                              | (((- (IData)(((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward)) 
                                              & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward)))) 
                                  & vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res) 
                                 | ((- (IData)(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward) 
                                                & ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward)) 
                                                   & (~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward)))))) 
                                    & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wb_rd_data_forward)))),32);
    bufp->fullIData(oldp+63,((((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward))) 
                               & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__ex_ls_forward_data) 
                              | (((- (IData)(((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward)) 
                                              & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward)))) 
                                  & vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res) 
                                 | ((- (IData)(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward) 
                                                & ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward)) 
                                                   & (~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward)))))) 
                                    & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wb_rd_data_forward)))),32);
    bufp->fullBit(oldp+64,(((vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op1 
                             ^ vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op2) 
                            >> 0x0000001fU)));
    bufp->fullBit(oldp+65,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2));
    bufp->fullBit(oldp+66,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2));
    bufp->fullIData(oldp+67,(((0x42U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                               ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op1
                               : vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_pc)),32);
    bufp->fullIData(oldp+68,(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_jump)
                               ? 4U : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__imm)),32);
    bufp->fullCData(oldp+69,(((((((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__) 
                                  << 3U) | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__6__KET__) 
                                            << 2U)) 
                                | (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__5__KET__) 
                                    << 1U) | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__4__KET__))) 
                               << 4U) | ((((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__3__KET__) 
                                           << 3U) | 
                                          ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__branch) 
                                           << 2U)) 
                                         | (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__))))),8);
    bufp->fullBit(oldp+70,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui));
    bufp->fullBit(oldp+71,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc));
    bufp->fullBit(oldp+72,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal));
    bufp->fullBit(oldp+73,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr));
    bufp->fullBit(oldp+74,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sb));
    bufp->fullBit(oldp+75,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sh));
    bufp->fullBit(oldp+76,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sw));
    bufp->fullBit(oldp+77,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sd));
    bufp->fullBit(oldp+78,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lb));
    bufp->fullBit(oldp+79,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lh));
    bufp->fullBit(oldp+80,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lw));
    bufp->fullBit(oldp+81,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ld));
    bufp->fullBit(oldp+82,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lbu));
    bufp->fullBit(oldp+83,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lhu));
    bufp->fullBit(oldp+84,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lwu));
    bufp->fullBit(oldp+85,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_beq));
    bufp->fullBit(oldp+86,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bne));
    bufp->fullBit(oldp+87,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_blt));
    bufp->fullBit(oldp+88,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bge));
    bufp->fullBit(oldp+89,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bltu));
    bufp->fullBit(oldp+90,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bgeu));
    bufp->fullBit(oldp+91,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_add));
    bufp->fullBit(oldp+92,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sub));
    bufp->fullBit(oldp+93,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sll));
    bufp->fullBit(oldp+94,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_slt));
    bufp->fullBit(oldp+95,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sltu));
    bufp->fullBit(oldp+96,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_xor));
    bufp->fullBit(oldp+97,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srl));
    bufp->fullBit(oldp+98,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sra));
    bufp->fullBit(oldp+99,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_or));
    bufp->fullBit(oldp+100,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_and));
    bufp->fullBit(oldp+101,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_div));
    bufp->fullBit(oldp+102,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_divu));
    bufp->fullBit(oldp+103,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mul));
    bufp->fullBit(oldp+104,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulh));
    bufp->fullBit(oldp+105,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhsu));
    bufp->fullBit(oldp+106,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhu));
    bufp->fullBit(oldp+107,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_rem));
    bufp->fullBit(oldp+108,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_remu));
    bufp->fullBit(oldp+109,(((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_86))));
    bufp->fullBit(oldp+110,(((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_17))));
    bufp->fullBit(oldp+111,(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_17) 
                             & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x0000000cU))));
    bufp->fullBit(oldp+112,(((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_85))));
    bufp->fullBit(oldp+113,(((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_19))));
    bufp->fullBit(oldp+114,(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_19) 
                             & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x0000000cU))));
    bufp->fullBit(oldp+115,(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_86) 
                             & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 0x0000000cU))));
    bufp->fullBit(oldp+116,(((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x0000001eU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_20))));
    bufp->fullBit(oldp+117,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srai));
    bufp->fullBit(oldp+118,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall));
    bufp->fullBit(oldp+119,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mret));
    bufp->fullBit(oldp+120,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw));
    bufp->fullBit(oldp+121,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs));
    bufp->fullBit(oldp+122,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc));
    bufp->fullBit(oldp+123,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi));
    bufp->fullBit(oldp+124,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi));
    bufp->fullBit(oldp+125,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci));
    bufp->fullBit(oldp+126,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ebreak));
    bufp->fullBit(oldp+127,(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__) 
                             | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_25) 
                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__5__KET__) 
                                   | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__) 
                                      | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_27)))))));
    bufp->fullBit(oldp+128,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if_id_reg__DOT__flush));
    bufp->fullBit(oldp+129,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ls_mem_reg__DOT__stall));
    bufp->fullCData(oldp+130,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask),4);
    bufp->fullIData(oldp+131,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst),32);
    bufp->fullIData(oldp+132,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__bp_if_pc),32);
    bufp->fullBit(oldp+133,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__bp_predict));
    bufp->fullBit(oldp+134,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__bp_if_jal_jalr));
    bufp->fullIData(oldp+135,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res),32);
    bufp->fullIData(oldp+136,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__pc_i),32);
    bufp->fullIData(oldp+137,(((IData)(4U) + vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__pc_i)),32);
    bufp->fullIData(oldp+138,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_pc),32);
    bufp->fullIData(oldp+139,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc),32);
    bufp->fullIData(oldp+140,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst),32);
    bufp->fullBit(oldp+141,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_jump));
    bufp->fullBit(oldp+142,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_valid));
    bufp->fullBit(oldp+143,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena));
    bufp->fullBit(oldp+144,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_csr_ena));
    bufp->fullCData(oldp+145,((0x0000001fU & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                              >> 7U))),5);
    bufp->fullCData(oldp+146,((0x0000001fU & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                              >> 0x0000000fU))),5);
    bufp->fullBit(oldp+147,((0x40000033U == vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    bufp->fullCData(oldp+148,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc),8);
    bufp->fullIData(oldp+149,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc),32);
    bufp->fullIData(oldp+150,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst),32);
    bufp->fullIData(oldp+151,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc),32);
    bufp->fullIData(oldp+152,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1),32);
    bufp->fullIData(oldp+153,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2),32);
    bufp->fullCData(oldp+154,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel),2);
    bufp->fullCData(oldp+155,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel),3);
    bufp->fullBit(oldp+156,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena));
    bufp->fullCData(oldp+157,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr),5);
    bufp->fullCData(oldp+158,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr),5);
    bufp->fullIData(oldp+159,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm),32);
    bufp->fullCData(oldp+160,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl),4);
    bufp->fullCData(oldp+161,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl),2);
    bufp->fullBit(oldp+162,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag));
    bufp->fullBit(oldp+163,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_valid));
    bufp->fullIData(oldp+164,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst),32);
    bufp->fullIData(oldp+165,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data),32);
    bufp->fullCData(oldp+166,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl),4);
    bufp->fullCData(oldp+167,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl),2);
    bufp->fullCData(oldp+168,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl),7);
    bufp->fullBit(oldp+169,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena));
    bufp->fullCData(oldp+170,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr),5);
    bufp->fullSData(oldp+171,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr),12);
    bufp->fullIData(oldp+172,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc),32);
    bufp->fullIData(oldp+173,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc),32);
    bufp->fullBit(oldp+174,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_valid));
    bufp->fullIData(oldp+175,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst),32);
    bufp->fullIData(oldp+176,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc),32);
    bufp->fullIData(oldp+177,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc),32);
    bufp->fullCData(oldp+178,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl),4);
    bufp->fullCData(oldp+179,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl),2);
    bufp->fullBit(oldp+180,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena));
    bufp->fullCData(oldp+181,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr),5);
    bufp->fullCData(oldp+182,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl),7);
    bufp->fullSData(oldp+183,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr),12);
    bufp->fullBit(oldp+184,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_valid));
    bufp->fullBit(oldp+185,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re));
    bufp->fullIData(oldp+186,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res),32);
    bufp->fullBit(oldp+187,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_valid));
    bufp->fullIData(oldp+188,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_inst),32);
    bufp->fullIData(oldp+189,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_pc),32);
    bufp->fullIData(oldp+190,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc),32);
    bufp->fullIData(oldp+191,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res),32);
    bufp->fullIData(oldp+192,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data),32);
    bufp->fullCData(oldp+193,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl),2);
    bufp->fullBit(oldp+194,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena));
    bufp->fullCData(oldp+195,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr),5);
    bufp->fullCData(oldp+196,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl),7);
    bufp->fullSData(oldp+197,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr),12);
    bufp->fullBit(oldp+198,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_valid_o));
    bufp->fullIData(oldp+199,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wb_rd_data_forward),32);
    bufp->fullIData(oldp+200,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus),32);
    bufp->fullIData(oldp+201,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mepc),32);
    bufp->fullIData(oldp+202,((vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
                               << 2U)),32);
    bufp->fullIData(oldp+203,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mcause),32);
    bufp->fullIData(oldp+204,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0U]),32);
    bufp->fullIData(oldp+205,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [1U]),32);
    bufp->fullIData(oldp+206,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [2U]),32);
    bufp->fullIData(oldp+207,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [3U]),32);
    bufp->fullIData(oldp+208,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [4U]),32);
    bufp->fullIData(oldp+209,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [5U]),32);
    bufp->fullIData(oldp+210,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [6U]),32);
    bufp->fullIData(oldp+211,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [7U]),32);
    bufp->fullIData(oldp+212,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [8U]),32);
    bufp->fullIData(oldp+213,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [9U]),32);
    bufp->fullIData(oldp+214,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x0aU]),32);
    bufp->fullIData(oldp+215,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x0bU]),32);
    bufp->fullIData(oldp+216,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x0cU]),32);
    bufp->fullIData(oldp+217,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x0dU]),32);
    bufp->fullIData(oldp+218,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x0eU]),32);
    bufp->fullIData(oldp+219,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x0fU]),32);
    bufp->fullIData(oldp+220,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x10U]),32);
    bufp->fullIData(oldp+221,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x11U]),32);
    bufp->fullIData(oldp+222,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x12U]),32);
    bufp->fullIData(oldp+223,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x13U]),32);
    bufp->fullIData(oldp+224,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x14U]),32);
    bufp->fullIData(oldp+225,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x15U]),32);
    bufp->fullIData(oldp+226,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x16U]),32);
    bufp->fullIData(oldp+227,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x17U]),32);
    bufp->fullIData(oldp+228,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x18U]),32);
    bufp->fullIData(oldp+229,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x19U]),32);
    bufp->fullIData(oldp+230,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1aU]),32);
    bufp->fullIData(oldp+231,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1bU]),32);
    bufp->fullIData(oldp+232,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1cU]),32);
    bufp->fullIData(oldp+233,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1dU]),32);
    bufp->fullIData(oldp+234,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1eU]),32);
    bufp->fullIData(oldp+235,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [0x1fU]),32);
    bufp->fullIData(oldp+236,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data),32);
    bufp->fullBit(oldp+237,((0x6fU == (0x0000007fU 
                                       & vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst))));
    bufp->fullBit(oldp+238,((0x67U == (0x0000007fU 
                                       & vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst))));
    bufp->fullCData(oldp+239,((0x0000001fU & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                              >> 7U))),5);
    bufp->fullBit(oldp+240,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_not_taken_state));
    bufp->fullBit(oldp+241,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_not_taken_state));
    bufp->fullBit(oldp+242,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state));
    bufp->fullBit(oldp+243,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state));
    bufp->fullIData(oldp+244,(((((0x00000200U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                 >> 0x00000016U)) 
                                 | ((0x000001feU & 
                                     (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                      >> 0x0000000bU)) 
                                    | (1U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                             >> 0x00000014U)))) 
                                << 0x0000000bU) | (0x000007feU 
                                                   & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                      >> 0x00000014U)))),21);
    bufp->fullSData(oldp+245,(((((2U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                        >> 0x0000001eU)) 
                                 | (1U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                          >> 7U))) 
                                << 0x0000000bU) | (
                                                   (0x000007e0U 
                                                    & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                       >> 0x00000014U)) 
                                                   | (0x0000001eU 
                                                      & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                         >> 7U))))),13);
    bufp->fullSData(oldp+246,((vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                               >> 0x00000014U)),12);
    bufp->fullCData(oldp+247,((0x0000007fU & vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst)),7);
    bufp->fullIData(oldp+248,(((((0x00000ffeU & ((- (IData)(
                                                            (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                             >> 0x0000001fU))) 
                                                 << 1U)) 
                                 | (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                    >> 0x0000001fU)) 
                                << 0x00000014U) | (
                                                   (((0x000001feU 
                                                      & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                         >> 0x0000000bU)) 
                                                     | (1U 
                                                        & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                           >> 0x00000014U))) 
                                                    << 0x0000000bU) 
                                                   | (0x000007feU 
                                                      & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                         >> 0x00000014U))))),32);
    bufp->fullIData(oldp+249,((((- (IData)((vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                            >> 0x0000001fU))) 
                                << 0x0000000dU) | (
                                                   (((2U 
                                                      & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                         >> 0x0000001eU)) 
                                                     | (1U 
                                                        & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                           >> 7U))) 
                                                    << 0x0000000bU) 
                                                   | ((0x000007e0U 
                                                       & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                          >> 0x00000014U)) 
                                                      | (0x0000001eU 
                                                         & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                            >> 7U)))))),32);
    bufp->fullIData(oldp+250,((((- (IData)((vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                            >> 0x0000001fU))) 
                                << 0x0000000cU) | (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                   >> 0x00000014U))),32);
    bufp->fullBit(oldp+251,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wbu_forward_en));
    bufp->fullBit(oldp+252,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall));
    bufp->fullIData(oldp+253,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1),32);
    bufp->fullIData(oldp+254,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2),32);
    bufp->fullIData(oldp+255,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2),32);
    bufp->fullIData(oldp+256,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2),32);
    bufp->fullBit(oldp+257,((1U & (((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                        >> 0x0000001fU)) 
                                    & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                       >> 0x0000001fU)) 
                                   | (((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                           >> 0x0000001fU)) 
                                       & ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                              >> 0x0000001fU)) 
                                          & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2 
                                             >> 0x0000001fU))) 
                                      | ((vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                          & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2)) 
                                         >> 0x0000001fU))))));
    bufp->fullIData(oldp+258,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2),32);
    bufp->fullQData(oldp+259,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul),64);
    bufp->fullIData(oldp+261,((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul)),32);
    bufp->fullIData(oldp+262,((IData)((vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul 
                                       >> 0x00000020U))),32);
    bufp->fullIData(oldp+263,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div),32);
    bufp->fullIData(oldp+264,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__rem),32);
    bufp->fullIData(oldp+265,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr),32);
    bufp->fullBit(oldp+266,(((0x94U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                             | ((0xc8U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                | (0xa4U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))))));
    bufp->fullBit(oldp+267,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_id_ex_reg__DOT__stall));
    bufp->fullCData(oldp+268,((0x0000001fU & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                              >> 0x00000014U))),5);
    bufp->fullCData(oldp+269,((0x0000007fU & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)),7);
    bufp->fullCData(oldp+270,((7U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                     >> 0x0000000cU))),3);
    bufp->fullCData(oldp+271,((vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0x00000019U)),7);
    bufp->fullSData(oldp+272,((vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0x00000014U)),12);
    bufp->fullIData(oldp+273,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__j_imm),20);
    bufp->fullIData(oldp+274,((vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                               >> 0x0000000cU)),20);
    bufp->fullSData(oldp+275,(((0x00000fe0U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                               >> 0x00000014U)) 
                               | (0x0000001fU & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                 >> 7U)))),12);
    bufp->fullSData(oldp+276,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__b_imm),12);
    bufp->fullIData(oldp+277,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ifu__DOT__pc),32);
    bufp->fullBit(oldp+278,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__data_ok));
    bufp->fullCData(oldp+279,((3U & vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res)),2);
    bufp->fullBit(oldp+280,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_mem__DOT__data_ok));
    bufp->fullCData(oldp+281,((0x000000ffU & vlSelfRef.ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data)),8);
    bufp->fullSData(oldp+282,((0x0000ffffU & vlSelfRef.ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data)),16);
    bufp->fullIData(oldp+283,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0]),32);
    bufp->fullIData(oldp+284,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[1]),32);
    bufp->fullIData(oldp+285,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[2]),32);
    bufp->fullIData(oldp+286,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[3]),32);
    bufp->fullIData(oldp+287,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[4]),32);
    bufp->fullIData(oldp+288,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[5]),32);
    bufp->fullIData(oldp+289,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[6]),32);
    bufp->fullIData(oldp+290,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[7]),32);
    bufp->fullIData(oldp+291,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[8]),32);
    bufp->fullIData(oldp+292,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[9]),32);
    bufp->fullIData(oldp+293,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[10]),32);
    bufp->fullIData(oldp+294,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[11]),32);
    bufp->fullIData(oldp+295,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[12]),32);
    bufp->fullIData(oldp+296,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[13]),32);
    bufp->fullIData(oldp+297,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[14]),32);
    bufp->fullIData(oldp+298,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[15]),32);
    bufp->fullIData(oldp+299,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[16]),32);
    bufp->fullIData(oldp+300,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[17]),32);
    bufp->fullIData(oldp+301,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[18]),32);
    bufp->fullIData(oldp+302,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[19]),32);
    bufp->fullIData(oldp+303,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[20]),32);
    bufp->fullIData(oldp+304,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[21]),32);
    bufp->fullIData(oldp+305,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[22]),32);
    bufp->fullIData(oldp+306,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[23]),32);
    bufp->fullIData(oldp+307,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[24]),32);
    bufp->fullIData(oldp+308,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[25]),32);
    bufp->fullIData(oldp+309,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[26]),32);
    bufp->fullIData(oldp+310,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[27]),32);
    bufp->fullIData(oldp+311,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[28]),32);
    bufp->fullIData(oldp+312,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[29]),32);
    bufp->fullIData(oldp+313,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[30]),32);
    bufp->fullIData(oldp+314,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[31]),32);
    bufp->fullIData(oldp+315,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__read_csr_data),32);
    bufp->fullIData(oldp+316,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__write_csr_data),32);
    bufp->fullIData(oldp+317,(((2U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                ? 0x0000000bU : 0U)),32);
    bufp->fullIData(oldp+318,((vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data 
                               | vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__read_csr_data)),32);
    bufp->fullIData(oldp+319,(((~ vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data) 
                               & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__read_csr_data)),32);
    bufp->fullCData(oldp+320,((0x0000000fU & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))),4);
    bufp->fullBit(oldp+321,(((0x0300U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 2U))));
    bufp->fullBit(oldp+322,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr));
    bufp->fullBit(oldp+323,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie));
    bufp->fullBit(oldp+324,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie));
    bufp->fullCData(oldp+325,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp),2);
    bufp->fullBit(oldp+326,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena));
    bufp->fullBit(oldp+327,((1U & ((~ ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 1U)) & ((1U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                                   ? (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)
                                                   : 
                                                  ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                                    ? 
                                                   (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__write_csr_data 
                                                    >> 3U)
                                                    : (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)))))));
    bufp->fullBit(oldp+328,((1U & ((2U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                    ? (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)
                                    : ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                           ? (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__write_csr_data 
                                              >> 7U)
                                           : (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)))))));
    bufp->fullCData(oldp+329,(((2U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                ? 3U : ((1U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                         ? 0U : (3U 
                                                 & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                                     ? 
                                                    (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__write_csr_data 
                                                     >> 0x0000000dU)
                                                     : (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp)))))),2);
    bufp->fullBit(oldp+330,((1U & (((0x0305U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                    & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 2U)) | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+331,(((0x0305U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 3U))));
    bufp->fullIData(oldp+332,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mtvec_base),30);
    bufp->fullBit(oldp+333,((1U & (((0x0341U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                    & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 2U)) | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl)))));
    bufp->fullBit(oldp+334,((1U & (((0x0341U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                    & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 3U)) | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                                  >> 1U)))));
    bufp->fullBit(oldp+335,(((0x0342U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 2U))));
    bufp->fullBit(oldp+336,(((0x0342U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                             & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 3U))));
    bufp->fullBit(oldp+337,(vlSelfRef.clk));
    bufp->fullBit(oldp+338,(vlSelfRef.rst));
    bufp->fullIData(oldp+339,((((~ (IData)(vlSelfRef.rst)) 
                                & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o))
                                ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                               [vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_addr_o]
                                : 0U)),32);
    bufp->fullIData(oldp+340,((((~ (IData)(vlSelfRef.rst)) 
                                & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_ena))
                                ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                               [vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_addr]
                                : 0U)),32);
    bufp->fullIData(oldp+341,((((~ (IData)(vlSelfRef.rst)) 
                                & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_ena))
                                ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                               [vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_addr]
                                : 0U)),32);
    bufp->fullIData(oldp+342,(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re)
                                ? ((IData)(vlSelfRef.rst)
                                    ? 0U : ((8U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                             ? ((4U 
                                                 & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                   ? 0U
                                                   : 
                                                  (0x0000ffffU 
                                                   & vlSelfRef.ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                   ? 
                                                  (0x000000ffU 
                                                   & vlSelfRef.ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data)
                                                   : 0U))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                   ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data
                                                   : 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data 
                                                                   >> 0x0000000fU)))) 
                                                    << 0x00000010U) 
                                                   | (0x0000ffffU 
                                                      & vlSelfRef.ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0x000000ffU 
                                                      & vlSelfRef.ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data))
                                                   : 0U)))
                                             : 0U))
                                : 0U)),32);
    bufp->fullIData(oldp+343,((((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o) 
                                & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_addr_o) 
                                   == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr)))
                                ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
                                : (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o) 
                                    & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_addr_o) 
                                       == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))
                                    ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__ex_ls_forward_data
                                    : ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgRegularize_hf5181b73_0_2)
                                        ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wb_rd_data_forward
                                        : ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o)
                                            ? (((~ (IData)(vlSelfRef.rst)) 
                                                & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o))
                                                ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                               [vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_addr_o]
                                                : 0U)
                                            : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__pc_i))))),32);
    bufp->fullBit(oldp+344,(((~ ((IData)(vlSelfRef.rst) 
                                 & (0U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)))) 
                             & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_ena) 
                                & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag) 
                                   & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_addr) 
                                      == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))))));
    bufp->fullBit(oldp+345,(((~ ((IData)(vlSelfRef.rst) 
                                 & (0U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)))) 
                             & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_ena) 
                                & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag) 
                                   & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_addr) 
                                      == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))))));
    bufp->fullCData(oldp+346,(((IData)(vlSelfRef.rst)
                                ? 0U : ((0U == (3U 
                                                & vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                         ? 3U : ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                                  ? 0x0cU
                                                  : 0U)))),4);
    bufp->fullIData(oldp+347,(((IData)(vlSelfRef.rst)
                                ? 0U : ((8U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                         ? ((4U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                             ? ((2U 
                                                 & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                  ? 0U
                                                  : 
                                                 (0x0000ffffU 
                                                  & vlSelfRef.ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                  ? 
                                                 (0x000000ffU 
                                                  & vlSelfRef.ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data)
                                                  : 0U))
                                             : ((2U 
                                                 & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                  ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data
                                                  : 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data 
                                                                  >> 0x0000000fU)))) 
                                                   << 0x00000010U) 
                                                  | (0x0000ffffU 
                                                     & vlSelfRef.ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0x000000ffU 
                                                     & vlSelfRef.ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data))
                                                  : 0U)))
                                         : 0U))),32);
}
