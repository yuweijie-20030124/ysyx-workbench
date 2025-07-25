// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25060170_MEM.h for the primary calling header

#include "Vysyx_25060170_MEM__pch.h"
#include "Vysyx_25060170_MEM__Syms.h"
#include "Vysyx_25060170_MEM___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_MEM___024root___dump_triggers__ico(Vysyx_25060170_MEM___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25060170_MEM___024root___eval_triggers__ico(Vysyx_25060170_MEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_MEM___024root___eval_triggers__ico\n"); );
    Vysyx_25060170_MEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25060170_MEM___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vysyx_25060170_MEM___024unit____Vdpiimwrap_addr_to_instruction_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &addr_to_instruction__Vfuncrtn);

VL_INLINE_OPT void Vysyx_25060170_MEM___024root___ico_sequent__TOP__0(Vysyx_25060170_MEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_MEM___024root___ico_sequent__TOP__0\n"); );
    Vysyx_25060170_MEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ready_o = vlSelfRef.ready_i;
    Vysyx_25060170_MEM___024unit____Vdpiimwrap_addr_to_instruction_TOP____024unit(vlSelfRef.addr_i, vlSelfRef.__Vfunc_addr_to_instruction__0__Vfuncout);
    vlSelfRef.inst_o = vlSelfRef.__Vfunc_addr_to_instruction__0__Vfuncout;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_MEM___024root___dump_triggers__act(Vysyx_25060170_MEM___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25060170_MEM___024root___eval_triggers__act(Vysyx_25060170_MEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_MEM___024root___eval_triggers__act\n"); );
    Vysyx_25060170_MEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25060170_MEM___024root___dump_triggers__act(vlSelf);
    }
#endif
}
