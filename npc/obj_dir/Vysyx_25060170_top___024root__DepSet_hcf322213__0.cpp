// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25060170_top.h for the primary calling header

#include "Vysyx_25060170_top__pch.h"
#include "Vysyx_25060170_top___024root.h"

void Vysyx_25060170_top___024root___ico_sequent__TOP__0(Vysyx_25060170_top___024root* vlSelf);

void Vysyx_25060170_top___024root___eval_ico(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_ico\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vysyx_25060170_top___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

extern const VlUnpacked<CData/*3:0*/, 256> Vysyx_25060170_top__ConstPool__TABLE_h3b4d3bf7_0;
extern const VlUnpacked<CData/*3:0*/, 8> Vysyx_25060170_top__ConstPool__TABLE_h1ece3f4a_0;

VL_INLINE_OPT void Vysyx_25060170_top___024root___ico_sequent__TOP__0(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___ico_sequent__TOP__0\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__6__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x38U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__5__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x18U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jal 
        = ((~ (IData)(vlSelfRef.rst)) & (0x6cU == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_lui 
        = ((~ (IData)(vlSelfRef.rst)) & (0x34U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_auipc 
        = ((~ (IData)(vlSelfRef.rst)) & (0x14U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jalr 
        = ((~ (IData)(vlSelfRef.rst)) & (0x64U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__0__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x20U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch 
        = ((~ (IData)(vlSelfRef.rst)) & (0x60U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__1__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (IData)((3U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst))));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x10U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__3__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x30U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__7__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x70U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgExtracted_hb8436119__0 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_lui) 
           | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_auipc));
    vlSelfRef.ysyx_25060170_top__DOT__id_ex_jump = 
        ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jal) 
         | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jalr));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_102 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xeU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__0__KET__));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_95 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch) 
           & (IData)((0U == (0x6000U & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst))));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_7 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xeU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_6 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__1__KET__) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xeU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_98 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xeU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__1__KET__));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_83 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xeU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__4__KET__));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_19 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__4__KET__) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xeU));
    vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs2_ena 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__6__KET__) 
           | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__3__KET__) 
              | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch) 
                 | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__0__KET__))));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_93 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xeU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__3__KET__));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_14 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__3__KET__) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xeU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_23 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__7__KET__) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xeU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_79 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xeU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__7__KET__));
    vlSelfRef.ysyx_25060170_top__DOT__id_wb_ctl = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__1__KET__)
                                                    ? 1U
                                                    : 
                                                   (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__7__KET__) 
                                                     | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__6__KET__) 
                                                        | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__5__KET__) 
                                                           | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__4__KET__) 
                                                              | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__3__KET__) 
                                                                 | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_lui) 
                                                                    | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_auipc) 
                                                                       | (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_jump))))))))
                                                     ? 2U
                                                     : 0U));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_100 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_102));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_4 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_102) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_94 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_7));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_8 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_7) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_96 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_6));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_97 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_98));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_5 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_98) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_82 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_83));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_18 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_83) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_20 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_19) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_81 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_19));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_92 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_93));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_12 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_93) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_88 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_14));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_16 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_14) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_24 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_23) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_78 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_79));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_22 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_79) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_top__DOT__id_reg_rd_ena 
        = ((0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                            >> 7U))) & (0U != (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_wb_ctl)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_21 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_81) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_91 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_92));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_11 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_92) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_89 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_12));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_13 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_12) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_87 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_88));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_15 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_88) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_84 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_16));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_17 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_16) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrsi 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_24));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrw 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_78) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_77 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_78));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrs 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_22));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrc 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_22) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_top__DOT__id_reg_rd_addr 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rd_ena)
            ? (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                        >> 7U)) : 0U);
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_ecall 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_77) 
           & (0U == (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                     >> 0x14U)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_32 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrc) 
           | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrsi));
    vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs1_ena 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__6__KET__) 
           | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__5__KET__) 
              | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__4__KET__) 
                 | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__3__KET__) 
                    | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch) 
                       | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__1__KET__) 
                          | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__0__KET__) 
                             | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jalr) 
                                | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrw) 
                                    | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrs) 
                                       | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrc))) 
                                   | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_ecall))))))))));
    vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel 
        = ((((((~ (IData)(vlSelfRef.rst)) << 7U) & 
              ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                     >> 0x1eU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_21)) 
                << 7U) | ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0x19U)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_87)) 
                           << 7U) | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_auipc) 
                                      << 7U) | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_77) 
                                                  & (1U 
                                                     == 
                                                     (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                      >> 0x14U))) 
                                                 << 7U) 
                                                | ((0x7ffff80U 
                                                    & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_100) 
                                                        << 7U) 
                                                       & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                          >> 5U))) 
                                                   | ((((~ 
                                                         (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                          >> 0xcU)) 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_4)) 
                                                       << 7U) 
                                                      | ((((~ 
                                                            (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                             >> 0xcU)) 
                                                           & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_8)) 
                                                          << 7U) 
                                                         | ((0x7ffff80U 
                                                             & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_5) 
                                                                 << 7U) 
                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                   >> 5U))) 
                                                            | ((0x3f80U 
                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_11) 
                                                                    << 7U) 
                                                                   & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                      >> 0x12U))) 
                                                               | ((0x3f80U 
                                                                   & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_87) 
                                                                       << 7U) 
                                                                      & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                         >> 0x12U))) 
                                                                  | ((0x3f80U 
                                                                      & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_17) 
                                                                          << 7U) 
                                                                         & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                            >> 0x12U))) 
                                                                     | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrw) 
                                                                         << 7U) 
                                                                        | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_23) 
                                                                             & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)))) 
                                                                            << 7U) 
                                                                           | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrsi) 
                                                                               << 7U) 
                                                                              | (0x7ffff80U 
                                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_24) 
                                                                                << 7U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 5U)))))))))))))))))) 
             | (0x40U & (((~ (IData)(vlSelfRef.rst)) 
                          << 6U) & ((0x3ffffc0U & (
                                                   ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_82) 
                                                    << 6U) 
                                                   & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                      >> 6U))) 
                                    | ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                             >> 0x19U)) 
                                         & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_13)) 
                                        << 6U) | ((
                                                   ((~ 
                                                     (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                      >> 0x19U)) 
                                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_87)) 
                                                   << 6U) 
                                                  | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_lui) 
                                                      << 6U) 
                                                     | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jalr) 
                                                         << 6U) 
                                                        | ((((~ 
                                                              (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                               >> 0xcU)) 
                                                             & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_100)) 
                                                            << 6U) 
                                                           | ((0x3ffffc0U 
                                                               & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_94) 
                                                                   << 6U) 
                                                                  & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                     >> 6U))) 
                                                              | ((((~ 
                                                                    (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                     >> 0xcU)) 
                                                                   & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_8)) 
                                                                  << 6U) 
                                                                 | ((((~ 
                                                                       (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                        >> 0xcU)) 
                                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_5)) 
                                                                     << 6U) 
                                                                    | ((0x3ffffc0U 
                                                                        & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_5) 
                                                                            << 6U) 
                                                                           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                              >> 6U))) 
                                                                       | ((0x1fc0U 
                                                                           & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_91) 
                                                                               << 6U) 
                                                                              & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x13U))) 
                                                                          | ((0x1fc0U 
                                                                              & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_84) 
                                                                                << 6U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x13U))) 
                                                                             | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_77) 
                                                                                & (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)))) 
                                                                                | vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_32) 
                                                                                << 6U)))))))))))))))) 
            | ((((~ (IData)(vlSelfRef.rst)) << 5U) 
                & ((0x1ffffe0U & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_20) 
                                   << 5U) & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                             >> 7U))) 
                   | ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                            >> 0x19U)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_89)) 
                       << 5U) | ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                       >> 0x19U)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_13)) 
                                  << 5U) | ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                  >> 0x19U)) 
                                              & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_17)) 
                                             << 5U) 
                                            | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_auipc) 
                                                << 5U) 
                                               | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jal) 
                                                   << 5U) 
                                                  | ((((~ 
                                                        (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                         >> 0xcU)) 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_94)) 
                                                      << 5U) 
                                                     | ((0x1ffffe0U 
                                                         & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_94) 
                                                             << 5U) 
                                                            & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                               >> 7U))) 
                                                        | ((((~ 
                                                              (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                               >> 0xcU)) 
                                                             & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_8)) 
                                                            << 5U) 
                                                           | ((0x1ffffe0U 
                                                               & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_97) 
                                                                   << 5U) 
                                                                  & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                     >> 7U))) 
                                                              | ((((~ 
                                                                    (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                     >> 0xcU)) 
                                                                   & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_5)) 
                                                                  << 5U) 
                                                                 | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_6) 
                                                                      & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)))) 
                                                                     << 5U) 
                                                                    | ((0xfe0U 
                                                                        & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_11) 
                                                                            << 5U) 
                                                                           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                              >> 0x14U))) 
                                                                       | ((0xfe0U 
                                                                           & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_13) 
                                                                               << 5U) 
                                                                              & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x14U))) 
                                                                          | ((0xfe0U 
                                                                              & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_15) 
                                                                                << 5U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x14U))) 
                                                                             | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_ecall) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrw) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrs) 
                                                                                << 5U) 
                                                                                | (0x1ffffe0U 
                                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_24) 
                                                                                << 5U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 7U)))))))))))))))))))))) 
               | (((~ (IData)(vlSelfRef.rst)) << 4U) 
                  & ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                           >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_20)) 
                      << 4U) | ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                      >> 0x19U)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_11)) 
                                 << 4U) | ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                 >> 0x19U)) 
                                             & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_89)) 
                                            << 4U) 
                                           | ((((~ 
                                                 (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                  >> 0x19U)) 
                                                & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_84)) 
                                               << 4U) 
                                              | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_lui) 
                                                  << 4U) 
                                                 | ((0xfffff0U 
                                                     & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_95) 
                                                         << 4U) 
                                                        & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                           >> 8U))) 
                                                    | ((((~ 
                                                          (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                           >> 0xcU)) 
                                                         & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_94)) 
                                                        << 4U) 
                                                       | ((0xfffff0U 
                                                           & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_94) 
                                                               << 4U) 
                                                              & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                 >> 8U))) 
                                                          | ((((~ 
                                                                (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                 >> 0xcU)) 
                                                               & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_97)) 
                                                              << 4U) 
                                                             | ((0xfffff0U 
                                                                 & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_97) 
                                                                     << 4U) 
                                                                    & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                       >> 8U))) 
                                                                | ((0xfffff0U 
                                                                    & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_5) 
                                                                        << 4U) 
                                                                       & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                          >> 8U))) 
                                                                   | ((0xfffff0U 
                                                                       & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_96) 
                                                                           << 4U) 
                                                                          & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                             >> 8U))) 
                                                                      | ((0x7f0U 
                                                                          & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_91) 
                                                                              << 4U) 
                                                                             & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x15U))) 
                                                                         | ((0x7f0U 
                                                                             & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_11) 
                                                                                << 4U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x15U))) 
                                                                            | ((0x7f0U 
                                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_13) 
                                                                                << 4U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x15U))) 
                                                                               | ((0x7f0U 
                                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_87) 
                                                                                << 4U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x15U))) 
                                                                                | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_77) 
                                                                                & (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)))) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_23) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst))))) 
                                                                                << 4U)))))))))))))))))))) 
           | (((8U & (((~ (IData)(vlSelfRef.rst)) << 3U) 
                      & ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_81)) 
                          << 3U) | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_91) 
                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_85)) 
                                     << 3U) | ((((~ 
                                                  (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                   >> 0x19U)) 
                                                 & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_11)) 
                                                << 3U) 
                                               | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_15) 
                                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_85)) 
                                                   << 3U) 
                                                  | ((((~ 
                                                        (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                         >> 0x19U)) 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_17)) 
                                                      << 3U) 
                                                     | ((((~ 
                                                           (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                            >> 0xcU)) 
                                                          & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_95)) 
                                                         << 3U) 
                                                        | ((0x7ffff8U 
                                                            & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_95) 
                                                                << 3U) 
                                                               & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                  >> 9U))) 
                                                           | ((((~ 
                                                                 (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                  >> 0xcU)) 
                                                                & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_94)) 
                                                               << 3U) 
                                                              | ((0x7ffff8U 
                                                                  & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_8) 
                                                                      << 3U) 
                                                                     & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                        >> 9U))) 
                                                                 | ((((~ 
                                                                       (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                        >> 0xcU)) 
                                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_97)) 
                                                                     << 3U) 
                                                                    | ((((~ 
                                                                          (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                           >> 0xcU)) 
                                                                         & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_5)) 
                                                                        << 3U) 
                                                                       | ((((~ 
                                                                             (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                              >> 0xcU)) 
                                                                            & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_96)) 
                                                                           << 3U) 
                                                                          | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_6) 
                                                                               & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)))) 
                                                                              << 3U) 
                                                                             | ((0x3f8U 
                                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_91) 
                                                                                << 3U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x16U))) 
                                                                                | ((0x3f8U 
                                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_87) 
                                                                                << 3U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x16U))) 
                                                                                | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_ecall) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrw) 
                                                                                | vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_32)) 
                                                                                << 3U)))))))))))))))))) 
               | (((~ (IData)(vlSelfRef.rst)) << 2U) 
                  & ((0x3ffffcU & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_18) 
                                    << 2U) & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                              >> 0xaU))) 
                     | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_91) 
                          & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_86)) 
                         << 2U) | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_91) 
                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_85)) 
                                    << 2U) | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_15) 
                                                & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_86)) 
                                               << 2U) 
                                              | ((((~ 
                                                    (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                     >> 0x19U)) 
                                                   & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_84)) 
                                                  << 2U) 
                                                 | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_77) 
                                                      & (1U 
                                                         == 
                                                         (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                          >> 0x14U))) 
                                                     << 2U) 
                                                    | ((0x3ffffcU 
                                                        & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_4) 
                                                            << 2U) 
                                                           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                              >> 0xaU))) 
                                                       | ((((~ 
                                                             (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                              >> 0xcU)) 
                                                            & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_95)) 
                                                           << 2U) 
                                                          | ((0x3ffffcU 
                                                              & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_95) 
                                                                  << 2U) 
                                                                 & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                    >> 0xaU))) 
                                                             | ((0x3ffffcU 
                                                                 & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_8) 
                                                                     << 2U) 
                                                                    & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                       >> 0xaU))) 
                                                                | ((0x3ffffcU 
                                                                    & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_97) 
                                                                        << 2U) 
                                                                       & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                          >> 0xaU))) 
                                                                   | ((0x3ffffcU 
                                                                       & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_96) 
                                                                           << 2U) 
                                                                          & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                             >> 0xaU))) 
                                                                      | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_6) 
                                                                           & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)))) 
                                                                          << 2U) 
                                                                         | ((0x1fcU 
                                                                             & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_13) 
                                                                                << 2U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x17U))) 
                                                                            | ((0x1fcU 
                                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_17) 
                                                                                << 2U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x17U))) 
                                                                               | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_77) 
                                                                                & (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)))) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrs) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_23) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)))) 
                                                                                << 2U) 
                                                                                | (0x3ffffcU 
                                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_24) 
                                                                                << 2U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0xaU))))))))))))))))))))))) 
              | ((((~ (IData)(vlSelfRef.rst)) << 1U) 
                  & ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                           >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_18)) 
                      << 1U) | ((6U & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_21) 
                                        << 1U) & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                  >> 0x1dU))) 
                                | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_91) 
                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_86)) 
                                    << 1U) | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_15) 
                                                & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_85)) 
                                               << 1U) 
                                              | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jalr) 
                                                  << 1U) 
                                                 | ((0x1ffffeU 
                                                     & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_100) 
                                                         << 1U) 
                                                        & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                           >> 0xbU))) 
                                                    | ((0x1ffffeU 
                                                        & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_4) 
                                                            << 1U) 
                                                           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                              >> 0xbU))) 
                                                       | ((((~ 
                                                             (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                              >> 0xcU)) 
                                                            & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_95)) 
                                                           << 1U) 
                                                          | ((((~ 
                                                                (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                 >> 0xcU)) 
                                                               & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_97)) 
                                                              << 1U) 
                                                             | ((((~ 
                                                                   (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                    >> 0xcU)) 
                                                                  & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_96)) 
                                                                 << 1U) 
                                                                | ((0x1ffffeU 
                                                                    & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_96) 
                                                                        << 1U) 
                                                                       & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                          >> 0xbU))) 
                                                                   | ((0xfeU 
                                                                       & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_89) 
                                                                           << 1U) 
                                                                          & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                             >> 0x18U))) 
                                                                      | ((0xfeU 
                                                                          & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_13) 
                                                                              << 1U) 
                                                                             & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x18U))) 
                                                                         | ((0xfeU 
                                                                             & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_15) 
                                                                                << 1U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x18U))) 
                                                                            | ((0xfeU 
                                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_84) 
                                                                                << 1U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x18U))) 
                                                                               | ((0xfeU 
                                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_17) 
                                                                                << 1U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x18U))) 
                                                                                | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_ecall) 
                                                                                | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrc)) 
                                                                                << 1U)))))))))))))))))) 
                 | ((~ (IData)(vlSelfRef.rst)) & ((
                                                   (~ 
                                                    (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                     >> 0xcU)) 
                                                   & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_82)) 
                                                  | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_21) 
                                                      & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                         >> 0x1eU)) 
                                                     | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_15) 
                                                         & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_86)) 
                                                        | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jal) 
                                                           | (((~ 
                                                                (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                 >> 0xcU)) 
                                                               & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_100)) 
                                                              | (((~ 
                                                                   (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                    >> 0xcU)) 
                                                                  & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_4)) 
                                                                 | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_4) 
                                                                     & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                        >> 0xcU)) 
                                                                    | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_8) 
                                                                        & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                           >> 0xcU)) 
                                                                       | (((~ 
                                                                            (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                             >> 0xcU)) 
                                                                           & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_96)) 
                                                                          | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_89) 
                                                                              & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x19U)) 
                                                                             | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_15) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x19U)) 
                                                                                | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_84) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x19U)) 
                                                                                | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrs)))))))))))))))));
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__mcause_value = 0U;
    vlSelfRef.__Vtableidx1 = vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel;
    vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl = Vysyx_25060170_top__ConstPool__TABLE_h3b4d3bf7_0
        [vlSelfRef.__Vtableidx1];
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena = 0U;
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena = 0U;
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena = 0U;
    if ((0x2aU != (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) {
        if ((0x54U != (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) {
            vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena 
                = (((0xa8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                    || (0x94U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                   || (((((0x25U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                          || (0x4aU == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                         || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                        || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                       && (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                           >> 0xfU)))));
            vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena 
                = (((0xa8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                    || (0x94U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))
                    ? (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                       >> 7U))) : (
                                                   (((0x25U 
                                                      == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                                                     || (0x4aU 
                                                         == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                                                    || (0xc8U 
                                                        == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                                                   || (0xa4U 
                                                       == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))));
        }
        if ((0x54U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) {
            vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena = 1U;
        } else if ((1U & (~ ((0xa8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                             || (0x94U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))))) {
            if ((1U & (~ ((((0x25U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                            || (0x4aU == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                           || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                          || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))))) {
                vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena = 0U;
            }
        }
    }
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena = 0U;
    vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT____VdfgRegularize_hcffc0c70_0_0 
        = (1U & (~ ((IData)(vlSelfRef.rst) | (0U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl)))));
    if ((0x2aU == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) {
        vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__mcause_value = 0xbU;
        vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena = 1U;
    } else {
        if ((1U & (~ ((0xa8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                      || (0x94U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))))) {
            if ((1U & (~ ((0x25U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                          || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))))) {
                if ((1U & (~ ((0x4aU == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                              || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))))) {
                    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__mcause_value = 0U;
                }
            }
        }
        if ((0x54U != (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) {
            if ((1U & (~ ((0xa8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                          || (0x94U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))))) {
                if ((1U & (~ ((((0x25U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                                || (0x4aU == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                               || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                              || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))))) {
                    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena = 0U;
                }
            }
        }
    }
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT____VdfgRegularize_hc2007cd8_0_4 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena) 
           | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena));
    vlSelfRef.ysyx_25060170_top__DOT__id_ex_csrctl 
        = ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena) 
             << 3U) | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena) 
                       << 2U)) | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena) 
                                   << 1U) | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena)));
    if (vlSelfRef.rst) {
        vlSelfRef.ysyx_25060170_top__DOT__id_ex_pc = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2 = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 = 0U;
    } else {
        vlSelfRef.ysyx_25060170_top__DOT__id_ex_pc 
            = vlSelfRef.ysyx_25060170_top__DOT__if_id_pc;
        vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm 
            = (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__1__KET__) 
                | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__4__KET__) 
                   | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__5__KET__) 
                      | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__7__KET__) 
                         | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jalr)))))
                ? (((- (IData)((vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0x1fU))) << 0xcU) 
                   | (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                      >> 0x14U)) : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgExtracted_hb8436119__0)
                                     ? (0xfffff000U 
                                        & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)
                                     : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jal)
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__j_imm 
                                                            >> 0x13U)))) 
                                             << 0x15U) 
                                            | (vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__j_imm 
                                               << 1U))
                                         : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__0__KET__)
                                             ? (((- (IData)(
                                                            (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | ((0xfe0U 
                                                    & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                         >> 7U))))
                                             : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch)
                                                 ? 
                                                (((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__b_imm) 
                                                                 >> 0xbU)))) 
                                                  << 0xdU) 
                                                 | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__b_imm) 
                                                    << 1U))
                                                 : 0U)))));
        vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2 
            = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs2_ena)
                ? (((~ (IData)(vlSelfRef.rst)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs2_ena))
                    ? vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                   [((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs2_ena)
                      ? (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0x14U)) : 0U)]
                    : 0U) : (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__0__KET__) 
                              | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__1__KET__) 
                                 | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch) 
                                    | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__4__KET__) 
                                       | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__5__KET__) 
                                          | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__7__KET__) 
                                             | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgExtracted_hb8436119__0)))))))
                              ? vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm
                              : 0U));
        vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
            = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs1_ena)
                ? (((~ (IData)(vlSelfRef.rst)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs1_ena))
                    ? vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                   [((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs1_ena)
                      ? (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0xfU)) : 0U)] : 0U)
                : (((0xa0U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                    | (0x21U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))
                    ? vlSelfRef.ysyx_25060170_top__DOT__if_id_pc
                    : ((((0x94U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                         | (0xc8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                        | (0xa4U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))
                        ? (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                    >> 0xfU)) : 0U)));
    }
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_add_op2 
        = (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
           + vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2);
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_sra_op2 
        = VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1, 
                         (0x1fU & vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2));
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__div 
        = VL_DIVS_III(32, vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1, vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2);
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__rem 
        = VL_MODDIVS_III(32, vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1, vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2);
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__mul 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1), 
                      VL_EXTENDS_QI(64,32, vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2));
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_sub_op2 
        = (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
           - vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2);
    vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__re 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT____VdfgRegularize_hcffc0c70_0_0) 
           & ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl) 
              >> 3U));
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2 
        = (1U & (((~ (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2 
                      >> 0x1fU)) & (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                    >> 0x1fU)) | ((
                                                   (~ 
                                                    (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                     >> 0x1fU)) 
                                                   & ((~ 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2 
                                                        >> 0x1fU)) 
                                                      & (vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_sub_op2 
                                                         >> 0x1fU))) 
                                                  | ((vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                      & (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2 
                                                         & vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_sub_op2)) 
                                                     >> 0x1fU))));
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr 
        = ((0U != (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_csrctl))
            ? (0xfffU & vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm)
            : 0U);
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr 
        = ((0x300U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
           & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena));
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__read_csr_data 
        = (((0x300U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
            & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena))
            ? vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus
            : ((((0x341U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                 & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena)) 
                | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena))
                ? vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mepc
                : ((((0x305U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena)) 
                    | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena))
                    ? (vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mtvec_base 
                       << 2U) : (((0x342U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                                  & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena))
                                  ? vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mcause
                                  : 0U))));
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__write_csr_data 
        = ((0x2aU == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
            ? vlSelfRef.ysyx_25060170_top__DOT__id_ex_pc
            : (((0xa8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                || (0x94U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))
                ? vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1
                : (((0x25U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                    || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))
                    ? (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                       | vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__read_csr_data)
                    : (((0x4aU == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                        || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))
                        ? ((~ vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1) 
                           & vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__read_csr_data)
                        : 0U))));
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__alu_res 
        = ((IData)(vlSelfRef.rst) ? 0U : ((0x80U & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                           ? ((0x40U 
                                               & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                               ? ((0x20U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        ^ vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)))))))
                                               : ((0x20U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : (IData)(
                                                                  (vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__mul 
                                                                   >> 0x20U))))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_add_op2)))))
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__div)))
                                                     : 0U)
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__rem)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        + vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        + vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm)
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)))))))))
                                           : ((0x40U 
                                               & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                               ? ((0x20U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        + vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        < vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2))))))
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__mul))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_add_op2))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__rem
                                                        : 
                                                       ((IData)(4U) 
                                                        + vlSelfRef.ysyx_25060170_top__DOT__id_ex_pc))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        + vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm)
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        << 
                                                        (0x1fU 
                                                         & vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2))))))))
                                               : ((0x20U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        + vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2)))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        & vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__div
                                                        : 0U)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 
                                                       ((IData)(4U) 
                                                        + vlSelfRef.ysyx_25060170_top__DOT__id_ex_pc)
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        & vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2))))))
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        + vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        << 
                                                        (0x1fU 
                                                         & vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        + vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        | vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        | vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_sub_op2))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        + vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm)
                                                        : vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_sra_op2)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        ^ vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_add_op2)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2))
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        < vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_sra_op2
                                                        : (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_add_op2
                                                        : 0U)))))))));
    vlSelfRef.ysyx_25060170_top__DOT__ex_aludata = 
        ((0U != (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_csrctl))
          ? vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__read_csr_data
          : vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__alu_res);
    if (vlSelfRef.rst) {
        vlSelfRef.ysyx_25060170_top__DOT__ifu0__DOT__pc_next = 0x80000000U;
        vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__raddr = 0U;
    } else {
        vlSelfRef.ysyx_25060170_top__DOT__ifu0__DOT__pc_next 
            = ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch) 
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
                                  : ((0x38U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                      ? (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2)
                                      : ((0x70U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                                         && (1U & (~ (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2)))))))))) 
                | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_jump) 
                   | (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT____VdfgRegularize_hc2007cd8_0_4)))
                ? (((0x21U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                    | (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch))
                    ? (vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm 
                       + vlSelfRef.ysyx_25060170_top__DOT__id_ex_pc)
                    : ((0x42U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                        ? (0xfffffffeU & (vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm 
                                          + vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1))
                        : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT____VdfgRegularize_hc2007cd8_0_4)
                            ? vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__read_csr_data
                            : 0U))) : ((IData)(vlSelfRef.rst)
                                        ? 0x80000000U
                                        : ((IData)(4U) 
                                           + vlSelfRef.ysyx_25060170_top__DOT__if_id_pc)));
        vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__raddr 
            = vlSelfRef.ysyx_25060170_top__DOT__ex_aludata;
    }
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_ie_ena 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr) 
           | (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT____VdfgRegularize_hc2007cd8_0_4));
    if (vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena) {
        vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mpp_set = 3U;
        vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mpie_set 
            = (1U & (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mie));
    } else {
        vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mpp_set 
            = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena)
                ? 0U : (3U & ((IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr)
                               ? (vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__write_csr_data 
                                  >> 0xdU) : (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpp))));
        vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mpie_set 
            = (1U & ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena) 
                     | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr)
                         ? (vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__write_csr_data 
                            >> 7U) : (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpie))));
    }
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mie_set 
        = (1U & ((~ (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena)) 
                 & ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena)
                     ? (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpie)
                     : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr)
                         ? (vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__write_csr_data 
                            >> 3U) : (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mie)))));
    vlSelfRef.__Vtableidx2 = ((6U & (vlSelfRef.ysyx_25060170_top__DOT__ex_aludata 
                                     << 1U)) | (IData)(vlSelfRef.rst));
    vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__sb_mask 
        = Vysyx_25060170_top__ConstPool__TABLE_h1ece3f4a_0
        [vlSelfRef.__Vtableidx2];
}

void Vysyx_25060170_top___024root___eval_triggers__ico(Vysyx_25060170_top___024root* vlSelf);

bool Vysyx_25060170_top___024root___eval_phase__ico(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_phase__ico\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vysyx_25060170_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vysyx_25060170_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vysyx_25060170_top___024root___eval_act(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_act\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vysyx_25060170_top___024root___nba_sequent__TOP__0(Vysyx_25060170_top___024root* vlSelf);
void Vysyx_25060170_top___024root___nba_sequent__TOP__1(Vysyx_25060170_top___024root* vlSelf);

void Vysyx_25060170_top___024root___eval_nba(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_nba\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vysyx_25060170_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vysyx_25060170_top___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__dpic__DOT__difftest_dut_csr_TOP(IData/*31:0*/ csr_mstatus, IData/*31:0*/ csr_mtvec, IData/*31:0*/ csr_mepc, IData/*31:0*/ csr_mcause);
void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__dpic__DOT__difftest_dut_regs_TOP(IData/*31:0*/ regs0, IData/*31:0*/ regs1, IData/*31:0*/ regs2, IData/*31:0*/ regs3, IData/*31:0*/ regs4, IData/*31:0*/ regs5, IData/*31:0*/ regs6, IData/*31:0*/ regs7, IData/*31:0*/ regs8, IData/*31:0*/ regs9, IData/*31:0*/ regs10, IData/*31:0*/ regs11, IData/*31:0*/ regs12, IData/*31:0*/ regs13, IData/*31:0*/ regs14, IData/*31:0*/ regs15, IData/*31:0*/ regs16, IData/*31:0*/ regs17, IData/*31:0*/ regs18, IData/*31:0*/ regs19, IData/*31:0*/ regs20, IData/*31:0*/ regs21, IData/*31:0*/ regs22, IData/*31:0*/ regs23, IData/*31:0*/ regs24, IData/*31:0*/ regs25, IData/*31:0*/ regs26, IData/*31:0*/ regs27, IData/*31:0*/ regs28, IData/*31:0*/ regs29, IData/*31:0*/ regs30, IData/*31:0*/ regs31);
void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__lsu3__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata, CData/*7:0*/ rlen);
void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__dpic__DOT__pc_inst_end_TOP(IData/*31:0*/ thepc_data, IData/*31:0*/ the_inst);
void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__dpic__DOT__set_npc_exit_TOP(IData/*31:0*/ pc, IData/*31:0*/ halt_ret);

VL_INLINE_OPT void Vysyx_25060170_top___024root___nba_sequent__TOP__0(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___nba_sequent__TOP__0\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus;
    __Vdly__ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus = 0;
    CData/*0:0*/ __VdlySet__ysyx_25060170_top__DOT__reg3__DOT__regs__v0;
    __VdlySet__ysyx_25060170_top__DOT__reg3__DOT__regs__v0 = 0;
    IData/*31:0*/ __VdlyVal__ysyx_25060170_top__DOT__reg3__DOT__regs__v32;
    __VdlyVal__ysyx_25060170_top__DOT__reg3__DOT__regs__v32 = 0;
    CData/*4:0*/ __VdlyDim0__ysyx_25060170_top__DOT__reg3__DOT__regs__v32;
    __VdlyDim0__ysyx_25060170_top__DOT__reg3__DOT__regs__v32 = 0;
    CData/*0:0*/ __VdlySet__ysyx_25060170_top__DOT__reg3__DOT__regs__v32;
    __VdlySet__ysyx_25060170_top__DOT__reg3__DOT__regs__v32 = 0;
    // Body
    __Vdly__ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus 
        = vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus;
    __VdlySet__ysyx_25060170_top__DOT__reg3__DOT__regs__v0 = 0U;
    __VdlySet__ysyx_25060170_top__DOT__reg3__DOT__regs__v32 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.rst)))) {
        if (vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_ie_ena) {
            vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpp 
                = vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mpp_set;
            vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mie 
                = vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mie_set;
            vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpie 
                = vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mpie_set;
        }
    }
    if (vlSelfRef.rst) {
        vlSelfRef.ysyx_25060170_top__DOT__ifu0__DOT____Vstrobe0 = 1U;
        vlSelfRef.ysyx_25060170_top__DOT__ifu0__DOT____Vstrobe1 = 1U;
        __Vdly__ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus 
            = __Vdly__ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus;
        vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mtvec_base = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mcause = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mepc = 0U;
        __VdlySet__ysyx_25060170_top__DOT__reg3__DOT__regs__v0 = 1U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_ie_ena)))) {
            __Vdly__ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus 
                = vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus;
        }
        vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus 
            = __Vdly__ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus;
        vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mtvec_base 
            = (0x3fffffffU & (((0x305U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                               & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena))
                               ? (vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__write_csr_data 
                                  >> 2U) : vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mtvec_base));
        vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mcause 
            = (((0x342U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena))
                ? vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__write_csr_data
                : ((2U & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_csrctl))
                    ? vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__mcause_value
                    : vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mcause));
        vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mepc 
            = ((((0x341U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                 & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena)) 
                | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena))
                ? vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__write_csr_data
                : vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mepc);
        if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rd_ena) 
             & (0U != (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rd_addr)))) {
            __VdlyVal__ysyx_25060170_top__DOT__reg3__DOT__regs__v32 
                = ((IData)(vlSelfRef.rst) ? 0U : ((1U 
                                                   == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_wb_ctl))
                                                   ? 
                                                  ((IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__re)
                                                    ? 
                                                   ((IData)(vlSelfRef.rst)
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
                                                         : 
                                                        (0xffffU 
                                                         & vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_i))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                         ? 
                                                        (0xffU 
                                                         & vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_i)
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
                                                                      & (vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_i 
                                                                         >> 0xfU)))) 
                                                          << 0x10U) 
                                                         | (0xffffU 
                                                            & vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_i)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                         ? 
                                                        (((- (IData)(
                                                                     (1U 
                                                                      & (vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_i 
                                                                         >> 7U)))) 
                                                          << 8U) 
                                                         | (0xffU 
                                                            & vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_i))
                                                         : 0U)))
                                                      : 0U))
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_wb_ctl))
                                                    ? vlSelfRef.ysyx_25060170_top__DOT__ex_aludata
                                                    : 0U)));
            __VdlyDim0__ysyx_25060170_top__DOT__reg3__DOT__regs__v32 
                = vlSelfRef.ysyx_25060170_top__DOT__id_reg_rd_addr;
            __VdlySet__ysyx_25060170_top__DOT__reg3__DOT__regs__v32 = 1U;
        }
    }
    if (__VdlySet__ysyx_25060170_top__DOT__reg3__DOT__regs__v0) {
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[0U] = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[1U] = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[2U] = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[3U] = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[4U] = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[5U] = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[6U] = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[7U] = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[8U] = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[9U] = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[0xaU] = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[0xbU] = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[0xcU] = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[0xdU] = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[0xeU] = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[0xfU] = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[0x10U] = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[0x11U] = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[0x12U] = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[0x13U] = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[0x14U] = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[0x15U] = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[0x16U] = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[0x17U] = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[0x18U] = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[0x19U] = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[0x1aU] = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[0x1bU] = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[0x1cU] = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[0x1dU] = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[0x1eU] = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[0x1fU] = 0U;
    }
    if (__VdlySet__ysyx_25060170_top__DOT__reg3__DOT__regs__v32) {
        vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs[__VdlyDim0__ysyx_25060170_top__DOT__reg3__DOT__regs__v32] 
            = __VdlyVal__ysyx_25060170_top__DOT__reg3__DOT__regs__v32;
    }
    vlSelfRef.ysyx_25060170_top__DOT__if_id_pc = ((IData)(vlSelfRef.rst)
                                                   ? 0x80000000U
                                                   : vlSelfRef.ysyx_25060170_top__DOT__ifu0__DOT__pc_next);
    Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__dpic__DOT__difftest_dut_csr_TOP(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus, vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mepc, 
                                                                                (vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mtvec_base 
                                                                                << 2U), vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mcause);
    Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__dpic__DOT__difftest_dut_regs_TOP(
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [1U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [2U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [3U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [4U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [5U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [6U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [7U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [8U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [9U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0xaU], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0xbU], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0xcU], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0xdU], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0xeU], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0xfU], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0x10U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0x11U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0x12U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0x13U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0x14U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0x15U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0x16U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0x17U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0x18U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0x19U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0x1aU], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0x1bU], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0x1cU], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0x1dU], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0x1eU], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0x1fU]);
    vlSelfRef.ysyx_25060170_top__DOT__id_ex_pc = ((IData)(vlSelfRef.rst)
                                                   ? 0U
                                                   : vlSelfRef.ysyx_25060170_top__DOT__if_id_pc);
    Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__lsu3__DOT__pmem_read_TOP(vlSelfRef.ysyx_25060170_top__DOT__if_id_pc, vlSelfRef.__Vtask_ysyx_25060170_top__DOT__dpic__DOT__pmem_read__2__rdata, 4U);
    vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
        = vlSelfRef.__Vtask_ysyx_25060170_top__DOT__dpic__DOT__pmem_read__2__rdata;
    Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__dpic__DOT__pc_inst_end_TOP(vlSelfRef.ysyx_25060170_top__DOT__if_id_pc, vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst);
    if ((0x100073U == vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)) {
        Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__dpic__DOT__set_npc_exit_TOP(vlSelfRef.ysyx_25060170_top__DOT__if_id_pc, 0U);
    }
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__j_imm 
        = ((0x80000U & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                        >> 0xcU)) | ((0x7f800U & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                            >> 0x15U)))));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__b_imm 
        = (((0x800U & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                       >> 0x14U)) | (0x400U & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                               << 3U))) 
           | ((0x3f0U & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                         >> 0x15U)) | (0xfU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                               >> 8U))));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__6__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x38U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__5__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x18U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_86 
        = (IData)((0U == (0x42000000U & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_85 
        = (IData)((0x40000000U == (0x42000000U & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jal 
        = ((~ (IData)(vlSelfRef.rst)) & (0x6cU == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_lui 
        = ((~ (IData)(vlSelfRef.rst)) & (0x34U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_auipc 
        = ((~ (IData)(vlSelfRef.rst)) & (0x14U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jalr 
        = ((~ (IData)(vlSelfRef.rst)) & (0x64U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__0__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x20U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch 
        = ((~ (IData)(vlSelfRef.rst)) & (0x60U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__1__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (IData)((3U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst))));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x10U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__3__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x30U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__7__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x70U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgExtracted_hb8436119__0 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_lui) 
           | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_auipc));
    vlSelfRef.ysyx_25060170_top__DOT__id_ex_jump = 
        ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jal) 
         | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jalr));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_102 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xeU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__0__KET__));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_95 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch) 
           & (IData)((0U == (0x6000U & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst))));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_7 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xeU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_6 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__1__KET__) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xeU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_98 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xeU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__1__KET__));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_83 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xeU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__4__KET__));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_19 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__4__KET__) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xeU));
    vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs2_ena 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__6__KET__) 
           | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__3__KET__) 
              | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch) 
                 | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__0__KET__))));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_93 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xeU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__3__KET__));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_14 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__3__KET__) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xeU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_23 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__7__KET__) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xeU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_79 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xeU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__7__KET__));
    vlSelfRef.ysyx_25060170_top__DOT__id_wb_ctl = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__1__KET__)
                                                    ? 1U
                                                    : 
                                                   (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__7__KET__) 
                                                     | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__6__KET__) 
                                                        | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__5__KET__) 
                                                           | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__4__KET__) 
                                                              | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__3__KET__) 
                                                                 | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_lui) 
                                                                    | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_auipc) 
                                                                       | (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_jump))))))))
                                                     ? 2U
                                                     : 0U));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_100 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_102));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_4 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_102) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_94 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_7));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_8 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_7) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_96 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_6));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_97 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_98));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_5 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_98) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_82 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_83));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_18 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_83) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_20 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_19) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_81 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_19));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_92 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_93));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_12 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_93) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_88 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_14));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_16 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_14) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_24 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_23) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_78 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_79));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_22 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_79) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_top__DOT__id_reg_rd_ena 
        = ((0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                            >> 7U))) & (0U != (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_wb_ctl)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_21 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_81) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_91 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_92));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_11 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_92) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_89 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_12));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_13 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_12) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_87 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_88));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_15 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_88) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_84 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_16));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_17 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_16) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrsi 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_24));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrw 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_78) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_77 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_78));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrs 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_22));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrc 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_22) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_top__DOT__id_reg_rd_addr 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rd_ena)
            ? (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                        >> 7U)) : 0U);
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_ecall 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_77) 
           & (0U == (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                     >> 0x14U)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_32 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrc) 
           | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrsi));
    vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs1_ena 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__6__KET__) 
           | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__5__KET__) 
              | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__4__KET__) 
                 | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__3__KET__) 
                    | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch) 
                       | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__1__KET__) 
                          | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__0__KET__) 
                             | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jalr) 
                                | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrw) 
                                    | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrs) 
                                       | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrc))) 
                                   | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_ecall))))))))));
    vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel 
        = ((((((~ (IData)(vlSelfRef.rst)) << 7U) & 
              ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                     >> 0x1eU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_21)) 
                << 7U) | ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0x19U)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_87)) 
                           << 7U) | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_auipc) 
                                      << 7U) | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_77) 
                                                  & (1U 
                                                     == 
                                                     (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                      >> 0x14U))) 
                                                 << 7U) 
                                                | ((0x7ffff80U 
                                                    & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_100) 
                                                        << 7U) 
                                                       & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                          >> 5U))) 
                                                   | ((((~ 
                                                         (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                          >> 0xcU)) 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_4)) 
                                                       << 7U) 
                                                      | ((((~ 
                                                            (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                             >> 0xcU)) 
                                                           & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_8)) 
                                                          << 7U) 
                                                         | ((0x7ffff80U 
                                                             & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_5) 
                                                                 << 7U) 
                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                   >> 5U))) 
                                                            | ((0x3f80U 
                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_11) 
                                                                    << 7U) 
                                                                   & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                      >> 0x12U))) 
                                                               | ((0x3f80U 
                                                                   & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_87) 
                                                                       << 7U) 
                                                                      & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                         >> 0x12U))) 
                                                                  | ((0x3f80U 
                                                                      & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_17) 
                                                                          << 7U) 
                                                                         & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                            >> 0x12U))) 
                                                                     | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrw) 
                                                                         << 7U) 
                                                                        | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_23) 
                                                                             & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)))) 
                                                                            << 7U) 
                                                                           | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrsi) 
                                                                               << 7U) 
                                                                              | (0x7ffff80U 
                                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_24) 
                                                                                << 7U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 5U)))))))))))))))))) 
             | (0x40U & (((~ (IData)(vlSelfRef.rst)) 
                          << 6U) & ((0x3ffffc0U & (
                                                   ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_82) 
                                                    << 6U) 
                                                   & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                      >> 6U))) 
                                    | ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                             >> 0x19U)) 
                                         & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_13)) 
                                        << 6U) | ((
                                                   ((~ 
                                                     (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                      >> 0x19U)) 
                                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_87)) 
                                                   << 6U) 
                                                  | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_lui) 
                                                      << 6U) 
                                                     | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jalr) 
                                                         << 6U) 
                                                        | ((((~ 
                                                              (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                               >> 0xcU)) 
                                                             & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_100)) 
                                                            << 6U) 
                                                           | ((0x3ffffc0U 
                                                               & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_94) 
                                                                   << 6U) 
                                                                  & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                     >> 6U))) 
                                                              | ((((~ 
                                                                    (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                     >> 0xcU)) 
                                                                   & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_8)) 
                                                                  << 6U) 
                                                                 | ((((~ 
                                                                       (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                        >> 0xcU)) 
                                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_5)) 
                                                                     << 6U) 
                                                                    | ((0x3ffffc0U 
                                                                        & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_5) 
                                                                            << 6U) 
                                                                           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                              >> 6U))) 
                                                                       | ((0x1fc0U 
                                                                           & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_91) 
                                                                               << 6U) 
                                                                              & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x13U))) 
                                                                          | ((0x1fc0U 
                                                                              & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_84) 
                                                                                << 6U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x13U))) 
                                                                             | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_77) 
                                                                                & (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)))) 
                                                                                | vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_32) 
                                                                                << 6U)))))))))))))))) 
            | ((((~ (IData)(vlSelfRef.rst)) << 5U) 
                & ((0x1ffffe0U & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_20) 
                                   << 5U) & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                             >> 7U))) 
                   | ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                            >> 0x19U)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_89)) 
                       << 5U) | ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                       >> 0x19U)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_13)) 
                                  << 5U) | ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                  >> 0x19U)) 
                                              & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_17)) 
                                             << 5U) 
                                            | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_auipc) 
                                                << 5U) 
                                               | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jal) 
                                                   << 5U) 
                                                  | ((((~ 
                                                        (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                         >> 0xcU)) 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_94)) 
                                                      << 5U) 
                                                     | ((0x1ffffe0U 
                                                         & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_94) 
                                                             << 5U) 
                                                            & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                               >> 7U))) 
                                                        | ((((~ 
                                                              (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                               >> 0xcU)) 
                                                             & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_8)) 
                                                            << 5U) 
                                                           | ((0x1ffffe0U 
                                                               & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_97) 
                                                                   << 5U) 
                                                                  & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                     >> 7U))) 
                                                              | ((((~ 
                                                                    (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                     >> 0xcU)) 
                                                                   & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_5)) 
                                                                  << 5U) 
                                                                 | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_6) 
                                                                      & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)))) 
                                                                     << 5U) 
                                                                    | ((0xfe0U 
                                                                        & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_11) 
                                                                            << 5U) 
                                                                           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                              >> 0x14U))) 
                                                                       | ((0xfe0U 
                                                                           & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_13) 
                                                                               << 5U) 
                                                                              & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x14U))) 
                                                                          | ((0xfe0U 
                                                                              & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_15) 
                                                                                << 5U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x14U))) 
                                                                             | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_ecall) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrw) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrs) 
                                                                                << 5U) 
                                                                                | (0x1ffffe0U 
                                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_24) 
                                                                                << 5U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 7U)))))))))))))))))))))) 
               | (((~ (IData)(vlSelfRef.rst)) << 4U) 
                  & ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                           >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_20)) 
                      << 4U) | ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                      >> 0x19U)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_11)) 
                                 << 4U) | ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                 >> 0x19U)) 
                                             & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_89)) 
                                            << 4U) 
                                           | ((((~ 
                                                 (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                  >> 0x19U)) 
                                                & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_84)) 
                                               << 4U) 
                                              | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_lui) 
                                                  << 4U) 
                                                 | ((0xfffff0U 
                                                     & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_95) 
                                                         << 4U) 
                                                        & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                           >> 8U))) 
                                                    | ((((~ 
                                                          (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                           >> 0xcU)) 
                                                         & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_94)) 
                                                        << 4U) 
                                                       | ((0xfffff0U 
                                                           & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_94) 
                                                               << 4U) 
                                                              & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                 >> 8U))) 
                                                          | ((((~ 
                                                                (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                 >> 0xcU)) 
                                                               & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_97)) 
                                                              << 4U) 
                                                             | ((0xfffff0U 
                                                                 & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_97) 
                                                                     << 4U) 
                                                                    & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                       >> 8U))) 
                                                                | ((0xfffff0U 
                                                                    & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_5) 
                                                                        << 4U) 
                                                                       & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                          >> 8U))) 
                                                                   | ((0xfffff0U 
                                                                       & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_96) 
                                                                           << 4U) 
                                                                          & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                             >> 8U))) 
                                                                      | ((0x7f0U 
                                                                          & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_91) 
                                                                              << 4U) 
                                                                             & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x15U))) 
                                                                         | ((0x7f0U 
                                                                             & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_11) 
                                                                                << 4U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x15U))) 
                                                                            | ((0x7f0U 
                                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_13) 
                                                                                << 4U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x15U))) 
                                                                               | ((0x7f0U 
                                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_87) 
                                                                                << 4U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x15U))) 
                                                                                | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_77) 
                                                                                & (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)))) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_23) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst))))) 
                                                                                << 4U)))))))))))))))))))) 
           | (((8U & (((~ (IData)(vlSelfRef.rst)) << 3U) 
                      & ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_81)) 
                          << 3U) | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_91) 
                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_85)) 
                                     << 3U) | ((((~ 
                                                  (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                   >> 0x19U)) 
                                                 & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_11)) 
                                                << 3U) 
                                               | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_15) 
                                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_85)) 
                                                   << 3U) 
                                                  | ((((~ 
                                                        (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                         >> 0x19U)) 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_17)) 
                                                      << 3U) 
                                                     | ((((~ 
                                                           (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                            >> 0xcU)) 
                                                          & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_95)) 
                                                         << 3U) 
                                                        | ((0x7ffff8U 
                                                            & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_95) 
                                                                << 3U) 
                                                               & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                  >> 9U))) 
                                                           | ((((~ 
                                                                 (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                  >> 0xcU)) 
                                                                & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_94)) 
                                                               << 3U) 
                                                              | ((0x7ffff8U 
                                                                  & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_8) 
                                                                      << 3U) 
                                                                     & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                        >> 9U))) 
                                                                 | ((((~ 
                                                                       (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                        >> 0xcU)) 
                                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_97)) 
                                                                     << 3U) 
                                                                    | ((((~ 
                                                                          (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                           >> 0xcU)) 
                                                                         & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_5)) 
                                                                        << 3U) 
                                                                       | ((((~ 
                                                                             (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                              >> 0xcU)) 
                                                                            & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_96)) 
                                                                           << 3U) 
                                                                          | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_6) 
                                                                               & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)))) 
                                                                              << 3U) 
                                                                             | ((0x3f8U 
                                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_91) 
                                                                                << 3U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x16U))) 
                                                                                | ((0x3f8U 
                                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_87) 
                                                                                << 3U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x16U))) 
                                                                                | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_ecall) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrw) 
                                                                                | vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_32)) 
                                                                                << 3U)))))))))))))))))) 
               | (((~ (IData)(vlSelfRef.rst)) << 2U) 
                  & ((0x3ffffcU & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_18) 
                                    << 2U) & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                              >> 0xaU))) 
                     | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_91) 
                          & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_86)) 
                         << 2U) | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_91) 
                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_85)) 
                                    << 2U) | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_15) 
                                                & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_86)) 
                                               << 2U) 
                                              | ((((~ 
                                                    (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                     >> 0x19U)) 
                                                   & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_84)) 
                                                  << 2U) 
                                                 | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_77) 
                                                      & (1U 
                                                         == 
                                                         (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                          >> 0x14U))) 
                                                     << 2U) 
                                                    | ((0x3ffffcU 
                                                        & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_4) 
                                                            << 2U) 
                                                           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                              >> 0xaU))) 
                                                       | ((((~ 
                                                             (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                              >> 0xcU)) 
                                                            & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_95)) 
                                                           << 2U) 
                                                          | ((0x3ffffcU 
                                                              & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_95) 
                                                                  << 2U) 
                                                                 & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                    >> 0xaU))) 
                                                             | ((0x3ffffcU 
                                                                 & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_8) 
                                                                     << 2U) 
                                                                    & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                       >> 0xaU))) 
                                                                | ((0x3ffffcU 
                                                                    & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_97) 
                                                                        << 2U) 
                                                                       & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                          >> 0xaU))) 
                                                                   | ((0x3ffffcU 
                                                                       & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_96) 
                                                                           << 2U) 
                                                                          & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                             >> 0xaU))) 
                                                                      | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_6) 
                                                                           & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)))) 
                                                                          << 2U) 
                                                                         | ((0x1fcU 
                                                                             & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_13) 
                                                                                << 2U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x17U))) 
                                                                            | ((0x1fcU 
                                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_17) 
                                                                                << 2U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x17U))) 
                                                                               | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_77) 
                                                                                & (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)))) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrs) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_23) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)))) 
                                                                                << 2U) 
                                                                                | (0x3ffffcU 
                                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_24) 
                                                                                << 2U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0xaU))))))))))))))))))))))) 
              | ((((~ (IData)(vlSelfRef.rst)) << 1U) 
                  & ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                           >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_18)) 
                      << 1U) | ((6U & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_21) 
                                        << 1U) & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                  >> 0x1dU))) 
                                | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_91) 
                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_86)) 
                                    << 1U) | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_15) 
                                                & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_85)) 
                                               << 1U) 
                                              | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jalr) 
                                                  << 1U) 
                                                 | ((0x1ffffeU 
                                                     & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_100) 
                                                         << 1U) 
                                                        & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                           >> 0xbU))) 
                                                    | ((0x1ffffeU 
                                                        & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_4) 
                                                            << 1U) 
                                                           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                              >> 0xbU))) 
                                                       | ((((~ 
                                                             (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                              >> 0xcU)) 
                                                            & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_95)) 
                                                           << 1U) 
                                                          | ((((~ 
                                                                (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                 >> 0xcU)) 
                                                               & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_97)) 
                                                              << 1U) 
                                                             | ((((~ 
                                                                   (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                    >> 0xcU)) 
                                                                  & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_96)) 
                                                                 << 1U) 
                                                                | ((0x1ffffeU 
                                                                    & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_96) 
                                                                        << 1U) 
                                                                       & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                          >> 0xbU))) 
                                                                   | ((0xfeU 
                                                                       & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_89) 
                                                                           << 1U) 
                                                                          & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                             >> 0x18U))) 
                                                                      | ((0xfeU 
                                                                          & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_13) 
                                                                              << 1U) 
                                                                             & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x18U))) 
                                                                         | ((0xfeU 
                                                                             & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_15) 
                                                                                << 1U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x18U))) 
                                                                            | ((0xfeU 
                                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_84) 
                                                                                << 1U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x18U))) 
                                                                               | ((0xfeU 
                                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_17) 
                                                                                << 1U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x18U))) 
                                                                                | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_ecall) 
                                                                                | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrc)) 
                                                                                << 1U)))))))))))))))))) 
                 | ((~ (IData)(vlSelfRef.rst)) & ((
                                                   (~ 
                                                    (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                     >> 0xcU)) 
                                                   & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_82)) 
                                                  | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_21) 
                                                      & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                         >> 0x1eU)) 
                                                     | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_15) 
                                                         & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_86)) 
                                                        | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jal) 
                                                           | (((~ 
                                                                (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                 >> 0xcU)) 
                                                               & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_100)) 
                                                              | (((~ 
                                                                   (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                    >> 0xcU)) 
                                                                  & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_4)) 
                                                                 | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_4) 
                                                                     & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                        >> 0xcU)) 
                                                                    | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_8) 
                                                                        & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                           >> 0xcU)) 
                                                                       | (((~ 
                                                                            (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                             >> 0xcU)) 
                                                                           & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_96)) 
                                                                          | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_89) 
                                                                              & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x19U)) 
                                                                             | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_15) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x19U)) 
                                                                                | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_84) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x19U)) 
                                                                                | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrs)))))))))))))))));
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__mcause_value = 0U;
    vlSelfRef.__Vtableidx1 = vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel;
    vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl = Vysyx_25060170_top__ConstPool__TABLE_h3b4d3bf7_0
        [vlSelfRef.__Vtableidx1];
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena = 0U;
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena = 0U;
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena = 0U;
    if ((0x2aU != (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) {
        if ((0x54U != (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) {
            vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena 
                = (((0xa8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                    || (0x94U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                   || (((((0x25U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                          || (0x4aU == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                         || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                        || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                       && (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                           >> 0xfU)))));
            vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena 
                = (((0xa8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                    || (0x94U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))
                    ? (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                       >> 7U))) : (
                                                   (((0x25U 
                                                      == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                                                     || (0x4aU 
                                                         == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                                                    || (0xc8U 
                                                        == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                                                   || (0xa4U 
                                                       == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))));
        }
        if ((0x54U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) {
            vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena = 1U;
        } else if ((1U & (~ ((0xa8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                             || (0x94U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))))) {
            if ((1U & (~ ((((0x25U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                            || (0x4aU == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                           || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                          || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))))) {
                vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena = 0U;
            }
        }
    }
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena = 0U;
    vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT____VdfgRegularize_hcffc0c70_0_0 
        = (1U & (~ ((IData)(vlSelfRef.rst) | (0U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl)))));
    if ((0x2aU == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) {
        vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__mcause_value = 0xbU;
        vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena = 1U;
    } else {
        if ((1U & (~ ((0xa8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                      || (0x94U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))))) {
            if ((1U & (~ ((0x25U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                          || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))))) {
                if ((1U & (~ ((0x4aU == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                              || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))))) {
                    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__mcause_value = 0U;
                }
            }
        }
        if ((0x54U != (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) {
            if ((1U & (~ ((0xa8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                          || (0x94U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))))) {
                if ((1U & (~ ((((0x25U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                                || (0x4aU == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                               || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                              || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))))) {
                    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena = 0U;
                }
            }
        }
    }
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT____VdfgRegularize_hc2007cd8_0_4 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena) 
           | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena));
    vlSelfRef.ysyx_25060170_top__DOT__id_ex_csrctl 
        = ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena) 
             << 3U) | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena) 
                       << 2U)) | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena) 
                                   << 1U) | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena)));
    if (vlSelfRef.rst) {
        vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2 = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 = 0U;
    } else {
        vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm 
            = (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__1__KET__) 
                | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__4__KET__) 
                   | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__5__KET__) 
                      | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__7__KET__) 
                         | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jalr)))))
                ? (((- (IData)((vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0x1fU))) << 0xcU) 
                   | (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                      >> 0x14U)) : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgExtracted_hb8436119__0)
                                     ? (0xfffff000U 
                                        & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)
                                     : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jal)
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__j_imm 
                                                            >> 0x13U)))) 
                                             << 0x15U) 
                                            | (vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__j_imm 
                                               << 1U))
                                         : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__0__KET__)
                                             ? (((- (IData)(
                                                            (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | ((0xfe0U 
                                                    & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                         >> 7U))))
                                             : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch)
                                                 ? 
                                                (((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__b_imm) 
                                                                 >> 0xbU)))) 
                                                  << 0xdU) 
                                                 | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__b_imm) 
                                                    << 1U))
                                                 : 0U)))));
        vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2 
            = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs2_ena)
                ? (((~ (IData)(vlSelfRef.rst)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs2_ena))
                    ? vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                   [((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs2_ena)
                      ? (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0x14U)) : 0U)]
                    : 0U) : (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__0__KET__) 
                              | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__1__KET__) 
                                 | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch) 
                                    | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__4__KET__) 
                                       | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__5__KET__) 
                                          | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__7__KET__) 
                                             | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgExtracted_hb8436119__0)))))))
                              ? vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm
                              : 0U));
        vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
            = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs1_ena)
                ? (((~ (IData)(vlSelfRef.rst)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs1_ena))
                    ? vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                   [((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs1_ena)
                      ? (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0xfU)) : 0U)] : 0U)
                : (((0xa0U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                    | (0x21U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))
                    ? vlSelfRef.ysyx_25060170_top__DOT__if_id_pc
                    : ((((0x94U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                         | (0xc8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                        | (0xa4U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))
                        ? (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                    >> 0xfU)) : 0U)));
    }
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_add_op2 
        = (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
           + vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2);
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_sra_op2 
        = VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1, 
                         (0x1fU & vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2));
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__div 
        = VL_DIVS_III(32, vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1, vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2);
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__rem 
        = VL_MODDIVS_III(32, vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1, vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2);
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__mul 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1), 
                      VL_EXTENDS_QI(64,32, vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2));
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_sub_op2 
        = (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
           - vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2);
    vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__re 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT____VdfgRegularize_hcffc0c70_0_0) 
           & ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl) 
              >> 3U));
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2 
        = (1U & (((~ (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2 
                      >> 0x1fU)) & (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                    >> 0x1fU)) | ((
                                                   (~ 
                                                    (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                     >> 0x1fU)) 
                                                   & ((~ 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2 
                                                        >> 0x1fU)) 
                                                      & (vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_sub_op2 
                                                         >> 0x1fU))) 
                                                  | ((vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                      & (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2 
                                                         & vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_sub_op2)) 
                                                     >> 0x1fU))));
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr 
        = ((0U != (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_csrctl))
            ? (0xfffU & vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm)
            : 0U);
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr 
        = ((0x300U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
           & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena));
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__read_csr_data 
        = (((0x300U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
            & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena))
            ? vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus
            : ((((0x341U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                 & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena)) 
                | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena))
                ? vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mepc
                : ((((0x305U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena)) 
                    | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena))
                    ? (vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mtvec_base 
                       << 2U) : (((0x342U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                                  & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena))
                                  ? vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mcause
                                  : 0U))));
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__write_csr_data 
        = ((0x2aU == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
            ? vlSelfRef.ysyx_25060170_top__DOT__id_ex_pc
            : (((0xa8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                || (0x94U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))
                ? vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1
                : (((0x25U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                    || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))
                    ? (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                       | vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__read_csr_data)
                    : (((0x4aU == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                        || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))
                        ? ((~ vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1) 
                           & vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__read_csr_data)
                        : 0U))));
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__alu_res 
        = ((IData)(vlSelfRef.rst) ? 0U : ((0x80U & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                           ? ((0x40U 
                                               & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                               ? ((0x20U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        ^ vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)))))))
                                               : ((0x20U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : (IData)(
                                                                  (vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__mul 
                                                                   >> 0x20U))))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_add_op2)))))
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__div)))
                                                     : 0U)
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__rem)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        + vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        + vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm)
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)))))))))
                                           : ((0x40U 
                                               & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                               ? ((0x20U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        + vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        < vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2))))))
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__mul))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_add_op2))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__rem
                                                        : 
                                                       ((IData)(4U) 
                                                        + vlSelfRef.ysyx_25060170_top__DOT__id_ex_pc))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        + vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm)
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        << 
                                                        (0x1fU 
                                                         & vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2))))))))
                                               : ((0x20U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        + vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2)))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        & vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__div
                                                        : 0U)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 
                                                       ((IData)(4U) 
                                                        + vlSelfRef.ysyx_25060170_top__DOT__id_ex_pc)
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        & vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2))))))
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        + vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        << 
                                                        (0x1fU 
                                                         & vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        + vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        | vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        | vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_sub_op2))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        + vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm)
                                                        : vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_sra_op2)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        ^ vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_add_op2)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2))
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        < vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_sra_op2
                                                        : (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_add_op2
                                                        : 0U)))))))));
    vlSelfRef.ysyx_25060170_top__DOT__ex_aludata = 
        ((0U != (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_csrctl))
          ? vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__read_csr_data
          : vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__alu_res);
    if (vlSelfRef.rst) {
        vlSelfRef.ysyx_25060170_top__DOT__ifu0__DOT__pc_next = 0x80000000U;
        vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__raddr = 0U;
    } else {
        vlSelfRef.ysyx_25060170_top__DOT__ifu0__DOT__pc_next 
            = ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch) 
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
                                  : ((0x38U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                      ? (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2)
                                      : ((0x70U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                                         && (1U & (~ (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2)))))))))) 
                | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_jump) 
                   | (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT____VdfgRegularize_hc2007cd8_0_4)))
                ? (((0x21U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                    | (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch))
                    ? (vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm 
                       + vlSelfRef.ysyx_25060170_top__DOT__id_ex_pc)
                    : ((0x42U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                        ? (0xfffffffeU & (vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm 
                                          + vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1))
                        : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT____VdfgRegularize_hc2007cd8_0_4)
                            ? vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__read_csr_data
                            : 0U))) : ((IData)(vlSelfRef.rst)
                                        ? 0x80000000U
                                        : ((IData)(4U) 
                                           + vlSelfRef.ysyx_25060170_top__DOT__if_id_pc)));
        vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__raddr 
            = vlSelfRef.ysyx_25060170_top__DOT__ex_aludata;
    }
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_ie_ena 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr) 
           | (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT____VdfgRegularize_hc2007cd8_0_4));
    if (vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena) {
        vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mpp_set = 3U;
        vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mpie_set 
            = (1U & (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mie));
    } else {
        vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mpp_set 
            = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena)
                ? 0U : (3U & ((IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr)
                               ? (vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__write_csr_data 
                                  >> 0xdU) : (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpp))));
        vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mpie_set 
            = (1U & ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena) 
                     | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr)
                         ? (vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__write_csr_data 
                            >> 7U) : (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpie))));
    }
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mie_set 
        = (1U & ((~ (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena)) 
                 & ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena)
                     ? (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpie)
                     : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr)
                         ? (vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__write_csr_data 
                            >> 3U) : (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mie)))));
    vlSelfRef.__Vtableidx2 = ((6U & (vlSelfRef.ysyx_25060170_top__DOT__ex_aludata 
                                     << 1U)) | (IData)(vlSelfRef.rst));
    vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__sb_mask 
        = Vysyx_25060170_top__ConstPool__TABLE_h1ece3f4a_0
        [vlSelfRef.__Vtableidx2];
}

void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__lsu3__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wlen);

VL_INLINE_OPT void Vysyx_25060170_top___024root___nba_sequent__TOP__1(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___nba_sequent__TOP__1\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_ysyx_25060170_top__DOT__lsu3__DOT__pmem_read__0__rdata;
    __Vtask_ysyx_25060170_top__DOT__lsu3__DOT__pmem_read__0__rdata = 0;
    // Body
    if (vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__re) {
        Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__lsu3__DOT__pmem_read_TOP(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__raddr, __Vtask_ysyx_25060170_top__DOT__lsu3__DOT__pmem_read__0__rdata, 4U);
        vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__data_i 
            = __Vtask_ysyx_25060170_top__DOT__lsu3__DOT__pmem_read__0__rdata;
    }
    if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT____VdfgRegularize_hcffc0c70_0_0) 
         & (~ ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl) 
               >> 3U)))) {
        Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__lsu3__DOT__pmem_write_TOP(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__raddr, 
                                                                                ((IData)(vlSelfRef.rst)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                                                 ? 
                                                                                ((vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2 
                                                                                << 0x18U) 
                                                                                | ((0xff0000U 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2 
                                                                                << 0x10U)) 
                                                                                | ((0xff00U 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2))))
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                                                 ? 
                                                                                ((vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2 
                                                                                << 0x10U) 
                                                                                | (0xffffU 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2))
                                                                                 : 
                                                                                ((4U 
                                                                                == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                                                 ? vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2
                                                                                 : 0U)))), 
                                                                                ((IData)(vlSelfRef.rst)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                                                 ? (IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__sb_mask)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                                                 ? 
                                                                                ((IData)(vlSelfRef.rst)
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
                                                                                 : 
                                                                                ((4U 
                                                                                == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl))
                                                                                 ? 0xfU
                                                                                 : 0U)))));
    }
}

void Vysyx_25060170_top___024root___eval_triggers__act(Vysyx_25060170_top___024root* vlSelf);

bool Vysyx_25060170_top___024root___eval_phase__act(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_phase__act\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vysyx_25060170_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vysyx_25060170_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vysyx_25060170_top___024root___eval_phase__nba(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_phase__nba\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vysyx_25060170_top___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_top___024root___dump_triggers__ico(Vysyx_25060170_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_top___024root___dump_triggers__nba(Vysyx_25060170_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_top___024root___dump_triggers__act(Vysyx_25060170_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_top___024root___eval_postponed(Vysyx_25060170_top___024root* vlSelf);

void Vysyx_25060170_top___024root___eval(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vysyx_25060170_top___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("vsrc/ysyx_25060170_top.v", 5, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vysyx_25060170_top___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vysyx_25060170_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("vsrc/ysyx_25060170_top.v", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vysyx_25060170_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ysyx_25060170_top.v", 5, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vysyx_25060170_top___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vysyx_25060170_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
    Vysyx_25060170_top___024root___eval_postponed(vlSelf);
}

#ifdef VL_DEBUG
void Vysyx_25060170_top___024root___eval_debug_assertions(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_debug_assertions\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
