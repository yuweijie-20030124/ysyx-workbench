// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25060170_top.h for the primary calling header

#include "Vysyx_25060170_top__pch.h"
#include "Vysyx_25060170_top__Syms.h"
#include "Vysyx_25060170_top___024root.h"

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

void Vysyx_25060170_top___024unit____Vdpiimwrap_addr_to_instruction_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &addr_to_instruction__Vfuncrtn);
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_25060170_top__ConstPool__TABLE_h5d0ae970_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_25060170_top__ConstPool__TABLE_he7d6b559_0;
extern const VlUnpacked<CData/*1:0*/, 512> Vysyx_25060170_top__ConstPool__TABLE_h264cfc4a_0;
extern const VlUnpacked<CData/*3:0*/, 512> Vysyx_25060170_top__ConstPool__TABLE_h4bb0c48c_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_25060170_top__ConstPool__TABLE_h96774c7c_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_25060170_top__ConstPool__TABLE_ha9dc809e_0;

VL_INLINE_OPT void Vysyx_25060170_top___024root___nba_sequent__TOP__0(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___nba_sequent__TOP__0\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst) {
        vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__1__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__2__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__3__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__4__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__5__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__6__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__7__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__8__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__9__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__10__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__11__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__12__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__13__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__14__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__15__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__16__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__17__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__18__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__19__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__20__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__21__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__22__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__23__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__24__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__25__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__26__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__27__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__28__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__29__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__30__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__31__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__PCout = 0x4c4b400U;
    } else {
        if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
             & (0x80U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__1__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o;
        }
        if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
             & (0x100U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__2__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o;
        }
        if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
             & (0x180U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__3__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o;
        }
        if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
             & (0x200U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__4__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o;
        }
        if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
             & (0x280U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__5__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o;
        }
        if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
             & (0x300U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__6__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o;
        }
        if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
             & (0x380U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__7__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o;
        }
        if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
             & (0x400U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__8__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o;
        }
        if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
             & (0x480U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__9__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o;
        }
        if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
             & (0x500U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__10__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o;
        }
        if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
             & (0x580U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__11__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o;
        }
        if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
             & (0x600U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__12__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o;
        }
        if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
             & (0x680U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__13__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o;
        }
        if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
             & (0x700U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__14__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o;
        }
        if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
             & (0x780U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__15__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o;
        }
        if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
             & (0x800U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__16__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o;
        }
        if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
             & (0x880U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__17__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o;
        }
        if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
             & (0x900U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__18__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o;
        }
        if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
             & (0x980U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__19__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o;
        }
        if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
             & (0xa00U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__20__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o;
        }
        if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
             & (0xa80U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__21__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o;
        }
        if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
             & (0xb00U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__22__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o;
        }
        if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
             & (0xb80U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__23__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o;
        }
        if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
             & (0xc00U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__24__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o;
        }
        if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
             & (0xc80U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__25__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o;
        }
        if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
             & (0xd00U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__26__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o;
        }
        if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
             & (0xd80U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__27__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o;
        }
        if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
             & (0xe00U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__28__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o;
        }
        if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
             & (0xe80U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__29__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o;
        }
        if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
             & (0xf00U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__30__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o;
        }
        if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
             & (0xf80U == (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) {
            vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__31__KET____DOT__reg_x__dout 
                = vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o;
        }
        vlSelfRef.ysyx_25060170_top__DOT__PCout = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__PCx1)
                                                    ? vlSelfRef.ysyx_25060170_top__DOT__exu_res1
                                                    : 
                                                   ((IData)(vlSelfRef.ysyx_25060170_top__DOT__branch)
                                                     ? 
                                                    (vlSelfRef.ysyx_25060170_top__DOT__EXU_PC 
                                                     + vlSelfRef.ysyx_25060170_top__DOT__imm_o)
                                                     : 
                                                    ((IData)(4U) 
                                                     + vlSelfRef.ysyx_25060170_top__DOT__EXU_PC)));
    }
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
    Vysyx_25060170_top___024unit____Vdpiimwrap_addr_to_instruction_TOP____024unit(vlSelfRef.ysyx_25060170_top__DOT__PCout, vlSelfRef.__Vfunc_addr_to_instruction__0__Vfuncout);
    vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o = vlSelfRef.__Vfunc_addr_to_instruction__0__Vfuncout;
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
    vlSelfRef.ysyx_25060170_top__DOT__branch = Vysyx_25060170_top__ConstPool__TABLE_he7d6b559_0
        [vlSelfRef.__Vtableidx1];
    vlSelfRef.ysyx_25060170_top__DOT__regS = Vysyx_25060170_top__ConstPool__TABLE_h264cfc4a_0
        [vlSelfRef.__Vtableidx1];
    vlSelfRef.ysyx_25060170_top__DOT__ALUop = Vysyx_25060170_top__ConstPool__TABLE_h4bb0c48c_0
        [vlSelfRef.__Vtableidx1];
    vlSelfRef.ysyx_25060170_top__DOT__RegW = Vysyx_25060170_top__ConstPool__TABLE_h96774c7c_0
        [vlSelfRef.__Vtableidx1];
    vlSelfRef.ysyx_25060170_top__DOT__PCx1 = Vysyx_25060170_top__ConstPool__TABLE_ha9dc809e_0
        [vlSelfRef.__Vtableidx1];
    vlSelfRef.ysyx_25060170_top__DOT__imm_o = (((- (IData)(
                                                           (0x13U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) 
                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_3) 
                                               | ((0xfffff000U 
                                                   & ((- (IData)(
                                                                 (0x17U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) 
                                                      & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)) 
                                                  | (((- (IData)(
                                                                 (3U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) 
                                                      & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_3) 
                                                     | (((- (IData)(
                                                                    (0x23U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) 
                                                         & (((- (IData)(
                                                                        (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                         >> 0x1fU))) 
                                                             << 0xcU) 
                                                            | ((0xfe0U 
                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                   >> 0x14U)) 
                                                               | (0x1fU 
                                                                  & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                     >> 7U))))) 
                                                        | (((- (IData)(
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
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__jumpaddr 
        = (vlSelfRef.ysyx_25060170_top__DOT__op_1 + vlSelfRef.ysyx_25060170_top__DOT__imm_o);
    vlSelfRef.ysyx_25060170_top__DOT__op_2 = ((((- (IData)(
                                                           (0x13U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) 
                                                | ((- (IData)(
                                                              (0x17U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) 
                                                   | ((- (IData)(
                                                                 (3U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) 
                                                      | ((- (IData)(
                                                                    (0x23U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) 
                                                         | (- (IData)(
                                                                      (0x63U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))))))) 
                                               & vlSelfRef.ysyx_25060170_top__DOT__imm_o) 
                                              | (4U 
                                                 & ((- (IData)(
                                                               (0x67U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))) 
                                                    | (- (IData)(
                                                                 (0x6fU 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))))));
    vlSelfRef.ysyx_25060170_top__DOT__EXU_PC = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__PCx1)
                                                 ? 
                                                (0xfffffffeU 
                                                 & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__jumpaddr)
                                                 : 
                                                ((IData)(vlSelfRef.ysyx_25060170_top__DOT__jal)
                                                  ? vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__jumpaddr
                                                  : 0U));
    vlSelfRef.ysyx_25060170_top__DOT__exu_res1 = ((
                                                   (- (IData)(
                                                              (0U 
                                                               == (IData)(vlSelfRef.ysyx_25060170_top__DOT__ALUop)))) 
                                                   & (vlSelfRef.ysyx_25060170_top__DOT__op_1 
                                                      + vlSelfRef.ysyx_25060170_top__DOT__op_2)) 
                                                  | ((- (IData)(
                                                                (1U 
                                                                 == (IData)(vlSelfRef.ysyx_25060170_top__DOT__ALUop)))) 
                                                     & (vlSelfRef.ysyx_25060170_top__DOT__op_1 
                                                        - vlSelfRef.ysyx_25060170_top__DOT__op_2)));
    vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o 
        = ((0U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__regS))
            ? vlSelfRef.ysyx_25060170_top__DOT__exu_res1
            : ((2U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__regS))
                ? ((IData)(4U) + vlSelfRef.ysyx_25060170_top__DOT__PCout)
                : 0U));
}
