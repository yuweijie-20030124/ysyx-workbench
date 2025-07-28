// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25060170_top.h for the primary calling header

#include "Vysyx_25060170_top__pch.h"
#include "Vysyx_25060170_top___024root.h"

void Vysyx_25060170_top___024root___ico_sequent__TOP__0(Vysyx_25060170_top___024root* vlSelf);

void Vysyx_25060170_top___024root___eval_ico(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_ico\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vysyx_25060170_top___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vysyx_25060170_top___024root___ico_sequent__TOP__0(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___ico_sequent__TOP__0\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o 
        = ((~ (IData)(vlSelfRef.rst)) & ((IData)(vlSelfRef.ysyx_25060170_top__DOT__RegW) 
                                         & (0U != (0x1fU 
                                                   & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                      >> 7U)))));
}

void Vysyx_25060170_top___024root___eval_triggers__ico(Vysyx_25060170_top___024root* vlSelf);

bool Vysyx_25060170_top___024root___eval_phase__ico(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_phase__ico\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vysyx_25060170_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vysyx_25060170_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vysyx_25060170_top___024root___eval_act(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_act\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vysyx_25060170_top___024root___nba_sequent__TOP__0(Vysyx_25060170_top___024root* vlSelf);

void Vysyx_25060170_top___024root___eval_nba(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_nba\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vysyx_25060170_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_MEM__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata, CData/*7:0*/ rlen);
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_25060170_top__ConstPool__TABLE_h5d0ae970_0;
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
        vlSelfRef.ysyx_25060170_top__DOT__PCout = 0x80000000U;
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
    } else {
        vlSelfRef.ysyx_25060170_top__DOT__PCout = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IFU__DOT__PC_temp;
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
    }
    Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_MEM__DOT__pmem_read_TOP(vlSelfRef.ysyx_25060170_top__DOT__PCout, vlSelfRef.__Vtask_ysyx_25060170_top__DOT__u_ysyx_25060170_MEM__DOT__pmem_read__0__rdata, 4U);
    vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o = vlSelfRef.__Vtask_ysyx_25060170_top__DOT__u_ysyx_25060170_MEM__DOT__pmem_read__0__rdata;
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
    VL_WRITEF_NX("PC = 0x%08x\ninst = 0x%08x\n",0,32,
                 vlSelfRef.ysyx_25060170_top__DOT__PCout,
                 32,vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o);
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
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IFU__DOT__PC_temp 
        = (((IData)(vlSelfRef.ysyx_25060170_top__DOT__PCx1) 
            | (IData)(vlSelfRef.ysyx_25060170_top__DOT__jal))
            ? ((IData)(vlSelfRef.ysyx_25060170_top__DOT__PCx1)
                ? (0xfffffffeU & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__jumpaddr)
                : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__jal)
                    ? vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__jumpaddr
                    : 0U)) : ((IData)(4U) + vlSelfRef.ysyx_25060170_top__DOT__PCout));
    vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o 
        = ((0U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__regS))
            ? (((- (IData)((0U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__ALUop)))) 
                & (vlSelfRef.ysyx_25060170_top__DOT__op_1 
                   + vlSelfRef.ysyx_25060170_top__DOT__op_2)) 
               | ((- (IData)((1U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__ALUop)))) 
                  & (vlSelfRef.ysyx_25060170_top__DOT__op_1 
                     - vlSelfRef.ysyx_25060170_top__DOT__op_2)))
            : ((2U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__regS))
                ? ((IData)(4U) + vlSelfRef.ysyx_25060170_top__DOT__PCout)
                : 0U));
}

void Vysyx_25060170_top___024root___eval_triggers__act(Vysyx_25060170_top___024root* vlSelf);

bool Vysyx_25060170_top___024root___eval_phase__act(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_phase__act\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vysyx_25060170_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vysyx_25060170_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vysyx_25060170_top___024root___eval_phase__nba(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_phase__nba\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vysyx_25060170_top___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_top___024root___dump_triggers__ico(Vysyx_25060170_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_top___024root___dump_triggers__nba(Vysyx_25060170_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_top___024root___dump_triggers__act(Vysyx_25060170_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25060170_top___024root___eval(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vysyx_25060170_top___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("vsrc/ysyx_25060170_top.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vysyx_25060170_top___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vysyx_25060170_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("vsrc/ysyx_25060170_top.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vysyx_25060170_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ysyx_25060170_top.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vysyx_25060170_top___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vysyx_25060170_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_25060170_top___024root___eval_debug_assertions(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_debug_assertions\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
