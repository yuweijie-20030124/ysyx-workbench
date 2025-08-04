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
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o));
        bufp->chgBit(oldp+1,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                              & (0x500U == (0xf80U 
                                            & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
        bufp->chgBit(oldp+2,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                              & (0x580U == (0xf80U 
                                            & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
        bufp->chgBit(oldp+3,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                              & (0x600U == (0xf80U 
                                            & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
        bufp->chgBit(oldp+4,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                              & (0x680U == (0xf80U 
                                            & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
        bufp->chgBit(oldp+5,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                              & (0x700U == (0xf80U 
                                            & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
        bufp->chgBit(oldp+6,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                              & (0x780U == (0xf80U 
                                            & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
        bufp->chgBit(oldp+7,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                              & (0x800U == (0xf80U 
                                            & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
        bufp->chgBit(oldp+8,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                              & (0x880U == (0xf80U 
                                            & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
        bufp->chgBit(oldp+9,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                              & (0x900U == (0xf80U 
                                            & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
        bufp->chgBit(oldp+10,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                               & (0x980U == (0xf80U 
                                             & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
        bufp->chgBit(oldp+11,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                               & (0x80U == (0xf80U 
                                            & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
        bufp->chgBit(oldp+12,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                               & (0xa00U == (0xf80U 
                                             & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
        bufp->chgBit(oldp+13,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                               & (0xa80U == (0xf80U 
                                             & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
        bufp->chgBit(oldp+14,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                               & (0xb00U == (0xf80U 
                                             & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
        bufp->chgBit(oldp+15,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                               & (0xb80U == (0xf80U 
                                             & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
        bufp->chgBit(oldp+16,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                               & (0xc00U == (0xf80U 
                                             & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
        bufp->chgBit(oldp+17,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                               & (0xc80U == (0xf80U 
                                             & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
        bufp->chgBit(oldp+18,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                               & (0xd00U == (0xf80U 
                                             & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
        bufp->chgBit(oldp+19,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                               & (0xd80U == (0xf80U 
                                             & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
        bufp->chgBit(oldp+20,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                               & (0xe00U == (0xf80U 
                                             & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
        bufp->chgBit(oldp+21,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                               & (0xe80U == (0xf80U 
                                             & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
        bufp->chgBit(oldp+22,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                               & (0x100U == (0xf80U 
                                             & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
        bufp->chgBit(oldp+23,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                               & (0xf00U == (0xf80U 
                                             & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
        bufp->chgBit(oldp+24,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                               & (0xf80U == (0xf80U 
                                             & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
        bufp->chgBit(oldp+25,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                               & (0x180U == (0xf80U 
                                             & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
        bufp->chgBit(oldp+26,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                               & (0x200U == (0xf80U 
                                             & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
        bufp->chgBit(oldp+27,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                               & (0x280U == (0xf80U 
                                             & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
        bufp->chgBit(oldp+28,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                               & (0x300U == (0xf80U 
                                             & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
        bufp->chgBit(oldp+29,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                               & (0x380U == (0xf80U 
                                             & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
        bufp->chgBit(oldp+30,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                               & (0x400U == (0xf80U 
                                             & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
        bufp->chgBit(oldp+31,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__reg_write_en_o) 
                               & (0x480U == (0xf80U 
                                             & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+32,(vlSelfRef.ysyx_25060170_top__DOT__PCout),32);
        bufp->chgCData(oldp+33,((0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+34,((0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+35,(vlSelfRef.ysyx_25060170_top__DOT__ALUop),4);
        bufp->chgBit(oldp+36,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sw) 
                               | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sh) 
                                  | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sb) 
                                     | (IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sd))))));
        bufp->chgIData(oldp+37,(((4U & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lw)))) 
                                 | ((2U & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lh)))) 
                                    | ((1U & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__addi)))) 
                                       | ((8U & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sd)))) 
                                          | ((4U & 
                                              (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sw)))) 
                                             | ((2U 
                                                 & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sh)))) 
                                                | (1U 
                                                   & (- (IData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sb))))))))))),32);
        bufp->chgCData(oldp+38,((0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                          >> 7U))),5);
        bufp->chgIData(oldp+39,(vlSelfRef.ysyx_25060170_top__DOT__op_1),32);
        bufp->chgIData(oldp+40,(vlSelfRef.ysyx_25060170_top__DOT__op_2),32);
        bufp->chgIData(oldp+41,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__imm),32);
        bufp->chgBit(oldp+42,((0x6fU == (0x7fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o))));
        bufp->chgIData(oldp+43,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                [(0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                           >> 0xfU))]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                [(0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                           >> 0x14U))]),32);
        bufp->chgBit(oldp+45,(vlSelfRef.ysyx_25060170_top__DOT__is_beq));
        bufp->chgBit(oldp+46,(vlSelfRef.ysyx_25060170_top__DOT__is_blt));
        bufp->chgBit(oldp+47,(vlSelfRef.ysyx_25060170_top__DOT__is_bne));
        bufp->chgBit(oldp+48,(vlSelfRef.ysyx_25060170_top__DOT__is_bge));
        bufp->chgBit(oldp+49,(vlSelfRef.ysyx_25060170_top__DOT__is_bltu));
        bufp->chgBit(oldp+50,(vlSelfRef.ysyx_25060170_top__DOT__is_bgeu));
        bufp->chgBit(oldp+51,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_beq) 
                               & (0U == vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2))));
        bufp->chgBit(oldp+52,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_blt) 
                               & ((0U != vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2) 
                                  & (vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2 
                                     >> 0x1fU)))));
        bufp->chgBit(oldp+53,(((0U != vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2) 
                               & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bne))));
        bufp->chgBit(oldp+54,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bge) 
                               & ((~ (vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2 
                                      >> 0x1fU)) | 
                                  (0U == vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2)))));
        bufp->chgBit(oldp+55,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bltu) 
                               & (IData)((vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_unsigned 
                                          >> 0x20U)))));
        bufp->chgBit(oldp+56,(((~ (IData)((vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_unsigned 
                                           >> 0x20U))) 
                               & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bgeu))));
        bufp->chgCData(oldp+57,(vlSelfRef.ysyx_25060170_top__DOT__regS),2);
        bufp->chgBit(oldp+58,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__is_Utype) 
                               | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__is_Itype) 
                                  | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srli) 
                                      | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srl) 
                                         | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__add) 
                                            | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sll) 
                                               | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__slt) 
                                                  | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sltu) 
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
                                     | (0x6fU == (0x7fU 
                                                  & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)))))));
        bufp->chgIData(oldp+59,(vlSelfRef.ysyx_25060170_top__DOT__exu_res1),32);
        bufp->chgIData(oldp+60,(vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o),32);
        bufp->chgIData(oldp+61,(vlSelfRef.ysyx_25060170_top__DOT__reg_write_data_o),32);
        bufp->chgIData(oldp+62,(((0x6fU == (0x7fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o))
                                  ? (0xfffffffeU & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__jumpaddr)
                                  : ((0x6fU == (0x7fU 
                                                & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o))
                                      ? vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__jumpaddr
                                      : 0U))),32);
        bufp->chgIData(oldp+63,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__jumpaddr),32);
        bufp->chgIData(oldp+64,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2),32);
        bufp->chgBit(oldp+65,((vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2 
                               >> 0x1fU)));
        bufp->chgBit(oldp+66,((0U == vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2)));
        bufp->chgQData(oldp+67,((QData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                [(0x1fU 
                                                  & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                     >> 0xfU))]))),33);
        bufp->chgQData(oldp+69,((QData)((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf
                                                [(0x1fU 
                                                  & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                                     >> 0x14U))]))),33);
        bufp->chgQData(oldp+71,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_unsigned),33);
        bufp->chgBit(oldp+73,((1U & (IData)((vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_unsigned 
                                             >> 0x20U)))));
        bufp->chgIData(oldp+74,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[0]),32);
        bufp->chgIData(oldp+75,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[1]),32);
        bufp->chgIData(oldp+76,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[2]),32);
        bufp->chgIData(oldp+77,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[3]),32);
        bufp->chgIData(oldp+78,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[4]),32);
        bufp->chgIData(oldp+79,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[5]),32);
        bufp->chgIData(oldp+80,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[6]),32);
        bufp->chgIData(oldp+81,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[7]),32);
        bufp->chgIData(oldp+82,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[8]),32);
        bufp->chgIData(oldp+83,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[9]),32);
        bufp->chgIData(oldp+84,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[10]),32);
        bufp->chgIData(oldp+85,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[11]),32);
        bufp->chgIData(oldp+86,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[12]),32);
        bufp->chgIData(oldp+87,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[13]),32);
        bufp->chgIData(oldp+88,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[14]),32);
        bufp->chgIData(oldp+89,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[15]),32);
        bufp->chgIData(oldp+90,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[16]),32);
        bufp->chgIData(oldp+91,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[17]),32);
        bufp->chgIData(oldp+92,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[18]),32);
        bufp->chgIData(oldp+93,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[19]),32);
        bufp->chgIData(oldp+94,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[20]),32);
        bufp->chgIData(oldp+95,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[21]),32);
        bufp->chgIData(oldp+96,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[22]),32);
        bufp->chgIData(oldp+97,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[23]),32);
        bufp->chgIData(oldp+98,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[24]),32);
        bufp->chgIData(oldp+99,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[25]),32);
        bufp->chgIData(oldp+100,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[26]),32);
        bufp->chgIData(oldp+101,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[27]),32);
        bufp->chgIData(oldp+102,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[28]),32);
        bufp->chgIData(oldp+103,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[29]),32);
        bufp->chgIData(oldp+104,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[30]),32);
        bufp->chgIData(oldp+105,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf[31]),32);
        bufp->chgIData(oldp+106,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__10__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+107,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__11__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+108,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__12__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+109,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__13__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+110,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__14__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+111,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__15__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+112,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__16__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+113,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__17__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+114,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__18__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+115,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__19__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+116,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__1__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+117,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__20__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+118,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__21__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+119,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__22__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+120,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__23__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+121,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__24__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+122,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__25__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+123,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__26__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+124,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__27__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+125,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__28__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+126,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__29__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+127,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__2__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+128,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__30__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+129,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__31__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+130,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__3__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+131,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__4__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+132,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__5__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+133,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__6__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+134,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__7__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+135,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__8__KET____DOT__reg_x__dout),32);
        bufp->chgIData(oldp+136,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__9__KET____DOT__reg_x__dout),32);
        bufp->chgCData(oldp+137,((0x7fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o)),7);
        bufp->chgCData(oldp+138,((vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                  >> 0x19U)),7);
        bufp->chgCData(oldp+139,((7U & (vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o 
                                        >> 0xcU))),3);
        bufp->chgBit(oldp+140,((0x17U == (0x7fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o))));
        bufp->chgBit(oldp+141,((0x37U == (0x7fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o))));
        bufp->chgBit(oldp+142,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__is_Utype));
        bufp->chgBit(oldp+143,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srli));
        bufp->chgBit(oldp+144,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__slli));
        bufp->chgBit(oldp+145,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srai));
        bufp->chgBit(oldp+146,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lbu));
        bufp->chgBit(oldp+147,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__addi));
        bufp->chgBit(oldp+148,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sltiu));
        bufp->chgBit(oldp+149,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lh));
        bufp->chgBit(oldp+150,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lw));
        bufp->chgBit(oldp+151,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__andi));
        bufp->chgBit(oldp+152,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__xori));
        bufp->chgBit(oldp+153,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__is_Itype));
        bufp->chgBit(oldp+154,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sw));
        bufp->chgBit(oldp+155,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sh));
        bufp->chgBit(oldp+156,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sb));
        bufp->chgBit(oldp+157,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sd));
        bufp->chgBit(oldp+158,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srl));
        bufp->chgBit(oldp+159,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__add));
        bufp->chgBit(oldp+160,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sll));
        bufp->chgBit(oldp+161,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__slt));
        bufp->chgBit(oldp+162,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sltu));
        bufp->chgBit(oldp+163,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcxor));
        bufp->chgBit(oldp+164,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcor));
        bufp->chgBit(oldp+165,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcand));
        bufp->chgBit(oldp+166,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sra));
        bufp->chgBit(oldp+167,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sub));
        bufp->chgBit(oldp+168,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mul));
        bufp->chgBit(oldp+169,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulh));
        bufp->chgBit(oldp+170,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulhsu));
        bufp->chgBit(oldp+171,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulhu));
        bufp->chgBit(oldp+172,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__div));
        bufp->chgBit(oldp+173,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__divu));
        bufp->chgBit(oldp+174,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__rem));
        bufp->chgBit(oldp+175,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__remu));
        bufp->chgBit(oldp+176,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srli) 
                                | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srl) 
                                   | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__add) 
                                      | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sll) 
                                         | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__slt) 
                                            | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sltu) 
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
                                                                                | (IData)(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__remu)))))))))))))))))))));
        bufp->chgBit(oldp+177,(((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_beq) 
                                | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bne) 
                                   | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_blt) 
                                      | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bge) 
                                         | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bltu) 
                                            | (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bgeu))))))));
        bufp->chgIData(oldp+178,(((0x6fU == (0x7fU 
                                             & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o))
                                   ? ((0x6fU == (0x7fU 
                                                 & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o))
                                       ? (0xfffffffeU 
                                          & vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__jumpaddr)
                                       : ((0x6fU == 
                                           (0x7fU & vlSelfRef.ysyx_25060170_top__DOT__MEM_inst_o))
                                           ? vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__jumpaddr
                                           : 0U)) : 
                                  ((IData)(4U) + vlSelfRef.ysyx_25060170_top__DOT__PCout))),32);
        bufp->chgBit(oldp+179,((((~ ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_beq) 
                                     & (0U == vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2))) 
                                 & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_beq)) 
                                | (((~ ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_blt) 
                                        & ((0U != vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2) 
                                           & (vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2 
                                              >> 0x1fU)))) 
                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_blt)) 
                                   | (((~ ((0U != vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2) 
                                           & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bne))) 
                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bne)) 
                                      | (((~ ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bge) 
                                              & ((~ 
                                                  (vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2 
                                                   >> 0x1fU)) 
                                                 | (0U 
                                                    == vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2)))) 
                                          & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bge)) 
                                         | (((~ ((IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bltu) 
                                                 & (IData)(
                                                           (vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_unsigned 
                                                            >> 0x20U)))) 
                                             & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bltu)) 
                                            | ((~ (
                                                   (~ (IData)(
                                                              (vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_unsigned 
                                                               >> 0x20U))) 
                                                   & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bgeu))) 
                                               & (IData)(vlSelfRef.ysyx_25060170_top__DOT__is_bgeu)))))))));
        bufp->chgIData(oldp+180,(vlSelfRef.ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__l_memdata),32);
    }
    bufp->chgBit(oldp+181,(vlSelfRef.clk));
    bufp->chgBit(oldp+182,(vlSelfRef.rst));
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
