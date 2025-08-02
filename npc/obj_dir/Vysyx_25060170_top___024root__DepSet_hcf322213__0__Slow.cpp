// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25060170_top.h for the primary calling header

#include "Vysyx_25060170_top__pch.h"
#include "Vysyx_25060170_top___024root.h"

VL_ATTR_COLD void Vysyx_25060170_top___024root___eval_static(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_static\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vysyx_25060170_top___024root___eval_initial__TOP(Vysyx_25060170_top___024root* vlSelf);
VL_ATTR_COLD void Vysyx_25060170_top___024root____Vm_traceActivitySetAll(Vysyx_25060170_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25060170_top___024root___eval_initial(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_initial\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_25060170_top___024root___eval_initial__TOP(vlSelf);
    Vysyx_25060170_top___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vysyx_25060170_top___024root___eval_initial__TOP(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_initial__TOP\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[0U] = 0U;
}

VL_ATTR_COLD void Vysyx_25060170_top___024root___eval_final(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_final\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_top___024root___dump_triggers__stl(Vysyx_25060170_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vysyx_25060170_top___024root___eval_phase__stl(Vysyx_25060170_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25060170_top___024root___eval_settle(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_settle\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vysyx_25060170_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("vsrc/ysyx_25060170_top.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vysyx_25060170_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_top___024root___dump_triggers__stl(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___dump_triggers__stl\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vysyx_25060170_top___024root___stl_sequent__TOP__0(Vysyx_25060170_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25060170_top___024root___eval_stl(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_stl\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vysyx_25060170_top___024root___stl_sequent__TOP__0(vlSelf);
        Vysyx_25060170_top___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_MEM__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata, CData/*7:0*/ rlen);
void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__set_npc_exit_TOP(IData/*31:0*/ pc, IData/*31:0*/ halt_ret);
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_25060170_top__ConstPool__TABLE_h5d0ae970_0;
extern const VlUnpacked<CData/*1:0*/, 512> Vysyx_25060170_top__ConstPool__TABLE_h264cfc4a_0;
extern const VlUnpacked<CData/*3:0*/, 512> Vysyx_25060170_top__ConstPool__TABLE_h4bb0c48c_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_25060170_top__ConstPool__TABLE_h96774c7c_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_25060170_top__ConstPool__TABLE_ha9dc809e_0;

VL_ATTR_COLD void Vysyx_25060170_top___024root___stl_sequent__TOP__0(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___stl_sequent__TOP__0\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[1U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__1__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[2U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__2__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[3U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__3__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[4U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__4__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[5U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__5__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[6U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__6__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[7U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__7__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[8U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__8__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[9U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__9__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[0xaU] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__10__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[0xbU] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__11__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[0xcU] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__12__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[0xdU] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__13__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[0xeU] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__14__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[0xfU] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__15__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[0x10U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__16__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[0x11U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__17__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[0x12U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__18__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[0x13U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__19__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[0x14U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__20__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[0x15U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__21__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[0x16U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__22__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[0x17U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__23__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[0x18U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__24__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[0x19U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__25__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[0x1aU] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__26__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[0x1bU] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__27__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[0x1cU] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__28__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[0x1dU] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__29__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[0x1eU] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__30__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[0x1fU] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__31__KET____DOT__reg_x__dout;
    Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_MEM__DOT__pmem_read_TOP(vlSelfRef.ysyx_25060170_top__DOT__PCout, vlSelfRef.__Vtask_ysyx_25060170_top__DOT__u_ysyx_25060170_MEM__DOT__pmem_read__1__rdata, 4U);
    vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o = vlSelfRef.__Vtask_ysyx_25060170_top__DOT__u_ysyx_25060170_MEM__DOT__pmem_read__1__rdata;
    if ((0x100073U == vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)) {
        Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__set_npc_exit_TOP(vlSelfRef.ysyx_25060170_top__DOT__PCout, 0U);
    }
    vlSelfRef.ysyx_25060170_top__DOT__op_1 = (((- (IData)(
                                                          (0x13U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) 
                                               & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                               [(0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                    >> 0xfU))]) 
                                              | (((- (IData)(
                                                             (0x17U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) 
                                                  & vlSelfRef.ysyx_25060170_top__DOT__PCout) 
                                                 | (((- (IData)(
                                                                (3U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) 
                                                     & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                     [
                                                     (0x1fU 
                                                      & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                         >> 0xfU))]) 
                                                    | (((- (IData)(
                                                                   (0x23U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) 
                                                        & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                        [
                                                        (0x1fU 
                                                         & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                            >> 0xfU))]) 
                                                       | (((- (IData)(
                                                                      (0x63U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) 
                                                           | ((- (IData)(
                                                                         (0x67U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) 
                                                              | (- (IData)(
                                                                           (0x6fU 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))))) 
                                                          & vlSelfRef.ysyx_25060170_top__DOT__PCout)))));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_3 
        = (((- (IData)((vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                        >> 0x1fU))) << 0xcU) | (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                >> 0x14U));
    vlSelfRef.__Vtableidx1 = (((0x20U == (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                          >> 0x19U)) 
                               << 8U) | (((0U == (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                  >> 0x19U)) 
                                          << 7U) | 
                                         (0x7fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__jal = Vysyx_25060170_top__ConstPool__TABLE_h5d0ae970_0
        [vlSelfRef.__Vtableidx1];
    vlSelfRef.ysyx_25060170_top__DOT__regS = Vysyx_25060170_top__ConstPool__TABLE_h264cfc4a_0
        [vlSelfRef.__Vtableidx1];
    vlSelfRef.ysyx_25060170_top__DOT__ALUop = Vysyx_25060170_top__ConstPool__TABLE_h4bb0c48c_0
        [vlSelfRef.__Vtableidx1];
    vlSelfRef.ysyx_25060170_top__DOT__RegW = Vysyx_25060170_top__ConstPool__TABLE_h96774c7c_0
        [vlSelfRef.__Vtableidx1];
    vlSelfRef.ysyx_25060170_top__DOT__PCx1 = Vysyx_25060170_top__ConstPool__TABLE_ha9dc809e_0
        [vlSelfRef.__Vtableidx1];
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__imm 
        = (((- (IData)((0x13U == (0x7fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) 
            & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_3) 
           | ((0xfffff000U & ((- (IData)((0x17U == 
                                          (0x7fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) 
                              & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)) 
              | (((- (IData)((3U == (0x7fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) 
                  & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_3) 
                 | (((- (IData)((0x23U == (0x7fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) 
                     & (((- (IData)((vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                     >> 0x1fU))) << 0xcU) 
                        | ((0xfe0U & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                      >> 0x14U)) | 
                           (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                     >> 7U))))) | (
                                                   ((- (IData)(
                                                               (0x63U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) 
                                                    & (((- (IData)(
                                                                   (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | ((0x800U 
                                                           & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                              << 4U)) 
                                                          | ((0x7e0U 
                                                              & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                 >> 0x14U)) 
                                                             | (0x1eU 
                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                   >> 7U)))))) 
                                                   | (((- (IData)(
                                                                  (0x67U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) 
                                                       & (((- (IData)(
                                                                      (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                       >> 0x1fU))) 
                                                           << 0xcU) 
                                                          | (0xffeU 
                                                             & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                >> 0x13U)))) 
                                                      | ((- (IData)(
                                                                    (0x6fU 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) 
                                                         & (((- (IData)(
                                                                        (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                         >> 0x1fU))) 
                                                             << 0x14U) 
                                                            | (((0xff000U 
                                                                 & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o) 
                                                                | (0x800U 
                                                                   & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                      >> 9U))) 
                                                               | (0x7feU 
                                                                  & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                     >> 0x14U)))))))))));
    vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o 
        = ((~ (IData)(vlSelfRef.rst)) & ((IData)(vlSelfRef.ysyx_25060170_top__DOT__RegW) 
                                         & (0U != (0x1fU 
                                                   & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                      >> 7U)))));
    vlSelfRef.ysyx_25060170_top__DOT__jump_en = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__PCx1) 
                                                 | (IData)(vlSelfRef.ysyx_25060170_top__DOT__jal));
    vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o 
        = ((0U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__regS))
            ? (((- (IData)((0U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__ALUop)))) 
                | (- (IData)((1U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__ALUop))))) 
               & (vlSelfRef.ysyx_25060170_top__DOT__op_1 
                  - ((((- (IData)((0x13U == (0x7fU 
                                             & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) 
                       | ((- (IData)((0x17U == (0x7fU 
                                                & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) 
                          | ((- (IData)((3U == (0x7fU 
                                                & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) 
                             | ((- (IData)((0x23U == 
                                            (0x7fU 
                                             & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) 
                                | (- (IData)((0x63U 
                                              == (0x7fU 
                                                  & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))))))) 
                      & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__imm) 
                     | (4U & ((- (IData)((0x67U == 
                                          (0x7fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) 
                              | (- (IData)((0x6fU == 
                                            (0x7fU 
                                             & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))))))))
            : ((2U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__regS))
                ? ((IData)(4U) + vlSelfRef.ysyx_25060170_top__DOT__PCout)
                : 0U));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__jumpaddr 
        = (vlSelfRef.ysyx_25060170_top__DOT__op_1 + vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__imm);
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IFU__DOT__PC_temp 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__jump_en)
            ? ((IData)(vlSelfRef.ysyx_25060170_top__DOT__PCx1)
                ? (0xfffffffeU & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__jumpaddr)
                : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__jal)
                    ? vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__jumpaddr
                    : 0U)) : ((IData)(4U) + vlSelfRef.ysyx_25060170_top__DOT__PCout));
}

VL_ATTR_COLD void Vysyx_25060170_top___024root___eval_triggers__stl(Vysyx_25060170_top___024root* vlSelf);

VL_ATTR_COLD bool Vysyx_25060170_top___024root___eval_phase__stl(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_phase__stl\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vysyx_25060170_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vysyx_25060170_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_top___024root___dump_triggers__ico(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___dump_triggers__ico\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vysyx_25060170_top___024root___dump_triggers__act(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___dump_triggers__act\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_top___024root___dump_triggers__nba(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___dump_triggers__nba\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_25060170_top___024root____Vm_traceActivitySetAll(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root____Vm_traceActivitySetAll\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vysyx_25060170_top___024root___ctor_var_reset(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___ctor_var_reset\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->ysyx_25060170_top__DOT__PCout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3352971641150919817ull);
    vlSelf->ysyx_25060170_top__DOT__ALUop = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3166105986368327414ull);
    vlSelf->ysyx_25060170_top__DOT__op_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18408171324471770211ull);
    vlSelf->ysyx_25060170_top__DOT__jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8012905159948482809ull);
    vlSelf->ysyx_25060170_top__DOT__regS = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12717715551753842121ull);
    vlSelf->ysyx_25060170_top__DOT__RegW = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1176689738722996510ull);
    vlSelf->ysyx_25060170_top__DOT__PCx1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5000299769028140258ull);
    vlSelf->ysyx_25060170_top__DOT__MEM_inst_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7287947607417944799ull);
    vlSelf->ysyx_25060170_top__DOT__reg_write_data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9370177011618980112ull);
    vlSelf->ysyx_25060170_top__DOT__reg_write_en_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6537308082187916582ull);
    vlSelf->ysyx_25060170_top__DOT__jump_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1397603571219665136ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IFU__DOT__PC_temp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5844415008826037744ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14634428253275247591ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5525580786427174450ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9701022435587571596ull);
    }
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__1__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6940409089456800902ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__2__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2884064605177539544ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__3__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15062408386133034001ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__4__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16397758294583008438ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__5__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11751106093591545373ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__6__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11127838710363274483ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__7__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5379033300563003662ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__8__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12849330678329215872ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__9__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15239425181604028212ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__10__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 361332142791926928ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__11__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10970967133231301637ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__12__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5124099223361874511ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__13__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10589509084276680206ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__14__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12968837136964246697ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__15__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 219292674751279705ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__16__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2943811947028929689ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__17__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1575995939624396494ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__18__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12364895873386308177ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__19__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2115241612534207476ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__20__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11141983744093792787ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__21__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2174423267312505734ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__22__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11714889584424071038ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__23__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1785167076007962268ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__24__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 610847886454298790ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__25__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10346347409770611320ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__26__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10242547653001223885ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__27__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12102497671464844152ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__28__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18299230695758515501ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__29__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12083573553898305825ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__30__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8164433767564645530ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__31__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6298343198036458047ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__jumpaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7775710912733298901ull);
    vlSelf->__Vtask_ysyx_25060170_top__DOT__u_ysyx_25060170_MEM__DOT__pmem_read__1__rdata = 0;
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
