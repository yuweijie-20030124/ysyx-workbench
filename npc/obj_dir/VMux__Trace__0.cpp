// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMux__Syms.h"


void VMux___024root__trace_chg_0_sub_0(VMux___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VMux___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root__trace_chg_0\n"); );
    // Init
    VMux___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMux___024root*>(voidSelf);
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VMux___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VMux___024root__trace_chg_0_sub_0(VMux___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root__trace_chg_0_sub_0\n"); );
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.MuxKey__DOT__i0__DOT__pair_list[0]),2);
        bufp->chgCData(oldp+1,(vlSelfRef.MuxKey__DOT__i0__DOT__pair_list[1]),2);
        bufp->chgBit(oldp+2,(vlSelfRef.MuxKey__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+3,(vlSelfRef.MuxKey__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+4,(vlSelfRef.MuxKey__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+5,(vlSelfRef.MuxKey__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+6,(vlSelfRef.MuxKey__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+7,(vlSelfRef.MuxKey__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+8,(vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),2);
        bufp->chgCData(oldp+9,(vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),2);
        bufp->chgBit(oldp+10,(vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+11,(vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+12,(vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+13,(vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+14,(vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+15,(vlSelfRef.MuxKeyWithDefault__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+16,(vlSelfRef.ysyx_25060170_top__DOT__pc),32);
        bufp->chgIData(oldp+17,(vlSelfRef.ysyx_25060170_top__DOT__inst),32);
        bufp->chgIData(oldp+18,((((- (IData)((vlSelfRef.ysyx_25060170_top__DOT__inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                              >> 0x14U))),32);
        bufp->chgIData(oldp+19,(((0U == (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
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
                                          [(0x1fU & 
                                            (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                             >> 0xfU))]))),32);
        bufp->chgIData(oldp+20,(((0U == (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                  >> 0x14U)))
                                  ? 0U : (((0U != (0x1fU 
                                                   & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                      >> 7U))) 
                                           & ((0x1fU 
                                               & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                  >> 0x14U)) 
                                              == (0x1fU 
                                                  & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                     >> 7U))))
                                           ? vlSelfRef.ysyx_25060170_top__DOT__alu_result
                                           : vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf
                                          [(0x1fU & 
                                            (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                             >> 0x14U))]))),32);
        bufp->chgCData(oldp+21,((0x7fU & vlSelfRef.ysyx_25060170_top__DOT__inst)),7);
        bufp->chgCData(oldp+22,((7U & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+23,((0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                          >> 7U))),5);
        bufp->chgIData(oldp+24,(vlSelfRef.ysyx_25060170_top__DOT__alu_result),32);
        bufp->chgBit(oldp+25,((0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                               >> 7U)))));
        bufp->chgBit(oldp+26,((IData)((0x13U == (0x707fU 
                                                 & vlSelfRef.ysyx_25060170_top__DOT__inst)))));
        bufp->chgIData(oldp+27,(((IData)((0x13U == 
                                          (0x707fU 
                                           & vlSelfRef.ysyx_25060170_top__DOT__inst)))
                                  ? ((((- (IData)((vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                   >> 0x14U)) 
                                     + ((0U == (0x1fU 
                                                & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                   >> 0xfU)))
                                         ? 0U : (((0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                       >> 7U))) 
                                                  & ((0x1fU 
                                                      & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                         >> 0xfU)) 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                         >> 7U))))
                                                  ? vlSelfRef.ysyx_25060170_top__DOT__alu_result
                                                  : 
                                                 vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf
                                                 [(0x1fU 
                                                   & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                      >> 0xfU))])))
                                  : 0U)),32);
        bufp->chgCData(oldp+28,((0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+29,((0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+30,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[0]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[1]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[2]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[3]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[4]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[5]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[6]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[7]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[8]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[9]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[10]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[11]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[12]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[13]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[14]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[15]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[16]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[17]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[18]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[19]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[20]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[21]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[22]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[23]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[24]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[25]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[26]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[27]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[28]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[29]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[30]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[31]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__10__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+63,((IData)(((0x500U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+64,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__11__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+65,((IData)(((0x580U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+66,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__12__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+67,((IData)(((0x600U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+68,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__13__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+69,((IData)(((0x680U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+70,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__14__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+71,((IData)(((0x700U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+72,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__15__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+73,((IData)(((0x780U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+74,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__16__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+75,((IData)(((0x800U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+76,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__17__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+77,((IData)(((0x880U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+78,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__18__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+79,((IData)(((0x900U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+80,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__19__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+81,((IData)(((0x980U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+82,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__1__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+83,((IData)(((0x80U == (0xf80U 
                                                  & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+84,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__20__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+85,((IData)(((0xa00U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+86,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__21__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+87,((IData)(((0xa80U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+88,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__22__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+89,((IData)(((0xb00U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+90,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__23__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+91,((IData)(((0xb80U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+92,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__24__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+93,((IData)(((0xc00U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+94,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__25__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+95,((IData)(((0xc80U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+96,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__26__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+97,((IData)(((0xd00U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+98,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__27__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+99,((IData)(((0xd80U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+100,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__28__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+101,((IData)(((0xe00U == 
                                         (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                        & (0U != (0x1fU 
                                                  & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                     >> 7U)))))));
        bufp->chgIData(oldp+102,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__29__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+103,((IData)(((0xe80U == 
                                         (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                        & (0U != (0x1fU 
                                                  & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                     >> 7U)))))));
        bufp->chgIData(oldp+104,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__2__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+105,((IData)(((0x100U == 
                                         (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                        & (0U != (0x1fU 
                                                  & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                     >> 7U)))))));
        bufp->chgIData(oldp+106,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__30__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+107,((IData)(((0xf00U == 
                                         (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                        & (0U != (0x1fU 
                                                  & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                     >> 7U)))))));
        bufp->chgIData(oldp+108,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__31__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+109,((IData)(((0xf80U == 
                                         (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                        & (0U != (0x1fU 
                                                  & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                     >> 7U)))))));
        bufp->chgIData(oldp+110,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__3__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+111,((IData)(((0x180U == 
                                         (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                        & (0U != (0x1fU 
                                                  & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                     >> 7U)))))));
        bufp->chgIData(oldp+112,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__4__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+113,((IData)(((0x200U == 
                                         (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                        & (0U != (0x1fU 
                                                  & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                     >> 7U)))))));
        bufp->chgIData(oldp+114,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__5__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+115,((IData)(((0x280U == 
                                         (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                        & (0U != (0x1fU 
                                                  & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                     >> 7U)))))));
        bufp->chgIData(oldp+116,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__6__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+117,((IData)(((0x300U == 
                                         (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                        & (0U != (0x1fU 
                                                  & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                     >> 7U)))))));
        bufp->chgIData(oldp+118,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__7__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+119,((IData)(((0x380U == 
                                         (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                        & (0U != (0x1fU 
                                                  & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                     >> 7U)))))));
        bufp->chgIData(oldp+120,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__8__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+121,((IData)(((0x400U == 
                                         (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                        & (0U != (0x1fU 
                                                  & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                     >> 7U)))))));
        bufp->chgIData(oldp+122,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__9__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+123,((IData)(((0x480U == 
                                         (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                        & (0U != (0x1fU 
                                                  & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                     >> 7U)))))));
        bufp->chgIData(oldp+124,(((IData)(4U) + vlSelfRef.ysyx_25060170_top__DOT__pc)),32);
        bufp->chgIData(oldp+125,(vlSelfRef.ysyx_25060170_top__DOT__u_mem__DOT____Vcellinp__mem_data_reg__din),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+126,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[0]),32);
        bufp->chgIData(oldp+127,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[1]),32);
        bufp->chgIData(oldp+128,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[2]),32);
        bufp->chgIData(oldp+129,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[3]),32);
        bufp->chgIData(oldp+130,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[4]),32);
        bufp->chgIData(oldp+131,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[5]),32);
        bufp->chgIData(oldp+132,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[6]),32);
        bufp->chgIData(oldp+133,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[7]),32);
        bufp->chgIData(oldp+134,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[8]),32);
        bufp->chgIData(oldp+135,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[9]),32);
        bufp->chgIData(oldp+136,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[10]),32);
        bufp->chgIData(oldp+137,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[11]),32);
        bufp->chgIData(oldp+138,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[12]),32);
        bufp->chgIData(oldp+139,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[13]),32);
        bufp->chgIData(oldp+140,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[14]),32);
        bufp->chgIData(oldp+141,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[15]),32);
        bufp->chgIData(oldp+142,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[16]),32);
        bufp->chgIData(oldp+143,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[17]),32);
        bufp->chgIData(oldp+144,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[18]),32);
        bufp->chgIData(oldp+145,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[19]),32);
        bufp->chgIData(oldp+146,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[20]),32);
        bufp->chgIData(oldp+147,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[21]),32);
        bufp->chgIData(oldp+148,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[22]),32);
        bufp->chgIData(oldp+149,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[23]),32);
        bufp->chgIData(oldp+150,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[24]),32);
        bufp->chgIData(oldp+151,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[25]),32);
        bufp->chgIData(oldp+152,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[26]),32);
        bufp->chgIData(oldp+153,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[27]),32);
        bufp->chgIData(oldp+154,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[28]),32);
        bufp->chgIData(oldp+155,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[29]),32);
        bufp->chgIData(oldp+156,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[30]),32);
        bufp->chgIData(oldp+157,(vlSelfRef.ysyx_25060170_IDU__DOT__reg_file[31]),32);
        bufp->chgIData(oldp+158,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__10__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+159,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__11__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+160,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__12__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+161,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__13__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+162,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__14__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+163,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__15__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+164,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__16__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+165,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__17__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+166,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__18__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+167,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__19__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+168,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__1__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+169,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__20__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+170,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__21__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+171,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__22__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+172,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__23__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+173,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__24__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+174,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__25__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+175,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__26__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+176,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__27__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+177,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__28__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+178,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__29__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+179,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__2__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+180,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__30__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+181,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__31__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+182,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__3__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+183,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__4__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+184,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__5__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+185,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__6__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+186,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__7__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+187,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__8__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+188,(vlSelfRef.ysyx_25060170_IDU__DOT____Vcellout__reg_gen__BRA__9__KET____DOT__reg_x__dout),32);
    }
    bufp->chgBit(oldp+189,(vlSelfRef.MuxKey__02Eout));
    bufp->chgBit(oldp+190,(vlSelfRef.MuxKey__02Ekey));
    bufp->chgCData(oldp+191,(vlSelfRef.MuxKey__02Elut),4);
    bufp->chgBit(oldp+192,(vlSelfRef.MuxKeyWithDefault__02Eout));
    bufp->chgBit(oldp+193,(vlSelfRef.MuxKeyWithDefault__02Ekey));
    bufp->chgBit(oldp+194,(vlSelfRef.default_out));
    bufp->chgCData(oldp+195,(vlSelfRef.MuxKeyWithDefault__02Elut),4);
    bufp->chgBit(oldp+196,(vlSelfRef.ysyx_25060170_IDU__02Eclk));
    bufp->chgBit(oldp+197,(vlSelfRef.ysyx_25060170_IDU__02Erst));
    bufp->chgIData(oldp+198,(vlSelfRef.inst_i),32);
    bufp->chgBit(oldp+199,(vlSelfRef.reg_write_en_i));
    bufp->chgCData(oldp+200,(vlSelfRef.reg_write_addr_i),5);
    bufp->chgIData(oldp+201,(vlSelfRef.reg_write_data_i),32);
    bufp->chgIData(oldp+202,(vlSelfRef.rs1_data_o),32);
    bufp->chgIData(oldp+203,(vlSelfRef.rs2_data_o),32);
    bufp->chgCData(oldp+204,(vlSelfRef.opcode_o),7);
    bufp->chgCData(oldp+205,(vlSelfRef.funct3_o),3);
    bufp->chgCData(oldp+206,(vlSelfRef.funct7_o),7);
    bufp->chgCData(oldp+207,(vlSelfRef.rd_o),5);
    bufp->chgBit(oldp+208,(vlSelfRef.ysyx_25060170_top__02Eclk));
    bufp->chgBit(oldp+209,(vlSelfRef.ysyx_25060170_top__02Erst));
    bufp->chgBit(oldp+210,(vlSelfRef.ready_i));
    bufp->chgBit(oldp+211,(vlSelfRef.ready_o));
    bufp->chgCData(oldp+212,((0x1fU & (vlSelfRef.inst_i 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+213,((0x1fU & (vlSelfRef.inst_i 
                                       >> 0x14U))),5);
    bufp->chgBit(oldp+214,(((IData)(vlSelfRef.reg_write_en_i) 
                            & (0xaU == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->chgBit(oldp+215,(((IData)(vlSelfRef.reg_write_en_i) 
                            & (0xbU == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->chgBit(oldp+216,(((IData)(vlSelfRef.reg_write_en_i) 
                            & (0xcU == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->chgBit(oldp+217,(((IData)(vlSelfRef.reg_write_en_i) 
                            & (0xdU == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->chgBit(oldp+218,(((IData)(vlSelfRef.reg_write_en_i) 
                            & (0xeU == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->chgBit(oldp+219,(((IData)(vlSelfRef.reg_write_en_i) 
                            & (0xfU == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->chgBit(oldp+220,(((IData)(vlSelfRef.reg_write_en_i) 
                            & (0x10U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->chgBit(oldp+221,(((IData)(vlSelfRef.reg_write_en_i) 
                            & (0x11U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->chgBit(oldp+222,(((IData)(vlSelfRef.reg_write_en_i) 
                            & (0x12U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->chgBit(oldp+223,(((IData)(vlSelfRef.reg_write_en_i) 
                            & (0x13U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->chgBit(oldp+224,(((IData)(vlSelfRef.reg_write_en_i) 
                            & (1U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->chgBit(oldp+225,(((IData)(vlSelfRef.reg_write_en_i) 
                            & (0x14U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->chgBit(oldp+226,(((IData)(vlSelfRef.reg_write_en_i) 
                            & (0x15U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->chgBit(oldp+227,(((IData)(vlSelfRef.reg_write_en_i) 
                            & (0x16U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->chgBit(oldp+228,(((IData)(vlSelfRef.reg_write_en_i) 
                            & (0x17U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->chgBit(oldp+229,(((IData)(vlSelfRef.reg_write_en_i) 
                            & (0x18U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->chgBit(oldp+230,(((IData)(vlSelfRef.reg_write_en_i) 
                            & (0x19U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->chgBit(oldp+231,(((IData)(vlSelfRef.reg_write_en_i) 
                            & (0x1aU == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->chgBit(oldp+232,(((IData)(vlSelfRef.reg_write_en_i) 
                            & (0x1bU == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->chgBit(oldp+233,(((IData)(vlSelfRef.reg_write_en_i) 
                            & (0x1cU == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->chgBit(oldp+234,(((IData)(vlSelfRef.reg_write_en_i) 
                            & (0x1dU == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->chgBit(oldp+235,(((IData)(vlSelfRef.reg_write_en_i) 
                            & (2U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->chgBit(oldp+236,(((IData)(vlSelfRef.reg_write_en_i) 
                            & (0x1eU == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->chgBit(oldp+237,(((IData)(vlSelfRef.reg_write_en_i) 
                            & (0x1fU == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->chgBit(oldp+238,(((IData)(vlSelfRef.reg_write_en_i) 
                            & (3U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->chgBit(oldp+239,(((IData)(vlSelfRef.reg_write_en_i) 
                            & (4U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->chgBit(oldp+240,(((IData)(vlSelfRef.reg_write_en_i) 
                            & (5U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->chgBit(oldp+241,(((IData)(vlSelfRef.reg_write_en_i) 
                            & (6U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->chgBit(oldp+242,(((IData)(vlSelfRef.reg_write_en_i) 
                            & (7U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->chgBit(oldp+243,(((IData)(vlSelfRef.reg_write_en_i) 
                            & (8U == (IData)(vlSelfRef.reg_write_addr_i)))));
    bufp->chgBit(oldp+244,(((IData)(vlSelfRef.reg_write_en_i) 
                            & (9U == (IData)(vlSelfRef.reg_write_addr_i)))));
}

void VMux___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux___024root__trace_cleanup\n"); );
    // Init
    VMux___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMux___024root*>(voidSelf);
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
