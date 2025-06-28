// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMux.h for the primary calling header

#include "VMux__pch.h"
#include "VMux___024root.h"

VL_ATTR_COLD void VMux___024root___eval_static(VMux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root___eval_static\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__ysyx_25060170_IDU__02Eclk__0 
        = vlSelfRef.ysyx_25060170_IDU__02Eclk;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyx_25060170_top__02Eclk__0 
        = vlSelfRef.ysyx_25060170_top__02Eclk;
}

VL_ATTR_COLD void VMux___024root___eval_initial__TOP(VMux___024root* vlSelf);
VL_ATTR_COLD void VMux___024root____Vm_traceActivitySetAll(VMux___024root* vlSelf);

VL_ATTR_COLD void VMux___024root___eval_initial(VMux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root___eval_initial\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VMux___024root___eval_initial__TOP(vlSelf);
    VMux___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void VMux___024root___eval_initial__TOP(VMux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root___eval_initial__TOP\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[0U] = 0U;
    vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[0U] = 0U;
}

VL_ATTR_COLD void VMux___024root___eval_final(VMux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root___eval_final\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMux___024root___dump_triggers__stl(VMux___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VMux___024root___eval_phase__stl(VMux___024root* vlSelf);

VL_ATTR_COLD void VMux___024root___eval_settle(VMux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root___eval_settle\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VMux___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("vsrc/Mux.v", 39, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VMux___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMux___024root___dump_triggers__stl(VMux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root___dump_triggers__stl\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void VMux___024root___stl_sequent__TOP__0(VMux___024root* vlSelf);

VL_ATTR_COLD void VMux___024root___eval_stl(VMux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root___eval_stl\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VMux___024root___stl_sequent__TOP__0(vlSelf);
        VMux___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void VMux___024root___eval_triggers__stl(VMux___024root* vlSelf);

VL_ATTR_COLD bool VMux___024root___eval_phase__stl(VMux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root___eval_phase__stl\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VMux___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VMux___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMux___024root___dump_triggers__ico(VMux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root___dump_triggers__ico\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void VMux___024root___dump_triggers__act(VMux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root___dump_triggers__act\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge ysyx_25060170_IDU.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge ysyx_25060170_top.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VMux___024root___dump_triggers__nba(VMux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root___dump_triggers__nba\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge ysyx_25060170_IDU.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge ysyx_25060170_top.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VMux___024root____Vm_traceActivitySetAll(VMux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root____Vm_traceActivitySetAll\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void VMux___024root___ctor_var_reset(VMux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root___ctor_var_reset\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->MuxKey__02Eout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8283582003308999118ull);
    vlSelf->MuxKey__02Ekey = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13346833795421284896ull);
    vlSelf->MuxKey__02Elut = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14911733621244709951ull);
    vlSelf->MuxKeyWithDefault__02Eout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6441376864385511511ull);
    vlSelf->MuxKeyWithDefault__02Ekey = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13753768701522508321ull);
    vlSelf->default_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 439777470145912115ull);
    vlSelf->MuxKeyWithDefault__02Elut = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12611271116395659142ull);
    vlSelf->ysyx_25060170_IDU__02Eclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14541952484098868639ull);
    vlSelf->ysyx_25060170_IDU__02Erst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14237724110629908282ull);
    vlSelf->inst_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16969601043139912537ull);
    vlSelf->reg_write_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15672705278918349117ull);
    vlSelf->reg_write_addr_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16897137053107922933ull);
    vlSelf->reg_write_data_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6359795057856799250ull);
    vlSelf->rs1_data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6362800056725486504ull);
    vlSelf->rs2_data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 680939434827803272ull);
    vlSelf->opcode_o = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6946942477807833029ull);
    vlSelf->funct3_o = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10446437671366642633ull);
    vlSelf->funct7_o = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5995300196270909500ull);
    vlSelf->rd_o = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3315672295732866941ull);
    vlSelf->ysyx_25060170_top__02Eclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5765569544624185828ull);
    vlSelf->ysyx_25060170_top__02Erst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1146904806947277512ull);
    vlSelf->ready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2487444212943817592ull);
    vlSelf->ready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6223107695775132031ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->MuxKey__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1265494860843482196ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->MuxKey__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6671396155462480505ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->MuxKey__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13475881727120149528ull);
    }
    vlSelf->MuxKey__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12861506574804205615ull);
    vlSelf->MuxKey__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13332855800130701089ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->MuxKeyWithDefault__DOT__i0__DOT__pair_list[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4146403025273511169ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->MuxKeyWithDefault__DOT__i0__DOT__key_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1715716196172034978ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->MuxKeyWithDefault__DOT__i0__DOT__data_list[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10649860047794450649ull);
    }
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__lut_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5920827578743154955ull);
    vlSelf->MuxKeyWithDefault__DOT__i0__DOT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6858157235899141833ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_25060170_IDU__DOT__reg_file[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 590384605550540997ull);
    }
    vlSelf->ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__1__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11374533870324103706ull);
    vlSelf->ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__2__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4461077857320828508ull);
    vlSelf->ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__3__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12815827196091538505ull);
    vlSelf->ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__4__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9689211346553648330ull);
    vlSelf->ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__5__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12035451746230536856ull);
    vlSelf->ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__6__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3715862408577907087ull);
    vlSelf->ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__7__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16409675409285690638ull);
    vlSelf->ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__8__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5663613661459715209ull);
    vlSelf->ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__9__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15463444709546846907ull);
    vlSelf->ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__10__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7328774231688859424ull);
    vlSelf->ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__11__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7749635328330257497ull);
    vlSelf->ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__12__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2442243583951725010ull);
    vlSelf->ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__13__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9811927289240896652ull);
    vlSelf->ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__14__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8644766755896387633ull);
    vlSelf->ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__15__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11514211786174308978ull);
    vlSelf->ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__16__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2453774506173038167ull);
    vlSelf->ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__17__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1828477832775988426ull);
    vlSelf->ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__18__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15305429836666480237ull);
    vlSelf->ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__19__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16210196297694350064ull);
    vlSelf->ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__20__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1415277270764844152ull);
    vlSelf->ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__21__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4736273314125997479ull);
    vlSelf->ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__22__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2668718291491624586ull);
    vlSelf->ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__23__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17481628484764466309ull);
    vlSelf->ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__24__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6482431923313657810ull);
    vlSelf->ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__25__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6700644707253030154ull);
    vlSelf->ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__26__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1923991544033166830ull);
    vlSelf->ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__27__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2298150813753113496ull);
    vlSelf->ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__28__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12570137398959703246ull);
    vlSelf->ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__29__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16530326951411965770ull);
    vlSelf->ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__30__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4280053059585385378ull);
    vlSelf->ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__31__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 124662385905683532ull);
    vlSelf->ysyx_25060170_top__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8434881942743891322ull);
    vlSelf->ysyx_25060170_top__DOT__inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5655826691526023705ull);
    vlSelf->ysyx_25060170_top__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2835320893651655843ull);
    vlSelf->ysyx_25060170_top__DOT__u_ifu__DOT__pc_plus_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9782570093467265061ull);
    vlSelf->ysyx_25060170_top__DOT__u_mem__DOT____Vcellinp__mem_data_reg__din = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1611347432604836708ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_25060170_top__DOT__u_gpr__DOT__rf[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3567354139177605744ull);
    }
    vlSelf->ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__1__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14831668978395663266ull);
    vlSelf->ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__2__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3100489934618198718ull);
    vlSelf->ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__3__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11533173889919277653ull);
    vlSelf->ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__4__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13241483053520411780ull);
    vlSelf->ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__5__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7130294032840565070ull);
    vlSelf->ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__6__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9879285126941569686ull);
    vlSelf->ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__7__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1199516962880866193ull);
    vlSelf->ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__8__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2556753361526730230ull);
    vlSelf->ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__9__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5840750689421045883ull);
    vlSelf->ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__10__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9534097739519361940ull);
    vlSelf->ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__11__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12503308071841075159ull);
    vlSelf->ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__12__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11883061272220375779ull);
    vlSelf->ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__13__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11852303590813656055ull);
    vlSelf->ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__14__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16304313715796839932ull);
    vlSelf->ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__15__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6912008527180919757ull);
    vlSelf->ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__16__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5075002018177574717ull);
    vlSelf->ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__17__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14651768368897961660ull);
    vlSelf->ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__18__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4687358867448391884ull);
    vlSelf->ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__19__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5331056930647512445ull);
    vlSelf->ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__20__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13262968193822189220ull);
    vlSelf->ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__21__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16049565658218365391ull);
    vlSelf->ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__22__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8896270894820183564ull);
    vlSelf->ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__23__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6130174192154357113ull);
    vlSelf->ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__24__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14428787888621895248ull);
    vlSelf->ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__25__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4919569472443435596ull);
    vlSelf->ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__26__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16649081135182872673ull);
    vlSelf->ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__27__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10968640753924163793ull);
    vlSelf->ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__28__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11035090401364844184ull);
    vlSelf->ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__29__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7452843153974379383ull);
    vlSelf->ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__30__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9659047030436656407ull);
    vlSelf->ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__31__KET____DOT__reg_x__dout = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4479761677011410905ull);
    vlSelf->ysyx_25060170_top__DOT__u_exu__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 909461767069076539ull);
    vlSelf->__Vfunc_addr_to_instruction__0__Vfuncout = 0;
    vlSelf->__Vtrigprevexpr___TOP__ysyx_25060170_IDU__02Eclk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1021140090351414756ull);
    vlSelf->__Vtrigprevexpr___TOP__ysyx_25060170_top__02Eclk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2747726180011009914ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
