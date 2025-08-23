// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_25060170_top__Syms.h"


void Vysyx_25060170_top___024root__trace_chg_0_sub_0(Vysyx_25060170_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_25060170_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root__trace_chg_0\n"); );
    // Init
    Vysyx_25060170_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25060170_top___024root*>(voidSelf);
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_25060170_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_25060170_top___024root__trace_chg_0_sub_0(Vysyx_25060170_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root__trace_chg_0_sub_0\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgCData(oldp+0,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs1_ena)
                                 ? (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                             >> 0xfU))
                                 : 0U)),5);
        bufp->chgCData(oldp+1,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs2_ena)
                                 ? (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                             >> 0x14U))
                                 : 0U)),5);
        bufp->chgCData(oldp+2,(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rd_addr),5);
        bufp->chgBit(oldp+3,(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs1_ena));
        bufp->chgBit(oldp+4,(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs2_ena));
        bufp->chgBit(oldp+5,(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rd_ena));
        bufp->chgIData(oldp+6,(vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm),32);
        bufp->chgBit(oldp+7,(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch));
        bufp->chgBit(oldp+8,(vlSelfRef.ysyx_25060170_top__DOT__id_ex_jump));
        bufp->chgCData(oldp+9,(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl),4);
        bufp->chgCData(oldp+10,(vlSelfRef.ysyx_25060170_top__DOT__id_wb_ctl),2);
        bufp->chgCData(oldp+11,(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel),8);
        bufp->chgCData(oldp+12,(vlSelfRef.ysyx_25060170_top__DOT__id_ex_csrctl),4);
        bufp->chgSData(oldp+13,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr),12);
        bufp->chgIData(oldp+14,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__mcause_value),32);
        bufp->chgBit(oldp+15,(((0x300U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                               & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena))));
        bufp->chgBit(oldp+16,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr));
        bufp->chgBit(oldp+17,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_ie_ena));
        bufp->chgBit(oldp+18,((((0x305U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                                & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena)) 
                               | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena))));
        bufp->chgBit(oldp+19,(((0x305U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                               & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena))));
        bufp->chgBit(oldp+20,((((0x341U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                                & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena)) 
                               | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena))));
        bufp->chgBit(oldp+21,((((0x341U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                                & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena)) 
                               | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena))));
        bufp->chgBit(oldp+22,(((0x342U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                               & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena))));
        bufp->chgBit(oldp+23,(((0x342U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                               & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena))));
        bufp->chgBit(oldp+24,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__0__KET__) 
                               | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__1__KET__) 
                                  | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch) 
                                     | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__4__KET__) 
                                        | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__5__KET__) 
                                           | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__7__KET__) 
                                              | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgExtracted_hb8436119__0)))))))));
        bufp->chgBit(oldp+25,(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena));
        bufp->chgBit(oldp+26,(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena));
        bufp->chgBit(oldp+27,(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena));
        bufp->chgBit(oldp+28,(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena));
        bufp->chgCData(oldp+29,((((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__7__KET__) 
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
        bufp->chgBit(oldp+30,(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_lui));
        bufp->chgBit(oldp+31,(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_auipc));
        bufp->chgBit(oldp+32,(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jal));
        bufp->chgBit(oldp+33,(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jalr));
        bufp->chgBit(oldp+34,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_100))));
        bufp->chgBit(oldp+35,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_100) 
                               & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+36,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_4))));
        bufp->chgBit(oldp+37,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_4) 
                               & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+38,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_97))));
        bufp->chgBit(oldp+39,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_97) 
                               & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+40,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_5))));
        bufp->chgBit(oldp+41,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_5) 
                               & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+42,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_96))));
        bufp->chgBit(oldp+43,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_96) 
                               & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+44,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_6) 
                               & (IData)((0x2000U == 
                                          (0x3000U 
                                           & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst))))));
        bufp->chgBit(oldp+45,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_95))));
        bufp->chgBit(oldp+46,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_95) 
                               & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+47,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_94))));
        bufp->chgBit(oldp+48,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_94) 
                               & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+49,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_8))));
        bufp->chgBit(oldp+50,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_8) 
                               & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+51,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_91) 
                               & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_86))));
        bufp->chgBit(oldp+52,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_91) 
                               & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_85))));
        bufp->chgBit(oldp+53,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0x19U)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_11))));
        bufp->chgBit(oldp+54,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0x19U)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_89))));
        bufp->chgBit(oldp+55,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0x19U)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_13))));
        bufp->chgBit(oldp+56,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0x19U)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_87))));
        bufp->chgBit(oldp+57,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_15) 
                               & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_86))));
        bufp->chgBit(oldp+58,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_15) 
                               & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_85))));
        bufp->chgBit(oldp+59,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0x19U)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_84))));
        bufp->chgBit(oldp+60,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0x19U)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_17))));
        bufp->chgBit(oldp+61,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_87) 
                               & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0x19U))));
        bufp->chgBit(oldp+62,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_15) 
                               & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0x19U))));
        bufp->chgBit(oldp+63,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_91) 
                               & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0x19U))));
        bufp->chgBit(oldp+64,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_11) 
                               & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0x19U))));
        bufp->chgBit(oldp+65,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_89) 
                               & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0x19U))));
        bufp->chgBit(oldp+66,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_13) 
                               & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0x19U))));
        bufp->chgBit(oldp+67,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_84) 
                               & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0x19U))));
        bufp->chgBit(oldp+68,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_17) 
                               & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0x19U))));
        bufp->chgBit(oldp+69,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_82))));
        bufp->chgBit(oldp+70,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_18))));
        bufp->chgBit(oldp+71,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_18) 
                               & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+72,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_81))));
        bufp->chgBit(oldp+73,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_20))));
        bufp->chgBit(oldp+74,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_20) 
                               & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+75,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_82) 
                               & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+76,(((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                   >> 0x1eU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_21))));
        bufp->chgBit(oldp+77,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_21) 
                               & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0x1eU))));
        bufp->chgBit(oldp+78,(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_ecall));
        bufp->chgBit(oldp+79,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_77) 
                               & (IData)((0x30000000U 
                                          == (0x30000000U 
                                              & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst))))));
        bufp->chgBit(oldp+80,(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrw));
        bufp->chgBit(oldp+81,(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrs));
        bufp->chgBit(oldp+82,(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrc));
        bufp->chgBit(oldp+83,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_23) 
                               & (IData)((0x1000U == 
                                          (0x3000U 
                                           & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst))))));
        bufp->chgBit(oldp+84,(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrsi));
        bufp->chgBit(oldp+85,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_24) 
                               & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+86,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_77) 
                               & (1U == (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+87,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrw) 
                               | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrs) 
                                  | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrc)))));
        bufp->chgBit(oldp+88,(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__re));
        bufp->chgBit(oldp+89,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT____VdfgRegularize_hcffc0c70_0_0) 
                               & (~ ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl) 
                                     >> 3U)))));
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [1U] | vlSelfRef.__Vm_traceActivity
                       [2U]) | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgIData(oldp+90,(vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1),32);
        bufp->chgIData(oldp+91,(vlSelfRef.ysyx_25060170_top__DOT__ex_aludata),32);
        bufp->chgIData(oldp+92,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_add_op2),32);
        bufp->chgIData(oldp+93,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_sub_op2),32);
        bufp->chgBit(oldp+94,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2));
        bufp->chgIData(oldp+95,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_sra_op2),32);
        bufp->chgQData(oldp+96,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__mul),64);
        bufp->chgIData(oldp+98,((IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__mul)),32);
        bufp->chgIData(oldp+99,((IData)((vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__mul 
                                         >> 0x20U))),32);
        bufp->chgIData(oldp+100,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__div),32);
        bufp->chgIData(oldp+101,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__rem),32);
        bufp->chgIData(oldp+102,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__alu_res),32);
        bufp->chgIData(oldp+103,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__write_csr_data),32);
        bufp->chgIData(oldp+104,(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__raddr),32);
        bufp->chgCData(oldp+105,((3U & vlSelfRef.ysyx_25060170_top__DOT__ex_aludata)),2);
        bufp->chgCData(oldp+106,(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__sb_mask),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+107,(vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst),32);
        bufp->chgBit(oldp+108,(vlSelfRef.ysyx_25060170_top__DOT__dpic__DOT__ebreak_ena));
        bufp->chgCData(oldp+109,((0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                           >> 7U))),5);
        bufp->chgCData(oldp+110,((0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+111,((0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+112,((0x7fU & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)),7);
        bufp->chgCData(oldp+113,((7U & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+114,((vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0x19U)),7);
        bufp->chgSData(oldp+115,((vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0x14U)),12);
        bufp->chgIData(oldp+116,(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__j_imm),20);
        bufp->chgIData(oldp+117,((vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0xcU)),20);
        bufp->chgSData(oldp+118,(((0xfe0U & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                             >> 0x14U)) 
                                  | (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                              >> 7U)))),12);
        bufp->chgSData(oldp+119,(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__b_imm),12);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+120,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus),32);
        bufp->chgIData(oldp+121,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mepc),32);
        bufp->chgIData(oldp+122,((vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mtvec_base 
                                  << 2U)),32);
        bufp->chgIData(oldp+123,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mcause),32);
        bufp->chgIData(oldp+124,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0U]),32);
        bufp->chgIData(oldp+125,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [1U]),32);
        bufp->chgIData(oldp+126,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [2U]),32);
        bufp->chgIData(oldp+127,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [3U]),32);
        bufp->chgIData(oldp+128,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [4U]),32);
        bufp->chgIData(oldp+129,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [5U]),32);
        bufp->chgIData(oldp+130,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [6U]),32);
        bufp->chgIData(oldp+131,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [7U]),32);
        bufp->chgIData(oldp+132,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [8U]),32);
        bufp->chgIData(oldp+133,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [9U]),32);
        bufp->chgIData(oldp+134,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0xaU]),32);
        bufp->chgIData(oldp+135,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0xbU]),32);
        bufp->chgIData(oldp+136,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0xcU]),32);
        bufp->chgIData(oldp+137,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0xdU]),32);
        bufp->chgIData(oldp+138,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0xeU]),32);
        bufp->chgIData(oldp+139,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0xfU]),32);
        bufp->chgIData(oldp+140,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0x10U]),32);
        bufp->chgIData(oldp+141,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0x11U]),32);
        bufp->chgIData(oldp+142,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0x12U]),32);
        bufp->chgIData(oldp+143,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0x13U]),32);
        bufp->chgIData(oldp+144,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0x14U]),32);
        bufp->chgIData(oldp+145,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0x15U]),32);
        bufp->chgIData(oldp+146,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0x16U]),32);
        bufp->chgIData(oldp+147,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0x17U]),32);
        bufp->chgIData(oldp+148,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0x18U]),32);
        bufp->chgIData(oldp+149,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0x19U]),32);
        bufp->chgIData(oldp+150,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0x1aU]),32);
        bufp->chgIData(oldp+151,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0x1bU]),32);
        bufp->chgIData(oldp+152,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0x1cU]),32);
        bufp->chgIData(oldp+153,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0x1dU]),32);
        bufp->chgIData(oldp+154,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0x1eU]),32);
        bufp->chgIData(oldp+155,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                 [0x1fU]),32);
        bufp->chgBit(oldp+156,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mie));
        bufp->chgBit(oldp+157,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpie));
        bufp->chgCData(oldp+158,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpp),2);
        bufp->chgIData(oldp+159,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mtvec_base),30);
        bufp->chgIData(oldp+160,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[0]),32);
        bufp->chgIData(oldp+161,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[1]),32);
        bufp->chgIData(oldp+162,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[2]),32);
        bufp->chgIData(oldp+163,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[3]),32);
        bufp->chgIData(oldp+164,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[4]),32);
        bufp->chgIData(oldp+165,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[5]),32);
        bufp->chgIData(oldp+166,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[6]),32);
        bufp->chgIData(oldp+167,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[7]),32);
        bufp->chgIData(oldp+168,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[8]),32);
        bufp->chgIData(oldp+169,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[9]),32);
        bufp->chgIData(oldp+170,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[10]),32);
        bufp->chgIData(oldp+171,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[11]),32);
        bufp->chgIData(oldp+172,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[12]),32);
        bufp->chgIData(oldp+173,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[13]),32);
        bufp->chgIData(oldp+174,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[14]),32);
        bufp->chgIData(oldp+175,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[15]),32);
        bufp->chgIData(oldp+176,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[16]),32);
        bufp->chgIData(oldp+177,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[17]),32);
        bufp->chgIData(oldp+178,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[18]),32);
        bufp->chgIData(oldp+179,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[19]),32);
        bufp->chgIData(oldp+180,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[20]),32);
        bufp->chgIData(oldp+181,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[21]),32);
        bufp->chgIData(oldp+182,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[22]),32);
        bufp->chgIData(oldp+183,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[23]),32);
        bufp->chgIData(oldp+184,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[24]),32);
        bufp->chgIData(oldp+185,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[25]),32);
        bufp->chgIData(oldp+186,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[26]),32);
        bufp->chgIData(oldp+187,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[27]),32);
        bufp->chgIData(oldp+188,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[28]),32);
        bufp->chgIData(oldp+189,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[29]),32);
        bufp->chgIData(oldp+190,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[30]),32);
        bufp->chgIData(oldp+191,(vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[31]),32);
    }
    bufp->chgBit(oldp+192,(vlSelfRef.clk));
    bufp->chgBit(oldp+193,(vlSelfRef.rst));
    bufp->chgIData(oldp+194,(vlSelfRef.ysyx_25060170_top__DOT__if_id_pc),32);
    bufp->chgIData(oldp+195,(vlSelfRef.ysyx_25060170_top__DOT__id_ex_pc),32);
    bufp->chgIData(oldp+196,(vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2),32);
    bufp->chgIData(oldp+197,((((0x21U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
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
    bufp->chgBit(oldp+198,((((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch) 
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
    bufp->chgIData(oldp+199,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__re)
                               ? ((IData)(vlSelfRef.rst)
                                   ? 0U : ((8U & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                            ? ((4U 
                                                & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                ? (
                                                   (2U 
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
                                                : (
                                                   (2U 
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
                                            : 0U)) : 0U)),32);
    bufp->chgIData(oldp+200,(((IData)(vlSelfRef.rst)
                               ? 0U : ((1U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_wb_ctl))
                                        ? ((IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__re)
                                            ? ((IData)(vlSelfRef.rst)
                                                ? 0U
                                                : (
                                                   (8U 
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
    bufp->chgIData(oldp+201,((((~ (IData)(vlSelfRef.rst)) 
                               & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs1_ena))
                               ? vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs1_ena)
                                 ? (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                             >> 0xfU))
                                 : 0U)] : 0U)),32);
    bufp->chgIData(oldp+202,((((~ (IData)(vlSelfRef.rst)) 
                               & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs2_ena))
                               ? vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                              [((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs2_ena)
                                 ? (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                             >> 0x14U))
                                 : 0U)] : 0U)),32);
    bufp->chgBit(oldp+203,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch) 
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
    bufp->chgIData(oldp+204,(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__read_csr_data),32);
    bufp->chgIData(oldp+205,((vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                              | vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__read_csr_data)),32);
    bufp->chgIData(oldp+206,(((~ vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1) 
                              & vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__read_csr_data)),32);
    bufp->chgBit(oldp+207,((1U & ((~ (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena)) 
                                  & ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena)
                                      ? (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpie)
                                      : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr)
                                          ? (vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__write_csr_data 
                                             >> 3U)
                                          : (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mie)))))));
    bufp->chgBit(oldp+208,((1U & ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena)
                                   ? (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mie)
                                   : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena) 
                                      | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr)
                                          ? (vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__write_csr_data 
                                             >> 7U)
                                          : (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpie)))))));
    bufp->chgCData(oldp+209,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena)
                               ? 3U : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena)
                                        ? 0U : (3U 
                                                & ((IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr)
                                                    ? 
                                                   (vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__write_csr_data 
                                                    >> 0xdU)
                                                    : (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpp)))))),2);
    bufp->chgIData(oldp+210,(((IData)(vlSelfRef.rst)
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
    bufp->chgIData(oldp+211,(((IData)(vlSelfRef.rst)
                               ? 0x80000000U : ((IData)(4U) 
                                                + vlSelfRef.ysyx_25060170_top__DOT__if_id_pc))),32);
    bufp->chgIData(oldp+212,(((IData)(vlSelfRef.rst)
                               ? 0U : ((1U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                        ? (IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__sb_mask)
                                        : ((2U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                            ? ((IData)(vlSelfRef.rst)
                                                ? 0U
                                                : (
                                                   (0U 
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
                                                : 0U))))),32);
    bufp->chgIData(oldp+213,(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_i),32);
    bufp->chgIData(oldp+214,(((IData)(vlSelfRef.rst)
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
    bufp->chgIData(oldp+215,(((IData)(vlSelfRef.rst)
                               ? 0U : ((8U & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                        ? ((4U & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                    ? 0U
                                                    : (IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_half))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                    ? (IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_byte)
                                                    : 0U))
                                            : ((2U 
                                                & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                    ? vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_i
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_half) 
                                                                    >> 0xfU)))) 
                                                     << 0x10U) 
                                                    | (IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_half)))
                                                : (
                                                   (1U 
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
    bufp->chgCData(oldp+216,(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_byte),8);
    bufp->chgSData(oldp+217,(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_half),16);
    bufp->chgCData(oldp+218,(((IData)(vlSelfRef.rst)
                               ? 0U : ((0U == (3U & vlSelfRef.ysyx_25060170_top__DOT__ex_aludata))
                                        ? 3U : ((2U 
                                                 == 
                                                 (3U 
                                                  & vlSelfRef.ysyx_25060170_top__DOT__ex_aludata))
                                                 ? 0xcU
                                                 : 0U)))),4);
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
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
