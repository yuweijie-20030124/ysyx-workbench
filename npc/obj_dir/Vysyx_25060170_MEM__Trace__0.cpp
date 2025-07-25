// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_25060170_MEM__Syms.h"


void Vysyx_25060170_MEM___024root__trace_chg_0_sub_0(Vysyx_25060170_MEM___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_25060170_MEM___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_MEM___024root__trace_chg_0\n"); );
    // Init
    Vysyx_25060170_MEM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25060170_MEM___024root*>(voidSelf);
    Vysyx_25060170_MEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_25060170_MEM___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_25060170_MEM___024root__trace_chg_0_sub_0(Vysyx_25060170_MEM___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_MEM___024root__trace_chg_0_sub_0\n"); );
    Vysyx_25060170_MEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgIData(oldp+0,(vlSelfRef.addr_i),32);
    bufp->chgIData(oldp+1,(vlSelfRef.inst_o),32);
    bufp->chgBit(oldp+2,(vlSelfRef.ready_i));
    bufp->chgBit(oldp+3,(vlSelfRef.ready_o));
}

void Vysyx_25060170_MEM___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_MEM___024root__trace_cleanup\n"); );
    // Init
    Vysyx_25060170_MEM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25060170_MEM___024root*>(voidSelf);
    Vysyx_25060170_MEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
