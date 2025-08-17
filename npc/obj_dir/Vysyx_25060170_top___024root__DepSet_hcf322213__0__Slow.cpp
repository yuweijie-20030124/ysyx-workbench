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

void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_IFU__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata, CData/*7:0*/ rlen);
void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__set_npc_exit_TOP(IData/*31:0*/ pc, IData/*31:0*/ halt_ret);
void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__paddr_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ data);
void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__paddr_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ &paddr_read__Vfuncrtn);

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
    Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_IFU__DOT__pmem_read_TOP(vlSelfRef.ysyx_25060170_top__DOT__PCout, vlSelfRef.__Vtask_ysyx_25060170_top__DOT__u_ysyx_25060170_IFU__DOT__pmem_read__2__rdata, 4U);
    vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o = vlSelfRef.__Vtask_ysyx_25060170_top__DOT__u_ysyx_25060170_IFU__DOT__pmem_read__2__rdata;
    if ((0x100073U == vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)) {
        Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__set_npc_exit_TOP(vlSelfRef.ysyx_25060170_top__DOT__PCout, 0U);
    }
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT____VdfgRegularize_h08aa94b0_0_0 
        = (vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
           [(0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                      >> 0xfU))] >> 0x1fU);
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__is_Utype 
        = ((0x17U == (0x7fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)) 
           | (0x37U == (0x7fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_16 
        = (IData)((0x1033U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_17 
        = (IData)((0x2033U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_19 
        = (IData)((0x4033U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_21 
        = (IData)((0x6033U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_22 
        = (IData)((0x7033U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_18 
        = (IData)((0x3033U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__addi 
        = (IData)((0x13U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sw 
        = (IData)((0x2023U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sh 
        = (IData)((0x1023U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sb 
        = (IData)((0x23U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sd 
        = (IData)((0x3023U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__is_beq = (IData)(
                                                       (0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__is_bne = (IData)(
                                                       (0x1063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__is_bltu = (IData)(
                                                        (0x6063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__is_bgeu = (IData)(
                                                        (0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__is_blt = (IData)(
                                                       (0x4063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__is_bge = (IData)(
                                                       (0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__jalr 
        = (IData)((0x67U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__slli 
        = (IData)((0x1013U == (0xfe00707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__andi 
        = (IData)((0x7013U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__xori 
        = (IData)((0x4013U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__ori 
        = (IData)((0x2013U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lbu 
        = (IData)((0x4003U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lhu 
        = (IData)((0x5003U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lb 
        = (IData)((3U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lh 
        = (IData)((0x1003U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lw 
        = (IData)((0x2003U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_15 
        = (IData)((0x33U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_14 
        = (IData)((0x5033U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__is_sltiu = (IData)(
                                                         (0x3013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_2 
        = (IData)((0x5013U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sll 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_16) 
           & (0U == (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                     >> 0x19U)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulh 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_16) 
           & (1U == (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                     >> 0x19U)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__slt 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_17) 
           & (0U == (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                     >> 0x19U)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulhsu 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_17) 
           & (1U == (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                     >> 0x19U)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcxor 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_19) 
           & (0U == (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                     >> 0x19U)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__div 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_19) 
           & (1U == (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                     >> 0x19U)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcor 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_21) 
           & (0U == (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                     >> 0x19U)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__rem 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_21) 
           & (1U == (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                     >> 0x19U)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcand 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_22) 
           & (0U == (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                     >> 0x19U)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__remu 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_22) 
           & (1U == (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                     >> 0x19U)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulhu 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_18) 
           & (1U == (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                     >> 0x19U)));
    vlSelfRef.ysyx_25060170_top__DOT__is_sltu = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_18) 
                                                 & (0U 
                                                    == 
                                                    (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                     >> 0x19U)));
    vlSelfRef.ysyx_25060170_top__DOT__need_sign_ext 
        = (3U & ((2U & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lh)))) 
                 | ((1U & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lb)))) 
                    | (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lw))))));
    vlSelfRef.ysyx_25060170_top__DOT__regS = ((1U & 
                                               ((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lb))) 
                                                | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lh))) 
                                                   | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lw))) 
                                                      | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lbu))) 
                                                         | (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lhu)))))))) 
                                              | (2U 
                                                 & ((- (IData)(
                                                               (0x6fU 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) 
                                                    | (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__jalr))))));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__add 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_15) 
           & (0U == (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                     >> 0x19U)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sub 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_15) 
           & (0x20U == (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                        >> 0x19U)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mul 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_15) 
           & (1U == (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                     >> 0x19U)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srl 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_14) 
           & (0U == (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                     >> 0x19U)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sra 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_14) 
           & (0x20U == (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                        >> 0x19U)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__divu 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_14) 
           & (1U == (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                     >> 0x19U)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srai 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_2) 
           & (0x20U == (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                        >> 0x19U)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srli 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_2) 
           & (0U == (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                     >> 0x19U)));
    vlSelfRef.ysyx_25060170_top__DOT__ALUop = (0xfU 
                                               & ((7U 
                                                   & (- (IData)(
                                                                (0x37U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o))))) 
                                                  | ((9U 
                                                      & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srli)))) 
                                                     | ((9U 
                                                         & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srl)))) 
                                                        | ((8U 
                                                            & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__slli)))) 
                                                           | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_sltiu))) 
                                                              | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_sltu))) 
                                                                 | ((4U 
                                                                     & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__andi)))) 
                                                                    | ((6U 
                                                                        & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__xori)))) 
                                                                       | ((5U 
                                                                           & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__ori)))) 
                                                                          | ((8U 
                                                                              & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sll)))) 
                                                                             | ((1U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__slt)))) 
                                                                                | ((6U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcxor)))) 
                                                                                | ((5U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcor)))) 
                                                                                | ((4U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcand)))) 
                                                                                | ((0xcU 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sra)))) 
                                                                                | ((1U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sub)))) 
                                                                                | ((2U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mul)))) 
                                                                                | ((2U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulh)))) 
                                                                                | ((2U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulhsu)))) 
                                                                                | ((2U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulhu)))) 
                                                                                | ((3U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__div)))) 
                                                                                | ((3U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__divu)))) 
                                                                                | ((0xaU 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__rem)))) 
                                                                                | ((0xaU 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__remu)))) 
                                                                                | (0xcU 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srai)))))))))))))))))))))))))))));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__is_Itype 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srli) 
           | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__slli) 
              | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srai) 
                 | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lbu) 
                    | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__addi) 
                       | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_sltiu) 
                          | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lb) 
                             | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lh) 
                                | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lhu) 
                                   | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lw) 
                                      | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__andi) 
                                         | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__xori) 
                                            | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__ori) 
                                               | (IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__jalr))))))))))))));
    vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o 
        = ((~ (IData)(vlSelfRef.rst)) & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__is_Utype) 
                                          | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__is_Itype) 
                                             | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srli) 
                                                 | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srl) 
                                                    | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__add) 
                                                       | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sll) 
                                                          | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__slt) 
                                                             | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_sltu) 
                                                                | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcxor) 
                                                                   | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcor) 
                                                                      | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcand) 
                                                                         | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sra) 
                                                                            | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sub) 
                                                                               | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mul) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulh) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulhsu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulhu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__div) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__divu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__rem) 
                                                                                | (IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__remu))))))))))))))))))) 
                                                | (0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o))))) 
                                         & (0U != (0x1fU 
                                                   & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                      >> 7U)))));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__imm 
        = ((0xfffff000U & ((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__is_Utype))) 
                           & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)) 
           | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__is_Itype))) 
               & (((- (IData)((vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                               >> 0x1fU))) << 0xcU) 
                  | (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                     >> 0x14U))) | (((- (IData)(((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sw) 
                                                 | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sh) 
                                                    | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sb) 
                                                       | (IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sd)))))) 
                                     & (((- (IData)(
                                                    (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                     >> 0x1fU))) 
                                         << 0xcU) | 
                                        ((0xfe0U & 
                                          (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                           >> 0x14U)) 
                                         | (0x1fU & 
                                            (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                             >> 7U))))) 
                                    | (((- (IData)(
                                                   ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_beq) 
                                                    | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bne) 
                                                       | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_blt) 
                                                          | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bge) 
                                                             | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bltu) 
                                                                | (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bgeu)))))))) 
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
                                                      >> 0x14U)))))))));
    vlSelfRef.ysyx_25060170_top__DOT__op_2 = (((- (IData)(
                                                          (0x17U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) 
                                               & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__imm) 
                                              | ((0x1fU 
                                                  & ((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srli))) 
                                                     & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                        >> 0x14U))) 
                                                 | ((0x1fU 
                                                     & ((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__slli))) 
                                                        & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                           >> 0x14U))) 
                                                    | ((0x1fU 
                                                        & ((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srai))) 
                                                           & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                              >> 0x14U))) 
                                                       | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lbu))) 
                                                           & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__imm) 
                                                          | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__addi))) 
                                                              & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__imm) 
                                                             | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_sltiu))) 
                                                                 & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__imm) 
                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lb))) 
                                                                    & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__imm) 
                                                                   | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lh))) 
                                                                       & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__imm) 
                                                                      | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lhu))) 
                                                                          & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__imm) 
                                                                         | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lw))) 
                                                                             & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__imm) 
                                                                            | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__andi))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__imm) 
                                                                               | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__xori))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__imm) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__ori))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__imm) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__jalr))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__imm) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sw))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__imm) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sh))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__imm) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sb))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__imm) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sd))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__imm) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srl))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0x14U))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__add))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0x14U))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sll))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0x14U))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__slt))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0x14U))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_sltu))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0x14U))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcxor))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0x14U))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcor))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0x14U))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcand))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0x14U))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sra))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0x14U))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sub))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0x14U))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mul))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0x14U))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulh))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0x14U))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulhsu))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0x14U))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulhu))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0x14U))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__div))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0x14U))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__divu))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0x14U))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__rem))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0x14U))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__remu))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0x14U))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_beq))) 
                                                                                | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bne))) 
                                                                                | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_blt))) 
                                                                                | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bge))) 
                                                                                | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bltu))) 
                                                                                | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bgeu))) 
                                                                                | (- (IData)(
                                                                                (0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))))))))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__imm))))))))))))))))))))))))))))))))))))));
    vlSelfRef.ysyx_25060170_top__DOT__op_1 = (((- (IData)(
                                                          (0x17U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) 
                                               & vlSelfRef.ysyx_25060170_top__DOT__PCout) 
                                              | (((- (IData)(
                                                             (0x37U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) 
                                                  & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__imm) 
                                                 | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srli))) 
                                                     & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                     [
                                                     (0x1fU 
                                                      & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                         >> 0xfU))]) 
                                                    | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__slli))) 
                                                        & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                        [
                                                        (0x1fU 
                                                         & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                            >> 0xfU))]) 
                                                       | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srai))) 
                                                           & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                           [
                                                           (0x1fU 
                                                            & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                               >> 0xfU))]) 
                                                          | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lbu))) 
                                                              & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                              [
                                                              (0x1fU 
                                                               & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                  >> 0xfU))]) 
                                                             | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__addi))) 
                                                                 & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                 [
                                                                 (0x1fU 
                                                                  & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                     >> 0xfU))]) 
                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_sltiu))) 
                                                                    & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                    [
                                                                    (0x1fU 
                                                                     & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                        >> 0xfU))]) 
                                                                   | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lb))) 
                                                                       & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                       [
                                                                       (0x1fU 
                                                                        & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                           >> 0xfU))]) 
                                                                      | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lh))) 
                                                                          & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                          [
                                                                          (0x1fU 
                                                                           & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                              >> 0xfU))]) 
                                                                         | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lhu))) 
                                                                             & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                             [
                                                                             (0x1fU 
                                                                              & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0xfU))]) 
                                                                            | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lw))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0xfU))]) 
                                                                               | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__andi))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0xfU))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__xori))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0xfU))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__ori))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0xfU))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__jalr))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0xfU))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sw))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0xfU))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sh))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0xfU))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sb))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0xfU))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sd))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0xfU))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srl))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0xfU))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__add))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0xfU))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sll))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0xfU))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__slt))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0xfU))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_sltu))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0xfU))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcxor))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0xfU))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcor))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0xfU))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcand))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0xfU))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sra))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0xfU))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sub))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0xfU))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mul))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0xfU))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulh))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0xfU))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulhsu))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0xfU))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulhu))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0xfU))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__div))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0xfU))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__divu))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0xfU))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__rem))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0xfU))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__remu))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0xfU))]) 
                                                                                | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_beq))) 
                                                                                | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bne))) 
                                                                                | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_blt))) 
                                                                                | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bge))) 
                                                                                | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bltu))) 
                                                                                | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bgeu))) 
                                                                                | (- (IData)(
                                                                                (0x6fU 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))))))))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__PCout)))))))))))))))))))))))))))))))))))))));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_op_2 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_sltiu)
            ? vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__imm
            : vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
           [(0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                      >> 0x14U))]);
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__jumpaddr 
        = (vlSelfRef.ysyx_25060170_top__DOT__op_1 + vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__imm);
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT____VdfgRegularize_h08aa94b0_0_3 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.ysyx_25060170_top__DOT__op_1, vlSelfRef.ysyx_25060170_top__DOT__op_2);
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_unsigned 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                             [(0x1fU 
                                               & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                  >> 0xfU))])) 
                             - (QData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_op_2))));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2 
        = (vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
           [(0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                      >> 0xfU))] - vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_op_2);
    vlSelfRef.ysyx_25060170_top__DOT__bgeu_flag = (
                                                   (~ (IData)(
                                                              (vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_unsigned 
                                                               >> 0x20U))) 
                                                   & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bgeu));
    vlSelfRef.ysyx_25060170_top__DOT__bltu_flag = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bltu) 
                                                   & (IData)(
                                                             (vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_unsigned 
                                                              >> 0x20U)));
    vlSelfRef.ysyx_25060170_top__DOT__exu_res1 = ((
                                                   (- (IData)(
                                                              (0U 
                                                               == (IData)(vlSelfRef.ysyx_25060170_top__DOT__ALUop)))) 
                                                   & (vlSelfRef.ysyx_25060170_top__DOT__op_1 
                                                      + vlSelfRef.ysyx_25060170_top__DOT__op_2)) 
                                                  | (((- (IData)(
                                                                 (1U 
                                                                  == (IData)(vlSelfRef.ysyx_25060170_top__DOT__ALUop)))) 
                                                      & (vlSelfRef.ysyx_25060170_top__DOT__op_1 
                                                         - vlSelfRef.ysyx_25060170_top__DOT__op_2)) 
                                                     | (((- (IData)(
                                                                    (2U 
                                                                     == (IData)(vlSelfRef.ysyx_25060170_top__DOT__ALUop)))) 
                                                         & (vlSelfRef.ysyx_25060170_top__DOT__op_1 
                                                            * vlSelfRef.ysyx_25060170_top__DOT__op_2)) 
                                                        | (((- (IData)(
                                                                       (3U 
                                                                        == (IData)(vlSelfRef.ysyx_25060170_top__DOT__ALUop)))) 
                                                            & VL_DIV_III(32, vlSelfRef.ysyx_25060170_top__DOT__op_1, vlSelfRef.ysyx_25060170_top__DOT__op_2)) 
                                                           | (((- (IData)(
                                                                          (4U 
                                                                           == (IData)(vlSelfRef.ysyx_25060170_top__DOT__ALUop)))) 
                                                               & (vlSelfRef.ysyx_25060170_top__DOT__op_1 
                                                                  & vlSelfRef.ysyx_25060170_top__DOT__op_2)) 
                                                              | (((- (IData)(
                                                                             (5U 
                                                                              == (IData)(vlSelfRef.ysyx_25060170_top__DOT__ALUop)))) 
                                                                  & (vlSelfRef.ysyx_25060170_top__DOT__op_1 
                                                                     | vlSelfRef.ysyx_25060170_top__DOT__op_2)) 
                                                                 | (((- (IData)(
                                                                                (6U 
                                                                                == (IData)(vlSelfRef.ysyx_25060170_top__DOT__ALUop)))) 
                                                                     & (vlSelfRef.ysyx_25060170_top__DOT__op_1 
                                                                        ^ vlSelfRef.ysyx_25060170_top__DOT__op_2)) 
                                                                    | (((- (IData)(
                                                                                (7U 
                                                                                == (IData)(vlSelfRef.ysyx_25060170_top__DOT__ALUop)))) 
                                                                        & vlSelfRef.ysyx_25060170_top__DOT__op_1) 
                                                                       | (((- (IData)(
                                                                                (8U 
                                                                                == (IData)(vlSelfRef.ysyx_25060170_top__DOT__ALUop)))) 
                                                                           & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT____VdfgRegularize_h08aa94b0_0_3) 
                                                                          | (((- (IData)(
                                                                                (9U 
                                                                                == (IData)(vlSelfRef.ysyx_25060170_top__DOT__ALUop)))) 
                                                                              & VL_SHIFTR_III(32,32,32, vlSelfRef.ysyx_25060170_top__DOT__op_1, vlSelfRef.ysyx_25060170_top__DOT__op_2)) 
                                                                             | (((- (IData)(
                                                                                (0xaU 
                                                                                == (IData)(vlSelfRef.ysyx_25060170_top__DOT__ALUop)))) 
                                                                                & VL_MODDIV_III(32, vlSelfRef.ysyx_25060170_top__DOT__op_1, vlSelfRef.ysyx_25060170_top__DOT__op_2)) 
                                                                                | (((- (IData)(
                                                                                (0xbU 
                                                                                == (IData)(vlSelfRef.ysyx_25060170_top__DOT__ALUop)))) 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT____VdfgRegularize_h08aa94b0_0_3) 
                                                                                | (((- (IData)(
                                                                                (0xcU 
                                                                                == (IData)(vlSelfRef.ysyx_25060170_top__DOT__ALUop)))) 
                                                                                & VL_SHIFTRS_III(32,32,32, vlSelfRef.ysyx_25060170_top__DOT__op_1, vlSelfRef.ysyx_25060170_top__DOT__op_2)) 
                                                                                | (1U 
                                                                                & ((- (IData)(
                                                                                (0xfU 
                                                                                == (IData)(vlSelfRef.ysyx_25060170_top__DOT__ALUop)))) 
                                                                                & ((- (IData)(
                                                                                ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_sltiu) 
                                                                                & (IData)(
                                                                                (vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_unsigned 
                                                                                >> 0x20U))))) 
                                                                                | (- (IData)(
                                                                                ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_sltu) 
                                                                                & (IData)(
                                                                                (vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_unsigned 
                                                                                >> 0x20U)))))))))))))))))))));
    vlSelfRef.ysyx_25060170_top__DOT__bne_flag = ((0U 
                                                   != vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2) 
                                                  & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bne));
    vlSelfRef.ysyx_25060170_top__DOT__beq_flag = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_beq) 
                                                  & (0U 
                                                     == vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_sign 
        = (1U & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT____VdfgRegularize_h08aa94b0_0_0) 
                  ^ (vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_op_2 
                     >> 0x1fU)) ? ((~ (vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_op_2 
                                       >> 0x1fU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT____VdfgRegularize_h08aa94b0_0_0))
                  : (vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2 
                     >> 0x1fU)));
    if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sw) 
         | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sh) 
            | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sb) 
               | (IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sd))))) {
        Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__paddr_write_TOP(vlSelfRef.ysyx_25060170_top__DOT__exu_res1, 
                                                                                ((4U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lw)))) 
                                                                                | ((2U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lh)))) 
                                                                                | ((2U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lhu)))) 
                                                                                | ((1U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lb)))) 
                                                                                | ((1U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lbu)))) 
                                                                                | ((8U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sd)))) 
                                                                                | ((4U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sw)))) 
                                                                                | ((2U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sh)))) 
                                                                                | (1U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sb)))))))))))), 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0x14U))]);
    }
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__paddr_data 
        = ((1U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__regS))
            ? ([&]() {
                Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__paddr_read_TOP(vlSelfRef.ysyx_25060170_top__DOT__exu_res1, 
                                                                                ((4U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lw)))) 
                                                                                | ((2U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lh)))) 
                                                                                | ((2U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lhu)))) 
                                                                                | ((1U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lb)))) 
                                                                                | ((1U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lbu)))) 
                                                                                | ((8U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sd)))) 
                                                                                | ((4U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sw)))) 
                                                                                | ((2U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sh)))) 
                                                                                | (1U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sb)))))))))))), vlSelfRef.__Vfunc_ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__paddr_read__4__Vfuncout);
            }(), vlSelfRef.__Vfunc_ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__paddr_read__4__Vfuncout)
            : 0U);
    vlSelfRef.ysyx_25060170_top__DOT__bge_flag = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bge) 
                                                  & ((~ (IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_sign)) 
                                                     | (0U 
                                                        == vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2)));
    vlSelfRef.ysyx_25060170_top__DOT__blt_flag = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_blt) 
                                                  & ((0U 
                                                      != vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2) 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_sign)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT____VdfgRegularize_hca46b70a_1_1 
        = ((- (IData)((1U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__regS)))) 
           & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__paddr_data);
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IFU__DOT__PC_temp 
        = (((0x6fU == (0x7fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)) 
            | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__jalr) 
               | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__bge_flag) 
                  | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__bne_flag) 
                     | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__bgeu_flag) 
                        | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__blt_flag) 
                           | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__beq_flag) 
                              | (IData)(vlSelfRef.ysyx_25060170_top__DOT__bltu_flag))))))))
            ? ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__jalr)
                ? (0xfffffffeU & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__jumpaddr)
                : ((0x6fU == (0x7fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o))
                    ? vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__jumpaddr
                    : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__bne_flag)
                        ? vlSelfRef.ysyx_25060170_top__DOT__exu_res1
                        : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__bge_flag)
                            ? vlSelfRef.ysyx_25060170_top__DOT__exu_res1
                            : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__blt_flag)
                                ? vlSelfRef.ysyx_25060170_top__DOT__exu_res1
                                : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__bltu_flag)
                                    ? vlSelfRef.ysyx_25060170_top__DOT__exu_res1
                                    : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__beq_flag)
                                        ? vlSelfRef.ysyx_25060170_top__DOT__exu_res1
                                        : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__bgeu_flag)
                                            ? vlSelfRef.ysyx_25060170_top__DOT__exu_res1
                                            : 0U))))))))
            : ((IData)(4U) + vlSelfRef.ysyx_25060170_top__DOT__PCout));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__tiaojian 
        = (((~ (IData)(vlSelfRef.ysyx_25060170_top__DOT__beq_flag)) 
            & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_beq)) 
           | (((~ (IData)(vlSelfRef.ysyx_25060170_top__DOT__blt_flag)) 
               & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_blt)) 
              | (((~ (IData)(vlSelfRef.ysyx_25060170_top__DOT__bne_flag)) 
                  & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bne)) 
                 | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__bge_flag) 
                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bge)) 
                    | (((~ (IData)(vlSelfRef.ysyx_25060170_top__DOT__bltu_flag)) 
                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bltu)) 
                       | ((~ (IData)(vlSelfRef.ysyx_25060170_top__DOT__bgeu_flag)) 
                          & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bgeu)))))));
    vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o 
        = (((- (IData)((1U & (~ (IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__tiaojian))))) 
            & ((- (IData)((0U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__regS)))) 
               & vlSelfRef.ysyx_25060170_top__DOT__exu_res1)) 
           | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__tiaojian))) 
               & ((- (IData)((0U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__regS)))) 
                  & ((IData)(4U) + vlSelfRef.ysyx_25060170_top__DOT__PCout))) 
              | (((- (IData)((1U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__regS)))) 
                  & (((- (IData)((1U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__need_sign_ext)))) 
                      & ((- (IData)((1U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__regS)))) 
                         & (((- (IData)((1U & (vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__paddr_data 
                                               >> 7U)))) 
                             << 8U) | (0xffU & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__paddr_data)))) 
                     | (((- (IData)((2U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__need_sign_ext)))) 
                         & ((- (IData)((1U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__regS)))) 
                            & (((- (IData)((1U & (vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__paddr_data 
                                                  >> 0xfU)))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__paddr_data)))) 
                        | (((- (IData)((3U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__need_sign_ext)))) 
                            & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT____VdfgRegularize_hca46b70a_1_1) 
                           | vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT____VdfgRegularize_hca46b70a_1_1)))) 
                 | ((- (IData)((2U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__regS)))) 
                    & ((IData)(4U) + vlSelfRef.ysyx_25060170_top__DOT__PCout)))));
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
    vlSelf->ysyx_25060170_top__DOT__need_sign_ext = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10673309990219284050ull);
    vlSelf->ysyx_25060170_top__DOT__op_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18408171324471770211ull);
    vlSelf->ysyx_25060170_top__DOT__op_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12114114115721580314ull);
    vlSelf->ysyx_25060170_top__DOT__is_beq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11450949380428078913ull);
    vlSelf->ysyx_25060170_top__DOT__is_blt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2440812464883291316ull);
    vlSelf->ysyx_25060170_top__DOT__is_bne = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17719153032716792352ull);
    vlSelf->ysyx_25060170_top__DOT__is_bge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8824920731229513297ull);
    vlSelf->ysyx_25060170_top__DOT__is_bltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17677229573139518496ull);
    vlSelf->ysyx_25060170_top__DOT__is_bgeu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6726200244096536649ull);
    vlSelf->ysyx_25060170_top__DOT__is_sltiu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11729036676387541945ull);
    vlSelf->ysyx_25060170_top__DOT__is_sltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7847945884282537516ull);
    vlSelf->ysyx_25060170_top__DOT__beq_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16957775055319655245ull);
    vlSelf->ysyx_25060170_top__DOT__blt_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17151235143363599491ull);
    vlSelf->ysyx_25060170_top__DOT__bne_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8943419075640513439ull);
    vlSelf->ysyx_25060170_top__DOT__bge_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 783780140107105745ull);
    vlSelf->ysyx_25060170_top__DOT__bltu_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9913331254819586955ull);
    vlSelf->ysyx_25060170_top__DOT__bgeu_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4712312413978073108ull);
    vlSelf->ysyx_25060170_top__DOT__regS = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12717715551753842121ull);
    vlSelf->ysyx_25060170_top__DOT__exu_res1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11599853839670564587ull);
    vlSelf->ysyx_25060170_top__DOT__MEM_inst_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7287947607417944799ull);
    vlSelf->ysyx_25060170_top__DOT__reg_write_data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9370177011618980112ull);
    vlSelf->ysyx_25060170_top__DOT__reg_write_en_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6537308082187916582ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IFU__DOT__PC_temp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5844415008826037744ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14634428253275247591ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__is_Utype = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9403727488185034736ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srli = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5837909598420768418ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__slli = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18157299448827688643ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srai = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2616080830075482750ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lbu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3564224905966123788ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__addi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6570431338154787634ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4690178178119613141ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14158317936223396491ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9188897698941687617ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16515993520581712437ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__andi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1727163972940196061ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__xori = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8424006414850509980ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__ori = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10289399483808948640ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3323712579229420581ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__is_Itype = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3700457403957278169ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3295363283921731193ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 178186260035256604ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13051889073716492444ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9143357780750808634ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9732413056302763672ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__add = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13542610259196015162ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sll = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8998324515082696074ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__slt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11956119227880669051ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcxor = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8994397326272827227ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcor = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16208547772824064455ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcand = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4583143281307676253ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2648684034356250284ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18252047482726899602ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mul = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17911332700384516380ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15825223115860469483ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulhsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11175119063642100998ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2036169751940115850ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__div = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3822510143391872384ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__divu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4802257171725524079ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__rem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9329169230479743468ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__remu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13657458271401056951ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8112911741582071615ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4307239469076151125ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14213297401700556130ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11376461083943644142ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_17 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7438785104396453330ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_18 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7840393386259433193ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_19 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12367915138949066431ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_21 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8840102492662743897ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_22 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11146264459366680119ull);
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
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_op_2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11776932506874026668ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 978248491623664039ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4571806606311147407ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_unsigned = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 7610078308401058036ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT____VdfgRegularize_h08aa94b0_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10082270155085492163ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT____VdfgRegularize_h08aa94b0_0_3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7733974351397975441ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__tiaojian = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6995534971647263713ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__paddr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12060773290260791316ull);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT____VdfgRegularize_hca46b70a_1_1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5603976678385091420ull);
    vlSelf->__Vtask_ysyx_25060170_top__DOT__u_ysyx_25060170_IFU__DOT__pmem_read__2__rdata = 0;
    vlSelf->__Vfunc_ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__paddr_read__4__Vfuncout = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
