// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_25060170_MEM__Syms.h"


VL_ATTR_COLD void Vysyx_25060170_MEM___024root__trace_init_sub__TOP__0(Vysyx_25060170_MEM___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_MEM___024root__trace_init_sub__TOP__0\n"); );
    Vysyx_25060170_MEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ysyx_25060170_MEM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vysyx_25060170_MEM___024root__trace_init_top(Vysyx_25060170_MEM___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_MEM___024root__trace_init_top\n"); );
    Vysyx_25060170_MEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_25060170_MEM___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_25060170_MEM___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vysyx_25060170_MEM___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_25060170_MEM___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_25060170_MEM___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_25060170_MEM___024root__trace_register(Vysyx_25060170_MEM___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_MEM___024root__trace_register\n"); );
    Vysyx_25060170_MEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vysyx_25060170_MEM___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vysyx_25060170_MEM___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vysyx_25060170_MEM___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vysyx_25060170_MEM___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_25060170_MEM___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_MEM___024root__trace_const_0\n"); );
    // Init
    Vysyx_25060170_MEM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25060170_MEM___024root*>(voidSelf);
    Vysyx_25060170_MEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vysyx_25060170_MEM___024root__trace_full_0_sub_0(Vysyx_25060170_MEM___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_25060170_MEM___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_MEM___024root__trace_full_0\n"); );
    // Init
    Vysyx_25060170_MEM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25060170_MEM___024root*>(voidSelf);
    Vysyx_25060170_MEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_25060170_MEM___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_25060170_MEM___024root__trace_full_0_sub_0(Vysyx_25060170_MEM___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_MEM___024root__trace_full_0_sub_0\n"); );
    Vysyx_25060170_MEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.addr_i),32);
    bufp->fullIData(oldp+2,(vlSelfRef.inst_o),32);
    bufp->fullBit(oldp+3,(vlSelfRef.ready_i));
    bufp->fullBit(oldp+4,(vlSelfRef.ready_o));
}
