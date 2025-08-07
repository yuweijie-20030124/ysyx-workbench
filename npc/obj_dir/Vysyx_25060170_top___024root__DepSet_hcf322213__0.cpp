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
void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__set_npc_exit_TOP(IData/*31:0*/ pc, IData/*31:0*/ halt_ret);
void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__paddr_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ data);
void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__paddr_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ &paddr_read__Vfuncrtn);

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
        vlSelfRef.ysyx_25060170_top__DOT__PCout = 0x80000000U;
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
        vlSelfRef.ysyx_25060170_top__DOT__PCout = vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IFU__DOT__PC_temp;
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
    Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_MEM__DOT__pmem_read_TOP(vlSelfRef.ysyx_25060170_top__DOT__PCout, vlSelfRef.__Vtask_ysyx_25060170_top__DOT__u_ysyx_25060170_MEM__DOT__pmem_read__1__rdata, 4U);
    vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o = vlSelfRef.__Vtask_ysyx_25060170_top__DOT__u_ysyx_25060170_MEM__DOT__pmem_read__1__rdata;
    if ((0x100073U == vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)) {
        Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__set_npc_exit_TOP(vlSelfRef.ysyx_25060170_top__DOT__PCout, 0U);
    }
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_unsigned 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                             [(0x1fU 
                                               & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                  >> 0xfU))])) 
                             - (QData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                               [(0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                    >> 0x14U))]))));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2 
        = (vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
           [(0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                      >> 0xfU))] - vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
           [(0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                      >> 0x14U))]);
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__is_Utype 
        = ((0x17U == (0x7fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)) 
           | (0x37U == (0x7fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__is_beq = (IData)(
                                                       (0x63U 
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
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sw 
        = (IData)((0x2023U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sh 
        = (IData)((0x1023U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sb 
        = (IData)((0x23U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sd 
        = (IData)((0x3023U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__addi 
        = (IData)((0x13U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__is_blt = (IData)(
                                                       (0x4063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__is_bne = (IData)(
                                                       (0x1063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__is_bge = (IData)(
                                                       (0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lhu 
        = (IData)((0x5003U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__jalr 
        = (IData)((0x67U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lb 
        = (IData)((3U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lh 
        = (IData)((0x1003U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lw 
        = (IData)((0x2003U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lbu 
        = (IData)((0x4003U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__slli 
        = (IData)((0x1013U == (0xfe00707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__andi 
        = (IData)((0x7013U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__xori 
        = (IData)((0x6013U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__ori 
        = (IData)((0x2013U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__is_sltiu = (IData)(
                                                         (0x3013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_17 
        = (IData)((0x1033U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_18 
        = (IData)((0x2033U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_20 
        = (IData)((0x4033U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_21 
        = (IData)((0x6033U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_22 
        = (IData)((0x7033U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_19 
        = (IData)((0x3033U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_16 
        = (IData)((0x33U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_15 
        = (IData)((0x5033U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_2 
        = (IData)((0x5013U == (0x707fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)));
    vlSelfRef.ysyx_25060170_top__DOT__blt_flag = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_blt) 
                                                  & ((0U 
                                                      != vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2) 
                                                     & (vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2 
                                                        >> 0x1fU)));
    vlSelfRef.ysyx_25060170_top__DOT__bne_flag = ((0U 
                                                   != vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2) 
                                                  & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bne));
    vlSelfRef.ysyx_25060170_top__DOT__bge_flag = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bge) 
                                                  & ((~ 
                                                      (vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2 
                                                       >> 0x1fU)) 
                                                     | (0U 
                                                        == vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2)));
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
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sll 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_17) 
           & (0U == (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                     >> 0x19U)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulh 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_17) 
           & (1U == (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                     >> 0x19U)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__slt 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_18) 
           & (0U == (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                     >> 0x19U)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulhsu 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_18) 
           & (1U == (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                     >> 0x19U)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcxor 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_20) 
           & (0U == (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                     >> 0x19U)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__div 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_20) 
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
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_19) 
           & (1U == (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                     >> 0x19U)));
    vlSelfRef.ysyx_25060170_top__DOT__is_sltu = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_19) 
                                                 & (0U 
                                                    == 
                                                    (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                     >> 0x19U)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__add 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_16) 
           & (0U == (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                     >> 0x19U)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sub 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_16) 
           & (0x20U == (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                        >> 0x19U)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mul 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_16) 
           & (1U == (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                     >> 0x19U)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srl 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_15) 
           & (0U == (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                     >> 0x19U)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sra 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_15) 
           & (0x20U == (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                        >> 0x19U)));
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__divu 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_15) 
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
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__tiaojian 
        = (((~ ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_beq) 
                & (0U == vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2))) 
            & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_beq)) 
           | (((~ (IData)(vlSelfRef.ysyx_25060170_top__DOT__blt_flag)) 
               & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_blt)) 
              | (((~ (IData)(vlSelfRef.ysyx_25060170_top__DOT__bne_flag)) 
                  & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bne)) 
                 | (((~ (IData)(vlSelfRef.ysyx_25060170_top__DOT__bge_flag)) 
                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bge)) 
                    | (((~ ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bltu) 
                            & (IData)((vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_unsigned 
                                       >> 0x20U)))) 
                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bltu)) 
                       | ((~ ((~ (IData)((vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_unsigned 
                                          >> 0x20U))) 
                              & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bgeu))) 
                          & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bgeu)))))));
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
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__jumpaddr 
        = (vlSelfRef.ysyx_25060170_top__DOT__op_1 + vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__imm);
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT____VdfgRegularize_h08aa94b0_0_1 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.ysyx_25060170_top__DOT__op_1, vlSelfRef.ysyx_25060170_top__DOT__op_2);
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
                                                                           & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT____VdfgRegularize_h08aa94b0_0_1) 
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
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT____VdfgRegularize_h08aa94b0_0_1) 
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
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IFU__DOT__PC_temp 
        = (((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__jalr) 
            | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__bne_flag) 
               | ((0x6fU == (0x7fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)) 
                  | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__bge_flag) 
                     | (IData)(vlSelfRef.ysyx_25060170_top__DOT__blt_flag)))))
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
                                : 0U))))) : ((IData)(4U) 
                                             + vlSelfRef.ysyx_25060170_top__DOT__PCout));
    if (((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sw) 
         | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sh) 
            | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sb) 
               | (IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sd))))) {
        Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__paddr_write_TOP(vlSelfRef.ysyx_25060170_top__DOT__exu_res1, 
                                                                                ((4U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lw)))) 
                                                                                | ((2U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lh)))) 
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
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sb))))))))))), 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                                                >> 0x14U))]);
    }
    vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__l_memdata 
        = ((1U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__regS))
            ? ([&]() {
                Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__paddr_read_TOP(vlSelfRef.ysyx_25060170_top__DOT__exu_res1, 
                                                                                ((4U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lw)))) 
                                                                                | ((2U 
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lh)))) 
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
                                                                                & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sb))))))))))), vlSelfRef.__Vfunc_ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__paddr_read__2__Vfuncout);
            }(), vlSelfRef.__Vfunc_ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__paddr_read__2__Vfuncout)
            : 0U);
    vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o 
        = (((- (IData)((1U & (~ (IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__tiaojian))))) 
            & ((- (IData)((0U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__regS)))) 
               & vlSelfRef.ysyx_25060170_top__DOT__exu_res1)) 
           | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__tiaojian))) 
               & ((- (IData)((0U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__regS)))) 
                  & ((IData)(4U) + vlSelfRef.ysyx_25060170_top__DOT__PCout))) 
              | (((- (IData)((1U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__regS)))) 
                  & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__l_memdata) 
                 | ((- (IData)((2U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__regS)))) 
                    & ((IData)(4U) + vlSelfRef.ysyx_25060170_top__DOT__PCout)))));
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
