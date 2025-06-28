// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMux.h for the primary calling header

#include "VMux__pch.h"
#include "VMux___024root.h"

void VMux___024root___ico_sequent__TOP__0(VMux___024root* vlSelf);

void VMux___024root___eval_ico(VMux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root___eval_ico\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VMux___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void VMux___024root___ico_sequent__TOP__0(VMux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root___ico_sequent__TOP__0\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.opcode_o = (0x7fU & vlSelfRef.inst_i);
    vlSelfRef.funct3_o = (7U & (vlSelfRef.inst_i >> 0xcU));
    vlSelfRef.funct7_o = (vlSelfRef.inst_i >> 0x19U);
    vlSelfRef.rd_o = (0x1fU & (vlSelfRef.inst_i >> 7U));
    vlSelfRef.ready_o = vlSelfRef.ready_i;
    vlSelfRef.MuxKey__DOT__i0__DOT__pair_list[0U] = 
        (3U & (IData)(vlSelfRef.MuxKey__02Elut));
    vlSelfRef.MuxKey__DOT__i0__DOT__pair_list[1U] = 
        (3U & ((IData)(vlSelfRef.MuxKey__02Elut) >> 2U));
    vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__pair_list[0U] 
        = (3U & (IData)(vlSelfRef.MuxKeyWithDefault__02Elut));
    vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__pair_list[1U] 
        = (3U & ((IData)(vlSelfRef.MuxKeyWithDefault__02Elut) 
                 >> 2U));
    vlSelfRef.rs1_data_o = ((0U == (0x1fU & (vlSelfRef.inst_i 
                                             >> 0xfU)))
                             ? 0U : vlSelfRef.ysyx_25060170_IDU__DOT__reg_file
                            [(0x1fU & (vlSelfRef.inst_i 
                                       >> 0xfU))]);
    vlSelfRef.rs2_data_o = ((0U == (0x1fU & (vlSelfRef.inst_i 
                                             >> 0x14U)))
                             ? 0U : vlSelfRef.ysyx_25060170_IDU__DOT__reg_file
                            [(0x1fU & (vlSelfRef.inst_i 
                                       >> 0x14U))]);
    vlSelfRef.MuxKey__DOT__i0__DOT__data_list[0U] = 
        (1U & (IData)(vlSelfRef.MuxKey__02Elut));
    vlSelfRef.MuxKey__DOT__i0__DOT__data_list[1U] = 
        (1U & ((IData)(vlSelfRef.MuxKey__02Elut) >> 2U));
    vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__key_list[0U] 
        = (1U & ((IData)(vlSelfRef.MuxKeyWithDefault__02Elut) 
                 >> 1U));
    vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__key_list[1U] 
        = (1U & ((IData)(vlSelfRef.MuxKeyWithDefault__02Elut) 
                 >> 3U));
    vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__data_list[0U] 
        = (1U & (IData)(vlSelfRef.MuxKeyWithDefault__02Elut));
    vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__data_list[1U] 
        = (1U & ((IData)(vlSelfRef.MuxKeyWithDefault__02Elut) 
                 >> 2U));
    vlSelfRef.MuxKey__DOT__i0__DOT__key_list[0U] = 
        (1U & ((IData)(vlSelfRef.MuxKey__02Elut) >> 1U));
    vlSelfRef.MuxKey__DOT__i0__DOT__key_list[1U] = 
        (1U & ((IData)(vlSelfRef.MuxKey__02Elut) >> 3U));
    vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelfRef.MuxKeyWithDefault__02Ekey) 
            == vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__key_list
            [0U]) & vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.MuxKeyWithDefault__02Ekey) 
           == vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.MuxKeyWithDefault__02Ekey) 
               == vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__key_list
               [1U]) & vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.MuxKeyWithDefault__02Ekey) 
              == vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.MuxKeyWithDefault__02Eout = ((IData)(vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__hit)
                                            ? (IData)(vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__lut_out)
                                            : (IData)(vlSelfRef.default_out));
    vlSelfRef.MuxKey__DOT__i0__DOT__hit = ((IData)(vlSelfRef.MuxKey__02Ekey) 
                                           == vlSelfRef.MuxKey__DOT__i0__DOT__key_list
                                           [0U]);
    vlSelfRef.MuxKey__DOT__i0__DOT__hit = ((IData)(vlSelfRef.MuxKey__DOT__i0__DOT__hit) 
                                           | ((IData)(vlSelfRef.MuxKey__02Ekey) 
                                              == vlSelfRef.MuxKey__DOT__i0__DOT__key_list
                                              [1U]));
    vlSelfRef.MuxKey__DOT__i0__DOT__lut_out = (((IData)(vlSelfRef.MuxKey__02Ekey) 
                                                == 
                                                vlSelfRef.MuxKey__DOT__i0__DOT__key_list
                                                [0U]) 
                                               & vlSelfRef.MuxKey__DOT__i0__DOT__data_list
                                               [0U]);
    vlSelfRef.MuxKey__DOT__i0__DOT__lut_out = ((IData)(vlSelfRef.MuxKey__DOT__i0__DOT__lut_out) 
                                               | (((IData)(vlSelfRef.MuxKey__02Ekey) 
                                                   == 
                                                   vlSelfRef.MuxKey__DOT__i0__DOT__key_list
                                                   [1U]) 
                                                  & vlSelfRef.MuxKey__DOT__i0__DOT__data_list
                                                  [1U]));
    vlSelfRef.MuxKey__02Eout = vlSelfRef.MuxKey__DOT__i0__DOT__lut_out;
}

void VMux___024root___eval_triggers__ico(VMux___024root* vlSelf);

bool VMux___024root___eval_phase__ico(VMux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root___eval_phase__ico\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VMux___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VMux___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VMux___024root___eval_act(VMux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root___eval_act\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VMux___024root___nba_sequent__TOP__0(VMux___024root* vlSelf);
void VMux___024root___nba_sequent__TOP__1(VMux___024root* vlSelf);

void VMux___024root___eval_nba(VMux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root___eval_nba\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VMux___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VMux___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void VMux___024root___nba_sequent__TOP__1(VMux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root___nba_sequent__TOP__1\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.ysyx_25060170_IDU__02Erst) {
        vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__1__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__2__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__3__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__4__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__5__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__6__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__7__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__8__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__9__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__10__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__11__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__12__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__13__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__14__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__15__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__16__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__17__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__18__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__19__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__20__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__21__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__22__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__23__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__24__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__25__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__26__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__27__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__28__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__29__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__30__KET____DOT__reg_x__dout = 0U;
        vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__31__KET____DOT__reg_x__dout = 0U;
    } else {
        if (((IData)(vlSelfRef.reg_write_en_i) & (1U 
                                                  == (IData)(vlSelfRef.reg_write_addr_i)))) {
            vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__1__KET____DOT__reg_x__dout 
                = vlSelfRef.reg_write_data_i;
        }
        if (((IData)(vlSelfRef.reg_write_en_i) & (2U 
                                                  == (IData)(vlSelfRef.reg_write_addr_i)))) {
            vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__2__KET____DOT__reg_x__dout 
                = vlSelfRef.reg_write_data_i;
        }
        if (((IData)(vlSelfRef.reg_write_en_i) & (3U 
                                                  == (IData)(vlSelfRef.reg_write_addr_i)))) {
            vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__3__KET____DOT__reg_x__dout 
                = vlSelfRef.reg_write_data_i;
        }
        if (((IData)(vlSelfRef.reg_write_en_i) & (4U 
                                                  == (IData)(vlSelfRef.reg_write_addr_i)))) {
            vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__4__KET____DOT__reg_x__dout 
                = vlSelfRef.reg_write_data_i;
        }
        if (((IData)(vlSelfRef.reg_write_en_i) & (5U 
                                                  == (IData)(vlSelfRef.reg_write_addr_i)))) {
            vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__5__KET____DOT__reg_x__dout 
                = vlSelfRef.reg_write_data_i;
        }
        if (((IData)(vlSelfRef.reg_write_en_i) & (6U 
                                                  == (IData)(vlSelfRef.reg_write_addr_i)))) {
            vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__6__KET____DOT__reg_x__dout 
                = vlSelfRef.reg_write_data_i;
        }
        if (((IData)(vlSelfRef.reg_write_en_i) & (7U 
                                                  == (IData)(vlSelfRef.reg_write_addr_i)))) {
            vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__7__KET____DOT__reg_x__dout 
                = vlSelfRef.reg_write_data_i;
        }
        if (((IData)(vlSelfRef.reg_write_en_i) & (8U 
                                                  == (IData)(vlSelfRef.reg_write_addr_i)))) {
            vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__8__KET____DOT__reg_x__dout 
                = vlSelfRef.reg_write_data_i;
        }
        if (((IData)(vlSelfRef.reg_write_en_i) & (9U 
                                                  == (IData)(vlSelfRef.reg_write_addr_i)))) {
            vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__9__KET____DOT__reg_x__dout 
                = vlSelfRef.reg_write_data_i;
        }
        if (((IData)(vlSelfRef.reg_write_en_i) & (0xaU 
                                                  == (IData)(vlSelfRef.reg_write_addr_i)))) {
            vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__10__KET____DOT__reg_x__dout 
                = vlSelfRef.reg_write_data_i;
        }
        if (((IData)(vlSelfRef.reg_write_en_i) & (0xbU 
                                                  == (IData)(vlSelfRef.reg_write_addr_i)))) {
            vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__11__KET____DOT__reg_x__dout 
                = vlSelfRef.reg_write_data_i;
        }
        if (((IData)(vlSelfRef.reg_write_en_i) & (0xcU 
                                                  == (IData)(vlSelfRef.reg_write_addr_i)))) {
            vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__12__KET____DOT__reg_x__dout 
                = vlSelfRef.reg_write_data_i;
        }
        if (((IData)(vlSelfRef.reg_write_en_i) & (0xdU 
                                                  == (IData)(vlSelfRef.reg_write_addr_i)))) {
            vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__13__KET____DOT__reg_x__dout 
                = vlSelfRef.reg_write_data_i;
        }
        if (((IData)(vlSelfRef.reg_write_en_i) & (0xeU 
                                                  == (IData)(vlSelfRef.reg_write_addr_i)))) {
            vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__14__KET____DOT__reg_x__dout 
                = vlSelfRef.reg_write_data_i;
        }
        if (((IData)(vlSelfRef.reg_write_en_i) & (0xfU 
                                                  == (IData)(vlSelfRef.reg_write_addr_i)))) {
            vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__15__KET____DOT__reg_x__dout 
                = vlSelfRef.reg_write_data_i;
        }
        if (((IData)(vlSelfRef.reg_write_en_i) & (0x10U 
                                                  == (IData)(vlSelfRef.reg_write_addr_i)))) {
            vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__16__KET____DOT__reg_x__dout 
                = vlSelfRef.reg_write_data_i;
        }
        if (((IData)(vlSelfRef.reg_write_en_i) & (0x11U 
                                                  == (IData)(vlSelfRef.reg_write_addr_i)))) {
            vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__17__KET____DOT__reg_x__dout 
                = vlSelfRef.reg_write_data_i;
        }
        if (((IData)(vlSelfRef.reg_write_en_i) & (0x12U 
                                                  == (IData)(vlSelfRef.reg_write_addr_i)))) {
            vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__18__KET____DOT__reg_x__dout 
                = vlSelfRef.reg_write_data_i;
        }
        if (((IData)(vlSelfRef.reg_write_en_i) & (0x13U 
                                                  == (IData)(vlSelfRef.reg_write_addr_i)))) {
            vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__19__KET____DOT__reg_x__dout 
                = vlSelfRef.reg_write_data_i;
        }
        if (((IData)(vlSelfRef.reg_write_en_i) & (0x14U 
                                                  == (IData)(vlSelfRef.reg_write_addr_i)))) {
            vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__20__KET____DOT__reg_x__dout 
                = vlSelfRef.reg_write_data_i;
        }
        if (((IData)(vlSelfRef.reg_write_en_i) & (0x15U 
                                                  == (IData)(vlSelfRef.reg_write_addr_i)))) {
            vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__21__KET____DOT__reg_x__dout 
                = vlSelfRef.reg_write_data_i;
        }
        if (((IData)(vlSelfRef.reg_write_en_i) & (0x16U 
                                                  == (IData)(vlSelfRef.reg_write_addr_i)))) {
            vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__22__KET____DOT__reg_x__dout 
                = vlSelfRef.reg_write_data_i;
        }
        if (((IData)(vlSelfRef.reg_write_en_i) & (0x17U 
                                                  == (IData)(vlSelfRef.reg_write_addr_i)))) {
            vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__23__KET____DOT__reg_x__dout 
                = vlSelfRef.reg_write_data_i;
        }
        if (((IData)(vlSelfRef.reg_write_en_i) & (0x18U 
                                                  == (IData)(vlSelfRef.reg_write_addr_i)))) {
            vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__24__KET____DOT__reg_x__dout 
                = vlSelfRef.reg_write_data_i;
        }
        if (((IData)(vlSelfRef.reg_write_en_i) & (0x19U 
                                                  == (IData)(vlSelfRef.reg_write_addr_i)))) {
            vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__25__KET____DOT__reg_x__dout 
                = vlSelfRef.reg_write_data_i;
        }
        if (((IData)(vlSelfRef.reg_write_en_i) & (0x1aU 
                                                  == (IData)(vlSelfRef.reg_write_addr_i)))) {
            vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__26__KET____DOT__reg_x__dout 
                = vlSelfRef.reg_write_data_i;
        }
        if (((IData)(vlSelfRef.reg_write_en_i) & (0x1bU 
                                                  == (IData)(vlSelfRef.reg_write_addr_i)))) {
            vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__27__KET____DOT__reg_x__dout 
                = vlSelfRef.reg_write_data_i;
        }
        if (((IData)(vlSelfRef.reg_write_en_i) & (0x1cU 
                                                  == (IData)(vlSelfRef.reg_write_addr_i)))) {
            vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__28__KET____DOT__reg_x__dout 
                = vlSelfRef.reg_write_data_i;
        }
        if (((IData)(vlSelfRef.reg_write_en_i) & (0x1dU 
                                                  == (IData)(vlSelfRef.reg_write_addr_i)))) {
            vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__29__KET____DOT__reg_x__dout 
                = vlSelfRef.reg_write_data_i;
        }
        if (((IData)(vlSelfRef.reg_write_en_i) & (0x1eU 
                                                  == (IData)(vlSelfRef.reg_write_addr_i)))) {
            vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__30__KET____DOT__reg_x__dout 
                = vlSelfRef.reg_write_data_i;
        }
        if (((IData)(vlSelfRef.reg_write_en_i) & (0x1fU 
                                                  == (IData)(vlSelfRef.reg_write_addr_i)))) {
            vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__31__KET____DOT__reg_x__dout 
                = vlSelfRef.reg_write_data_i;
        }
    }
    vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[1U] 
        = vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__1__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[2U] 
        = vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__2__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[3U] 
        = vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__3__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[4U] 
        = vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__4__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[5U] 
        = vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__5__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[6U] 
        = vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__6__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[7U] 
        = vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__7__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[8U] 
        = vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__8__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[9U] 
        = vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__9__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[0xaU] 
        = vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__10__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[0xbU] 
        = vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__11__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[0xcU] 
        = vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__12__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[0xdU] 
        = vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__13__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[0xeU] 
        = vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__14__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[0xfU] 
        = vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__15__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[0x10U] 
        = vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__16__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[0x11U] 
        = vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__17__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[0x12U] 
        = vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__18__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[0x13U] 
        = vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__19__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[0x14U] 
        = vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__20__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[0x15U] 
        = vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__21__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[0x16U] 
        = vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__22__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[0x17U] 
        = vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__23__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[0x18U] 
        = vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__24__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[0x19U] 
        = vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__25__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[0x1aU] 
        = vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__26__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[0x1bU] 
        = vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__27__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[0x1cU] 
        = vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__28__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[0x1dU] 
        = vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__29__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[0x1eU] 
        = vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__30__KET____DOT__reg_x__dout;
    vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[0x1fU] 
        = vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__31__KET____DOT__reg_x__dout;
    vlSelfRef.rs1_data_o = ((0U == (0x1fU & (vlSelfRef.inst_i 
                                             >> 0xfU)))
                             ? 0U : vlSelfRef.ysyx_25060170_IDU__DOT__reg_file
                            [(0x1fU & (vlSelfRef.inst_i 
                                       >> 0xfU))]);
    vlSelfRef.rs2_data_o = ((0U == (0x1fU & (vlSelfRef.inst_i 
                                             >> 0x14U)))
                             ? 0U : vlSelfRef.ysyx_25060170_IDU__DOT__reg_file
                            [(0x1fU & (vlSelfRef.inst_i 
                                       >> 0x14U))]);
}

void VMux___024root___eval_triggers__act(VMux___024root* vlSelf);

bool VMux___024root___eval_phase__act(VMux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root___eval_phase__act\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VMux___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VMux___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VMux___024root___eval_phase__nba(VMux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root___eval_phase__nba\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VMux___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMux___024root___dump_triggers__ico(VMux___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMux___024root___dump_triggers__nba(VMux___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMux___024root___dump_triggers__act(VMux___024root* vlSelf);
#endif  // VL_DEBUG

void VMux___024root___eval(VMux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root___eval\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            VMux___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("vsrc/Mux.v", 39, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VMux___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VMux___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("vsrc/Mux.v", 39, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VMux___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("vsrc/Mux.v", 39, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VMux___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VMux___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VMux___024root___eval_debug_assertions(VMux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root___eval_debug_assertions\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.MuxKey__02Ekey & 0xfeU)))) {
        Verilated::overWidthError("MuxKey.key");}
    if (VL_UNLIKELY(((vlSelfRef.MuxKey__02Elut & 0xf0U)))) {
        Verilated::overWidthError("MuxKey.lut");}
    if (VL_UNLIKELY(((vlSelfRef.MuxKeyWithDefault__02Ekey 
                      & 0xfeU)))) {
        Verilated::overWidthError("MuxKeyWithDefault.key");}
    if (VL_UNLIKELY(((vlSelfRef.default_out & 0xfeU)))) {
        Verilated::overWidthError("default_out");}
    if (VL_UNLIKELY(((vlSelfRef.MuxKeyWithDefault__02Elut 
                      & 0xf0U)))) {
        Verilated::overWidthError("MuxKeyWithDefault.lut");}
    if (VL_UNLIKELY(((vlSelfRef.ysyx_25060170_IDU__02Eclk 
                      & 0xfeU)))) {
        Verilated::overWidthError("ysyx_25060170_IDU.clk");}
    if (VL_UNLIKELY(((vlSelfRef.ysyx_25060170_IDU__02Erst 
                      & 0xfeU)))) {
        Verilated::overWidthError("ysyx_25060170_IDU.rst");}
    if (VL_UNLIKELY(((vlSelfRef.reg_write_en_i & 0xfeU)))) {
        Verilated::overWidthError("reg_write_en_i");}
    if (VL_UNLIKELY(((vlSelfRef.reg_write_addr_i & 0xe0U)))) {
        Verilated::overWidthError("reg_write_addr_i");}
    if (VL_UNLIKELY(((vlSelfRef.ysyx_25060170_top__02Eclk 
                      & 0xfeU)))) {
        Verilated::overWidthError("ysyx_25060170_top.clk");}
    if (VL_UNLIKELY(((vlSelfRef.ysyx_25060170_top__02Erst 
                      & 0xfeU)))) {
        Verilated::overWidthError("ysyx_25060170_top.rst");}
    if (VL_UNLIKELY(((vlSelfRef.ready_i & 0xfeU)))) {
        Verilated::overWidthError("ready_i");}
}
#endif  // VL_DEBUG
