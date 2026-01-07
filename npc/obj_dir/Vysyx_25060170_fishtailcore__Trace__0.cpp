// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vysyx_25060170_fishtailcore__Syms.h"


void Vysyx_25060170_fishtailcore___024root__trace_chg_0_sub_0(Vysyx_25060170_fishtailcore___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_25060170_fishtailcore___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root__trace_chg_0\n"); );
    // Body
    Vysyx_25060170_fishtailcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25060170_fishtailcore___024root*>(voidSelf);
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vysyx_25060170_fishtailcore___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_25060170_fishtailcore___024root__trace_chg_0_sub_0(Vysyx_25060170_fishtailcore___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root__trace_chg_0_sub_0\n"); );
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgCData(oldp+0,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_addr_o),5);
        bufp->chgBit(oldp+1,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o));
        bufp->chgBit(oldp+2,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__branch_o));
        bufp->chgBit(oldp+3,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_stall));
        bufp->chgCData(oldp+4,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_addr),5);
        bufp->chgBit(oldp+5,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_ena));
        bufp->chgCData(oldp+6,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_addr),5);
        bufp->chgBit(oldp+7,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_ena));
        bufp->chgBit(oldp+8,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rd_ena));
        bufp->chgCData(oldp+9,(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rd_ena)
                                 ? (0x0000001fU & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                   >> 7U))
                                 : 0U)),5);
        bufp->chgCData(oldp+10,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc),8);
        bufp->chgCData(oldp+11,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_lsctl),4);
        bufp->chgCData(oldp+12,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_wbctl),2);
        bufp->chgCData(oldp+13,(((2U & ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                                        | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr))) 
                                           | (- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc)))))) 
                                 | (1U & (- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_ena)))))),2);
        bufp->chgCData(oldp+14,(((2U & ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                                        | (- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr))))) 
                                 | ((4U & (- (IData)(
                                                     ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__) 
                                                      | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_25) 
                                                         | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__5__KET__) 
                                                            | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__) 
                                                               | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_27)))))))) 
                                    | (1U & (- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_ena))))))),3);
        bufp->chgBit(oldp+15,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_load_flag));
        bufp->chgBit(oldp+16,(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_24) 
                               | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)))));
        bufp->chgIData(oldp+17,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__imm),32);
        bufp->chgIData(oldp+18,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__ex_ls_forward_data),32);
        bufp->chgSData(oldp+19,(((0U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgRegularize_ha169a72f_0_2))
                                  ? (0x00000fffU & vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm)
                                  : 0U)),12);
        bufp->chgCData(oldp+20,((((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena) 
                                  << 6U) | (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena) 
                                             << 5U) 
                                            | (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena) 
                                                << 4U) 
                                               | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgRegularize_ha169a72f_0_2))))),7);
        bufp->chgBit(oldp+21,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_valid));
        bufp->chgBit(oldp+22,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__re));
        bufp->chgBit(oldp+23,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__we));
        bufp->chgIData(oldp+24,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_dpic_data),32);
        bufp->chgIData(oldp+25,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__raddr),32);
        bufp->chgCData(oldp+26,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen),8);
        bufp->chgBit(oldp+27,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__wbu_dpic_ls_valid));
        bufp->chgBit(oldp+28,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__wbu_dpic_id_stall));
        bufp->chgBit(oldp+29,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jal_jalr_temp));
        bufp->chgIData(oldp+30,(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal)
                                  ? ((((0x00000ffeU 
                                        & ((- (IData)(
                                                      (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                       >> 0x0000001fU))) 
                                           << 1U)) 
                                       | (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                          >> 0x0000001fU)) 
                                      << 0x00000014U) 
                                     | ((((0x000001feU 
                                           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                              >> 0x0000000bU)) 
                                          | (1U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                   >> 0x00000014U))) 
                                         << 0x0000000bU) 
                                        | (0x000007feU 
                                           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                              >> 0x00000014U))))
                                  : ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__branch_o)
                                      ? (((- (IData)(
                                                     (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                      >> 0x0000001fU))) 
                                          << 0x0000000dU) 
                                         | ((((2U & 
                                               (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                >> 0x0000001eU)) 
                                              | (1U 
                                                 & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                    >> 7U))) 
                                             << 0x0000000bU) 
                                            | ((0x000007e0U 
                                                & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                   >> 0x00000014U)) 
                                               | (0x0000001eU 
                                                  & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                     >> 7U)))))
                                      : ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgRegularize_hf5181b73_0_2)
                                          ? 0U : ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                                >> 0x0000001fU))) 
                                                    << 0x0000000cU) 
                                                   | (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                      >> 0x00000014U))
                                                   : 4U))))),32);
        bufp->chgBit(oldp+31,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal));
        bufp->chgBit(oldp+32,(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_addr_o) 
                               == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr))));
        bufp->chgBit(oldp+33,(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_addr_o) 
                               == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr))));
        bufp->chgIData(oldp+34,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res),32);
        bufp->chgBit(oldp+35,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena));
        bufp->chgBit(oldp+36,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena));
        bufp->chgBit(oldp+37,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena));
        bufp->chgBit(oldp+38,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena));
        bufp->chgBit(oldp+39,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena));
        bufp->chgBit(oldp+40,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena));
        bufp->chgBit(oldp+41,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena));
        bufp->chgBit(oldp+42,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__branch));
        bufp->chgBit(oldp+43,((((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward) 
                                & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena)) 
                               | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward) 
                                  & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_csr_ena)))));
        bufp->chgBit(oldp+44,((((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward) 
                                & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena)) 
                               | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward) 
                                  & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_csr_ena)))));
        bufp->chgBit(oldp+45,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward));
        bufp->chgBit(oldp+46,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward));
        bufp->chgBit(oldp+47,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward));
        bufp->chgBit(oldp+48,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward));
        bufp->chgBit(oldp+49,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward));
        bufp->chgBit(oldp+50,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward));
        bufp->chgBit(oldp+51,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_forward_ena));
        bufp->chgBit(oldp+52,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op2_forward_ena));
        bufp->chgIData(oldp+53,(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_jump)
                                  ? 4U : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__imm)),32);
        bufp->chgCData(oldp+54,(((((((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__) 
                                     << 3U) | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__6__KET__) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__5__KET__) 
                                       << 1U) | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__4__KET__))) 
                                  << 4U) | ((((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__3__KET__) 
                                              << 3U) 
                                             | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__branch) 
                                                << 2U)) 
                                            | (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__))))),8);
        bufp->chgBit(oldp+55,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui));
        bufp->chgBit(oldp+56,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc));
        bufp->chgBit(oldp+57,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal));
        bufp->chgBit(oldp+58,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr));
        bufp->chgBit(oldp+59,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sb));
        bufp->chgBit(oldp+60,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sh));
        bufp->chgBit(oldp+61,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sw));
        bufp->chgBit(oldp+62,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sd));
        bufp->chgBit(oldp+63,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lb));
        bufp->chgBit(oldp+64,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lh));
        bufp->chgBit(oldp+65,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lw));
        bufp->chgBit(oldp+66,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ld));
        bufp->chgBit(oldp+67,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lbu));
        bufp->chgBit(oldp+68,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lhu));
        bufp->chgBit(oldp+69,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lwu));
        bufp->chgBit(oldp+70,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_beq));
        bufp->chgBit(oldp+71,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bne));
        bufp->chgBit(oldp+72,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_blt));
        bufp->chgBit(oldp+73,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bge));
        bufp->chgBit(oldp+74,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bltu));
        bufp->chgBit(oldp+75,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bgeu));
        bufp->chgBit(oldp+76,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_add));
        bufp->chgBit(oldp+77,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sub));
        bufp->chgBit(oldp+78,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sll));
        bufp->chgBit(oldp+79,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_slt));
        bufp->chgBit(oldp+80,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sltu));
        bufp->chgBit(oldp+81,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_xor));
        bufp->chgBit(oldp+82,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srl));
        bufp->chgBit(oldp+83,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sra));
        bufp->chgBit(oldp+84,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_or));
        bufp->chgBit(oldp+85,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_and));
        bufp->chgBit(oldp+86,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_div));
        bufp->chgBit(oldp+87,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_divu));
        bufp->chgBit(oldp+88,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mul));
        bufp->chgBit(oldp+89,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulh));
        bufp->chgBit(oldp+90,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhsu));
        bufp->chgBit(oldp+91,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhu));
        bufp->chgBit(oldp+92,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_rem));
        bufp->chgBit(oldp+93,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_remu));
        bufp->chgBit(oldp+94,(((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                   >> 0x0000000cU)) 
                               & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_86))));
        bufp->chgBit(oldp+95,(((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                   >> 0x0000000cU)) 
                               & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_17))));
        bufp->chgBit(oldp+96,(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_17) 
                               & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                  >> 0x0000000cU))));
        bufp->chgBit(oldp+97,(((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                   >> 0x0000000cU)) 
                               & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_85))));
        bufp->chgBit(oldp+98,(((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                   >> 0x0000000cU)) 
                               & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_19))));
        bufp->chgBit(oldp+99,(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_19) 
                               & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                  >> 0x0000000cU))));
        bufp->chgBit(oldp+100,(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_86) 
                                & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                   >> 0x0000000cU))));
        bufp->chgBit(oldp+101,(((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                    >> 0x0000001eU)) 
                                & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_20))));
        bufp->chgBit(oldp+102,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srai));
        bufp->chgBit(oldp+103,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall));
        bufp->chgBit(oldp+104,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mret));
        bufp->chgBit(oldp+105,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw));
        bufp->chgBit(oldp+106,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs));
        bufp->chgBit(oldp+107,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc));
        bufp->chgBit(oldp+108,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi));
        bufp->chgBit(oldp+109,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi));
        bufp->chgBit(oldp+110,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci));
        bufp->chgBit(oldp+111,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ebreak));
        bufp->chgBit(oldp+112,(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__) 
                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_25) 
                                   | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__5__KET__) 
                                      | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__) 
                                         | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_27)))))));
        bufp->chgCData(oldp+113,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask),4);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgBit(oldp+114,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_if_pc_jump));
        bufp->chgIData(oldp+115,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op1),32);
        bufp->chgIData(oldp+116,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op2),32);
        bufp->chgBit(oldp+117,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__branch_success));
        bufp->chgIData(oldp+118,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__ls_wb_forward_data),32);
        bufp->chgIData(oldp+119,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc),32);
        bufp->chgIData(oldp+120,((0xfffffffeU & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc)),32);
        bufp->chgBit(oldp+121,(((vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op1 
                                 ^ vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op2) 
                                >> 0x0000001fU)));
        bufp->chgBit(oldp+122,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2));
        bufp->chgBit(oldp+123,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2));
        bufp->chgBit(oldp+124,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if_id_reg__DOT__flush));
        bufp->chgIData(oldp+125,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__load_data),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+126,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst),32);
        bufp->chgIData(oldp+127,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__bp_if_pc),32);
        bufp->chgBit(oldp+128,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__bp_predict));
        bufp->chgBit(oldp+129,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__bp_if_jal_jalr));
        bufp->chgIData(oldp+130,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res),32);
        bufp->chgIData(oldp+131,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__pc_i),32);
        bufp->chgIData(oldp+132,(((IData)(4U) + vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__pc_i)),32);
        bufp->chgIData(oldp+133,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_pc),32);
        bufp->chgIData(oldp+134,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc),32);
        bufp->chgIData(oldp+135,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst),32);
        bufp->chgBit(oldp+136,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_jump));
        bufp->chgBit(oldp+137,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena));
        bufp->chgBit(oldp+138,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_csr_ena));
        bufp->chgCData(oldp+139,((0x0000001fU & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                 >> 7U))),5);
        bufp->chgCData(oldp+140,((0x0000001fU & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                 >> 0x0000000fU))),5);
        bufp->chgBit(oldp+141,((0x40000033U == vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
        bufp->chgCData(oldp+142,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc),8);
        bufp->chgIData(oldp+143,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc),32);
        bufp->chgIData(oldp+144,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst),32);
        bufp->chgIData(oldp+145,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc),32);
        bufp->chgIData(oldp+146,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1),32);
        bufp->chgIData(oldp+147,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2),32);
        bufp->chgCData(oldp+148,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel),2);
        bufp->chgCData(oldp+149,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel),3);
        bufp->chgBit(oldp+150,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena));
        bufp->chgCData(oldp+151,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr),5);
        bufp->chgCData(oldp+152,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr),5);
        bufp->chgIData(oldp+153,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm),32);
        bufp->chgCData(oldp+154,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl),4);
        bufp->chgCData(oldp+155,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl),2);
        bufp->chgBit(oldp+156,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag));
        bufp->chgIData(oldp+157,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst),32);
        bufp->chgIData(oldp+158,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data),32);
        bufp->chgCData(oldp+159,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl),4);
        bufp->chgCData(oldp+160,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl),2);
        bufp->chgCData(oldp+161,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl),7);
        bufp->chgBit(oldp+162,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena));
        bufp->chgCData(oldp+163,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr),5);
        bufp->chgSData(oldp+164,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr),12);
        bufp->chgIData(oldp+165,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc),32);
        bufp->chgIData(oldp+166,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc),32);
        bufp->chgIData(oldp+167,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_inst),32);
        bufp->chgIData(oldp+168,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_pc),32);
        bufp->chgIData(oldp+169,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_next_pc),32);
        bufp->chgCData(oldp+170,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_wb_ctl),2);
        bufp->chgIData(oldp+171,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_lsu_res),32);
        bufp->chgIData(oldp+172,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_lsu_wb_data),32);
        bufp->chgBit(oldp+173,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_rd_ena));
        bufp->chgCData(oldp+174,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_rd_addr),5);
        bufp->chgCData(oldp+175,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl),7);
        bufp->chgSData(oldp+176,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_addr),12);
        bufp->chgIData(oldp+177,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wb_rd_data_forward),32);
        bufp->chgIData(oldp+178,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus),32);
        bufp->chgIData(oldp+179,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mepc),32);
        bufp->chgIData(oldp+180,((vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
                                  << 2U)),32);
        bufp->chgIData(oldp+181,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mcause),32);
        bufp->chgIData(oldp+182,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0U]),32);
        bufp->chgIData(oldp+183,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [1U]),32);
        bufp->chgIData(oldp+184,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [2U]),32);
        bufp->chgIData(oldp+185,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [3U]),32);
        bufp->chgIData(oldp+186,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [4U]),32);
        bufp->chgIData(oldp+187,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [5U]),32);
        bufp->chgIData(oldp+188,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [6U]),32);
        bufp->chgIData(oldp+189,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [7U]),32);
        bufp->chgIData(oldp+190,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [8U]),32);
        bufp->chgIData(oldp+191,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [9U]),32);
        bufp->chgIData(oldp+192,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x0aU]),32);
        bufp->chgIData(oldp+193,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x0bU]),32);
        bufp->chgIData(oldp+194,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x0cU]),32);
        bufp->chgIData(oldp+195,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x0dU]),32);
        bufp->chgIData(oldp+196,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x0eU]),32);
        bufp->chgIData(oldp+197,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x0fU]),32);
        bufp->chgIData(oldp+198,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x10U]),32);
        bufp->chgIData(oldp+199,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x11U]),32);
        bufp->chgIData(oldp+200,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x12U]),32);
        bufp->chgIData(oldp+201,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x13U]),32);
        bufp->chgIData(oldp+202,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x14U]),32);
        bufp->chgIData(oldp+203,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x15U]),32);
        bufp->chgIData(oldp+204,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x16U]),32);
        bufp->chgIData(oldp+205,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x17U]),32);
        bufp->chgIData(oldp+206,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x18U]),32);
        bufp->chgIData(oldp+207,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x19U]),32);
        bufp->chgIData(oldp+208,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x1aU]),32);
        bufp->chgIData(oldp+209,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x1bU]),32);
        bufp->chgIData(oldp+210,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x1cU]),32);
        bufp->chgIData(oldp+211,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x1dU]),32);
        bufp->chgIData(oldp+212,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x1eU]),32);
        bufp->chgIData(oldp+213,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x1fU]),32);
        bufp->chgBit(oldp+214,((0x6fU == (0x0000007fU 
                                          & vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst))));
        bufp->chgBit(oldp+215,((0x67U == (0x0000007fU 
                                          & vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst))));
        bufp->chgBit(oldp+216,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__delay));
        bufp->chgIData(oldp+217,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__last_pc),32);
        bufp->chgCData(oldp+218,((0x0000001fU & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                 >> 7U))),5);
        bufp->chgBit(oldp+219,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_not_taken_state));
        bufp->chgBit(oldp+220,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_not_taken_state));
        bufp->chgBit(oldp+221,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state));
        bufp->chgBit(oldp+222,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state));
        bufp->chgIData(oldp+223,(((((0x00000200U & 
                                     (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                      >> 0x00000016U)) 
                                    | ((0x000001feU 
                                        & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                           >> 0x0000000bU)) 
                                       | (1U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                >> 0x00000014U)))) 
                                   << 0x0000000bU) 
                                  | (0x000007feU & 
                                     (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                      >> 0x00000014U)))),21);
        bufp->chgSData(oldp+224,(((((2U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                           >> 0x0000001eU)) 
                                    | (1U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                             >> 7U))) 
                                   << 0x0000000bU) 
                                  | ((0x000007e0U & 
                                      (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                       >> 0x00000014U)) 
                                     | (0x0000001eU 
                                        & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                           >> 7U))))),13);
        bufp->chgSData(oldp+225,((vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                  >> 0x00000014U)),12);
        bufp->chgCData(oldp+226,((0x0000007fU & vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst)),7);
        bufp->chgIData(oldp+227,(((((0x00000ffeU & 
                                     ((- (IData)((vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                  >> 0x0000001fU))) 
                                      << 1U)) | (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                 >> 0x0000001fU)) 
                                   << 0x00000014U) 
                                  | ((((0x000001feU 
                                        & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                           >> 0x0000000bU)) 
                                       | (1U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                >> 0x00000014U))) 
                                      << 0x0000000bU) 
                                     | (0x000007feU 
                                        & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                           >> 0x00000014U))))),32);
        bufp->chgIData(oldp+228,((((- (IData)((vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                               >> 0x0000001fU))) 
                                   << 0x0000000dU) 
                                  | ((((2U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                              >> 0x0000001eU)) 
                                       | (1U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                >> 7U))) 
                                      << 0x0000000bU) 
                                     | ((0x000007e0U 
                                         & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                            >> 0x00000014U)) 
                                        | (0x0000001eU 
                                           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                              >> 7U)))))),32);
        bufp->chgIData(oldp+229,((((- (IData)((vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                               >> 0x0000001fU))) 
                                   << 0x0000000cU) 
                                  | (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                     >> 0x00000014U))),32);
        bufp->chgBit(oldp+230,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wbu_forward_en));
        bufp->chgIData(oldp+231,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1),32);
        bufp->chgIData(oldp+232,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2),32);
        bufp->chgIData(oldp+233,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2),32);
        bufp->chgIData(oldp+234,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2),32);
        bufp->chgBit(oldp+235,((1U & (((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                           >> 0x0000001fU)) 
                                       & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                          >> 0x0000001fU)) 
                                      | (((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                              >> 0x0000001fU)) 
                                          & ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                 >> 0x0000001fU)) 
                                             & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2 
                                                >> 0x0000001fU))) 
                                         | ((vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                             & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2)) 
                                            >> 0x0000001fU))))));
        bufp->chgIData(oldp+236,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2),32);
        bufp->chgQData(oldp+237,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul),64);
        bufp->chgIData(oldp+239,((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul)),32);
        bufp->chgIData(oldp+240,((IData)((vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul 
                                          >> 0x00000020U))),32);
        bufp->chgIData(oldp+241,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div),32);
        bufp->chgIData(oldp+242,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__rem),32);
        bufp->chgIData(oldp+243,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr),32);
        bufp->chgBit(oldp+244,(((0x94U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                | ((0xc8U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                   | (0xa4U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))))));
        bufp->chgCData(oldp+245,((0x0000001fU & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                 >> 0x00000014U))),5);
        bufp->chgCData(oldp+246,((0x0000007fU & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)),7);
        bufp->chgCData(oldp+247,((7U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                        >> 0x0000000cU))),3);
        bufp->chgCData(oldp+248,((vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                  >> 0x00000019U)),7);
        bufp->chgSData(oldp+249,((vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                  >> 0x00000014U)),12);
        bufp->chgIData(oldp+250,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__j_imm),20);
        bufp->chgIData(oldp+251,((vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                  >> 0x0000000cU)),20);
        bufp->chgSData(oldp+252,(((0x00000fe0U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                  >> 0x00000014U)) 
                                  | (0x0000001fU & 
                                     (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                      >> 7U)))),12);
        bufp->chgSData(oldp+253,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__b_imm),12);
        bufp->chgIData(oldp+254,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ifu__DOT__pc),32);
        bufp->chgBit(oldp+255,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__data_ok));
        bufp->chgCData(oldp+256,((3U & vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res)),2);
        bufp->chgIData(oldp+257,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0]),32);
        bufp->chgIData(oldp+258,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[1]),32);
        bufp->chgIData(oldp+259,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[2]),32);
        bufp->chgIData(oldp+260,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[3]),32);
        bufp->chgIData(oldp+261,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[4]),32);
        bufp->chgIData(oldp+262,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[5]),32);
        bufp->chgIData(oldp+263,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[6]),32);
        bufp->chgIData(oldp+264,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[7]),32);
        bufp->chgIData(oldp+265,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[8]),32);
        bufp->chgIData(oldp+266,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[9]),32);
        bufp->chgIData(oldp+267,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[10]),32);
        bufp->chgIData(oldp+268,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[11]),32);
        bufp->chgIData(oldp+269,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[12]),32);
        bufp->chgIData(oldp+270,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[13]),32);
        bufp->chgIData(oldp+271,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[14]),32);
        bufp->chgIData(oldp+272,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[15]),32);
        bufp->chgIData(oldp+273,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[16]),32);
        bufp->chgIData(oldp+274,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[17]),32);
        bufp->chgIData(oldp+275,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[18]),32);
        bufp->chgIData(oldp+276,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[19]),32);
        bufp->chgIData(oldp+277,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[20]),32);
        bufp->chgIData(oldp+278,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[21]),32);
        bufp->chgIData(oldp+279,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[22]),32);
        bufp->chgIData(oldp+280,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[23]),32);
        bufp->chgIData(oldp+281,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[24]),32);
        bufp->chgIData(oldp+282,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[25]),32);
        bufp->chgIData(oldp+283,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[26]),32);
        bufp->chgIData(oldp+284,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[27]),32);
        bufp->chgIData(oldp+285,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[28]),32);
        bufp->chgIData(oldp+286,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[29]),32);
        bufp->chgIData(oldp+287,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[30]),32);
        bufp->chgIData(oldp+288,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[31]),32);
        bufp->chgIData(oldp+289,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__read_csr_data),32);
        bufp->chgIData(oldp+290,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__write_csr_data),32);
        bufp->chgIData(oldp+291,(((2U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl))
                                   ? 0x0000000bU : 0U)),32);
        bufp->chgIData(oldp+292,((vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_lsu_res 
                                  | vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__read_csr_data)),32);
        bufp->chgIData(oldp+293,(((~ vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_lsu_res) 
                                  & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__read_csr_data)),32);
        bufp->chgCData(oldp+294,((0x0000000fU & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl))),4);
        bufp->chgBit(oldp+295,(((0x0300U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_addr)) 
                                & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                   >> 2U))));
        bufp->chgBit(oldp+296,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr));
        bufp->chgBit(oldp+297,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie));
        bufp->chgBit(oldp+298,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie));
        bufp->chgCData(oldp+299,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp),2);
        bufp->chgBit(oldp+300,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena));
        bufp->chgBit(oldp+301,((1U & ((~ ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                          >> 1U)) & 
                                      ((1U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl))
                                        ? (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)
                                        : ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                            ? (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__write_csr_data 
                                               >> 3U)
                                            : (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)))))));
        bufp->chgBit(oldp+302,((1U & ((2U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl))
                                       ? (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)
                                       : ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                          | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                              ? (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__write_csr_data 
                                                 >> 7U)
                                              : (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)))))));
        bufp->chgCData(oldp+303,(((2U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl))
                                   ? 3U : ((1U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl))
                                            ? 0U : 
                                           (3U & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                                   ? 
                                                  (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__write_csr_data 
                                                   >> 0x0000000dU)
                                                   : (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp)))))),2);
        bufp->chgBit(oldp+304,((1U & (((0x0305U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_addr)) 
                                       & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                          >> 2U)) | 
                                      ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                       >> 1U)))));
        bufp->chgBit(oldp+305,(((0x0305U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_addr)) 
                                & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                   >> 3U))));
        bufp->chgIData(oldp+306,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mtvec_base),30);
        bufp->chgBit(oldp+307,((1U & (((0x0341U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_addr)) 
                                       & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                          >> 2U)) | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl)))));
        bufp->chgBit(oldp+308,((1U & (((0x0341U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_addr)) 
                                       & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                          >> 3U)) | 
                                      ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                       >> 1U)))));
        bufp->chgBit(oldp+309,(((0x0342U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_addr)) 
                                & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                   >> 2U))));
        bufp->chgBit(oldp+310,(((0x0342U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_addr)) 
                                & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl) 
                                   >> 3U))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+311,(vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ls_data),32);
        bufp->chgCData(oldp+312,((0x000000ffU & vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ls_data)),8);
        bufp->chgSData(oldp+313,((0x0000ffffU & vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ls_data)),16);
    }
    bufp->chgBit(oldp+314,(vlSelfRef.clk));
    bufp->chgBit(oldp+315,(vlSelfRef.rst));
    bufp->chgIData(oldp+316,((((~ (IData)(vlSelfRef.rst)) 
                               & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o))
                               ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_addr_o]
                               : 0U)),32);
    bufp->chgIData(oldp+317,(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_if_pc_jump)
                               ? (((0x42U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                                    ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op1
                                    : vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_pc) 
                                  + ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_jump)
                                      ? 4U : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__imm))
                               : 0U)),32);
    bufp->chgIData(oldp+318,((((~ (IData)(vlSelfRef.rst)) 
                               & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_ena))
                               ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_addr]
                               : 0U)),32);
    bufp->chgIData(oldp+319,((((~ (IData)(vlSelfRef.rst)) 
                               & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_ena))
                               ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_addr]
                               : 0U)),32);
    bufp->chgIData(oldp+320,((((0x21U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                               | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_if_pc_jump))
                               ? (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__imm 
                                  + vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_pc)
                               : ((0x42U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                                   ? (0xfffffffeU & 
                                      (vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op1 
                                       + vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__imm))
                                   : vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc))),32);
    bufp->chgIData(oldp+321,(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__re)
                               ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__load_data
                               : 0U)),32);
    bufp->chgIData(oldp+322,((((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o) 
                               & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_addr_o) 
                                  == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr)))
                               ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__ls_wb_forward_data
                               : (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o) 
                                   & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_addr_o) 
                                      == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))
                                   ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__ex_ls_forward_data
                                   : ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgRegularize_hf5181b73_0_2)
                                       ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wb_rd_data_forward
                                       : ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o)
                                           ? (((~ (IData)(vlSelfRef.rst)) 
                                               & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o))
                                               ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                              [vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_addr_o]
                                               : 0U)
                                           : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__pc_i))))),32);
    bufp->chgBit(oldp+323,(((~ ((IData)(vlSelfRef.rst) 
                                & (0U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)))) 
                            & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_ena) 
                               & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag) 
                                  & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_addr) 
                                     == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))))));
    bufp->chgBit(oldp+324,(((~ ((IData)(vlSelfRef.rst) 
                                & (0U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)))) 
                            & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_ena) 
                               & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag) 
                                  & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_addr) 
                                     == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))))));
    bufp->chgIData(oldp+325,((((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward))) 
                               & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__ex_ls_forward_data) 
                              | (((- (IData)(((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward)) 
                                              & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward)))) 
                                  & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__ls_wb_forward_data) 
                                 | ((- (IData)(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward) 
                                                & ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward)) 
                                                   & (~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward)))))) 
                                    & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wb_rd_data_forward)))),32);
    bufp->chgIData(oldp+326,((((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward))) 
                               & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__ex_ls_forward_data) 
                              | (((- (IData)(((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward)) 
                                              & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward)))) 
                                  & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__ls_wb_forward_data) 
                                 | ((- (IData)(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward) 
                                                & ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward)) 
                                                   & (~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward)))))) 
                                    & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wb_rd_data_forward)))),32);
    bufp->chgIData(oldp+327,(((0x42U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                               ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op1
                               : vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_pc)),32);
    bufp->chgCData(oldp+328,(((IData)(vlSelfRef.rst)
                               ? 0U : ((0U == (3U & vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                        ? 3U : ((2U 
                                                 == 
                                                 (3U 
                                                  & vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                                 ? 0x0cU
                                                 : 0U)))),4);
}

void Vysyx_25060170_fishtailcore___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root__trace_cleanup\n"); );
    // Body
    Vysyx_25060170_fishtailcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25060170_fishtailcore___024root*>(voidSelf);
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
