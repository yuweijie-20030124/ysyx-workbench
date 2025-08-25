// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25060170_top.h for the primary calling header

#include "Vysyx_25060170_top__pch.h"
#include "Vysyx_25060170_top__Syms.h"
#include "Vysyx_25060170_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_top___024root___dump_triggers__stl(Vysyx_25060170_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_25060170_top___024root___eval_triggers__stl(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_triggers__stl\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25060170_top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vysyx_25060170_top___024root___eval_postponed__TOP(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_postponed__TOP\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.ysyx_25060170_top__DOT__ifu0__DOT____Vstrobe0))) {
        VL_WRITEF_NX("rst pc = 0x%08x\n",0,32,vlSelfRef.ysyx_25060170_top__DOT__if_id_pc);
        vlSelfRef.ysyx_25060170_top__DOT__ifu0__DOT____Vstrobe0 = 0U;
    }
    if (VL_UNLIKELY((vlSelfRef.ysyx_25060170_top__DOT__ifu0__DOT____Vstrobe1))) {
        VL_WRITEF_NX("rst inst = 0x%08x\n",0,32,vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst);
        vlSelfRef.ysyx_25060170_top__DOT__ifu0__DOT____Vstrobe1 = 0U;
    }
}
