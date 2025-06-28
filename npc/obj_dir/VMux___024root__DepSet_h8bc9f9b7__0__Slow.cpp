// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMux.h for the primary calling header

#include "VMux__pch.h"
#include "VMux__Syms.h"
#include "VMux___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VMux___024root___dump_triggers__stl(VMux___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VMux___024root___eval_triggers__stl(VMux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root___eval_triggers__stl\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMux___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

void VMux___024unit____Vdpiimwrap_addr_to_instruction_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &addr_to_instruction__Vfuncrtn);

VL_ATTR_COLD void VMux___024root___stl_sequent__TOP__0(VMux___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root___stl_sequent__TOP__0\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.opcode_o = (0x7fU & vlSelfRef.inst_i);
    vlSelfRef.funct3_o = (7U & (vlSelfRef.inst_i >> 0xcU));
    vlSelfRef.funct7_o = (vlSelfRef.inst_i >> 0x19U);
    vlSelfRef.rd_o = (0x1fU & (vlSelfRef.inst_i >> 7U));
    vlSelfRef.ready_o = vlSelfRef.ready_i;
    vlSelfRef.ysyx_25060170_top__DOT__u_ifu__DOT__pc_plus_4 
        = ((IData)(4U) + vlSelfRef.ysyx_25060170_top__DOT__pc);
    vlSelfRef.MuxKey__DOT__i0__DOT__pair_list[0U] = 
        (3U & (IData)(vlSelfRef.MuxKey__02Elut));
    vlSelfRef.MuxKey__DOT__i0__DOT__pair_list[1U] = 
        (3U & ((IData)(vlSelfRef.MuxKey__02Elut) >> 2U));
    vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__pair_list[0U] 
        = (3U & (IData)(vlSelfRef.MuxKeyWithDefault__02Elut));
    vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__pair_list[1U] 
        = (3U & ((IData)(vlSelfRef.MuxKeyWithDefault__02Elut) 
                 >> 2U));
    VMux___024unit____Vdpiimwrap_addr_to_instruction_TOP____024unit(vlSelfRef.ysyx_25060170_top__DOT__pc, vlSelfRef.__Vfunc_addr_to_instruction__0__Vfuncout);
    vlSelfRef.ysyx_25060170_top__DOT__u_mem__DOT____Vcellinp__mem_data_reg__din 
        = vlSelfRef.__Vfunc_addr_to_instruction__0__Vfuncout;
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
