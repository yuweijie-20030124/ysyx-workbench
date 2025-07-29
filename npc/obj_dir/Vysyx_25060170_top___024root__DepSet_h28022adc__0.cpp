// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25060170_top.h for the primary calling header

#include "Vysyx_25060170_top__pch.h"
#include "Vysyx_25060170_top__Syms.h"
#include "Vysyx_25060170_top___024root.h"

extern "C" void set_npc_exit(int pc, int halt_ret);

VL_INLINE_OPT void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__set_npc_exit_TOP(IData/*31:0*/ pc, IData/*31:0*/ halt_ret) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__set_npc_exit_TOP\n"); );
    // Body
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int halt_ret__Vcvt;
    for (size_t halt_ret__Vidx = 0; halt_ret__Vidx < 1; ++halt_ret__Vidx) halt_ret__Vcvt = halt_ret;
    set_npc_exit(pc__Vcvt, halt_ret__Vcvt);
}

extern "C" void pmem_read(int raddr, int* rdata, char rlen);

VL_INLINE_OPT void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_MEM__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata, CData/*7:0*/ rlen) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_MEM__DOT__pmem_read_TOP\n"); );
    // Body
    int raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    int rdata__Vcvt;
    char rlen__Vcvt;
    for (size_t rlen__Vidx = 0; rlen__Vidx < 1; ++rlen__Vidx) rlen__Vcvt = rlen;
    pmem_read(raddr__Vcvt, &rdata__Vcvt, rlen__Vcvt);
    rdata = rdata__Vcvt;
}

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
