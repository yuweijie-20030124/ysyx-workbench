// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25060170_MEM.h for the primary calling header

#include "Vysyx_25060170_MEM__pch.h"
#include "Vysyx_25060170_MEM___024root.h"

VL_ATTR_COLD void Vysyx_25060170_MEM___024root___eval_static(Vysyx_25060170_MEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_MEM___024root___eval_static\n"); );
    Vysyx_25060170_MEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vysyx_25060170_MEM___024root___eval_initial(Vysyx_25060170_MEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_MEM___024root___eval_initial\n"); );
    Vysyx_25060170_MEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vysyx_25060170_MEM___024root___eval_final(Vysyx_25060170_MEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_MEM___024root___eval_final\n"); );
    Vysyx_25060170_MEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_MEM___024root___dump_triggers__stl(Vysyx_25060170_MEM___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vysyx_25060170_MEM___024root___eval_phase__stl(Vysyx_25060170_MEM___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25060170_MEM___024root___eval_settle(Vysyx_25060170_MEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_MEM___024root___eval_settle\n"); );
    Vysyx_25060170_MEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vysyx_25060170_MEM___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("vsrc/ysyx_25060170_MEM.v", 6, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vysyx_25060170_MEM___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_MEM___024root___dump_triggers__stl(Vysyx_25060170_MEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_MEM___024root___dump_triggers__stl\n"); );
    Vysyx_25060170_MEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vysyx_25060170_MEM___024root___ico_sequent__TOP__0(Vysyx_25060170_MEM___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25060170_MEM___024root___eval_stl(Vysyx_25060170_MEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_MEM___024root___eval_stl\n"); );
    Vysyx_25060170_MEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vysyx_25060170_MEM___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vysyx_25060170_MEM___024root___eval_triggers__stl(Vysyx_25060170_MEM___024root* vlSelf);

VL_ATTR_COLD bool Vysyx_25060170_MEM___024root___eval_phase__stl(Vysyx_25060170_MEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_MEM___024root___eval_phase__stl\n"); );
    Vysyx_25060170_MEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vysyx_25060170_MEM___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vysyx_25060170_MEM___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_MEM___024root___dump_triggers__ico(Vysyx_25060170_MEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_MEM___024root___dump_triggers__ico\n"); );
    Vysyx_25060170_MEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_MEM___024root___dump_triggers__act(Vysyx_25060170_MEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_MEM___024root___dump_triggers__act\n"); );
    Vysyx_25060170_MEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_MEM___024root___dump_triggers__nba(Vysyx_25060170_MEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_MEM___024root___dump_triggers__nba\n"); );
    Vysyx_25060170_MEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_25060170_MEM___024root___ctor_var_reset(Vysyx_25060170_MEM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_MEM___024root___ctor_var_reset\n"); );
    Vysyx_25060170_MEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->addr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5910257723895866083ull);
    vlSelf->inst_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5138557988782552995ull);
    vlSelf->ready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2487444212943817592ull);
    vlSelf->ready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6223107695775132031ull);
    vlSelf->__Vfunc_addr_to_instruction__0__Vfuncout = 0;
}
