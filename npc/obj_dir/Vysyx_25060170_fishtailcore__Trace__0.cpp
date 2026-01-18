// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_25060170_fishtailcore__Syms.h"


void Vysyx_25060170_fishtailcore___024root__trace_chg_sub_0(Vysyx_25060170_fishtailcore___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_25060170_fishtailcore___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_25060170_fishtailcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25060170_fishtailcore___024root*>(voidSelf);
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_25060170_fishtailcore___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_25060170_fishtailcore___024root__trace_chg_sub_0(Vysyx_25060170_fishtailcore___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ready));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+1,(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr),5);
        bufp->chgBit(oldp+2,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr));
        bufp->chgBit(oldp+3,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_bxx));
        bufp->chgBit(oldp+4,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_if_pc_jump));
        bufp->chgIData(oldp+5,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_if_pc_jump)
                                 ? (((0x42U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                                      ? vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1
                                      : vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc) 
                                    + ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_jump)
                                        ? 4U : vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm))
                                 : 0U)),32);
        bufp->chgBit(oldp+6,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_stall));
        bufp->chgBit(oldp+7,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_valid));
        bufp->chgCData(oldp+8,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr),5);
        bufp->chgBit(oldp+9,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena));
        bufp->chgCData(oldp+10,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr),5);
        bufp->chgBit(oldp+11,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena));
        bufp->chgBit(oldp+12,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rd_ena));
        bufp->chgCData(oldp+13,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rd_ena)
                                  ? (0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                              >> 7U))
                                  : 0U)),5);
        bufp->chgCData(oldp+14,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc),8);
        bufp->chgCData(oldp+15,((0xfU & ((1U & (- (IData)(
                                                          (0x41U 
                                                           == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                         | ((2U & (- (IData)(
                                                             (0x82U 
                                                              == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                            | ((4U 
                                                & (- (IData)(
                                                             (0x81U 
                                                              == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                               | ((5U 
                                                   & (- (IData)(
                                                                (7U 
                                                                 == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                                  | ((9U 
                                                      & (- (IData)(
                                                                   (0x1aU 
                                                                    == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                                     | ((0xaU 
                                                         & (- (IData)(
                                                                      (0x34U 
                                                                       == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                                        | ((0xbU 
                                                            & (- (IData)(
                                                                         (0x68U 
                                                                          == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                                           | ((0xcU 
                                                               & (- (IData)(
                                                                            (0xd0U 
                                                                             == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                                              | ((0xdU 
                                                                  & (- (IData)(
                                                                               (0xbU 
                                                                                == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                                                 | ((0xeU 
                                                                     & (- (IData)(
                                                                                (0x16U 
                                                                                == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                                                    | (- (IData)(
                                                                                (0x2cU 
                                                                                == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc)))))))))))))))),4);
        bufp->chgCData(oldp+16,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_wbctl),2);
        bufp->chgCData(oldp+17,(((2U & ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                                        | ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr))) 
                                           | (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc)))))) 
                                 | (1U & (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena)))))),2);
        bufp->chgCData(oldp+18,(((2U & ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                                        | (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr))))) 
                                 | ((4U & (- (IData)(
                                                     ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77eb01fa__0) 
                                                      | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                                                         | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0) 
                                                            | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70f4116c__0) 
                                                               | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
                                                                  | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd9b03bc2__0))))))))) 
                                    | (1U & (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena))))))),3);
        bufp->chgBit(oldp+19,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag));
        bufp->chgBit(oldp+20,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw) 
                               | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs) 
                                  | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc) 
                                     | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi) 
                                        | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi) 
                                           | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci))))))));
        bufp->chgIData(oldp+21,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1),32);
        bufp->chgIData(oldp+22,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op2),32);
        bufp->chgIData(oldp+23,(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm),32);
        bufp->chgIData(oldp+24,((((0x21U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                                  | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_if_pc_jump))
                                  ? (vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm 
                                     + vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc)
                                  : ((0x42U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                                      ? (0xfffffffeU 
                                         & (vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1 
                                            + vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm))
                                      : vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc))),32);
        bufp->chgBit(oldp+25,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_branch));
        bufp->chgIData(oldp+26,(vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res),32);
        bufp->chgSData(oldp+27,(((0U != (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_he71b3f47__0))
                                  ? (0xfffU & vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm)
                                  : 0U)),12);
        bufp->chgCData(oldp+28,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena) 
                                  << 6U) | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena) 
                                             << 5U) 
                                            | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena) 
                                                << 4U) 
                                               | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_he71b3f47__0))))),7);
        bufp->chgBit(oldp+29,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_valid) 
                               | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h53258981__0))));
        bufp->chgBit(oldp+30,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_we));
        bufp->chgIData(oldp+31,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_data),32);
        bufp->chgIData(oldp+32,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_raddr),32);
        bufp->chgCData(oldp+33,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen),8);
        bufp->chgBit(oldp+34,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_re));
        bufp->chgBit(oldp+35,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jal_jalr_temp));
        bufp->chgIData(oldp+36,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal)
                                  ? (((- (IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                  >> 0x1fU))) 
                                      << 0x15U) | (
                                                   (0x100000U 
                                                    & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                       >> 0xbU)) 
                                                   | ((0xff000U 
                                                       & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst) 
                                                      | ((0x800U 
                                                          & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                               >> 0x14U))))))
                                  : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_bxx)
                                      ? (((- (IData)(
                                                     (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                      >> 0x1fU))) 
                                          << 0xdU) 
                                         | ((0x1000U 
                                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                        >> 7U))))))
                                      : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgTmp_h15760a56__0)
                                          ? 0U : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                      >> 0x14U))
                                                   : 4U))))),32);
        bufp->chgBit(oldp+37,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal));
        bufp->chgIData(oldp+38,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc),32);
        bufp->chgIData(oldp+39,((0xfffffffeU & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc)),32);
        bufp->chgBit(oldp+40,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                               == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr))));
        bufp->chgBit(oldp+41,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                               == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr))));
        bufp->chgIData(oldp+42,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res),32);
        bufp->chgBit(oldp+43,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena));
        bufp->chgBit(oldp+44,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena));
        bufp->chgBit(oldp+45,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena));
        bufp->chgBit(oldp+46,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena));
        bufp->chgBit(oldp+47,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena));
        bufp->chgBit(oldp+48,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena));
        bufp->chgBit(oldp+49,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena));
        bufp->chgBit(oldp+50,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__branch));
        bufp->chgBit(oldp+51,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward) 
                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena)) 
                               | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward) 
                                  & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_csr_ena)))));
        bufp->chgBit(oldp+52,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward) 
                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena)) 
                               | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward) 
                                  & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_csr_ena)))));
        bufp->chgBit(oldp+53,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward));
        bufp->chgBit(oldp+54,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward));
        bufp->chgBit(oldp+55,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward));
        bufp->chgBit(oldp+56,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward));
        bufp->chgBit(oldp+57,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward));
        bufp->chgBit(oldp+58,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward));
        bufp->chgBit(oldp+59,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_forward_ena));
        bufp->chgBit(oldp+60,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op2_forward_ena));
        bufp->chgIData(oldp+61,((((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward))) 
                                  & vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res) 
                                 | (((- (IData)(((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward)) 
                                                 & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward)))) 
                                     & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res) 
                                    | ((- (IData)(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward) 
                                                   & ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward)) 
                                                      & (~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward)))))) 
                                       & vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rf_data)))),32);
        bufp->chgIData(oldp+62,((((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward))) 
                                  & vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res) 
                                 | (((- (IData)(((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward)) 
                                                 & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward)))) 
                                     & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res) 
                                    | ((- (IData)(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward) 
                                                   & ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward)) 
                                                      & (~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward)))))) 
                                       & vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rf_data)))),32);
        bufp->chgBit(oldp+63,(((vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1 
                                ^ vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op2) 
                               >> 0x1fU)));
        bufp->chgBit(oldp+64,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2));
        bufp->chgBit(oldp+65,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2));
        bufp->chgIData(oldp+66,(((0x42U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                                  ? vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1
                                  : vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc)),32);
        bufp->chgIData(oldp+67,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_jump)
                                  ? 4U : vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm)),32);
        bufp->chgCData(oldp+68,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
                                  << 7U) | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7773c72a__0) 
                                             << 6U) 
                                            | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70f4116c__0) 
                                                << 5U) 
                                               | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77488b95__0) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__branch) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77eb01fa__0))))))))),8);
        bufp->chgBit(oldp+69,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui));
        bufp->chgBit(oldp+70,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc));
        bufp->chgBit(oldp+71,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal));
        bufp->chgBit(oldp+72,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr));
        bufp->chgBit(oldp+73,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                   >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h489c6f46__0))));
        bufp->chgBit(oldp+74,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h489c6f46__0) 
                               & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+75,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                   >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he80da865__0))));
        bufp->chgBit(oldp+76,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he80da865__0) 
                               & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+77,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                   >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc65f4c50__0))));
        bufp->chgBit(oldp+78,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc65f4c50__0) 
                               & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+79,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                   >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h1167153d__0))));
        bufp->chgBit(oldp+80,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h1167153d__0) 
                               & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+81,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                   >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h29152e89__0))));
        bufp->chgBit(oldp+82,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h29152e89__0) 
                               & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+83,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_heac6e652__0) 
                               & (IData)((0x2000U == 
                                          (0x3000U 
                                           & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst))))));
        bufp->chgBit(oldp+84,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                   >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7855af38__0))));
        bufp->chgBit(oldp+85,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7855af38__0) 
                               & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+86,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                   >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2bc0716a__0))));
        bufp->chgBit(oldp+87,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2bc0716a__0) 
                               & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+88,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                   >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h6fd23990__0))));
        bufp->chgBit(oldp+89,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h6fd23990__0) 
                               & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                  >> 0xcU))));
        bufp->chgBit(oldp+90,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                               & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h03cab0f1__0))));
        bufp->chgBit(oldp+91,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                               & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7b49f5a3__0))));
        bufp->chgBit(oldp+92,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                   >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h36e9ef3c__0))));
        bufp->chgBit(oldp+93,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                   >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he2955f6b__0))));
        bufp->chgBit(oldp+94,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                   >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h4c825e07__0))));
        bufp->chgBit(oldp+95,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                   >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h3b427111__0))));
        bufp->chgBit(oldp+96,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                               & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h03cab0f1__0))));
        bufp->chgBit(oldp+97,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                               & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7b49f5a3__0))));
        bufp->chgBit(oldp+98,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                   >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd7439362__0))));
        bufp->chgBit(oldp+99,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                   >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7a82fdcc__0))));
        bufp->chgBit(oldp+100,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h3b427111__0) 
                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                   >> 0x19U))));
        bufp->chgBit(oldp+101,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                   >> 0x19U))));
        bufp->chgBit(oldp+102,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                   >> 0x19U))));
        bufp->chgBit(oldp+103,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h36e9ef3c__0) 
                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                   >> 0x19U))));
        bufp->chgBit(oldp+104,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he2955f6b__0) 
                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                   >> 0x19U))));
        bufp->chgBit(oldp+105,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h4c825e07__0) 
                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                   >> 0x19U))));
        bufp->chgBit(oldp+106,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd7439362__0) 
                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                   >> 0x19U))));
        bufp->chgBit(oldp+107,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7a82fdcc__0) 
                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                   >> 0x19U))));
        bufp->chgBit(oldp+108,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                    >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h41ceee20__0))));
        bufp->chgBit(oldp+109,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                    >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc1b77381__0))));
        bufp->chgBit(oldp+110,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc1b77381__0) 
                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                   >> 0xcU))));
        bufp->chgBit(oldp+111,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                    >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_ha08c85bd__0))));
        bufp->chgBit(oldp+112,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                    >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5a06bcf6__0))));
        bufp->chgBit(oldp+113,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5a06bcf6__0) 
                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                   >> 0xcU))));
        bufp->chgBit(oldp+114,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h41ceee20__0) 
                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                   >> 0xcU))));
        bufp->chgBit(oldp+115,(((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                    >> 0x1eU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2e86cea5__0))));
        bufp->chgBit(oldp+116,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2e86cea5__0) 
                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                   >> 0x1eU))));
        bufp->chgBit(oldp+117,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall));
        bufp->chgBit(oldp+118,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h84595378__0) 
                                & (IData)((0x30000000U 
                                           == (0x30000000U 
                                               & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst))))));
        bufp->chgBit(oldp+119,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw));
        bufp->chgBit(oldp+120,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs));
        bufp->chgBit(oldp+121,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc));
        bufp->chgBit(oldp+122,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi));
        bufp->chgBit(oldp+123,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi));
        bufp->chgBit(oldp+124,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci));
        bufp->chgBit(oldp+125,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h84595378__0) 
                                & (1U == (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                          >> 0x14U)))));
        bufp->chgBit(oldp+126,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77eb01fa__0) 
                                | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                                   | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0) 
                                      | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70f4116c__0) 
                                         | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
                                            | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd9b03bc2__0))))))));
        bufp->chgBit(oldp+127,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if_id_reg__DOT__flush));
        bufp->chgBit(oldp+128,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ls_mem_reg__DOT__stall));
        bufp->chgCData(oldp+129,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+130,(vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst),32);
        bufp->chgIData(oldp+131,(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_if_pc),32);
        bufp->chgBit(oldp+132,(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_predict));
        bufp->chgBit(oldp+133,(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_if_jal_jalr));
        bufp->chgIData(oldp+134,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res),32);
        bufp->chgIData(oldp+135,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_pc),32);
        bufp->chgIData(oldp+136,(((IData)(4U) + vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_pc)),32);
        bufp->chgIData(oldp+137,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc),32);
        bufp->chgIData(oldp+138,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc),32);
        bufp->chgIData(oldp+139,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst),32);
        bufp->chgBit(oldp+140,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_jump));
        bufp->chgBit(oldp+141,(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_valid));
        bufp->chgBit(oldp+142,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena));
        bufp->chgBit(oldp+143,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_csr_ena));
        bufp->chgCData(oldp+144,((0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                           >> 7U))),5);
        bufp->chgCData(oldp+145,((0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                           >> 0xfU))),5);
        bufp->chgBit(oldp+146,((0x40000033U == vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
        bufp->chgCData(oldp+147,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc),8);
        bufp->chgIData(oldp+148,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc),32);
        bufp->chgIData(oldp+149,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst),32);
        bufp->chgIData(oldp+150,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc),32);
        bufp->chgIData(oldp+151,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1),32);
        bufp->chgIData(oldp+152,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2),32);
        bufp->chgCData(oldp+153,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel),2);
        bufp->chgCData(oldp+154,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel),3);
        bufp->chgBit(oldp+155,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena));
        bufp->chgCData(oldp+156,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr),5);
        bufp->chgCData(oldp+157,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr),5);
        bufp->chgIData(oldp+158,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm),32);
        bufp->chgCData(oldp+159,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl),4);
        bufp->chgCData(oldp+160,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl),2);
        bufp->chgBit(oldp+161,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag));
        bufp->chgBit(oldp+162,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_valid));
        bufp->chgIData(oldp+163,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst),32);
        bufp->chgIData(oldp+164,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data),32);
        bufp->chgCData(oldp+165,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl),4);
        bufp->chgCData(oldp+166,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl),2);
        bufp->chgCData(oldp+167,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl),7);
        bufp->chgBit(oldp+168,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena));
        bufp->chgCData(oldp+169,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr),5);
        bufp->chgSData(oldp+170,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr),12);
        bufp->chgIData(oldp+171,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc),32);
        bufp->chgIData(oldp+172,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc),32);
        bufp->chgBit(oldp+173,(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_valid));
        bufp->chgIData(oldp+174,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst),32);
        bufp->chgIData(oldp+175,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc),32);
        bufp->chgIData(oldp+176,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc),32);
        bufp->chgCData(oldp+177,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl),4);
        bufp->chgCData(oldp+178,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl),2);
        bufp->chgBit(oldp+179,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena));
        bufp->chgCData(oldp+180,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr),5);
        bufp->chgCData(oldp+181,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl),7);
        bufp->chgSData(oldp+182,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr),12);
        bufp->chgBit(oldp+183,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_valid));
        bufp->chgBit(oldp+184,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re));
        bufp->chgIData(oldp+185,(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res),32);
        bufp->chgBit(oldp+186,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_valid));
        bufp->chgIData(oldp+187,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_inst),32);
        bufp->chgIData(oldp+188,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_pc),32);
        bufp->chgIData(oldp+189,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc),32);
        bufp->chgIData(oldp+190,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res),32);
        bufp->chgIData(oldp+191,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data),32);
        bufp->chgCData(oldp+192,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl),2);
        bufp->chgBit(oldp+193,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena));
        bufp->chgCData(oldp+194,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr),5);
        bufp->chgCData(oldp+195,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl),7);
        bufp->chgSData(oldp+196,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr),12);
        bufp->chgBit(oldp+197,(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_valid_o));
        bufp->chgIData(oldp+198,(vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rf_data),32);
        bufp->chgIData(oldp+199,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus),32);
        bufp->chgIData(oldp+200,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mepc),32);
        bufp->chgIData(oldp+201,((vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
                                  << 2U)),32);
        bufp->chgIData(oldp+202,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mcause),32);
        bufp->chgIData(oldp+203,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0U]),32);
        bufp->chgIData(oldp+204,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [1U]),32);
        bufp->chgIData(oldp+205,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [2U]),32);
        bufp->chgIData(oldp+206,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [3U]),32);
        bufp->chgIData(oldp+207,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [4U]),32);
        bufp->chgIData(oldp+208,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [5U]),32);
        bufp->chgIData(oldp+209,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [6U]),32);
        bufp->chgIData(oldp+210,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [7U]),32);
        bufp->chgIData(oldp+211,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [8U]),32);
        bufp->chgIData(oldp+212,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [9U]),32);
        bufp->chgIData(oldp+213,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0xaU]),32);
        bufp->chgIData(oldp+214,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0xbU]),32);
        bufp->chgIData(oldp+215,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0xcU]),32);
        bufp->chgIData(oldp+216,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0xdU]),32);
        bufp->chgIData(oldp+217,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0xeU]),32);
        bufp->chgIData(oldp+218,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0xfU]),32);
        bufp->chgIData(oldp+219,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x10U]),32);
        bufp->chgIData(oldp+220,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x11U]),32);
        bufp->chgIData(oldp+221,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x12U]),32);
        bufp->chgIData(oldp+222,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x13U]),32);
        bufp->chgIData(oldp+223,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x14U]),32);
        bufp->chgIData(oldp+224,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x15U]),32);
        bufp->chgIData(oldp+225,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x16U]),32);
        bufp->chgIData(oldp+226,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x17U]),32);
        bufp->chgIData(oldp+227,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x18U]),32);
        bufp->chgIData(oldp+228,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x19U]),32);
        bufp->chgIData(oldp+229,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x1aU]),32);
        bufp->chgIData(oldp+230,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x1bU]),32);
        bufp->chgIData(oldp+231,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x1cU]),32);
        bufp->chgIData(oldp+232,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x1dU]),32);
        bufp->chgIData(oldp+233,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x1eU]),32);
        bufp->chgIData(oldp+234,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x1fU]),32);
        bufp->chgIData(oldp+235,(vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data),32);
        bufp->chgBit(oldp+236,((0x6fU == (0x7fU & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst))));
        bufp->chgBit(oldp+237,((0x67U == (0x7fU & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst))));
        bufp->chgCData(oldp+238,((0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                           >> 7U))),5);
        bufp->chgBit(oldp+239,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_not_taken_state));
        bufp->chgBit(oldp+240,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_not_taken_state));
        bufp->chgBit(oldp+241,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state));
        bufp->chgBit(oldp+242,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state));
        bufp->chgIData(oldp+243,(((0x100000U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                >> 0xbU)) 
                                  | ((0xff000U & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst) 
                                     | ((0x800U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                   >> 9U)) 
                                        | (0x7feU & 
                                           (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                            >> 0x14U)))))),21);
        bufp->chgSData(oldp+244,(((0x1000U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                              >> 0x13U)) 
                                  | ((0x800U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                            >> 7U)))))),13);
        bufp->chgSData(oldp+245,((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                  >> 0x14U)),12);
        bufp->chgCData(oldp+246,((0x7fU & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst)),7);
        bufp->chgIData(oldp+247,((((- (IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                               >> 0x1fU))) 
                                   << 0x15U) | ((0x100000U 
                                                 & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                    >> 0xbU)) 
                                                | ((0xff000U 
                                                    & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst) 
                                                   | ((0x800U 
                                                       & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                            >> 0x14U))))))),32);
        bufp->chgIData(oldp+248,((((- (IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                               >> 0x1fU))) 
                                   << 0xdU) | ((0x1000U 
                                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                   >> 0x13U)) 
                                               | ((0x800U 
                                                   & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                           >> 7U))))))),32);
        bufp->chgIData(oldp+249,((((- (IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                               >> 0x1fU))) 
                                   << 0xcU) | (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                               >> 0x14U))),32);
        bufp->chgBit(oldp+250,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wbu_forward_en));
        bufp->chgBit(oldp+251,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall));
        bufp->chgIData(oldp+252,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1),32);
        bufp->chgIData(oldp+253,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2),32);
        bufp->chgIData(oldp+254,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2),32);
        bufp->chgIData(oldp+255,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2),32);
        bufp->chgBit(oldp+256,((1U & (((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                           >> 0x1fU)) 
                                       & (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                          >> 0x1fU)) 
                                      | (((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                              >> 0x1fU)) 
                                          & ((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                 >> 0x1fU)) 
                                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2 
                                                >> 0x1fU))) 
                                         | ((vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2)) 
                                            >> 0x1fU))))));
        bufp->chgIData(oldp+257,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2),32);
        bufp->chgQData(oldp+258,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul),64);
        bufp->chgIData(oldp+260,((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul)),32);
        bufp->chgIData(oldp+261,((IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+262,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div),32);
        bufp->chgIData(oldp+263,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__rem),32);
        bufp->chgIData(oldp+264,(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr),32);
        bufp->chgBit(oldp+265,(((0x94U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                | ((0xc8U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                   | (0xa4U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))))));
        bufp->chgBit(oldp+266,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_id_ex_reg__DOT__stall));
        bufp->chgCData(oldp+267,((0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+268,((0x7fU & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)),7);
        bufp->chgCData(oldp+269,((7U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+270,((vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                  >> 0x19U)),7);
        bufp->chgSData(oldp+271,((vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                  >> 0x14U)),12);
        bufp->chgIData(oldp+272,(((0x80000U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                               >> 0xcU)) 
                                  | ((0x7f800U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                            >> 0x15U)))))),20);
        bufp->chgIData(oldp+273,((vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                  >> 0xcU)),20);
        bufp->chgSData(oldp+274,(((0xfe0U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                             >> 0x14U)) 
                                  | (0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                              >> 7U)))),12);
        bufp->chgSData(oldp+275,(((0x800U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                             >> 0x14U)) 
                                  | ((0x400U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                << 3U)) 
                                     | ((0x3f0U & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                   >> 0x15U)) 
                                        | (0xfU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                   >> 8U)))))),12);
        bufp->chgIData(oldp+276,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ifu__DOT__pc),32);
        bufp->chgBit(oldp+277,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__data_ok));
        bufp->chgCData(oldp+278,((3U & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res)),2);
        bufp->chgBit(oldp+279,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_mem__DOT__data_ok));
        bufp->chgCData(oldp+280,((0xffU & vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data)),8);
        bufp->chgSData(oldp+281,((0xffffU & vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data)),16);
        bufp->chgIData(oldp+282,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0]),32);
        bufp->chgIData(oldp+283,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[1]),32);
        bufp->chgIData(oldp+284,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[2]),32);
        bufp->chgIData(oldp+285,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[3]),32);
        bufp->chgIData(oldp+286,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[4]),32);
        bufp->chgIData(oldp+287,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[5]),32);
        bufp->chgIData(oldp+288,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[6]),32);
        bufp->chgIData(oldp+289,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[7]),32);
        bufp->chgIData(oldp+290,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[8]),32);
        bufp->chgIData(oldp+291,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[9]),32);
        bufp->chgIData(oldp+292,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[10]),32);
        bufp->chgIData(oldp+293,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[11]),32);
        bufp->chgIData(oldp+294,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[12]),32);
        bufp->chgIData(oldp+295,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[13]),32);
        bufp->chgIData(oldp+296,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[14]),32);
        bufp->chgIData(oldp+297,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[15]),32);
        bufp->chgIData(oldp+298,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[16]),32);
        bufp->chgIData(oldp+299,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[17]),32);
        bufp->chgIData(oldp+300,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[18]),32);
        bufp->chgIData(oldp+301,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[19]),32);
        bufp->chgIData(oldp+302,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[20]),32);
        bufp->chgIData(oldp+303,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[21]),32);
        bufp->chgIData(oldp+304,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[22]),32);
        bufp->chgIData(oldp+305,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[23]),32);
        bufp->chgIData(oldp+306,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[24]),32);
        bufp->chgIData(oldp+307,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[25]),32);
        bufp->chgIData(oldp+308,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[26]),32);
        bufp->chgIData(oldp+309,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[27]),32);
        bufp->chgIData(oldp+310,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[28]),32);
        bufp->chgIData(oldp+311,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[29]),32);
        bufp->chgIData(oldp+312,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[30]),32);
        bufp->chgIData(oldp+313,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[31]),32);
        bufp->chgIData(oldp+314,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__read_csr_data),32);
        bufp->chgIData(oldp+315,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data),32);
        bufp->chgIData(oldp+316,(((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                   ? 0xbU : 0U)),32);
        bufp->chgIData(oldp+317,((vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data 
                                  | vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__read_csr_data)),32);
        bufp->chgIData(oldp+318,(((~ vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data) 
                                  & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__read_csr_data)),32);
        bufp->chgCData(oldp+319,((0xfU & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))),4);
        bufp->chgBit(oldp+320,(((0x300U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                   >> 2U))));
        bufp->chgBit(oldp+321,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr));
        bufp->chgBit(oldp+322,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie));
        bufp->chgBit(oldp+323,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie));
        bufp->chgCData(oldp+324,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp),2);
        bufp->chgBit(oldp+325,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena));
        bufp->chgBit(oldp+326,((1U & ((~ ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                          >> 1U)) & 
                                      ((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                        ? (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)
                                        : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                            ? (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data 
                                               >> 3U)
                                            : (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)))))));
        bufp->chgBit(oldp+327,((1U & ((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                       ? (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)
                                       : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                          | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                              ? (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data 
                                                 >> 7U)
                                              : (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)))))));
        bufp->chgCData(oldp+328,(((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                   ? 3U : ((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                            ? 0U : 
                                           (3U & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                                   ? 
                                                  (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data 
                                                   >> 0xdU)
                                                   : (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp)))))),2);
        bufp->chgBit(oldp+329,((1U & (((0x305U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                       & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                          >> 2U)) | 
                                      ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 1U)))));
        bufp->chgBit(oldp+330,(((0x305U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                   >> 3U))));
        bufp->chgIData(oldp+331,(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mtvec_base),30);
        bufp->chgBit(oldp+332,((1U & (((0x341U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                       & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                          >> 2U)) | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl)))));
        bufp->chgBit(oldp+333,((1U & (((0x341U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                       & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                          >> 3U)) | 
                                      ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 1U)))));
        bufp->chgBit(oldp+334,(((0x342U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                   >> 2U))));
        bufp->chgBit(oldp+335,(((0x342U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                   >> 3U))));
    }
    bufp->chgBit(oldp+336,(vlSelf->clk));
    bufp->chgBit(oldp+337,(vlSelf->rst));
    bufp->chgIData(oldp+338,((((~ (IData)(vlSelf->rst)) 
                               & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr))
                               ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr]
                               : 0U)),32);
    bufp->chgIData(oldp+339,((((~ (IData)(vlSelf->rst)) 
                               & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena))
                               ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr]
                               : 0U)),32);
    bufp->chgIData(oldp+340,((((~ (IData)(vlSelf->rst)) 
                               & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena))
                               ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr]
                               : 0U)),32);
    bufp->chgIData(oldp+341,(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re)
                               ? ((IData)(vlSelf->rst)
                                   ? 0U : ((8U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                            ? ((4U 
                                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                     ? 0U
                                                     : 
                                                    (0xffffU 
                                                     & vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                     ? 
                                                    (0xffU 
                                                     & vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data)
                                                     : 0U))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                     ? vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data
                                                     : 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data 
                                                                     >> 0xfU)))) 
                                                      << 0x10U) 
                                                     | (0xffffU 
                                                        & vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data))
                                                     : 0U)))
                                            : 0U)) : 0U)),32);
    bufp->chgIData(oldp+342,((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr) 
                               & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                                  == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr)))
                               ? vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
                               : (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr) 
                                   & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                                      == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))
                                   ? vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res
                                   : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgTmp_h15760a56__0)
                                       ? vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rf_data
                                       : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr)
                                           ? (((~ (IData)(vlSelf->rst)) 
                                               & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr))
                                               ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                              [vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr]
                                               : 0U)
                                           : vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_pc))))),32);
    bufp->chgBit(oldp+343,(((~ ((IData)(vlSelf->rst) 
                                & (0U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)))) 
                            & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena) 
                               & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag) 
                                  & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr) 
                                     == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))))));
    bufp->chgBit(oldp+344,(((~ ((IData)(vlSelf->rst) 
                                & (0U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)))) 
                            & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena) 
                               & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag) 
                                  & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr) 
                                     == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))))));
    bufp->chgCData(oldp+345,(((IData)(vlSelf->rst) ? 0U
                               : ((0U == (3U & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                   ? 3U : ((2U == (3U 
                                                   & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                            ? 0xcU : 0U)))),4);
    bufp->chgIData(oldp+346,(((IData)(vlSelf->rst) ? 0U
                               : ((8U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                   ? ((4U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                       ? ((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                           ? ((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                               ? 0U
                                               : (0xffffU 
                                                  & vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data))
                                           : ((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                               ? (0xffU 
                                                  & vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data)
                                               : 0U))
                                       : ((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                           ? ((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                               ? vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data
                                               : ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data)))
                                           : ((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                               ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data))
                                               : 0U)))
                                   : 0U))),32);
}

void Vysyx_25060170_fishtailcore___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root__trace_cleanup\n"); );
    // Init
    Vysyx_25060170_fishtailcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25060170_fishtailcore___024root*>(voidSelf);
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
