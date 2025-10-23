// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_25060170_top__Syms.h"


void Vysyx_25060170_top___024root__trace_chg_sub_0(Vysyx_25060170_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_25060170_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_25060170_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25060170_top___024root*>(voidSelf);
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_25060170_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_25060170_top___024root__trace_chg_sub_0(Vysyx_25060170_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(((IData)(vlSelf->ysyx_25060170_top__DOT__id_reg_rs1_ena)
                                 ? (0x1fU & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                             >> 0xfU))
                                 : 0U)),5);
        bufp->chgCData(oldp+1,(((IData)(vlSelf->ysyx_25060170_top__DOT__id_reg_rs2_ena)
                                 ? (0x1fU & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                             >> 0x14U))
                                 : 0U)),5);
        bufp->chgCData(oldp+2,(vlSelf->ysyx_25060170_top__DOT__id_reg_rd_addr),5);
        bufp->chgBit(oldp+3,(vlSelf->ysyx_25060170_top__DOT__id_reg_rs1_ena));
        bufp->chgBit(oldp+4,(vlSelf->ysyx_25060170_top__DOT__id_reg_rs2_ena));
        bufp->chgBit(oldp+5,(vlSelf->ysyx_25060170_top__DOT__id_reg_rd_ena));
        bufp->chgIData(oldp+6,(vlSelf->ysyx_25060170_top__DOT__id_ex_imm),32);
        bufp->chgBit(oldp+7,(vlSelf->ysyx_25060170_top__DOT__id_ex_branch));
        bufp->chgBit(oldp+8,(vlSelf->ysyx_25060170_top__DOT__id_ex_jump));
        bufp->chgCData(oldp+9,(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl),4);
        bufp->chgCData(oldp+10,(vlSelf->ysyx_25060170_top__DOT__id_wb_ctl),2);
        bufp->chgCData(oldp+11,(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel),8);
        bufp->chgIData(oldp+12,(vlSelf->ysyx_25060170_top__DOT__id_ex_pc),32);
        bufp->chgIData(oldp+13,(vlSelf->ysyx_25060170_top__DOT__id_ex_op1),32);
        bufp->chgIData(oldp+14,(vlSelf->ysyx_25060170_top__DOT__id_ex_op2),32);
        bufp->chgCData(oldp+15,(vlSelf->ysyx_25060170_top__DOT__id_ex_csrctl),4);
        bufp->chgIData(oldp+16,(vlSelf->ysyx_25060170_top__DOT__ex_aludata),32);
        bufp->chgIData(oldp+17,((((0x21U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                                  | (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_branch))
                                  ? (vlSelf->ysyx_25060170_top__DOT__id_ex_imm 
                                     + vlSelf->ysyx_25060170_top__DOT__id_ex_pc)
                                  : ((0x42U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel))
                                      ? (0xfffffffeU 
                                         & (vlSelf->ysyx_25060170_top__DOT__id_ex_imm 
                                            + vlSelf->ysyx_25060170_top__DOT__id_ex_op1))
                                      : ((IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT____VdfgTmp_h485df6cb__0)
                                          ? vlSelf->ysyx_25060170_top__DOT__exu2__DOT__read_csr_data
                                          : 0U)))),32);
        bufp->chgBit(oldp+18,(((IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_jump) 
                               | (((IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_branch) 
                                   & ((0xeU == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel))
                                       ? (vlSelf->ysyx_25060170_top__DOT__id_ex_op1 
                                          == vlSelf->ysyx_25060170_top__DOT__id_ex_op2)
                                       : ((0x1cU == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel))
                                           ? (vlSelf->ysyx_25060170_top__DOT__id_ex_op1 
                                              != vlSelf->ysyx_25060170_top__DOT__id_ex_op2)
                                           : ((0xe0U 
                                               == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel))
                                               ? (vlSelf->ysyx_25060170_top__DOT__id_ex_op1 
                                                  < vlSelf->ysyx_25060170_top__DOT__id_ex_op2)
                                               : ((0xdU 
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
                                  | (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT____VdfgTmp_h485df6cb__0)))));
        bufp->chgIData(oldp+19,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__op1_add_op2),32);
        bufp->chgIData(oldp+20,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__op1_sub_op2),32);
        bufp->chgBit(oldp+21,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2));
        bufp->chgIData(oldp+22,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__op1_sra_op2),32);
        bufp->chgQData(oldp+23,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__mul),64);
        bufp->chgIData(oldp+25,((IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__mul)),32);
        bufp->chgIData(oldp+26,((IData)((vlSelf->ysyx_25060170_top__DOT__exu2__DOT__mul 
                                         >> 0x20U))),32);
        bufp->chgIData(oldp+27,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__div),32);
        bufp->chgIData(oldp+28,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__rem),32);
        bufp->chgIData(oldp+29,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__alu_res),32);
        bufp->chgBit(oldp+30,(((IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_branch) 
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
                                               : ((0x38U 
                                                   == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                   ? (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2)
                                                   : 
                                                  ((0x70U 
                                                    == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                                                   & (~ (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2)))))))))));
        bufp->chgSData(oldp+31,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_addr),12);
        bufp->chgIData(oldp+32,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__read_csr_data),32);
        bufp->chgIData(oldp+33,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__write_csr_data),32);
        bufp->chgIData(oldp+34,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__mcause_value),32);
        bufp->chgIData(oldp+35,((vlSelf->ysyx_25060170_top__DOT__id_ex_op1 
                                 | vlSelf->ysyx_25060170_top__DOT__exu2__DOT__read_csr_data)),32);
        bufp->chgIData(oldp+36,(((~ vlSelf->ysyx_25060170_top__DOT__id_ex_op1) 
                                 & vlSelf->ysyx_25060170_top__DOT__exu2__DOT__read_csr_data)),32);
        bufp->chgBit(oldp+37,(((0x300U == (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                               & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena))));
        bufp->chgBit(oldp+38,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr));
        bufp->chgBit(oldp+39,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_ie_ena));
        bufp->chgBit(oldp+40,((1U & ((~ (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__ecall_ena)) 
                                     & ((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__mret_ena)
                                         ? (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpie)
                                         : ((IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr)
                                             ? (vlSelf->ysyx_25060170_top__DOT__exu2__DOT__write_csr_data 
                                                >> 3U)
                                             : (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mie)))))));
        bufp->chgBit(oldp+41,((1U & ((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__ecall_ena)
                                      ? (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mie)
                                      : ((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__mret_ena) 
                                         | ((IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr)
                                             ? (vlSelf->ysyx_25060170_top__DOT__exu2__DOT__write_csr_data 
                                                >> 7U)
                                             : (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpie)))))));
        bufp->chgCData(oldp+42,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__ecall_ena)
                                  ? 3U : ((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__mret_ena)
                                           ? 0U : (3U 
                                                   & ((IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr)
                                                       ? 
                                                      (vlSelf->ysyx_25060170_top__DOT__exu2__DOT__write_csr_data 
                                                       >> 0xdU)
                                                       : (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpp)))))),2);
        bufp->chgBit(oldp+43,((((0x305U == (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                                & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena)) 
                               | (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__ecall_ena))));
        bufp->chgBit(oldp+44,(((0x305U == (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                               & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena))));
        bufp->chgBit(oldp+45,((((0x341U == (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                                & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena)) 
                               | (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__mret_ena))));
        bufp->chgBit(oldp+46,((((0x341U == (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                                & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena)) 
                               | (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__ecall_ena))));
        bufp->chgBit(oldp+47,(((0x342U == (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                               & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena))));
        bufp->chgBit(oldp+48,(((0x342U == (IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                               & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena))));
        bufp->chgBit(oldp+49,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h77eb01fa__0) 
                               | ((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hf62a170c__0) 
                                  | ((IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_branch) 
                                     | ((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h70c0839c__0) 
                                        | ((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h70f4116c__0) 
                                           | ((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h77acc5df__0) 
                                              | (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgExtracted_hf20bcbe5__0)))))))));
        bufp->chgBit(oldp+50,(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena));
        bufp->chgBit(oldp+51,(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena));
        bufp->chgBit(oldp+52,(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__mret_ena));
        bufp->chgBit(oldp+53,(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__ecall_ena));
        bufp->chgCData(oldp+54,(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type),8);
        bufp->chgBit(oldp+55,(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_lui));
        bufp->chgBit(oldp+56,(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_auipc));
        bufp->chgBit(oldp+57,(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jal));
        bufp->chgBit(oldp+58,(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jalr));
        bufp->chgBit(oldp+59,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h489c6f46__0))));
        bufp->chgBit(oldp+60,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h489c6f46__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+61,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_he80da865__0))));
        bufp->chgBit(oldp+62,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_he80da865__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+63,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hc65f4c50__0))));
        bufp->chgBit(oldp+64,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hc65f4c50__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+65,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h1167153d__0))));
        bufp->chgBit(oldp+66,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h1167153d__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+67,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h29152e89__0))));
        bufp->chgBit(oldp+68,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h29152e89__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+69,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_heac6e652__0) 
                               & (IData)((0x2000U == 
                                          (0x3000U 
                                           & vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst))))));
        bufp->chgBit(oldp+70,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h7855af38__0))));
        bufp->chgBit(oldp+71,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h7855af38__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+72,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h2bc0716a__0))));
        bufp->chgBit(oldp+73,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h2bc0716a__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+74,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h6fd23990__0))));
        bufp->chgBit(oldp+75,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h6fd23990__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+76,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hb3c59122__0) 
                               & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h03cab0f1__0))));
        bufp->chgBit(oldp+77,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hb3c59122__0) 
                               & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h7b49f5a3__0))));
        bufp->chgBit(oldp+78,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h36e9ef3c__0))));
        bufp->chgBit(oldp+79,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_he2955f6b__0))));
        bufp->chgBit(oldp+80,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h4c825e07__0))));
        bufp->chgBit(oldp+81,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h3b427111__0))));
        bufp->chgBit(oldp+82,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hb3ea081b__0) 
                               & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h03cab0f1__0))));
        bufp->chgBit(oldp+83,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hb3ea081b__0) 
                               & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h7b49f5a3__0))));
        bufp->chgBit(oldp+84,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hd7439362__0))));
        bufp->chgBit(oldp+85,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h7a82fdcc__0))));
        bufp->chgBit(oldp+86,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h3b427111__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0x19U))));
        bufp->chgBit(oldp+87,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hb3ea081b__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0x19U))));
        bufp->chgBit(oldp+88,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hb3c59122__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0x19U))));
        bufp->chgBit(oldp+89,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h36e9ef3c__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0x19U))));
        bufp->chgBit(oldp+90,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_he2955f6b__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0x19U))));
        bufp->chgBit(oldp+91,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h4c825e07__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0x19U))));
        bufp->chgBit(oldp+92,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hd7439362__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0x19U))));
        bufp->chgBit(oldp+93,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h7a82fdcc__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0x19U))));
        bufp->chgBit(oldp+94,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h41ceee20__0))));
        bufp->chgBit(oldp+95,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hc1b77381__0))));
        bufp->chgBit(oldp+96,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hc1b77381__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+97,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_ha08c85bd__0))));
        bufp->chgBit(oldp+98,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h5a06bcf6__0))));
        bufp->chgBit(oldp+99,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h5a06bcf6__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+100,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h41ceee20__0) 
                                & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0xcU))));
        bufp->chgBit(oldp+101,(((~ (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                    >> 0x1eU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h2e86cea5__0))));
        bufp->chgBit(oldp+102,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h2e86cea5__0) 
                                & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0x1eU))));
        bufp->chgBit(oldp+103,(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_ecall));
        bufp->chgBit(oldp+104,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h84595378__0) 
                                & (IData)((0x30000000U 
                                           == (0x30000000U 
                                               & vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst))))));
        bufp->chgBit(oldp+105,(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrw));
        bufp->chgBit(oldp+106,(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrs));
        bufp->chgBit(oldp+107,(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrc));
        bufp->chgBit(oldp+108,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hed177170__0) 
                                & (IData)((0x1000U 
                                           == (0x3000U 
                                               & vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst))))));
        bufp->chgBit(oldp+109,(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrsi));
        bufp->chgBit(oldp+110,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hbd811272__0) 
                                & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0xcU))));
        bufp->chgBit(oldp+111,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h84595378__0) 
                                & (1U == (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                          >> 0x14U)))));
        bufp->chgBit(oldp+112,(((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrw) 
                                | ((IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrs) 
                                   | (IData)(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrc)))));
        bufp->chgIData(oldp+113,(vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__raddr),32);
        bufp->chgBit(oldp+114,(vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__re));
        bufp->chgBit(oldp+115,(((IData)(vlSelf->ysyx_25060170_top__DOT__lsu3__DOT____VdfgTmp_h0e831b4e__0) 
                                & (~ ((IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl) 
                                      >> 3U)))));
        bufp->chgCData(oldp+116,((3U & vlSelf->ysyx_25060170_top__DOT__ex_aludata)),2);
        bufp->chgCData(oldp+117,(vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__sb_mask),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+118,(vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst),32);
        bufp->chgIData(oldp+119,(vlSelf->ysyx_25060170_top__DOT__if_id_pc),32);
        bufp->chgBit(oldp+120,((0x40000033U == vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst)));
        bufp->chgIData(oldp+121,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus),32);
        bufp->chgIData(oldp+122,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mepc),32);
        bufp->chgIData(oldp+123,((vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mtvec_base 
                                  << 2U)),32);
        bufp->chgIData(oldp+124,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mcause),32);
        bufp->chgIData(oldp+125,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0U]),32);
        bufp->chgIData(oldp+126,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [1U]),32);
        bufp->chgIData(oldp+127,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [2U]),32);
        bufp->chgIData(oldp+128,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [3U]),32);
        bufp->chgIData(oldp+129,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [4U]),32);
        bufp->chgIData(oldp+130,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [5U]),32);
        bufp->chgIData(oldp+131,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [6U]),32);
        bufp->chgIData(oldp+132,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [7U]),32);
        bufp->chgIData(oldp+133,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [8U]),32);
        bufp->chgIData(oldp+134,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [9U]),32);
        bufp->chgIData(oldp+135,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0xaU]),32);
        bufp->chgIData(oldp+136,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0xbU]),32);
        bufp->chgIData(oldp+137,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0xcU]),32);
        bufp->chgIData(oldp+138,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0xdU]),32);
        bufp->chgIData(oldp+139,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0xeU]),32);
        bufp->chgIData(oldp+140,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0xfU]),32);
        bufp->chgIData(oldp+141,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0x10U]),32);
        bufp->chgIData(oldp+142,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0x11U]),32);
        bufp->chgIData(oldp+143,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0x12U]),32);
        bufp->chgIData(oldp+144,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0x13U]),32);
        bufp->chgIData(oldp+145,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0x14U]),32);
        bufp->chgIData(oldp+146,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0x15U]),32);
        bufp->chgIData(oldp+147,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0x16U]),32);
        bufp->chgIData(oldp+148,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0x17U]),32);
        bufp->chgIData(oldp+149,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0x18U]),32);
        bufp->chgIData(oldp+150,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0x19U]),32);
        bufp->chgIData(oldp+151,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0x1aU]),32);
        bufp->chgIData(oldp+152,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0x1bU]),32);
        bufp->chgIData(oldp+153,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0x1cU]),32);
        bufp->chgIData(oldp+154,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0x1dU]),32);
        bufp->chgIData(oldp+155,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0x1eU]),32);
        bufp->chgIData(oldp+156,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0x1fU]),32);
        bufp->chgCData(oldp+157,((0x1fU & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                           >> 7U))),5);
        bufp->chgBit(oldp+158,((0x6fU == (0x7fU & vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst))));
        bufp->chgBit(oldp+159,((0x67U == (0x7fU & vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst))));
        bufp->chgBit(oldp+160,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mie));
        bufp->chgBit(oldp+161,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpie));
        bufp->chgCData(oldp+162,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpp),2);
        bufp->chgIData(oldp+163,(vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mtvec_base),30);
        bufp->chgCData(oldp+164,((0x1fU & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+165,((0x1fU & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+166,((0x7fU & vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst)),7);
        bufp->chgCData(oldp+167,((7U & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+168,((vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0x19U)),7);
        bufp->chgSData(oldp+169,((vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0x14U)),12);
        bufp->chgIData(oldp+170,(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__j_imm),20);
        bufp->chgIData(oldp+171,((vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0xcU)),20);
        bufp->chgSData(oldp+172,(((0xfe0U & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                             >> 0x14U)) 
                                  | (0x1fU & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                              >> 7U)))),12);
        bufp->chgSData(oldp+173,(vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__b_imm),12);
        bufp->chgIData(oldp+174,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[0]),32);
        bufp->chgIData(oldp+175,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[1]),32);
        bufp->chgIData(oldp+176,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[2]),32);
        bufp->chgIData(oldp+177,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[3]),32);
        bufp->chgIData(oldp+178,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[4]),32);
        bufp->chgIData(oldp+179,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[5]),32);
        bufp->chgIData(oldp+180,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[6]),32);
        bufp->chgIData(oldp+181,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[7]),32);
        bufp->chgIData(oldp+182,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[8]),32);
        bufp->chgIData(oldp+183,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[9]),32);
        bufp->chgIData(oldp+184,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[10]),32);
        bufp->chgIData(oldp+185,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[11]),32);
        bufp->chgIData(oldp+186,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[12]),32);
        bufp->chgIData(oldp+187,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[13]),32);
        bufp->chgIData(oldp+188,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[14]),32);
        bufp->chgIData(oldp+189,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[15]),32);
        bufp->chgIData(oldp+190,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[16]),32);
        bufp->chgIData(oldp+191,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[17]),32);
        bufp->chgIData(oldp+192,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[18]),32);
        bufp->chgIData(oldp+193,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[19]),32);
        bufp->chgIData(oldp+194,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[20]),32);
        bufp->chgIData(oldp+195,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[21]),32);
        bufp->chgIData(oldp+196,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[22]),32);
        bufp->chgIData(oldp+197,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[23]),32);
        bufp->chgIData(oldp+198,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[24]),32);
        bufp->chgIData(oldp+199,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[25]),32);
        bufp->chgIData(oldp+200,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[26]),32);
        bufp->chgIData(oldp+201,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[27]),32);
        bufp->chgIData(oldp+202,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[28]),32);
        bufp->chgIData(oldp+203,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[29]),32);
        bufp->chgIData(oldp+204,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[30]),32);
        bufp->chgIData(oldp+205,(vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+206,(vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i),32);
        bufp->chgCData(oldp+207,((0xffU & vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i)),8);
        bufp->chgSData(oldp+208,((0xffffU & vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i)),16);
    }
    bufp->chgBit(oldp+209,(vlSelf->clk));
    bufp->chgBit(oldp+210,(vlSelf->rst));
    bufp->chgIData(oldp+211,(((IData)(vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__re)
                               ? ((IData)(vlSelf->rst)
                                   ? 0U : ((8U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                            ? ((4U 
                                                & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                                ? (
                                                   (2U 
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
                                                : (
                                                   (2U 
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
                                            : 0U)) : 0U)),32);
    bufp->chgIData(oldp+212,(((IData)(vlSelf->rst) ? 0U
                               : ((1U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_wb_ctl))
                                   ? ((IData)(vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__re)
                                       ? ((IData)(vlSelf->rst)
                                           ? 0U : (
                                                   (8U 
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
                                       : 0U) : ((2U 
                                                 == (IData)(vlSelf->ysyx_25060170_top__DOT__id_wb_ctl))
                                                 ? vlSelf->ysyx_25060170_top__DOT__ex_aludata
                                                 : 0U)))),32);
    bufp->chgIData(oldp+213,((((~ (IData)(vlSelf->rst)) 
                               & (IData)(vlSelf->ysyx_25060170_top__DOT__id_reg_rs1_ena))
                               ? vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [((IData)(vlSelf->ysyx_25060170_top__DOT__id_reg_rs1_ena)
                                 ? (0x1fU & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                             >> 0xfU))
                                 : 0U)] : 0U)),32);
    bufp->chgIData(oldp+214,((((~ (IData)(vlSelf->rst)) 
                               & (IData)(vlSelf->ysyx_25060170_top__DOT__id_reg_rs2_ena))
                               ? vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs
                              [((IData)(vlSelf->ysyx_25060170_top__DOT__id_reg_rs2_ena)
                                 ? (0x1fU & (vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst 
                                             >> 0x14U))
                                 : 0U)] : 0U)),32);
    bufp->chgIData(oldp+215,(((IData)(vlSelf->rst) ? 0x80000000U
                               : (((IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_jump) 
                                   | (((IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_branch) 
                                       & ((0xeU == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel))
                                           ? (vlSelf->ysyx_25060170_top__DOT__id_ex_op1 
                                              == vlSelf->ysyx_25060170_top__DOT__id_ex_op2)
                                           : ((0x1cU 
                                               == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel))
                                               ? (vlSelf->ysyx_25060170_top__DOT__id_ex_op1 
                                                  != vlSelf->ysyx_25060170_top__DOT__id_ex_op2)
                                               : ((0xe0U 
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
                                   ? (((0x21U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                                       | (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_branch))
                                       ? (vlSelf->ysyx_25060170_top__DOT__id_ex_imm 
                                          + vlSelf->ysyx_25060170_top__DOT__id_ex_pc)
                                       : ((0x42U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel))
                                           ? (0xfffffffeU 
                                              & (vlSelf->ysyx_25060170_top__DOT__id_ex_imm 
                                                 + vlSelf->ysyx_25060170_top__DOT__id_ex_op1))
                                           : ((IData)(vlSelf->ysyx_25060170_top__DOT__exu2__DOT____VdfgTmp_h485df6cb__0)
                                               ? vlSelf->ysyx_25060170_top__DOT__exu2__DOT__read_csr_data
                                               : 0U)))
                                   : ((IData)(vlSelf->rst)
                                       ? 0x80000000U
                                       : ((IData)(4U) 
                                          + vlSelf->ysyx_25060170_top__DOT__if_id_pc))))),32);
    bufp->chgIData(oldp+216,(((IData)(vlSelf->rst) ? 0x80000000U
                               : ((IData)(4U) + vlSelf->ysyx_25060170_top__DOT__if_id_pc))),32);
    bufp->chgCData(oldp+217,(((IData)(vlSelf->rst) ? 0U
                               : ((1U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                   ? (IData)(vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__sb_mask)
                                   : ((2U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                       ? ((IData)(vlSelf->rst)
                                           ? 0U : (
                                                   (0U 
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
                                       : ((4U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                           ? 0xfU : 0U))))),8);
    bufp->chgIData(oldp+218,(((IData)(vlSelf->rst) ? 0U
                               : ((1U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                   ? ((vlSelf->ysyx_25060170_top__DOT__id_ex_op2 
                                       << 0x18U) | 
                                      ((0xff0000U & 
                                        (vlSelf->ysyx_25060170_top__DOT__id_ex_op2 
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
                                       : ((4U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                           ? vlSelf->ysyx_25060170_top__DOT__id_ex_op2
                                           : 0U))))),32);
    bufp->chgIData(oldp+219,(((IData)(vlSelf->rst) ? 0U
                               : ((8U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                   ? ((4U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                       ? ((2U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                           ? ((1U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                               ? 0U
                                               : (0xffffU 
                                                  & vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i))
                                           : ((1U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                               ? (0xffU 
                                                  & vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i)
                                               : 0U))
                                       : ((2U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                           ? ((1U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                               ? vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i
                                               : ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i)))
                                           : ((1U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ls_ctl))
                                               ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i))
                                               : 0U)))
                                   : 0U))),32);
    bufp->chgCData(oldp+220,(((IData)(vlSelf->rst) ? 0U
                               : ((0U == (3U & vlSelf->ysyx_25060170_top__DOT__ex_aludata))
                                   ? 3U : ((2U == (3U 
                                                   & vlSelf->ysyx_25060170_top__DOT__ex_aludata))
                                            ? 0xcU : 0U)))),4);
}

void Vysyx_25060170_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root__trace_cleanup\n"); );
    // Init
    Vysyx_25060170_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25060170_top___024root*>(voidSelf);
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
