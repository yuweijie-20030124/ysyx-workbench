// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_25060170_top__Syms.h"


void Vysyx_25060170_top___024root__trace_chg_0_sub_0(Vysyx_25060170_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_25060170_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root__trace_chg_0\n"); );
    // Init
    Vysyx_25060170_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25060170_top___024root*>(voidSelf);
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_25060170_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_25060170_top___024root__trace_chg_0_sub_0(Vysyx_25060170_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root__trace_chg_0_sub_0\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.ysyx_25060170_top__DOT__pc),32);
        bufp->chgIData(oldp+1,(vlSelfRef.ysyx_25060170_top__DOT__inst),32);
        bufp->chgIData(oldp+2,((((- (IData)((vlSelfRef.ysyx_25060170_top__DOT__inst 
                                             >> 0x1fU))) 
                                 << 0xcU) | (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                             >> 0x14U))),32);
        bufp->chgIData(oldp+3,(((0U == (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
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
        bufp->chgIData(oldp+4,(((0U == (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
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
        bufp->chgCData(oldp+5,((0x7fU & vlSelfRef.ysyx_25060170_top__DOT__inst)),7);
        bufp->chgCData(oldp+6,((7U & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                      >> 0xcU))),3);
        bufp->chgCData(oldp+7,((0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                         >> 7U))),5);
        bufp->chgIData(oldp+8,(vlSelfRef.ysyx_25060170_top__DOT__alu_result),32);
        bufp->chgBit(oldp+9,((0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                              >> 7U)))));
        bufp->chgBit(oldp+10,((IData)((0x13U == (0x707fU 
                                                 & vlSelfRef.ysyx_25060170_top__DOT__inst)))));
        bufp->chgIData(oldp+11,(((IData)((0x13U == 
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
        bufp->chgCData(oldp+12,((0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+13,((0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+14,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[0]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[1]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[2]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[3]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[4]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[5]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[6]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[7]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[8]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[9]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[10]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[11]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[12]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[13]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[14]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[15]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[16]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[17]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[18]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[19]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[20]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[21]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[22]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[23]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[24]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[25]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[26]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[27]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[28]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[29]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[30]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT__rf[31]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__10__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+47,((IData)(((0x500U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+48,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__11__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+49,((IData)(((0x580U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+50,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__12__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+51,((IData)(((0x600U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+52,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__13__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+53,((IData)(((0x680U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+54,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__14__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+55,((IData)(((0x700U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+56,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__15__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+57,((IData)(((0x780U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+58,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__16__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+59,((IData)(((0x800U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+60,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__17__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+61,((IData)(((0x880U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+62,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__18__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+63,((IData)(((0x900U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+64,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__19__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+65,((IData)(((0x980U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+66,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__1__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+67,((IData)(((0x80U == (0xf80U 
                                                  & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+68,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__20__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+69,((IData)(((0xa00U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+70,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__21__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+71,((IData)(((0xa80U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+72,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__22__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+73,((IData)(((0xb00U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+74,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__23__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+75,((IData)(((0xb80U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+76,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__24__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+77,((IData)(((0xc00U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+78,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__25__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+79,((IData)(((0xc80U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+80,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__26__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+81,((IData)(((0xd00U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+82,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__27__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+83,((IData)(((0xd80U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+84,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__28__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+85,((IData)(((0xe00U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+86,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__29__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+87,((IData)(((0xe80U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+88,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__2__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+89,((IData)(((0x100U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+90,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__30__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+91,((IData)(((0xf00U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+92,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__31__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+93,((IData)(((0xf80U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+94,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__3__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+95,((IData)(((0x180U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+96,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__4__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+97,((IData)(((0x200U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+98,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__5__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+99,((IData)(((0x280U == (0xf80U 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                    >> 7U)))))));
        bufp->chgIData(oldp+100,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__6__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+101,((IData)(((0x300U == 
                                         (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                        & (0U != (0x1fU 
                                                  & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                     >> 7U)))))));
        bufp->chgIData(oldp+102,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__7__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+103,((IData)(((0x380U == 
                                         (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                        & (0U != (0x1fU 
                                                  & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                     >> 7U)))))));
        bufp->chgIData(oldp+104,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__8__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+105,((IData)(((0x400U == 
                                         (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                        & (0U != (0x1fU 
                                                  & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                     >> 7U)))))));
        bufp->chgIData(oldp+106,(vlSelfRef.ysyx_25060170_top__DOT__u_gpr__DOT____Vcellout__reg_gen__BRA__9__KET____DOT__reg_x__dout),32);
        bufp->chgBit(oldp+107,((IData)(((0x480U == 
                                         (0xf80U & vlSelfRef.ysyx_25060170_top__DOT__inst)) 
                                        & (0U != (0x1fU 
                                                  & (vlSelfRef.ysyx_25060170_top__DOT__inst 
                                                     >> 7U)))))));
        bufp->chgIData(oldp+108,(((IData)(4U) + vlSelfRef.ysyx_25060170_top__DOT__pc)),32);
        bufp->chgIData(oldp+109,(vlSelfRef.ysyx_25060170_top__DOT__u_mem__DOT____Vcellinp__mem_data_reg__din),32);
    }
    bufp->chgBit(oldp+110,(vlSelfRef.clk));
    bufp->chgBit(oldp+111,(vlSelfRef.rst));
    bufp->chgBit(oldp+112,(vlSelfRef.ready_i));
    bufp->chgBit(oldp+113,(vlSelfRef.ready_o));
}

void Vysyx_25060170_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root__trace_cleanup\n"); );
    // Init
    Vysyx_25060170_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25060170_top___024root*>(voidSelf);
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
