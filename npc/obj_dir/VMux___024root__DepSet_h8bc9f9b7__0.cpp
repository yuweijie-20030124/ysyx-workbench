// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMux.h for the primary calling header

#include "VMux__pch.h"
#include "VMux__Syms.h"
#include "VMux___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VMux___024root___dump_triggers__ico(VMux___024root* vlSelf);
#endif  // VL_DEBUG

void VMux___024root___eval_triggers__ico(VMux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root___eval_triggers__ico\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMux___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMux___024root___dump_triggers__act(VMux___024root* vlSelf);
#endif  // VL_DEBUG

void VMux___024root___eval_triggers__act(VMux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root___eval_triggers__act\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.ysyx_25060170_IDU__02Eclk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyx_25060170_IDU__02Eclk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.ysyx_25060170_top__02Eclk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyx_25060170_top__02Eclk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__ysyx_25060170_IDU__02Eclk__0 
        = vlSelfRef.ysyx_25060170_IDU__02Eclk;
    vlSelfRef.__Vtrigprevexpr___TOP__ysyx_25060170_top__02Eclk__0 
        = vlSelfRef.ysyx_25060170_top__02Eclk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMux___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VMux___024unit____Vdpiimwrap_addr_to_instruction_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &addr_to_instruction__Vfuncrtn);

VL_INLINE_OPT void VMux___024root___nba_sequent__TOP__0(VMux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root___nba_sequent__TOP__0\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.ysyx_25060170_top__02Erst) {
        vlSelfRef.ysyx_25060170_top__DOT__pc = 0x80000000U;
        vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__1__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__2__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__3__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__4__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__5__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__6__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__7__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__8__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__9__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__10__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__11__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__12__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__13__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__14__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__15__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__16__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__17__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__18__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__19__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__20__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__21__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__22__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__23__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__24__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__25__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__26__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__27__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__28__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__29__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__30__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__31__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__inst = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__alu_result = 0U;
    } else {
        if ((IData)(((0x80U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                     & (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                        >> 7U)))))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__1__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__alu_result;
        }
        if ((IData)(((0x100U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                     & (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                        >> 7U)))))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__2__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__alu_result;
        }
        if ((IData)(((0x180U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                     & (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                        >> 7U)))))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__3__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__alu_result;
        }
        if ((IData)(((0x200U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                     & (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                        >> 7U)))))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__4__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__alu_result;
        }
        if ((IData)(((0x280U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                     & (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                        >> 7U)))))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__5__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__alu_result;
        }
        if ((IData)(((0x300U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                     & (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                        >> 7U)))))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__6__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__alu_result;
        }
        if ((IData)(((0x380U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                     & (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                        >> 7U)))))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__7__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__alu_result;
        }
        if ((IData)(((0x400U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                     & (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                        >> 7U)))))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__8__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__alu_result;
        }
        if ((IData)(((0x480U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                     & (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                        >> 7U)))))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__9__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__alu_result;
        }
        if ((IData)(((0x500U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                     & (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                        >> 7U)))))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__10__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__alu_result;
        }
        if ((IData)(((0x580U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                     & (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                        >> 7U)))))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__11__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__alu_result;
        }
        if ((IData)(((0x600U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                     & (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                        >> 7U)))))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__12__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__alu_result;
        }
        if ((IData)(((0x680U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                     & (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                        >> 7U)))))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__13__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__alu_result;
        }
        if ((IData)(((0x700U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                     & (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                        >> 7U)))))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__14__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__alu_result;
        }
        if ((IData)(((0x780U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                     & (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                        >> 7U)))))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__15__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__alu_result;
        }
        if ((IData)(((0x800U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                     & (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                        >> 7U)))))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__16__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__alu_result;
        }
        if ((IData)(((0x880U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                     & (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                        >> 7U)))))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__17__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__alu_result;
        }
        if ((IData)(((0x900U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                     & (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                        >> 7U)))))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__18__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__alu_result;
        }
        if ((IData)(((0x980U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                     & (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                        >> 7U)))))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__19__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__alu_result;
        }
        if ((IData)(((0xa00U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                     & (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                        >> 7U)))))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__20__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__alu_result;
        }
        if ((IData)(((0xa80U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                     & (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                        >> 7U)))))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__21__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__alu_result;
        }
        if ((IData)(((0xb00U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                     & (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                        >> 7U)))))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__22__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__alu_result;
        }
        if ((IData)(((0xb80U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                     & (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                        >> 7U)))))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__23__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__alu_result;
        }
        if ((IData)(((0xc00U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                     & (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                        >> 7U)))))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__24__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__alu_result;
        }
        if ((IData)(((0xc80U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                     & (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                        >> 7U)))))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__25__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__alu_result;
        }
        if ((IData)(((0xd00U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                     & (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                        >> 7U)))))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__26__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__alu_result;
        }
        if ((IData)(((0xd80U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                     & (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                        >> 7U)))))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__27__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__alu_result;
        }
        if ((IData)(((0xe00U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                     & (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                        >> 7U)))))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__28__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__alu_result;
        }
        if ((IData)(((0xe80U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                     & (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                        >> 7U)))))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__29__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__alu_result;
        }
        if ((IData)(((0xf00U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                     & (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                        >> 7U)))))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__30__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__alu_result;
        }
        if ((IData)(((0xf80U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                     & (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                        >> 7U)))))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__31__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__alu_result;
        }
        if (vlSelfRef.ready_i) {
            vlSelfRef.ysyx_25060170_top__DOT__pc = vlSelfRef.ysyx_25060170_top__DOT__u_ifu__DOT__pc_plus_4;
            vlSelfRef.ysyx_25060170_top__DOT__inst 
                = vlSelfRef.ysyx_25060170_top__DOT__u_mem__DOT____Vcellinp__mem_data_reg__din;
            vlSelfRef.ysyx_25060170_top__DOT__alu_result 
                = vlSelfRef.ysyx_25060170_top__DOT__u_exu__DOT__alu_result;
        }
    }
    vlSelfRef.ysyx_25060170_top__DOT__u_ifu__DOT__pc_plus_4 
        = ((IData)(4U) + vlSelfRef.ysyx_25060170_top__DOT__pc);
    vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[1U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__1__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[2U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__2__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[3U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__3__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[4U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__4__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[5U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__5__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[6U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__6__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[7U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__7__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[8U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__8__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[9U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__9__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[0xaU] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__10__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[0xbU] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__11__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[0xcU] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__12__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[0xdU] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__13__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[0xeU] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__14__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[0xfU] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__15__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[0x10U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__16__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[0x11U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__17__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[0x12U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__18__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[0x13U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__19__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[0x14U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__20__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[0x15U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__21__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[0x16U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__22__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[0x17U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__23__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[0x18U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__24__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[0x19U] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__25__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[0x1aU] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__26__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[0x1bU] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__27__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[0x1cU] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__28__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[0x1dU] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__29__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[0x1eU] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__30__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[0x1fU] 
        = vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__31__KET____DOT__reg_x__dout;
    VMux___024unit____Vdpiimwrap_addr_to_instruction_TOP____024unit(vlSelfRef.ysyx_25060170_top__DOT__pc, vlSelfRef.__Vfunc_addr_to_instruction__0__Vfuncout);
    vlSelfRef.ysyx_25060170_top__DOT__u_mem__DOT____Vcellinp__mem_data_reg__din 
        = vlSelfRef.__Vfunc_addr_to_instruction__0__Vfuncout;
    vlSelfRef.ysyx_25060170_top__DOT__u_exu__DOT__alu_result 
        = ((IData)((0x13U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__inst)))
            ? ((((- (IData)((vlSelfRef.ysyx_25060170_top__DOT__inst 
                             >> 0x1fU))) << 0xcU) | 
                (vlSelfRef.ysyx_25060170_top__DOT__inst 
                 >> 0x14U)) + ((0U == (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                >> 0xfU)))
                                ? 0U : (((0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U))) 
                                         & ((0x1fU 
                                             & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                >> 0xfU)) 
                                            == (0x1fU 
                                                & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                   >> 7U))))
                                         ? vlSelfRef.ysyx_25060170_top__DOT__alu_result
                                         : vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf
                                        [(0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                   >> 0xfU))])))
            : 0U);
}
