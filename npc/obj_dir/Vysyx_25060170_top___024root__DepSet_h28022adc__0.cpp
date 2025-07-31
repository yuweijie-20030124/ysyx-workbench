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

void Vysyx_25060170_top___024root____Vdpiexp_ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__IDU_SEND_INST_TOP(Vysyx_25060170_top__Syms* __restrict vlSymsp, IData/*31:0*/ &c_inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root____Vdpiexp_ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__IDU_SEND_INST_TOP\n"); );
    // Init
    // Body
    c_inst = vlSymsp->TOP.ysyx_25060170_top__DOT__MEM_inst_o;
}

void Vysyx_25060170_top___024root____Vdpiexp_ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__IDU_SEND_PC_TOP(Vysyx_25060170_top__Syms* __restrict vlSymsp, IData/*31:0*/ &c_pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root____Vdpiexp_ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__IDU_SEND_PC_TOP\n"); );
    // Init
    // Body
    c_pc = vlSymsp->TOP.ysyx_25060170_top__DOT__PCout;
}

void Vysyx_25060170_top___024root____Vdpiexp_ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__GPR_SEND_VALUE_TOP(Vysyx_25060170_top__Syms* __restrict vlSymsp, IData/*31:0*/ &r1, IData/*31:0*/ &r2, IData/*31:0*/ &r3, IData/*31:0*/ &r4, IData/*31:0*/ &r5, IData/*31:0*/ &r6, IData/*31:0*/ &r7, IData/*31:0*/ &r8, IData/*31:0*/ &r9, IData/*31:0*/ &r10, IData/*31:0*/ &r11, IData/*31:0*/ &r12, IData/*31:0*/ &r13, IData/*31:0*/ &r14, IData/*31:0*/ &r15, IData/*31:0*/ &r16, IData/*31:0*/ &r17, IData/*31:0*/ &r18, IData/*31:0*/ &r19, IData/*31:0*/ &r20, IData/*31:0*/ &r21, IData/*31:0*/ &r22, IData/*31:0*/ &r23, IData/*31:0*/ &r24, IData/*31:0*/ &r25, IData/*31:0*/ &r26, IData/*31:0*/ &r27, IData/*31:0*/ &r28, IData/*31:0*/ &r29, IData/*31:0*/ &r30, IData/*31:0*/ &r31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root____Vdpiexp_ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__GPR_SEND_VALUE_TOP\n"); );
    // Init
    // Body
    r1 = vlSymsp->TOP.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
        [1U];
    r2 = vlSymsp->TOP.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
        [2U];
    r3 = vlSymsp->TOP.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
        [3U];
    r4 = vlSymsp->TOP.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
        [4U];
    r5 = vlSymsp->TOP.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
        [5U];
    r6 = vlSymsp->TOP.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
        [6U];
    r7 = vlSymsp->TOP.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
        [7U];
    r8 = vlSymsp->TOP.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
        [8U];
    r9 = vlSymsp->TOP.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
        [9U];
    r10 = vlSymsp->TOP.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
        [0xaU];
    r11 = vlSymsp->TOP.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
        [0xbU];
    r12 = vlSymsp->TOP.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
        [0xcU];
    r13 = vlSymsp->TOP.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
        [0xdU];
    r14 = vlSymsp->TOP.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
        [0xeU];
    r15 = vlSymsp->TOP.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
        [0xfU];
    r16 = vlSymsp->TOP.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
        [0x10U];
    r17 = vlSymsp->TOP.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
        [0x11U];
    r18 = vlSymsp->TOP.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
        [0x12U];
    r19 = vlSymsp->TOP.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
        [0x13U];
    r20 = vlSymsp->TOP.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
        [0x14U];
    r21 = vlSymsp->TOP.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
        [0x15U];
    r22 = vlSymsp->TOP.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
        [0x16U];
    r23 = vlSymsp->TOP.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
        [0x17U];
    r24 = vlSymsp->TOP.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
        [0x18U];
    r25 = vlSymsp->TOP.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
        [0x19U];
    r26 = vlSymsp->TOP.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
        [0x1aU];
    r27 = vlSymsp->TOP.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
        [0x1bU];
    r28 = vlSymsp->TOP.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
        [0x1cU];
    r29 = vlSymsp->TOP.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
        [0x1dU];
    r30 = vlSymsp->TOP.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
        [0x1eU];
    r31 = vlSymsp->TOP.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
        [0x1fU];
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
