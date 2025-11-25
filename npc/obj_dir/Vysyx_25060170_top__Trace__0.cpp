// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_25060170_top__Syms.h"


void Vysyx_25060170_top___024root__trace_chg_sub_0(Vysyx_25060170_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_25060170_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_25060170_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25060170_top___024root*>(voidSelf);
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_25060170_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_25060170_top___024root__trace_chg_sub_0(Vysyx_25060170_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(((IData)(vlSelf->ysyx_25060170_top__DOT__rs1_ena)
                                 ? (0x1fU & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                             >> 0xfU))
                                 : 0U)),5);
        bufp->chgBit(oldp+1,(vlSelf->ysyx_25060170_top__DOT__rs1_ena));
        bufp->chgCData(oldp+2,(((IData)(vlSelf->ysyx_25060170_top__DOT__rs2_ena)
                                 ? (0x1fU & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                             >> 0x14U))
                                 : 0U)),5);
        bufp->chgBit(oldp+3,(vlSelf->ysyx_25060170_top__DOT__rs2_ena));
        bufp->chgBit(oldp+4,(vlSelf->ysyx_25060170_top__DOT__rd_ena));
        bufp->chgCData(oldp+5,(((IData)(vlSelf->ysyx_25060170_top__DOT__rd_ena)
                                 ? (0x1fU & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                             >> 7U))
                                 : 0U)),5);
        bufp->chgCData(oldp+6,(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o),8);
        bufp->chgCData(oldp+7,((0xfU & ((1U & (- (IData)(
                                                         (0x41U 
                                                          == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))))) 
                                        | ((2U & (- (IData)(
                                                            (0x82U 
                                                             == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))))) 
                                           | ((4U & 
                                               (- (IData)(
                                                          (0x81U 
                                                           == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))))) 
                                              | ((5U 
                                                  & (- (IData)(
                                                               (7U 
                                                                == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))))) 
                                                 | ((9U 
                                                     & (- (IData)(
                                                                  (0x1aU 
                                                                   == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))))) 
                                                    | ((0xaU 
                                                        & (- (IData)(
                                                                     (0x34U 
                                                                      == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))))) 
                                                       | ((0xbU 
                                                           & (- (IData)(
                                                                        (0x68U 
                                                                         == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))))) 
                                                          | ((0xcU 
                                                              & (- (IData)(
                                                                           (0xd0U 
                                                                            == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))))) 
                                                             | ((0xdU 
                                                                 & (- (IData)(
                                                                              (0xbU 
                                                                               == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))))) 
                                                                | ((0xeU 
                                                                    & (- (IData)(
                                                                                (0x16U 
                                                                                == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))))) 
                                                                   | (- (IData)(
                                                                                (0x2cU 
                                                                                == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o)))))))))))))))),4);
        bufp->chgCData(oldp+8,(vlSelf->ysyx_25060170_top__DOT__id_wbctl_o),2);
        bufp->chgBit(oldp+9,(vlSelf->ysyx_25060170_top__DOT__id_branch_o));
        bufp->chgBit(oldp+10,(vlSelf->ysyx_25060170_top__DOT__id_jump_o));
        bufp->chgCData(oldp+11,((((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__csr_wr_ena) 
                                  << 2U) | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__ecall_ena) 
                                             << 1U) 
                                            | (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__mret_ena)))),3);
        bufp->chgBit(oldp+12,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__csr_rd_ena));
        bufp->chgIData(oldp+13,(vlSelf->ysyx_25060170_top__DOT__id_imm_o),32);
        bufp->chgIData(oldp+14,(((0U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_ctl_o))
                                  ? vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__alu_res
                                  : vlSelf->ysyx_25060170_top__DOT__read_csr_data)),32);
        bufp->chgBit(oldp+15,(vlSelf->ysyx_25060170_top__DOT__dpic_lsu_re));
        bufp->chgBit(oldp+16,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h0e831b4e__0) 
                               & (~ ((IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o) 
                                     >> 3U)))));
        bufp->chgIData(oldp+17,(vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_o),32);
        bufp->chgIData(oldp+18,(vlSelf->ysyx_25060170_top__DOT__dpic_lsu_raddr),32);
        bufp->chgCData(oldp+19,(vlSelf->ysyx_25060170_top__DOT__dpic_lsu_wlen),8);
        bufp->chgIData(oldp+20,(vlSelf->ysyx_25060170_top__DOT__wb_data_o),32);
        bufp->chgBit(oldp+21,(vlSelf->ysyx_25060170_top__DOT__inst_finish_o));
        bufp->chgIData(oldp+22,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__alu_res),32);
        bufp->chgBit(oldp+23,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77eb01fa__0) 
                               | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hf62a170c__0) 
                                  | ((IData)(vlSelf->ysyx_25060170_top__DOT__id_branch_o) 
                                     | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h70c0839c__0) 
                                        | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h70f4116c__0) 
                                           | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77acc5df__0) 
                                              | (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hd9b03bc2__0)))))))));
        bufp->chgBit(oldp+24,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__csr_wr_ena));
        bufp->chgBit(oldp+25,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__mret_ena));
        bufp->chgBit(oldp+26,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__ecall_ena));
        bufp->chgCData(oldp+27,((((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77acc5df__0) 
                                  << 7U) | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7773c72a__0) 
                                             << 6U) 
                                            | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h70f4116c__0) 
                                                << 5U) 
                                               | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h70c0839c__0) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77488b95__0) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->ysyx_25060170_top__DOT__id_branch_o) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hf62a170c__0) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77eb01fa__0))))))))),8);
        bufp->chgBit(oldp+28,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_lui));
        bufp->chgBit(oldp+29,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_auipc));
        bufp->chgBit(oldp+30,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_jal));
        bufp->chgBit(oldp+31,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_jalr));
        bufp->chgBit(oldp+32,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                   >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h489c6f46__0))));
        bufp->chgBit(oldp+33,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h489c6f46__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+34,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                   >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_he80da865__0))));
        bufp->chgBit(oldp+35,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_he80da865__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+36,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                   >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hc65f4c50__0))));
        bufp->chgBit(oldp+37,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hc65f4c50__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+38,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                   >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h1167153d__0))));
        bufp->chgBit(oldp+39,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h1167153d__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+40,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                   >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h29152e89__0))));
        bufp->chgBit(oldp+41,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h29152e89__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+42,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_heac6e652__0) 
                               & (IData)((0x2000U == 
                                          (0x3000U 
                                           & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst))))));
        bufp->chgBit(oldp+43,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                   >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7855af38__0))));
        bufp->chgBit(oldp+44,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7855af38__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+45,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                   >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h2bc0716a__0))));
        bufp->chgBit(oldp+46,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h2bc0716a__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+47,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                   >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h6fd23990__0))));
        bufp->chgBit(oldp+48,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h6fd23990__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+49,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hb3c59122__0) 
                               & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h03cab0f1__0))));
        bufp->chgBit(oldp+50,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hb3c59122__0) 
                               & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7b49f5a3__0))));
        bufp->chgBit(oldp+51,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                   >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h36e9ef3c__0))));
        bufp->chgBit(oldp+52,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                   >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_he2955f6b__0))));
        bufp->chgBit(oldp+53,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                   >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h4c825e07__0))));
        bufp->chgBit(oldp+54,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                   >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h3b427111__0))));
        bufp->chgBit(oldp+55,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hb3ea081b__0) 
                               & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h03cab0f1__0))));
        bufp->chgBit(oldp+56,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hb3ea081b__0) 
                               & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7b49f5a3__0))));
        bufp->chgBit(oldp+57,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                   >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hd7439362__0))));
        bufp->chgBit(oldp+58,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                   >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7a82fdcc__0))));
        bufp->chgBit(oldp+59,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h3b427111__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                  >> 0x19U))));
        bufp->chgBit(oldp+60,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hb3ea081b__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                  >> 0x19U))));
        bufp->chgBit(oldp+61,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hb3c59122__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                  >> 0x19U))));
        bufp->chgBit(oldp+62,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h36e9ef3c__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                  >> 0x19U))));
        bufp->chgBit(oldp+63,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_he2955f6b__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                  >> 0x19U))));
        bufp->chgBit(oldp+64,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h4c825e07__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                  >> 0x19U))));
        bufp->chgBit(oldp+65,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hd7439362__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                  >> 0x19U))));
        bufp->chgBit(oldp+66,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7a82fdcc__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                  >> 0x19U))));
        bufp->chgBit(oldp+67,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                   >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h41ceee20__0))));
        bufp->chgBit(oldp+68,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                   >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hc1b77381__0))));
        bufp->chgBit(oldp+69,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hc1b77381__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+70,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                   >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_ha08c85bd__0))));
        bufp->chgBit(oldp+71,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                   >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h5a06bcf6__0))));
        bufp->chgBit(oldp+72,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h5a06bcf6__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+73,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h41ceee20__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+74,(((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                   >> 0x1eU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h2e86cea5__0))));
        bufp->chgBit(oldp+75,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h2e86cea5__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                  >> 0x1eU))));
        bufp->chgBit(oldp+76,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_ecall));
        bufp->chgBit(oldp+77,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h84595378__0) 
                               & (IData)((0x30000000U 
                                          == (0x30000000U 
                                              & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst))))));
        bufp->chgBit(oldp+78,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrw));
        bufp->chgBit(oldp+79,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrs));
        bufp->chgBit(oldp+80,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrc));
        bufp->chgBit(oldp+81,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hed177170__0) 
                               & (IData)((0x1000U == 
                                          (0x3000U 
                                           & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst))))));
        bufp->chgBit(oldp+82,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrsi));
        bufp->chgBit(oldp+83,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hbd811272__0) 
                               & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+84,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h84595378__0) 
                               & (1U == (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+85,(((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrw) 
                               | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrs) 
                                  | (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrc)))));
        bufp->chgCData(oldp+86,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_lsu__DOT__sb_mask),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+87,(((IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_jump_o) 
                               | (((IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_branch_o) 
                                   & ((0xeU == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                       ? (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                          == vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o)
                                       : ((0x1cU == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                           ? (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                              != vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o)
                                           : ((0xe0U 
                                               == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                               ? (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                                  < vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o)
                                               : ((0xdU 
                                                   == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                   ? 
                                                  (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                                   >= vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o)
                                                   : 
                                                  ((0x38U 
                                                    == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                    ? (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_lt_op2)
                                                    : 
                                                   ((0x70U 
                                                     == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o)) 
                                                    & (~ (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_lt_op2))))))))) 
                                  | (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_h485df6cb__0)))));
        bufp->chgIData(oldp+88,(vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst),32);
        bufp->chgBit(oldp+89,(vlSelf->ysyx_25060170_top__DOT__if_id_reg_ready));
        bufp->chgBit(oldp+90,(vlSelf->ysyx_25060170_top__DOT__ex_pcsrc_o));
        bufp->chgCData(oldp+91,((0x1fU & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                          >> 7U))),5);
        bufp->chgSData(oldp+92,((vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                 >> 0x14U)),12);
        bufp->chgBit(oldp+93,((0x40000033U == vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst)));
        bufp->chgIData(oldp+94,(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o),32);
        bufp->chgIData(oldp+95,(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o),32);
        bufp->chgIData(oldp+96,(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_imm_o),32);
        bufp->chgIData(oldp+97,(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_pc_o),32);
        bufp->chgSData(oldp+98,(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_addr_o),12);
        bufp->chgCData(oldp+99,(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o),8);
        bufp->chgCData(oldp+100,(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_lsctl_o),4);
        bufp->chgBit(oldp+101,(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_rd_ena_o));
        bufp->chgCData(oldp+102,(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_wbctl_o),2);
        bufp->chgBit(oldp+103,(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_branch_o));
        bufp->chgBit(oldp+104,(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_jump_o));
        bufp->chgCData(oldp+105,(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_ctl_o),3);
        bufp->chgCData(oldp+106,(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_rd_addr_o),5);
        bufp->chgBit(oldp+107,(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_rd_ena_o));
        bufp->chgBit(oldp+108,(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_valid_o));
        bufp->chgIData(oldp+109,((((0x21U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o)) 
                                   | (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_branch_o))
                                   ? (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_imm_o 
                                      + vlSelf->ysyx_25060170_top__DOT__id_ex_reg_pc_o)
                                   : ((0x42U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                       ? (0xfffffffeU 
                                          & (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_imm_o 
                                             + vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o))
                                       : ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_h485df6cb__0)
                                           ? vlSelf->ysyx_25060170_top__DOT__read_csr_data
                                           : 0U)))),32);
        bufp->chgIData(oldp+110,(vlSelf->ysyx_25060170_top__DOT__exu_write_csr_data),32);
        bufp->chgIData(oldp+111,(vlSelf->ysyx_25060170_top__DOT__exu_mcause_value),32);
        bufp->chgIData(oldp+112,(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_store_data_o),32);
        bufp->chgIData(oldp+113,(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_exu_res_o),32);
        bufp->chgIData(oldp+114,(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_write_csr_data_o),32);
        bufp->chgIData(oldp+115,(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_mcause_value_o),32);
        bufp->chgCData(oldp+116,(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o),4);
        bufp->chgCData(oldp+117,(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_wb_ctl_o),2);
        bufp->chgBit(oldp+118,(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_rd_ena_o));
        bufp->chgCData(oldp+119,(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_rd_addr_o),5);
        bufp->chgCData(oldp+120,(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_csr_ctl_o),3);
        bufp->chgBit(oldp+121,(vlSelf->ysyx_25060170_top__DOT__ex_lsu_valid_i));
        bufp->chgIData(oldp+122,(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_data_o),32);
        bufp->chgCData(oldp+123,(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_wbctl_o),2);
        bufp->chgIData(oldp+124,(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_exu_res_o),32);
        bufp->chgBit(oldp+125,(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_rd_ena_o));
        bufp->chgCData(oldp+126,(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_rd_addr_o),5);
        bufp->chgIData(oldp+127,(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_write_csr_data_o),32);
        bufp->chgIData(oldp+128,(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_mcause_value_o),32);
        bufp->chgBit(oldp+129,(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_valid_o));
        bufp->chgCData(oldp+130,(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o),3);
        bufp->chgIData(oldp+131,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0U]),32);
        bufp->chgIData(oldp+132,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [1U]),32);
        bufp->chgIData(oldp+133,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [2U]),32);
        bufp->chgIData(oldp+134,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [3U]),32);
        bufp->chgIData(oldp+135,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [4U]),32);
        bufp->chgIData(oldp+136,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [5U]),32);
        bufp->chgIData(oldp+137,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [6U]),32);
        bufp->chgIData(oldp+138,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [7U]),32);
        bufp->chgIData(oldp+139,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [8U]),32);
        bufp->chgIData(oldp+140,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [9U]),32);
        bufp->chgIData(oldp+141,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0xaU]),32);
        bufp->chgIData(oldp+142,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0xbU]),32);
        bufp->chgIData(oldp+143,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0xcU]),32);
        bufp->chgIData(oldp+144,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0xdU]),32);
        bufp->chgIData(oldp+145,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0xeU]),32);
        bufp->chgIData(oldp+146,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0xfU]),32);
        bufp->chgIData(oldp+147,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x10U]),32);
        bufp->chgIData(oldp+148,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x11U]),32);
        bufp->chgIData(oldp+149,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x12U]),32);
        bufp->chgIData(oldp+150,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x13U]),32);
        bufp->chgIData(oldp+151,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x14U]),32);
        bufp->chgIData(oldp+152,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x15U]),32);
        bufp->chgIData(oldp+153,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x16U]),32);
        bufp->chgIData(oldp+154,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x17U]),32);
        bufp->chgIData(oldp+155,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x18U]),32);
        bufp->chgIData(oldp+156,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x19U]),32);
        bufp->chgIData(oldp+157,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x1aU]),32);
        bufp->chgIData(oldp+158,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x1bU]),32);
        bufp->chgIData(oldp+159,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x1cU]),32);
        bufp->chgIData(oldp+160,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x1dU]),32);
        bufp->chgIData(oldp+161,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x1eU]),32);
        bufp->chgIData(oldp+162,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x1fU]),32);
        bufp->chgIData(oldp+163,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus),32);
        bufp->chgIData(oldp+164,((vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
                                  << 2U)),32);
        bufp->chgIData(oldp+165,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mepc),32);
        bufp->chgIData(oldp+166,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mcause),32);
        bufp->chgIData(oldp+167,(vlSelf->ysyx_25060170_top__DOT__read_csr_data),32);
        bufp->chgBit(oldp+168,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_rd));
        bufp->chgBit(oldp+169,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie));
        bufp->chgBit(oldp+170,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie));
        bufp->chgCData(oldp+171,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp),2);
        bufp->chgBit(oldp+172,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena));
        bufp->chgBit(oldp+173,((1U & ((~ ((IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o) 
                                          >> 1U)) & 
                                      ((1U & (IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o))
                                        ? (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)
                                        : ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_rd)
                                            ? (vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_write_csr_data_o 
                                               >> 3U)
                                            : (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)))))));
        bufp->chgBit(oldp+174,((1U & ((2U & (IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o))
                                       ? (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)
                                       : ((IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o) 
                                          | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_rd)
                                              ? (vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_write_csr_data_o 
                                                 >> 7U)
                                              : (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)))))));
        bufp->chgCData(oldp+175,(((2U & (IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o))
                                   ? 3U : ((1U & (IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o))
                                            ? 0U : 
                                           (3U & ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_rd)
                                                   ? 
                                                  (vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_write_csr_data_o 
                                                   >> 0xdU)
                                                   : (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp)))))),2);
        bufp->chgBit(oldp+176,((1U & (((0x305U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_addr_o)) 
                                       & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_rd_ena_o)) 
                                      | ((IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o) 
                                         >> 1U)))));
        bufp->chgBit(oldp+177,(((0x305U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_addr_o)) 
                                & ((IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o) 
                                   >> 2U))));
        bufp->chgIData(oldp+178,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mtvec_base),30);
        bufp->chgBit(oldp+179,((1U & (((0x341U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_addr_o)) 
                                       & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_rd_ena_o)) 
                                      | (IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o)))));
        bufp->chgBit(oldp+180,((1U & (((0x341U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_addr_o)) 
                                       & ((IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o) 
                                          >> 2U)) | 
                                      ((IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o) 
                                       >> 1U)))));
        bufp->chgBit(oldp+181,(((0x342U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_addr_o)) 
                                & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_rd_ena_o))));
        bufp->chgBit(oldp+182,(((0x342U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_addr_o)) 
                                & ((IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o) 
                                   >> 2U))));
        bufp->chgIData(oldp+183,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2),32);
        bufp->chgIData(oldp+184,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2),32);
        bufp->chgBit(oldp+185,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_lt_op2));
        bufp->chgIData(oldp+186,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2),32);
        bufp->chgQData(oldp+187,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__mul),64);
        bufp->chgIData(oldp+189,((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__mul)),32);
        bufp->chgIData(oldp+190,((IData)((vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__mul 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+191,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__div),32);
        bufp->chgIData(oldp+192,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__rem),32);
        bufp->chgBit(oldp+193,(((IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_branch_o) 
                                & ((0xeU == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                    ? (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                       == vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o)
                                    : ((0x1cU == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                        ? (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                           != vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o)
                                        : ((0xe0U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                            ? (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                               < vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o)
                                            : ((0xdU 
                                                == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                ? (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                                   >= vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o)
                                                : (
                                                   (0x38U 
                                                    == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                    ? (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_lt_op2)
                                                    : 
                                                   ((0x70U 
                                                     == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o)) 
                                                    & (~ (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_lt_op2)))))))))));
        bufp->chgIData(oldp+194,((vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                  | vlSelf->ysyx_25060170_top__DOT__read_csr_data)),32);
        bufp->chgIData(oldp+195,(((~ vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o) 
                                  & vlSelf->ysyx_25060170_top__DOT__read_csr_data)),32);
        bufp->chgCData(oldp+196,((0x1fU & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+197,((0x1fU & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+198,((0x7fU & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst)),7);
        bufp->chgCData(oldp+199,((7U & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+200,((vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                  >> 0x19U)),7);
        bufp->chgIData(oldp+201,(((0x80000U & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                               >> 0xcU)) 
                                  | ((0x7f800U & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                            >> 0x15U)))))),20);
        bufp->chgIData(oldp+202,((vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                  >> 0xcU)),20);
        bufp->chgSData(oldp+203,(((0xfe0U & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                             >> 0x14U)) 
                                  | (0x1fU & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                              >> 7U)))),12);
        bufp->chgSData(oldp+204,(((0x800U & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                             >> 0x14U)) 
                                  | ((0x400U & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                << 3U)) 
                                     | ((0x3f0U & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                   >> 0x15U)) 
                                        | (0xfU & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                   >> 8U)))))),12);
        bufp->chgCData(oldp+205,((3U & vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_exu_res_o)),2);
        bufp->chgIData(oldp+206,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[0]),32);
        bufp->chgIData(oldp+207,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[1]),32);
        bufp->chgIData(oldp+208,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[2]),32);
        bufp->chgIData(oldp+209,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[3]),32);
        bufp->chgIData(oldp+210,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[4]),32);
        bufp->chgIData(oldp+211,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[5]),32);
        bufp->chgIData(oldp+212,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[6]),32);
        bufp->chgIData(oldp+213,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[7]),32);
        bufp->chgIData(oldp+214,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[8]),32);
        bufp->chgIData(oldp+215,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[9]),32);
        bufp->chgIData(oldp+216,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[10]),32);
        bufp->chgIData(oldp+217,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[11]),32);
        bufp->chgIData(oldp+218,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[12]),32);
        bufp->chgIData(oldp+219,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[13]),32);
        bufp->chgIData(oldp+220,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[14]),32);
        bufp->chgIData(oldp+221,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[15]),32);
        bufp->chgIData(oldp+222,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[16]),32);
        bufp->chgIData(oldp+223,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[17]),32);
        bufp->chgIData(oldp+224,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[18]),32);
        bufp->chgIData(oldp+225,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[19]),32);
        bufp->chgIData(oldp+226,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[20]),32);
        bufp->chgIData(oldp+227,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[21]),32);
        bufp->chgIData(oldp+228,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[22]),32);
        bufp->chgIData(oldp+229,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[23]),32);
        bufp->chgIData(oldp+230,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[24]),32);
        bufp->chgIData(oldp+231,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[25]),32);
        bufp->chgIData(oldp+232,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[26]),32);
        bufp->chgIData(oldp+233,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[27]),32);
        bufp->chgIData(oldp+234,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[28]),32);
        bufp->chgIData(oldp+235,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[29]),32);
        bufp->chgIData(oldp+236,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[30]),32);
        bufp->chgIData(oldp+237,(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+238,(vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i),32);
        bufp->chgCData(oldp+239,((0xffU & vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i)),8);
        bufp->chgSData(oldp+240,((0xffffU & vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i)),16);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+241,(vlSelf->ysyx_25060170_top__DOT__dpic_ifu_inst),32);
        bufp->chgIData(oldp+242,(vlSelf->ysyx_25060170_top__DOT__ifu_idu_pc),32);
        bufp->chgBit(oldp+243,((0x6fU == (0x7fU & vlSelf->ysyx_25060170_top__DOT__dpic_ifu_inst))));
        bufp->chgBit(oldp+244,((0x67U == (0x7fU & vlSelf->ysyx_25060170_top__DOT__dpic_ifu_inst))));
    }
    bufp->chgBit(oldp+245,(vlSelf->clk));
    bufp->chgBit(oldp+246,(vlSelf->rst));
    bufp->chgIData(oldp+247,((((~ (IData)(vlSelf->rst)) 
                               & (IData)(vlSelf->ysyx_25060170_top__DOT__rs1_ena))
                               ? vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [((IData)(vlSelf->ysyx_25060170_top__DOT__rs1_ena)
                                 ? (0x1fU & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                             >> 0xfU))
                                 : 0U)] : 0U)),32);
    bufp->chgIData(oldp+248,((((~ (IData)(vlSelf->rst)) 
                               & (IData)(vlSelf->ysyx_25060170_top__DOT__rs2_ena))
                               ? vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [((IData)(vlSelf->ysyx_25060170_top__DOT__rs2_ena)
                                 ? (0x1fU & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                             >> 0x14U))
                                 : 0U)] : 0U)),32);
    bufp->chgIData(oldp+249,(((IData)(vlSelf->rst) ? 0U
                               : ((IData)(vlSelf->ysyx_25060170_top__DOT__rs1_ena)
                                   ? (((~ (IData)(vlSelf->rst)) 
                                       & (IData)(vlSelf->ysyx_25060170_top__DOT__rs1_ena))
                                       ? vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                      [((IData)(vlSelf->ysyx_25060170_top__DOT__rs1_ena)
                                         ? (0x1fU & 
                                            (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                             >> 0xfU))
                                         : 0U)] : 0U)
                                   : (((0xa0U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o)) 
                                       | (0x21U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o)))
                                       ? vlSelf->ysyx_25060170_top__DOT__ifu_idu_pc
                                       : ((((0x94U 
                                             == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o)) 
                                            | (0xc8U 
                                               == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))) 
                                           | (0xa4U 
                                              == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o)))
                                           ? (0x1fU 
                                              & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                 >> 0xfU))
                                           : 0U))))),32);
    bufp->chgIData(oldp+250,(((IData)(vlSelf->rst) ? 0U
                               : ((IData)(vlSelf->ysyx_25060170_top__DOT__rs2_ena)
                                   ? (((~ (IData)(vlSelf->rst)) 
                                       & (IData)(vlSelf->ysyx_25060170_top__DOT__rs2_ena))
                                       ? vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                      [((IData)(vlSelf->ysyx_25060170_top__DOT__rs2_ena)
                                         ? (0x1fU & 
                                            (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                             >> 0x14U))
                                         : 0U)] : 0U)
                                   : (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77eb01fa__0) 
                                       | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hf62a170c__0) 
                                          | ((IData)(vlSelf->ysyx_25060170_top__DOT__id_branch_o) 
                                             | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h70c0839c__0) 
                                                | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h70f4116c__0) 
                                                   | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77acc5df__0) 
                                                      | (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hd9b03bc2__0)))))))
                                       ? vlSelf->ysyx_25060170_top__DOT__id_imm_o
                                       : 0U)))),32);
    bufp->chgIData(oldp+251,(((IData)(vlSelf->rst) ? 0U
                               : vlSelf->ysyx_25060170_top__DOT__ifu_idu_pc)),32);
    bufp->chgIData(oldp+252,(((IData)(vlSelf->ysyx_25060170_top__DOT__dpic_lsu_re)
                               ? ((IData)(vlSelf->rst)
                                   ? 0U : ((8U & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                            ? ((4U 
                                                & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                                     ? 0U
                                                     : 
                                                    (0xffffU 
                                                     & vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                                     ? 
                                                    (0xffU 
                                                     & vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i)
                                                     : 0U))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                                     ? vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i
                                                     : 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i 
                                                                     >> 0xfU)))) 
                                                      << 0x10U) 
                                                     | (0xffffU 
                                                        & vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i))
                                                     : 0U)))
                                            : 0U)) : 0U)),32);
    bufp->chgIData(oldp+253,(((0x80000000U & (- (IData)((IData)(vlSelf->rst)))) 
                              | (((- (IData)((1U & 
                                              ((~ (IData)(vlSelf->rst)) 
                                               & (~ (IData)(vlSelf->ysyx_25060170_top__DOT__ex_pcsrc_o)))))) 
                                  & ((0x80000000U & 
                                      (- (IData)((IData)(vlSelf->rst)))) 
                                     | ((- (IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelf->rst))))) 
                                        & ((IData)(4U) 
                                           + vlSelf->ysyx_25060170_top__DOT__ifu_idu_pc)))) 
                                 | ((- (IData)(((~ (IData)(vlSelf->rst)) 
                                                & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_pcsrc_o)))) 
                                    & (((0x21U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o)) 
                                        | (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_branch_o))
                                        ? (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_imm_o 
                                           + vlSelf->ysyx_25060170_top__DOT__id_ex_reg_pc_o)
                                        : ((0x42U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                            ? (0xfffffffeU 
                                               & (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_imm_o 
                                                  + vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o))
                                            : ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_h485df6cb__0)
                                                ? vlSelf->ysyx_25060170_top__DOT__read_csr_data
                                                : 0U))))))),32);
    bufp->chgIData(oldp+254,(((0x80000000U & (- (IData)((IData)(vlSelf->rst)))) 
                              | ((- (IData)((1U & (~ (IData)(vlSelf->rst))))) 
                                 & ((IData)(4U) + vlSelf->ysyx_25060170_top__DOT__ifu_idu_pc)))),32);
    bufp->chgIData(oldp+255,(((IData)(vlSelf->rst) ? 0U
                               : ((8U & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                   ? ((4U & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                       ? ((2U & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                           ? ((1U & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                               ? 0U
                                               : (0xffffU 
                                                  & vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i))
                                           : ((1U & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                               ? (0xffU 
                                                  & vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i)
                                               : 0U))
                                       : ((2U & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                           ? ((1U & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                               ? vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i
                                               : ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i)))
                                           : ((1U & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                               ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i))
                                               : 0U)))
                                   : 0U))),32);
    bufp->chgCData(oldp+256,(((IData)(vlSelf->rst) ? 0U
                               : ((0U == (3U & vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_exu_res_o))
                                   ? 3U : ((2U == (3U 
                                                   & vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_exu_res_o))
                                            ? 0xcU : 0U)))),4);
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
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
