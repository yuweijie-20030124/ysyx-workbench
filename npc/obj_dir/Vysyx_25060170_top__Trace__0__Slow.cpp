// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_25060170_top__Syms.h"


VL_ATTR_COLD void Vysyx_25060170_top___024root__trace_init_sub__TOP__0(Vysyx_25060170_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root__trace_init_sub__TOP__0\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+206,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ysyx_25060170_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+206,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+119,0,"if_id_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"DPIC_if_inst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"if_id_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"id_reg_rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+2,0,"id_reg_rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+3,0,"id_reg_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+4,0,"id_reg_rs1_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"id_reg_rs2_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"id_reg_rd_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"id_ex_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"id_ex_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"id_ex_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"id_ls_ctl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,0,"id_wb_ctl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+12,0,"id_ex_alu_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+13,0,"id_ex_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"id_ex_op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"id_ex_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"id_ex_csrctl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17,0,"ex_aludata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"ex_ls_store_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"ex_if_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+19,0,"ex_if_pc_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"ex_dpic_mstatus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"ex_dpic_mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"ex_dpic_mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"ex_dpic_mcause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+208,0,"ls_wb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"wb_reg_rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+210,0,"reg_id_rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"reg_id_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"regs0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"regs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"regs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"regs3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"regs4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"regs5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"regs6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"regs7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"regs8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"regs9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"regs10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"regs11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"regs12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"regs13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"regs14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"regs15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"regs16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"regs17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"regs18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"regs19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"regs20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"regs21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"regs22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"regs23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"regs24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"regs25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"regs26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"regs27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"regs28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"regs29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"regs30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"regs31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("dpic", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+206,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"regs0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"regs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"regs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"regs3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"regs4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"regs5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"regs6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"regs7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"regs8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"regs9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"regs10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"regs11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"regs12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"regs13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"regs14",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"regs15",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"regs16",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"regs17",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"regs18",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"regs19",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"regs20",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"regs21",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"regs22",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"regs23",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"regs24",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"regs25",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"regs26",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"regs27",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"regs28",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"regs29",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"regs30",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"regs31",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"mstatus",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"mtvec",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"mepc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"mcause",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"rlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+158,0,"jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("exu2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+206,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"op1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"op2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+9,0,"jump_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"alu_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+8,0,"branch_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"csr_ctl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+15,0,"store_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,0,"jump_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+19,0,"ex_pcsrc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"exu_res",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"csr_ex_mstatus",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"csr_ex_mepc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"csr_ex_mtvec",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"csr_ex_mcause",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"op1_add_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"op1_sub_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+22,0,"op1_lt_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"op1_sra_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+24,0,"mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+26,0,"op1_mul_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"op1_mulh_op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"rem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"alu_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"ex_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"csr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+33,0,"read_csr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"write_csr_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"mcause_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"set_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"clear_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("csr_operate", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+206,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"csr_ctl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+32,0,"csr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+35,0,"mcause_value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"write_csr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"read_csr_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"mstatus_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"mepc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"mtvec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"mcause_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,0,"mstatus_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"mstatus_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"mstatus_mie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"mstatus_mpie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+162,0,"mstatus_mpp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+121,0,"mstatus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+40,0,"mstatus_ie_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"mie_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"mpie_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"mpp_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+44,0,"mtvec_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"mtvec_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"mtvec_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,2);
    tracep->declBus(c+222,0,"mtvec_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+123,0,"mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"mepc_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"mepc_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"mcause_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"mcause_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+124,0,"mcause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("idu1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+207,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+119,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"rs1_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+4,0,"rs1_ena",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+210,0,"rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"rs2_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+5,0,"rs2_ena",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+211,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"rd_ena",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+12,0,"alusrc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+10,0,"lsctl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+11,0,"wbctl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+8,0,"branch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"jump_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"csr_ctl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"op1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"op2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"idu_dpic_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+13,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+164,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+165,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+50,0,"imm_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"csr_wr_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"csr_rd_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"mret_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"ecall_ena",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("decode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+207,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+119,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"rs1_ena",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"rs2_ena",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"wb_ctl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10,0,"mem_ctl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+8,0,"branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"ext_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+50,0,"imm_ena",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"alu_ctl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+166,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+167,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+168,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+169,0,"i_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+170,0,"j_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,1);
    tracep->declBus(c+171,0,"u_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+172,0,"s_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+173,0,"b_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,1);
    tracep->declBus(c+55,0,"inst_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+56,0,"inst_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"inst_auipc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"inst_jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"inst_jalr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"inst_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"inst_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"inst_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"inst_sd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"inst_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"inst_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"inst_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"inst_ld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"inst_lbu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"inst_lhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"inst_lwu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"inst_beq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"inst_bne",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"inst_blt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"inst_bge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"inst_bltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"inst_bgeu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"inst_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"inst_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"inst_sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"inst_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"inst_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"inst_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"inst_srl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"inst_sra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"inst_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"inst_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"inst_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"inst_divu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"inst_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"inst_mulh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"inst_mulhsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"inst_mulhu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"inst_rem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"inst_remu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"inst_addi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"inst_slti",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"inst_sltiu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"inst_xori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"inst_ori",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"inst_andi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"inst_slli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"inst_srli",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"inst_srai",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"inst_ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"inst_mret",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"inst_csrrw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"inst_csrrs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"inst_csrrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"inst_csrrwi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"inst_csrrsi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"inst_csrrci",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"inst_ebreak",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"inst_csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ifu0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+206,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"pcsrc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"ex_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"pc_plus4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("lsu3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+207,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"alu_res",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"store_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"ls_ctl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+208,0,"ls_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"rlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+214,0,"wlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+215,0,"data_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+216,0,"data_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+115,0,"re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+217,0,"load_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"byte_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+117,0,"half_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+218,0,"data_byte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+219,0,"data_half",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+215,0,"data_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"sb_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+220,0,"sh_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+223,0,"sw_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+206,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+209,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"raddr1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+210,0,"rdata1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"ren1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"raddr2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+211,0,"rdata2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"ren2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+125,0,"regs0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"regs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"regs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"regs3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"regs4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"regs5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"regs6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"regs7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+133,0,"regs8",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"regs9",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"regs10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+136,0,"regs11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"regs12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"regs13",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"regs14",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"regs15",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"regs16",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"regs17",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+143,0,"regs18",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"regs19",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"regs20",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+146,0,"regs21",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"regs22",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"regs23",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+149,0,"regs24",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+150,0,"regs25",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"regs26",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"regs27",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"regs28",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"regs29",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"regs30",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"regs31",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+174+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("wbu4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+207,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+208,0,"ls_rd_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"wb_ctl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+17,0,"exu_res",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"wb_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vysyx_25060170_top___024root__trace_init_top(Vysyx_25060170_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root__trace_init_top\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_25060170_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_25060170_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vysyx_25060170_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_25060170_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_25060170_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_25060170_top___024root__trace_register(Vysyx_25060170_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root__trace_register\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vysyx_25060170_top___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vysyx_25060170_top___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vysyx_25060170_top___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vysyx_25060170_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_25060170_top___024root__trace_const_0_sub_0(Vysyx_25060170_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_25060170_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root__trace_const_0\n"); );
    // Init
    Vysyx_25060170_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25060170_top___024root*>(voidSelf);
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_25060170_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_25060170_top___024root__trace_const_0_sub_0(Vysyx_25060170_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root__trace_const_0_sub_0\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+221,(4U),8);
    bufp->fullCData(oldp+222,(0U),2);
    bufp->fullCData(oldp+223,(0xfU),4);
}

VL_ATTR_COLD void Vysyx_25060170_top___024root__trace_full_0_sub_0(Vysyx_25060170_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_25060170_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root__trace_full_0\n"); );
    // Init
    Vysyx_25060170_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25060170_top___024root*>(voidSelf);
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_25060170_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_25060170_top___024root__trace_full_0_sub_0(Vysyx_25060170_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root__trace_full_0_sub_0\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs1_ena)
                              ? (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                          >> 0xfU))
                              : 0U)),5);
    bufp->fullCData(oldp+2,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs2_ena)
                              ? (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                          >> 0x14U))
                              : 0U)),5);
    bufp->fullCData(oldp+3,(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rd_addr),5);
    bufp->fullBit(oldp+4,(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs1_ena));
    bufp->fullBit(oldp+5,(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs2_ena));
    bufp->fullBit(oldp+6,(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rd_ena));
    bufp->fullIData(oldp+7,(vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm),32);
    bufp->fullBit(oldp+8,(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch));
    bufp->fullBit(oldp+9,(vlSelfRef.ysyx_25060170_top__DOT__id_ex_jump));
    bufp->fullCData(oldp+10,(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl),4);
    bufp->fullCData(oldp+11,(vlSelfRef.ysyx_25060170_top__DOT__id_wb_ctl),2);
    bufp->fullCData(oldp+12,(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel),8);
    bufp->fullIData(oldp+13,(vlSelfRef.ysyx_25060170_top__DOT__id_ex_pc),32);
    bufp->fullIData(oldp+14,(vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1),32);
    bufp->fullIData(oldp+15,(vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2),32);
    bufp->fullCData(oldp+16,(vlSelfRef.ysyx_25060170_top__DOT__id_ex_csrctl),4);
    bufp->fullIData(oldp+17,(vlSelfRef.ysyx_25060170_top__DOT__ex_aludata),32);
    bufp->fullIData(oldp+18,((((0x21U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                               | (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch))
                               ? (vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm 
                                  + vlSelfRef.ysyx_25060170_top__DOT__id_ex_pc)
                               : ((0x42U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                   ? (0xfffffffeU & 
                                      (vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm 
                                       + vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1))
                                   : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT____VdfgRegularize_hc2007cd8_0_4)
                                       ? vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__read_csr_data
                                       : 0U)))),32);
    bufp->fullBit(oldp+19,((((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch) 
                             && ((0xeU == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                  ? (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                     == vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)
                                  : ((0x1cU == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                      ? (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                         != vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)
                                      : ((0xe0U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                          ? (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                             < vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)
                                          : ((0xdU 
                                              == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                              ? (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                 >= vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)
                                              : ((0x38U 
                                                  == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                  ? (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2)
                                                  : 
                                                 ((0x70U 
                                                   == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                                                  && (1U 
                                                      & (~ (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2)))))))))) 
                            | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_jump) 
                               | (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT____VdfgRegularize_hc2007cd8_0_4)))));
    bufp->fullIData(oldp+20,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_add_op2),32);
    bufp->fullIData(oldp+21,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_sub_op2),32);
    bufp->fullBit(oldp+22,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2));
    bufp->fullIData(oldp+23,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_sra_op2),32);
    bufp->fullQData(oldp+24,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__mul),64);
    bufp->fullIData(oldp+26,((IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__mul)),32);
    bufp->fullIData(oldp+27,((IData)((vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__mul 
                                      >> 0x20U))),32);
    bufp->fullIData(oldp+28,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__div),32);
    bufp->fullIData(oldp+29,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__rem),32);
    bufp->fullIData(oldp+30,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__alu_res),32);
    bufp->fullBit(oldp+31,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch) 
                            && ((0xeU == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                 ? (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                    == vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)
                                 : ((0x1cU == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                     ? (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                        != vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)
                                     : ((0xe0U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                         ? (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                            < vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)
                                         : ((0xdU == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                             ? (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                >= vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)
                                             : ((0x38U 
                                                 == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                 ? (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2)
                                                 : 
                                                ((0x70U 
                                                  == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                                                 && (1U 
                                                     & (~ (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2))))))))))));
    bufp->fullSData(oldp+32,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr),12);
    bufp->fullIData(oldp+33,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__read_csr_data),32);
    bufp->fullIData(oldp+34,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__write_csr_data),32);
    bufp->fullIData(oldp+35,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__mcause_value),32);
    bufp->fullIData(oldp+36,((vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                              | vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__read_csr_data)),32);
    bufp->fullIData(oldp+37,(((~ vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1) 
                              & vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__read_csr_data)),32);
    bufp->fullBit(oldp+38,(((0x300U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                            & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena))));
    bufp->fullBit(oldp+39,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr));
    bufp->fullBit(oldp+40,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_ie_ena));
    bufp->fullBit(oldp+41,((1U & ((~ (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena)) 
                                  & ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena)
                                      ? (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpie)
                                      : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr)
                                          ? (vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__write_csr_data 
                                             >> 3U)
                                          : (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mie)))))));
    bufp->fullBit(oldp+42,((1U & ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena)
                                   ? (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mie)
                                   : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena) 
                                      | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr)
                                          ? (vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__write_csr_data 
                                             >> 7U)
                                          : (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpie)))))));
    bufp->fullCData(oldp+43,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena)
                               ? 3U : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena)
                                        ? 0U : (3U 
                                                & ((IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr)
                                                    ? 
                                                   (vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__write_csr_data 
                                                    >> 0xdU)
                                                    : (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpp)))))),2);
    bufp->fullBit(oldp+44,((((0x305U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                             & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena)) 
                            | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena))));
    bufp->fullBit(oldp+45,(((0x305U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                            & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena))));
    bufp->fullBit(oldp+46,((((0x341U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                             & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena)) 
                            | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena))));
    bufp->fullBit(oldp+47,((((0x341U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                             & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena)) 
                            | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena))));
    bufp->fullBit(oldp+48,(((0x342U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                            & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena))));
    bufp->fullBit(oldp+49,(((0x342U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                            & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena))));
    bufp->fullBit(oldp+50,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__0__KET__) 
                            | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__1__KET__) 
                               | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch) 
                                  | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__4__KET__) 
                                     | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__5__KET__) 
                                        | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__7__KET__) 
                                           | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgExtracted_hb8436119__0)))))))));
    bufp->fullBit(oldp+51,(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena));
    bufp->fullBit(oldp+52,(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena));
    bufp->fullBit(oldp+53,(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena));
    bufp->fullBit(oldp+54,(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena));
    bufp->fullCData(oldp+55,((((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__7__KET__) 
                                 << 7U) | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__6__KET__) 
                                           << 6U)) 
                               | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__5__KET__) 
                                   << 5U) | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__4__KET__) 
                                             << 4U))) 
                              | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__3__KET__) 
                                   << 3U) | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__1__KET__) 
                                     << 1U) | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__0__KET__))))),8);
    bufp->fullBit(oldp+56,(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_lui));
    bufp->fullBit(oldp+57,(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_auipc));
    bufp->fullBit(oldp+58,(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jal));
    bufp->fullBit(oldp+59,(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jalr));
    bufp->fullBit(oldp+60,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_100))));
    bufp->fullBit(oldp+61,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_100) 
                            & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+62,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_4))));
    bufp->fullBit(oldp+63,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_4) 
                            & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+64,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_97))));
    bufp->fullBit(oldp+65,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_97) 
                            & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+66,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_5))));
    bufp->fullBit(oldp+67,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_5) 
                            & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+68,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_96))));
    bufp->fullBit(oldp+69,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_96) 
                            & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+70,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_6) 
                            & (IData)((0x2000U == (0x3000U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst))))));
    bufp->fullBit(oldp+71,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_95))));
    bufp->fullBit(oldp+72,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_95) 
                            & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+73,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_94))));
    bufp->fullBit(oldp+74,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_94) 
                            & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+75,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_8))));
    bufp->fullBit(oldp+76,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_8) 
                            & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+77,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_91) 
                            & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_86))));
    bufp->fullBit(oldp+78,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_91) 
                            & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_85))));
    bufp->fullBit(oldp+79,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0x19U)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_11))));
    bufp->fullBit(oldp+80,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0x19U)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_89))));
    bufp->fullBit(oldp+81,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0x19U)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_13))));
    bufp->fullBit(oldp+82,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0x19U)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_87))));
    bufp->fullBit(oldp+83,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_15) 
                            & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_86))));
    bufp->fullBit(oldp+84,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_15) 
                            & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_85))));
    bufp->fullBit(oldp+85,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0x19U)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_84))));
    bufp->fullBit(oldp+86,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0x19U)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_17))));
    bufp->fullBit(oldp+87,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_87) 
                            & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+88,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_15) 
                            & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+89,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_91) 
                            & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+90,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_11) 
                            & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+91,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_89) 
                            & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+92,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_13) 
                            & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+93,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_84) 
                            & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+94,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_17) 
                            & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0x19U))));
    bufp->fullBit(oldp+95,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_82))));
    bufp->fullBit(oldp+96,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_18))));
    bufp->fullBit(oldp+97,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_18) 
                            & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0xcU))));
    bufp->fullBit(oldp+98,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_81))));
    bufp->fullBit(oldp+99,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_20))));
    bufp->fullBit(oldp+100,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_20) 
                             & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+101,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_82) 
                             & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+102,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                 >> 0x1eU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_21))));
    bufp->fullBit(oldp+103,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_21) 
                             & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0x1eU))));
    bufp->fullBit(oldp+104,(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_ecall));
    bufp->fullBit(oldp+105,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_77) 
                             & (IData)((0x30000000U 
                                        == (0x30000000U 
                                            & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst))))));
    bufp->fullBit(oldp+106,(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrw));
    bufp->fullBit(oldp+107,(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrs));
    bufp->fullBit(oldp+108,(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrc));
    bufp->fullBit(oldp+109,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_23) 
                             & (IData)((0x1000U == 
                                        (0x3000U & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst))))));
    bufp->fullBit(oldp+110,(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrsi));
    bufp->fullBit(oldp+111,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_24) 
                             & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0xcU))));
    bufp->fullBit(oldp+112,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_77) 
                             & (1U == (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                       >> 0x14U)))));
    bufp->fullBit(oldp+113,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrw) 
                             | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrs) 
                                | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrc)))));
    bufp->fullIData(oldp+114,(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__raddr),32);
    bufp->fullBit(oldp+115,(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__re));
    bufp->fullBit(oldp+116,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT____VdfgRegularize_hcffc0c70_0_0) 
                             & (~ ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl) 
                                   >> 3U)))));
    bufp->fullCData(oldp+117,((3U & vlSelfRef.ysyx_25060170_top__DOT__ex_aludata)),2);
    bufp->fullCData(oldp+118,(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__sb_mask),4);
    bufp->fullIData(oldp+119,(vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst),32);
    bufp->fullIData(oldp+120,(vlSelfRef.ysyx_25060170_top__DOT__if_id_pc),32);
    bufp->fullIData(oldp+121,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus),32);
    bufp->fullIData(oldp+122,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mepc),32);
    bufp->fullIData(oldp+123,((vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mtvec_base 
                               << 2U)),32);
    bufp->fullIData(oldp+124,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mcause),32);
    bufp->fullIData(oldp+125,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0U]),32);
    bufp->fullIData(oldp+126,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [1U]),32);
    bufp->fullIData(oldp+127,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [2U]),32);
    bufp->fullIData(oldp+128,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [3U]),32);
    bufp->fullIData(oldp+129,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [4U]),32);
    bufp->fullIData(oldp+130,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [5U]),32);
    bufp->fullIData(oldp+131,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [6U]),32);
    bufp->fullIData(oldp+132,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [7U]),32);
    bufp->fullIData(oldp+133,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [8U]),32);
    bufp->fullIData(oldp+134,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [9U]),32);
    bufp->fullIData(oldp+135,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0xaU]),32);
    bufp->fullIData(oldp+136,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0xbU]),32);
    bufp->fullIData(oldp+137,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0xcU]),32);
    bufp->fullIData(oldp+138,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0xdU]),32);
    bufp->fullIData(oldp+139,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0xeU]),32);
    bufp->fullIData(oldp+140,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0xfU]),32);
    bufp->fullIData(oldp+141,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0x10U]),32);
    bufp->fullIData(oldp+142,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0x11U]),32);
    bufp->fullIData(oldp+143,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0x12U]),32);
    bufp->fullIData(oldp+144,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0x13U]),32);
    bufp->fullIData(oldp+145,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0x14U]),32);
    bufp->fullIData(oldp+146,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0x15U]),32);
    bufp->fullIData(oldp+147,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0x16U]),32);
    bufp->fullIData(oldp+148,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0x17U]),32);
    bufp->fullIData(oldp+149,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0x18U]),32);
    bufp->fullIData(oldp+150,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0x19U]),32);
    bufp->fullIData(oldp+151,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0x1aU]),32);
    bufp->fullIData(oldp+152,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0x1bU]),32);
    bufp->fullIData(oldp+153,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0x1cU]),32);
    bufp->fullIData(oldp+154,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0x1dU]),32);
    bufp->fullIData(oldp+155,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0x1eU]),32);
    bufp->fullIData(oldp+156,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [0x1fU]),32);
    bufp->fullCData(oldp+157,((0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                        >> 7U))),5);
    bufp->fullBit(oldp+158,((0x6fU == (0x7fU & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst))));
    bufp->fullBit(oldp+159,((0x67U == (0x7fU & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst))));
    bufp->fullBit(oldp+160,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mie));
    bufp->fullBit(oldp+161,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpie));
    bufp->fullCData(oldp+162,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpp),2);
    bufp->fullIData(oldp+163,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mtvec_base),30);
    bufp->fullCData(oldp+164,((0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+165,((0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+166,((0x7fU & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)),7);
    bufp->fullCData(oldp+167,((7U & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+168,((vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0x19U)),7);
    bufp->fullSData(oldp+169,((vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+170,(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__j_imm),20);
    bufp->fullIData(oldp+171,((vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0xcU)),20);
    bufp->fullSData(oldp+172,(((0xfe0U & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                          >> 0x14U)) 
                               | (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                           >> 7U)))),12);
    bufp->fullSData(oldp+173,(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__b_imm),12);
    bufp->fullIData(oldp+174,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[0]),32);
    bufp->fullIData(oldp+175,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[1]),32);
    bufp->fullIData(oldp+176,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[2]),32);
    bufp->fullIData(oldp+177,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[3]),32);
    bufp->fullIData(oldp+178,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[4]),32);
    bufp->fullIData(oldp+179,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[5]),32);
    bufp->fullIData(oldp+180,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[6]),32);
    bufp->fullIData(oldp+181,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[7]),32);
    bufp->fullIData(oldp+182,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[8]),32);
    bufp->fullIData(oldp+183,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[9]),32);
    bufp->fullIData(oldp+184,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[10]),32);
    bufp->fullIData(oldp+185,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[11]),32);
    bufp->fullIData(oldp+186,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[12]),32);
    bufp->fullIData(oldp+187,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[13]),32);
    bufp->fullIData(oldp+188,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[14]),32);
    bufp->fullIData(oldp+189,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[15]),32);
    bufp->fullIData(oldp+190,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[16]),32);
    bufp->fullIData(oldp+191,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[17]),32);
    bufp->fullIData(oldp+192,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[18]),32);
    bufp->fullIData(oldp+193,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[19]),32);
    bufp->fullIData(oldp+194,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[20]),32);
    bufp->fullIData(oldp+195,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[21]),32);
    bufp->fullIData(oldp+196,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[22]),32);
    bufp->fullIData(oldp+197,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[23]),32);
    bufp->fullIData(oldp+198,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[24]),32);
    bufp->fullIData(oldp+199,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[25]),32);
    bufp->fullIData(oldp+200,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[26]),32);
    bufp->fullIData(oldp+201,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[27]),32);
    bufp->fullIData(oldp+202,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[28]),32);
    bufp->fullIData(oldp+203,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[29]),32);
    bufp->fullIData(oldp+204,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[30]),32);
    bufp->fullIData(oldp+205,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[31]),32);
    bufp->fullBit(oldp+206,(vlSelfRef.clk));
    bufp->fullBit(oldp+207,(vlSelfRef.rst));
    bufp->fullIData(oldp+208,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__re)
                                ? ((IData)(vlSelfRef.rst)
                                    ? 0U : ((8U & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                             ? ((4U 
                                                 & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                   ? 0U
                                                   : (IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_half))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                   ? (IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_byte)
                                                   : 0U))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                   ? vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_i
                                                   : 
                                                  (((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_half) 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_half)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_byte) 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_byte))
                                                   : 0U)))
                                             : 0U))
                                : 0U)),32);
    bufp->fullIData(oldp+209,(((IData)(vlSelfRef.rst)
                                ? 0U : ((1U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_wb_ctl))
                                         ? ((IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__re)
                                             ? ((IData)(vlSelfRef.rst)
                                                 ? 0U
                                                 : 
                                                ((8U 
                                                  & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                     ? 0U
                                                     : (IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_half))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                     ? (IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_byte)
                                                     : 0U))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                     ? vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_i
                                                     : 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_half) 
                                                                     >> 0xfU)))) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_half)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_byte) 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | (IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_byte))
                                                     : 0U)))
                                                  : 0U))
                                             : 0U) : 
                                        ((2U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_wb_ctl))
                                          ? vlSelfRef.ysyx_25060170_top__DOT__ex_aludata
                                          : 0U)))),32);
    bufp->fullIData(oldp+210,((((~ (IData)(vlSelfRef.rst)) 
                                & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs1_ena))
                                ? vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                               [((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs1_ena)
                                  ? (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                              >> 0xfU))
                                  : 0U)] : 0U)),32);
    bufp->fullIData(oldp+211,((((~ (IData)(vlSelfRef.rst)) 
                                & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs2_ena))
                                ? vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                               [((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs2_ena)
                                  ? (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                              >> 0x14U))
                                  : 0U)] : 0U)),32);
    bufp->fullIData(oldp+212,(((IData)(vlSelfRef.rst)
                                ? 0x80000000U : ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch) 
                                                   && ((0xeU 
                                                        == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        == vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)
                                                        : 
                                                       ((0x1cU 
                                                         == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                         ? 
                                                        (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                         != vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)
                                                         : 
                                                        ((0xe0U 
                                                          == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                          ? 
                                                         (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                          < vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)
                                                          : 
                                                         ((0xdU 
                                                           == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                           ? 
                                                          (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                           >= vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)
                                                           : 
                                                          ((0x38U 
                                                            == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                            ? (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2)
                                                            : 
                                                           ((0x70U 
                                                             == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                                                            && (1U 
                                                                & (~ (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2)))))))))) 
                                                  | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_jump) 
                                                     | (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT____VdfgRegularize_hc2007cd8_0_4)))
                                                  ? 
                                                 (((0x21U 
                                                    == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                                                   | (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch))
                                                   ? 
                                                  (vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm 
                                                   + vlSelfRef.ysyx_25060170_top__DOT__id_ex_pc)
                                                   : 
                                                  ((0x42U 
                                                    == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                    ? 
                                                   (0xfffffffeU 
                                                    & (vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm 
                                                       + vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1))
                                                    : 
                                                   ((IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT____VdfgRegularize_hc2007cd8_0_4)
                                                     ? vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__read_csr_data
                                                     : 0U)))
                                                  : 
                                                 ((IData)(vlSelfRef.rst)
                                                   ? 0x80000000U
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelfRef.ysyx_25060170_top__DOT__if_id_pc))))),32);
    bufp->fullIData(oldp+213,(((IData)(vlSelfRef.rst)
                                ? 0x80000000U : ((IData)(4U) 
                                                 + vlSelfRef.ysyx_25060170_top__DOT__if_id_pc))),32);
    bufp->fullCData(oldp+214,(((IData)(vlSelfRef.rst)
                                ? 0U : ((1U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                         ? (IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__sb_mask)
                                         : ((2U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                             ? ((IData)(vlSelfRef.rst)
                                                 ? 0U
                                                 : 
                                                ((0U 
                                                  == 
                                                  (3U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__ex_aludata))
                                                  ? 3U
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.ysyx_25060170_top__DOT__ex_aludata))
                                                   ? 0xcU
                                                   : 0U)))
                                             : ((4U 
                                                 == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                 ? 0xfU
                                                 : 0U))))),8);
    bufp->fullIData(oldp+215,(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_i),32);
    bufp->fullIData(oldp+216,(((IData)(vlSelfRef.rst)
                                ? 0U : ((1U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                         ? ((vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2 
                                             << 0x18U) 
                                            | ((0xff0000U 
                                                & (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2 
                                                   << 0x10U)) 
                                               | ((0xff00U 
                                                   & (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2))))
                                         : ((2U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                             ? ((vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2 
                                                 << 0x10U) 
                                                | (0xffffU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2))
                                             : ((4U 
                                                 == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                 ? vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2
                                                 : 0U))))),32);
    bufp->fullIData(oldp+217,(((IData)(vlSelfRef.rst)
                                ? 0U : ((8U & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                         ? ((4U & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                             ? ((2U 
                                                 & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                  ? 0U
                                                  : (IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_half))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                  ? (IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_byte)
                                                  : 0U))
                                             : ((2U 
                                                 & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                  ? vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_i
                                                  : 
                                                 (((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_half) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_half)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_byte) 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_byte))
                                                  : 0U)))
                                         : 0U))),32);
    bufp->fullCData(oldp+218,(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_byte),8);
    bufp->fullSData(oldp+219,(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_half),16);
    bufp->fullCData(oldp+220,(((IData)(vlSelfRef.rst)
                                ? 0U : ((0U == (3U 
                                                & vlSelfRef.ysyx_25060170_top__DOT__ex_aludata))
                                         ? 3U : ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__ex_aludata))
                                                  ? 0xcU
                                                  : 0U)))),4);
}
