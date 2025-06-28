// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25060170_top.h for the primary calling header

#include "Vysyx_25060170_top__pch.h"
#include "Vysyx_25060170_top__Syms.h"
#include "Vysyx_25060170_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_top___024root___dump_triggers__ico(Vysyx_25060170_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25060170_top___024root___eval_triggers__ico(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_triggers__ico\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25060170_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_top___024root___dump_triggers__act(Vysyx_25060170_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25060170_top___024root___eval_triggers__act(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_triggers__act\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25060170_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vysyx_25060170_top___024unit____Vdpiimwrap_addr_to_instruction_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &addr_to_instruction__Vfuncrtn);

VL_INLINE_OPT void Vysyx_25060170_top___024root___nba_sequent__TOP__0(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___nba_sequent__TOP__0\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst) {
        vlSelfRef.ysyx_25060170_top__DOT__pc = 0x80000000U;
    } else if (vlSelfRef.ready_i) {
        vlSelfRef.ysyx_25060170_top__DOT__pc = vlSelfRef.ysyx_25060170_top__DOT__u_ifu__DOT__pc_plus_4;
    }
    Vysyx_25060170_top___024unit____Vdpiimwrap_addr_to_instruction_TOP____024unit(vlSelfRef.ysyx_25060170_top__DOT__pc, vlSelfRef.__Vfunc_addr_to_instruction__0__Vfuncout);
    vlSelfRef.ysyx_25060170_top__DOT__u_ifu__DOT__pc_plus_4 
        = ((IData)(4U) + vlSelfRef.ysyx_25060170_top__DOT__pc);
}
