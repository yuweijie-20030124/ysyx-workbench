// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_25060170_topcore__Syms.h"


void Vysyx_25060170_topcore___024root__trace_chg_0_sub_0(Vysyx_25060170_topcore___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_25060170_topcore___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root__trace_chg_0\n"); );
    // Init
    Vysyx_25060170_topcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25060170_topcore___024root*>(voidSelf);
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_25060170_topcore___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_25060170_topcore___024root__trace_chg_0_sub_0(Vysyx_25060170_topcore___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root__trace_chg_0_sub_0\n"); );
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ready));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+1,(vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_mem_re));
        bufp->chgBit(oldp+2,(vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_we));
        bufp->chgIData(oldp+3,(vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_data),32);
        bufp->chgCData(oldp+4,(vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_wlen),8);
        bufp->chgIData(oldp+5,(vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_raddr),32);
        bufp->chgIData(oldp+6,(vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_dpi_ls_mem_skip_flag),32);
        bufp->chgIData(oldp+7,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_imm),32);
        bufp->chgIData(oldp+8,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__mem_data),32);
        bufp->chgBit(oldp+9,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__btb_valid));
        bufp->chgIData(oldp+10,(((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__check_branch1)
                                  ? ((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[3U] 
                                      << 0x1cU) | (
                                                   vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[2U] 
                                                   >> 4U))
                                  : ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__check_branch2)
                                      ? ((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[1U] 
                                          << 0x1cU) 
                                         | (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[0U] 
                                            >> 4U))
                                      : 0U))),32);
        bufp->chgBit(oldp+11,((1U & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_read__DOT__fsm_state) 
                                     >> 1U))));
        bufp->chgBit(oldp+12,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ready));
        bufp->chgBit(oldp+13,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_stall));
        bufp->chgBit(oldp+14,((1U & (~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ready)))));
        bufp->chgBit(oldp+15,((1U & ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ready)) 
                                     | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_valid)))));
        bufp->chgCData(oldp+16,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_addr),5);
        bufp->chgBit(oldp+17,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_ena));
        bufp->chgCData(oldp+18,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_addr),5);
        bufp->chgBit(oldp+19,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_ena));
        bufp->chgSData(oldp+20,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_addr),12);
        bufp->chgBit(oldp+21,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rd_ena));
        bufp->chgCData(oldp+22,(((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rd_ena)
                                  ? (0x1fU & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                              >> 7U))
                                  : 0U)),5);
        bufp->chgCData(oldp+23,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc),8);
        bufp->chgCData(oldp+24,((0xfU & ((1U & (- (IData)(
                                                          (0x41U 
                                                           == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                         | ((2U & (- (IData)(
                                                             (0x82U 
                                                              == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                            | ((4U 
                                                & (- (IData)(
                                                             (0x81U 
                                                              == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                               | ((5U 
                                                   & (- (IData)(
                                                                (7U 
                                                                 == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                                  | ((9U 
                                                      & (- (IData)(
                                                                   (0x1aU 
                                                                    == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                                     | ((0xaU 
                                                         & (- (IData)(
                                                                      (0x34U 
                                                                       == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                                        | ((0xbU 
                                                            & (- (IData)(
                                                                         (0x68U 
                                                                          == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                                           | ((0xcU 
                                                               & (- (IData)(
                                                                            (0xd0U 
                                                                             == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                                              | ((0xdU 
                                                                  & (- (IData)(
                                                                               (0xbU 
                                                                                == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                                                 | ((0xeU 
                                                                     & (- (IData)(
                                                                                (0x16U 
                                                                                == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                                                    | (- (IData)(
                                                                                (0x2cU 
                                                                                == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc)))))))))))))))),4);
        bufp->chgCData(oldp+25,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_wbctl),2);
        bufp->chgCData(oldp+26,(((2U & ((- (IData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                                        | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr))) 
                                           | (- (IData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc)))))) 
                                 | (1U & (- (IData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_ena)))))),2);
        bufp->chgCData(oldp+27,(((2U & ((- (IData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                                        | (- (IData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr))))) 
                                 | ((4U & (- (IData)(
                                                     ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_ena)) 
                                                      & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__) 
                                                         | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_26) 
                                                            | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__5__KET__) 
                                                               | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__) 
                                                                  | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_28))))))))) 
                                    | ((1U & (- (IData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_ena)))) 
                                       | (3U & (- (IData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_ena)))))))),3);
        bufp->chgBit(oldp+28,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_load_flag));
        bufp->chgBit(oldp+29,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_ena));
        bufp->chgIData(oldp+30,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_op1),32);
        bufp->chgIData(oldp+31,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_op2),32);
        bufp->chgIData(oldp+32,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_next_pc),32);
        bufp->chgBit(oldp+33,((1U & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_btb_mispredicted) 
                                     | ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_23)) 
                                        | ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_bpupredict)) 
                                           & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__inst_jxx)))))));
        bufp->chgBit(oldp+34,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_BPU_update));
        bufp->chgIData(oldp+35,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_btb_updateTarget),32);
        bufp->chgBit(oldp+36,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_btb_mispredicted));
        bufp->chgIData(oldp+37,(((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_23)
                                  ? ((0x42U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                                      ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_op1
                                      : ((0x21U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                                          ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_28
                                          : (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__inst_bxx) 
                                              & ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__now_bxx_jump_yes)) 
                                                 & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_bpupredict)))
                                              ? ((IData)(4U) 
                                                 + vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc)
                                              : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_22)))
                                  : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_next_pc)),32);
        bufp->chgBit(oldp+38,((1U & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__inst_jxx) 
                                     | ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_23)) 
                                        | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__inst_bxx) 
                                           & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_btb_mispredicted)))))));
        bufp->chgBit(oldp+39,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_valid));
        bufp->chgIData(oldp+40,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__exu_res),32);
        bufp->chgSData(oldp+41,(((0U != (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgRegularize_h788ac90a_0_6))
                                  ? (0xfffU & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm)
                                  : 0U)),12);
        bufp->chgCData(oldp+42,((((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena) 
                                  << 6U) | (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena) 
                                             << 5U) 
                                            | (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena) 
                                                << 4U) 
                                               | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgRegularize_h788ac90a_0_6))))),7);
        bufp->chgBit(oldp+43,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_valid));
        bufp->chgIData(oldp+44,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_data),32);
        bufp->chgIData(oldp+45,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_rd_data_forward),32);
        bufp->chgIData(oldp+46,((((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_ena) 
                                  & (0x300U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_addr)))
                                  ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus
                                  : (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_ena) 
                                      & (0x305U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_addr)))
                                      ? (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
                                         << 2U) : (
                                                   ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_ena) 
                                                    & (0x341U 
                                                       == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_addr)))
                                                    ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mepc
                                                    : 
                                                   (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_ena) 
                                                     & (0x342U 
                                                        == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_addr)))
                                                     ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mcause
                                                     : 
                                                    (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_ena) 
                                                      & (0xf12U 
                                                         == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_addr)))
                                                      ? 0U
                                                      : 
                                                     (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_ena) 
                                                       & (0x340U 
                                                          == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_addr)))
                                                       ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mscratch
                                                       : 0U))))))),32);
        bufp->chgWData(oldp+47,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set),128);
        bufp->chgWData(oldp+51,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__write_set),128);
        bufp->chgBit(oldp+55,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__check_branch1));
        bufp->chgBit(oldp+56,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__check_branch2));
        bufp->chgBit(oldp+57,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__new_entry));
        bufp->chgBit(oldp+58,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__insert_branch1));
        bufp->chgBit(oldp+59,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__insert_branch2));
        bufp->chgBit(oldp+60,((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[3U] 
                               >> 0x1fU)));
        bufp->chgBit(oldp+61,((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[1U] 
                               >> 0x1fU)));
        bufp->chgIData(oldp+62,((0x7ffffffU & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[3U] 
                                               >> 4U))),27);
        bufp->chgIData(oldp+63,((0x7ffffffU & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[1U] 
                                               >> 4U))),27);
        bufp->chgIData(oldp+64,(((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[3U] 
                                  << 0x1cU) | (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[2U] 
                                               >> 4U))),32);
        bufp->chgIData(oldp+65,(((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[1U] 
                                  << 0x1cU) | (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[0U] 
                                               >> 4U))),32);
        bufp->chgCData(oldp+66,((3U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[2U] 
                                       >> 2U))),2);
        bufp->chgCData(oldp+67,((3U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[0U] 
                                       >> 2U))),2);
        bufp->chgCData(oldp+68,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_read__DOT__fsm_state),2);
        bufp->chgCData(oldp+69,(((8U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[0U] 
                                        << 3U)) | (
                                                   (4U 
                                                    & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[0U] 
                                                       << 1U)) 
                                                   | (3U 
                                                      & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[2U])))),4);
        bufp->chgBit(oldp+70,((1U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_read__DOT__fsm_state))));
        bufp->chgBit(oldp+71,(((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__valid1) 
                               | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__take_branch1))));
        bufp->chgBit(oldp+72,(((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__valid2) 
                               | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__take_branch2))));
        bufp->chgIData(oldp+73,((0x7ffffffU & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__insert_branch1)
                                                ? (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                                                   >> 5U)
                                                : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__tag1))),27);
        bufp->chgIData(oldp+74,((0x7ffffffU & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__insert_branch2)
                                                ? (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                                                   >> 5U)
                                                : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__tag2))),27);
        bufp->chgIData(oldp+75,(((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__take_branch1)
                                  ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_btb_updateTarget
                                  : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__target1)),32);
        bufp->chgIData(oldp+76,(((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__take_branch2)
                                  ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_btb_updateTarget
                                  : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__target2)),32);
        bufp->chgBit(oldp+77,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__take_branch1));
        bufp->chgBit(oldp+78,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__take_branch2));
        bufp->chgCData(oldp+79,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__next_fsm1),2);
        bufp->chgCData(oldp+80,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__next_fsm2),2);
        bufp->chgCData(oldp+81,(((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__insert_branch1)
                                  ? 0U : (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__fsm1))),2);
        bufp->chgCData(oldp+82,(((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__insert_branch2)
                                  ? 0U : (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__fsm2))),2);
        bufp->chgIData(oldp+83,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res),32);
        bufp->chgBit(oldp+84,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena));
        bufp->chgBit(oldp+85,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena));
        bufp->chgBit(oldp+86,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena));
        bufp->chgBit(oldp+87,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena));
        bufp->chgBit(oldp+88,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena));
        bufp->chgBit(oldp+89,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena));
        bufp->chgBit(oldp+90,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena));
        bufp->chgBit(oldp+91,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_id_ex_reg__DOT__stall));
        bufp->chgBit(oldp+92,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__branch));
        bufp->chgBit(oldp+93,((((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward) 
                                & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_25)) 
                               | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward) 
                                  & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_24)))));
        bufp->chgBit(oldp+94,((((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward) 
                                & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_25)) 
                               | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward) 
                                  & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_24)))));
        bufp->chgBit(oldp+95,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward));
        bufp->chgBit(oldp+96,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward));
        bufp->chgBit(oldp+97,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op1_forward));
        bufp->chgBit(oldp+98,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward));
        bufp->chgBit(oldp+99,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward));
        bufp->chgBit(oldp+100,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward));
        bufp->chgBit(oldp+101,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op2_forward));
        bufp->chgBit(oldp+102,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward));
        bufp->chgBit(oldp+103,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_forward_ena));
        bufp->chgBit(oldp+104,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op2_forward_ena));
        bufp->chgIData(oldp+105,(((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward)
                                   ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__exu_res
                                   : ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward)
                                       ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
                                       : ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op1_forward)
                                           ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_rd_data_forward
                                           : ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward)
                                               ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward
                                               : 0U))))),32);
        bufp->chgIData(oldp+106,(((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward)
                                   ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__exu_res
                                   : ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward)
                                       ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
                                       : ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op2_forward)
                                           ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_rd_data_forward
                                           : ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward)
                                               ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward
                                               : 0U))))),32);
        bufp->chgBit(oldp+107,(((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_op1 
                                 ^ vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_op2) 
                                >> 0x1fU)));
        bufp->chgBit(oldp+108,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2));
        bufp->chgBit(oldp+109,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2));
        bufp->chgBit(oldp+110,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__now_bxx_jump_yes));
        bufp->chgBit(oldp+111,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__inst_bxx));
        bufp->chgBit(oldp+112,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__inst_jxx));
        bufp->chgBit(oldp+113,((1U & (~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_23)))));
        bufp->chgCData(oldp+114,((((((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__) 
                                     << 7U) | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__6__KET__) 
                                               << 6U)) 
                                   | (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__5__KET__) 
                                       << 5U) | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__4__KET__) 
                                                 << 4U))) 
                                  | ((((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__3__KET__) 
                                       << 3U) | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__branch) 
                                                 << 2U)) 
                                     | (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                                         << 1U) | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__))))),8);
        bufp->chgBit(oldp+115,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui));
        bufp->chgBit(oldp+116,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc));
        bufp->chgBit(oldp+117,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal));
        bufp->chgBit(oldp+118,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr));
        bufp->chgBit(oldp+119,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sb));
        bufp->chgBit(oldp+120,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sh));
        bufp->chgBit(oldp+121,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sw));
        bufp->chgBit(oldp+122,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sd));
        bufp->chgBit(oldp+123,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lb));
        bufp->chgBit(oldp+124,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lh));
        bufp->chgBit(oldp+125,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lw));
        bufp->chgBit(oldp+126,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ld));
        bufp->chgBit(oldp+127,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lbu));
        bufp->chgBit(oldp+128,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lhu));
        bufp->chgBit(oldp+129,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lwu));
        bufp->chgBit(oldp+130,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_beq));
        bufp->chgBit(oldp+131,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bne));
        bufp->chgBit(oldp+132,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_blt));
        bufp->chgBit(oldp+133,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bge));
        bufp->chgBit(oldp+134,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bltu));
        bufp->chgBit(oldp+135,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bgeu));
        bufp->chgBit(oldp+136,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_add));
        bufp->chgBit(oldp+137,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sub));
        bufp->chgBit(oldp+138,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sll));
        bufp->chgBit(oldp+139,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_slt));
        bufp->chgBit(oldp+140,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sltu));
        bufp->chgBit(oldp+141,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_xor));
        bufp->chgBit(oldp+142,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srl));
        bufp->chgBit(oldp+143,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sra));
        bufp->chgBit(oldp+144,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_or));
        bufp->chgBit(oldp+145,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_and));
        bufp->chgBit(oldp+146,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_div));
        bufp->chgBit(oldp+147,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_divu));
        bufp->chgBit(oldp+148,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mul));
        bufp->chgBit(oldp+149,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulh));
        bufp->chgBit(oldp+150,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhsu));
        bufp->chgBit(oldp+151,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhu));
        bufp->chgBit(oldp+152,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_rem));
        bufp->chgBit(oldp+153,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_remu));
        bufp->chgBit(oldp+154,(((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                    >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_88))));
        bufp->chgBit(oldp+155,(((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                    >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_18))));
        bufp->chgBit(oldp+156,(((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_18) 
                                & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                   >> 0xcU))));
        bufp->chgBit(oldp+157,(((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                    >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_87))));
        bufp->chgBit(oldp+158,(((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                    >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_20))));
        bufp->chgBit(oldp+159,(((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_20) 
                                & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                   >> 0xcU))));
        bufp->chgBit(oldp+160,(((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_88) 
                                & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                   >> 0xcU))));
        bufp->chgBit(oldp+161,(((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                    >> 0x1eU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_21))));
        bufp->chgBit(oldp+162,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srai));
        bufp->chgBit(oldp+163,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall));
        bufp->chgBit(oldp+164,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mret));
        bufp->chgBit(oldp+165,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw));
        bufp->chgBit(oldp+166,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs));
        bufp->chgBit(oldp+167,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc));
        bufp->chgBit(oldp+168,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi));
        bufp->chgBit(oldp+169,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi));
        bufp->chgBit(oldp+170,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci));
        bufp->chgBit(oldp+171,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ebreak));
        bufp->chgBit(oldp+172,(((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__) 
                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_26) 
                                   | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__5__KET__) 
                                      | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__) 
                                         | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_28)))))));
        bufp->chgBit(oldp+173,(((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_ena)) 
                                & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__) 
                                   | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_26) 
                                      | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__5__KET__) 
                                         | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__) 
                                            | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_28))))))));
        bufp->chgBit(oldp+174,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if1if2reg__DOT__stall));
        bufp->chgBit(oldp+175,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if1if2reg__DOT__flush));
        bufp->chgBit(oldp+176,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if2idureg__DOT__stall));
        bufp->chgCData(oldp+177,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+178,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc),32);
        bufp->chgIData(oldp+179,(vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst),32);
        bufp->chgIData(oldp+180,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_inst),32);
        bufp->chgIData(oldp+181,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_pc),32);
        bufp->chgIData(oldp+182,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc),32);
        bufp->chgBit(oldp+183,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_valid_o));
        bufp->chgIData(oldp+184,(vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_DPIC_MEM_data),32);
        bufp->chgIData(oldp+185,(vlSelfRef.ysyx_25060170_topcore__DOT__diff_test_skip_o),32);
        bufp->chgIData(oldp+186,(vlSelfRef.ysyx_25060170_topcore__DOT__dpic_diff_skip_flag_o),32);
        bufp->chgBit(oldp+187,((0x40000033U == vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst)));
        bufp->chgIData(oldp+188,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0U]),32);
        bufp->chgIData(oldp+189,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [1U]),32);
        bufp->chgIData(oldp+190,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [2U]),32);
        bufp->chgIData(oldp+191,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [3U]),32);
        bufp->chgIData(oldp+192,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [4U]),32);
        bufp->chgIData(oldp+193,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [5U]),32);
        bufp->chgIData(oldp+194,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [6U]),32);
        bufp->chgIData(oldp+195,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [7U]),32);
        bufp->chgIData(oldp+196,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [8U]),32);
        bufp->chgIData(oldp+197,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [9U]),32);
        bufp->chgIData(oldp+198,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0xaU]),32);
        bufp->chgIData(oldp+199,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0xbU]),32);
        bufp->chgIData(oldp+200,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0xcU]),32);
        bufp->chgIData(oldp+201,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0xdU]),32);
        bufp->chgIData(oldp+202,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0xeU]),32);
        bufp->chgIData(oldp+203,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0xfU]),32);
        bufp->chgIData(oldp+204,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x10U]),32);
        bufp->chgIData(oldp+205,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x11U]),32);
        bufp->chgIData(oldp+206,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x12U]),32);
        bufp->chgIData(oldp+207,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x13U]),32);
        bufp->chgIData(oldp+208,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x14U]),32);
        bufp->chgIData(oldp+209,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x15U]),32);
        bufp->chgIData(oldp+210,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x16U]),32);
        bufp->chgIData(oldp+211,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x17U]),32);
        bufp->chgIData(oldp+212,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x18U]),32);
        bufp->chgIData(oldp+213,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x19U]),32);
        bufp->chgIData(oldp+214,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x1aU]),32);
        bufp->chgIData(oldp+215,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x1bU]),32);
        bufp->chgIData(oldp+216,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x1cU]),32);
        bufp->chgIData(oldp+217,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x1dU]),32);
        bufp->chgIData(oldp+218,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x1eU]),32);
        bufp->chgIData(oldp+219,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x1fU]),32);
        bufp->chgIData(oldp+220,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_currentpc),32);
        bufp->chgCData(oldp+221,((0x1fU & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                           >> 7U))),5);
        bufp->chgIData(oldp+222,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0U]),32);
        bufp->chgIData(oldp+223,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [1U]),32);
        bufp->chgIData(oldp+224,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [2U]),32);
        bufp->chgIData(oldp+225,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [3U]),32);
        bufp->chgIData(oldp+226,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [4U]),32);
        bufp->chgIData(oldp+227,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [5U]),32);
        bufp->chgIData(oldp+228,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [6U]),32);
        bufp->chgIData(oldp+229,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [7U]),32);
        bufp->chgIData(oldp+230,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [8U]),32);
        bufp->chgIData(oldp+231,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [9U]),32);
        bufp->chgIData(oldp+232,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0xaU]),32);
        bufp->chgIData(oldp+233,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0xbU]),32);
        bufp->chgIData(oldp+234,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0xcU]),32);
        bufp->chgIData(oldp+235,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0xdU]),32);
        bufp->chgIData(oldp+236,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0xeU]),32);
        bufp->chgIData(oldp+237,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0xfU]),32);
        bufp->chgIData(oldp+238,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x10U]),32);
        bufp->chgIData(oldp+239,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x11U]),32);
        bufp->chgIData(oldp+240,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x12U]),32);
        bufp->chgIData(oldp+241,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x13U]),32);
        bufp->chgIData(oldp+242,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x14U]),32);
        bufp->chgIData(oldp+243,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x15U]),32);
        bufp->chgIData(oldp+244,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x16U]),32);
        bufp->chgIData(oldp+245,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x17U]),32);
        bufp->chgIData(oldp+246,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x18U]),32);
        bufp->chgIData(oldp+247,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x19U]),32);
        bufp->chgIData(oldp+248,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x1aU]),32);
        bufp->chgIData(oldp+249,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x1bU]),32);
        bufp->chgIData(oldp+250,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x1cU]),32);
        bufp->chgIData(oldp+251,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x1dU]),32);
        bufp->chgIData(oldp+252,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x1eU]),32);
        bufp->chgIData(oldp+253,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                 [0x1fU]),32);
        bufp->chgIData(oldp+254,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus),32);
        bufp->chgIData(oldp+255,((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
                                  << 2U)),32);
        bufp->chgIData(oldp+256,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mepc),32);
        bufp->chgIData(oldp+257,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mcause),32);
        bufp->chgIData(oldp+258,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mscratch),32);
        bufp->chgIData(oldp+259,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__DPIC_inst_reg),32);
        bufp->chgBit(oldp+260,((0x6fU == (0x7fU & vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst))));
        bufp->chgBit(oldp+261,((0x67U == (0x7fU & vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst))));
        bufp->chgIData(oldp+262,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res),32);
        bufp->chgIData(oldp+263,(((IData)(4U) + vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc)),32);
        bufp->chgIData(oldp+264,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_nextpc),32);
        bufp->chgBit(oldp+265,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_bpupredict));
        bufp->chgBit(oldp+266,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_valid));
        bufp->chgBit(oldp+267,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_bpuvalid));
        bufp->chgIData(oldp+268,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc),32);
        bufp->chgIData(oldp+269,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst),32);
        bufp->chgIData(oldp+270,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_nextpc),32);
        bufp->chgBit(oldp+271,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_bpupredict));
        bufp->chgBit(oldp+272,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_bpuvalid));
        bufp->chgBit(oldp+273,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_valid));
        bufp->chgBit(oldp+274,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena));
        bufp->chgBit(oldp+275,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_csr_ena));
        bufp->chgCData(oldp+276,((0x1fU & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+277,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc),8);
        bufp->chgIData(oldp+278,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc),32);
        bufp->chgIData(oldp+279,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst),32);
        bufp->chgIData(oldp+280,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc),32);
        bufp->chgIData(oldp+281,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1),32);
        bufp->chgIData(oldp+282,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2),32);
        bufp->chgCData(oldp+283,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel),2);
        bufp->chgCData(oldp+284,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel),3);
        bufp->chgBit(oldp+285,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena));
        bufp->chgCData(oldp+286,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr),5);
        bufp->chgCData(oldp+287,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr),5);
        bufp->chgIData(oldp+288,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm),32);
        bufp->chgCData(oldp+289,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl),4);
        bufp->chgCData(oldp+290,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl),2);
        bufp->chgBit(oldp+291,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag));
        bufp->chgBit(oldp+292,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_valid));
        bufp->chgIData(oldp+293,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst),32);
        bufp->chgIData(oldp+294,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data),32);
        bufp->chgCData(oldp+295,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl),4);
        bufp->chgCData(oldp+296,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl),2);
        bufp->chgCData(oldp+297,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl),7);
        bufp->chgIData(oldp+298,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_data),32);
        bufp->chgBit(oldp+299,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena));
        bufp->chgCData(oldp+300,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr),5);
        bufp->chgSData(oldp+301,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr),12);
        bufp->chgIData(oldp+302,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc),32);
        bufp->chgIData(oldp+303,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc),32);
        bufp->chgBit(oldp+304,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_valid));
        bufp->chgBit(oldp+305,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag));
        bufp->chgIData(oldp+306,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst),32);
        bufp->chgIData(oldp+307,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc),32);
        bufp->chgIData(oldp+308,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc),32);
        bufp->chgCData(oldp+309,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl),4);
        bufp->chgCData(oldp+310,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl),2);
        bufp->chgBit(oldp+311,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena));
        bufp->chgCData(oldp+312,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr),5);
        bufp->chgCData(oldp+313,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl),7);
        bufp->chgSData(oldp+314,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr),12);
        bufp->chgIData(oldp+315,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_data),32);
        bufp->chgBit(oldp+316,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_valid));
        bufp->chgBit(oldp+317,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re));
        bufp->chgIData(oldp+318,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res),32);
        bufp->chgBit(oldp+319,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag));
        bufp->chgBit(oldp+320,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_valid));
        bufp->chgIData(oldp+321,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res),32);
        bufp->chgIData(oldp+322,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data),32);
        bufp->chgCData(oldp+323,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl),2);
        bufp->chgBit(oldp+324,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena));
        bufp->chgCData(oldp+325,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr),5);
        bufp->chgCData(oldp+326,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl),7);
        bufp->chgSData(oldp+327,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr),12);
        bufp->chgIData(oldp+328,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_data),32);
        bufp->chgBit(oldp+329,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_reg_load_flag));
        bufp->chgIData(oldp+330,((((- (IData)((1U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl)))) 
                                   & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res) 
                                  | (((- (IData)((1U 
                                                  & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl) 
                                                     >> 1U)))) 
                                      & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data) 
                                     | ((- (IData)(
                                                   (0U 
                                                    != 
                                                    (0xfU 
                                                     & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))))) 
                                        & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_data)))),32);
        bufp->chgIData(oldp+331,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward),32);
        bufp->chgIData(oldp+332,(((2U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                   ? 0xbU : 0U)),32);
        bufp->chgIData(oldp+333,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_csr_write_csr_data),32);
        bufp->chgIData(oldp+334,((((0x300U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                   & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                      >> 2U)) ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus
                                   : ((1U & (((0x341U 
                                               == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                              & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                                 >> 2U)) 
                                             | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl)))
                                       ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mepc
                                       : ((1U & (((0x305U 
                                                   == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                                  & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                                     >> 2U)) 
                                                 | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                                    >> 1U)))
                                           ? (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
                                              << 2U)
                                           : (((0x342U 
                                                == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                               & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                                  >> 2U))
                                               ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mcause
                                               : ((
                                                   (0x340U 
                                                    == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                                   & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                                      >> 2U))
                                                   ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mscratch
                                                   : 
                                                  (((0xf12U 
                                                     == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                                    & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                                       >> 2U))
                                                    ? 0U
                                                    : 0U))))))),32);
        bufp->chgCData(oldp+335,((7U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc 
                                        >> 2U))),3);
        bufp->chgIData(oldp+336,((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc 
                                  >> 5U)),27);
        bufp->chgWData(oldp+337,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set),128);
        bufp->chgCData(oldp+341,((7U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                                        >> 2U))),3);
        bufp->chgIData(oldp+342,((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                                  >> 5U)),27);
        bufp->chgBit(oldp+343,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch1));
        bufp->chgBit(oldp+344,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch2));
        bufp->chgBit(oldp+345,((1U & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_lru__DOT__lru_reg) 
                                      >> (7U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc 
                                                >> 2U))))));
        bufp->chgBit(oldp+346,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__lru_write));
        bufp->chgCData(oldp+347,((3U & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc)),2);
        bufp->chgCData(oldp+348,((3U & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc)),2);
        bufp->chgCData(oldp+349,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_lru__DOT__lru_reg),8);
        bufp->chgIData(oldp+350,(((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch1)
                                   ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__target1
                                   : ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch2)
                                       ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__target2
                                       : 0U))),32);
        bufp->chgBit(oldp+351,(((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch1) 
                                | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch2))));
        bufp->chgBit(oldp+352,((1U & (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch1)
                                        ? (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__fsm1)
                                        : ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch2)
                                            ? (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__fsm2)
                                            : 0U)) 
                                      >> 1U))));
        bufp->chgBit(oldp+353,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__valid1));
        bufp->chgBit(oldp+354,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__valid2));
        bufp->chgIData(oldp+355,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__tag1),27);
        bufp->chgIData(oldp+356,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__tag2),27);
        bufp->chgIData(oldp+357,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__target1),32);
        bufp->chgIData(oldp+358,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__target2),32);
        bufp->chgCData(oldp+359,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__fsm1),2);
        bufp->chgCData(oldp+360,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__fsm2),2);
        bufp->chgCData(oldp+361,(((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch1)
                                   ? (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__fsm1)
                                   : ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch2)
                                       ? (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__fsm2)
                                       : 0U))),2);
        bufp->chgCData(oldp+362,(((8U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[0U] 
                                         << 3U)) | 
                                  ((4U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[0U] 
                                          << 1U)) | 
                                   (3U & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[2U])))),4);
        bufp->chgBit(oldp+363,((1U & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch1)
                                       ? (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__fsm1)
                                       : ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch2)
                                           ? (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__fsm2)
                                           : 0U)))));
        bufp->chgWData(oldp+364,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem[0]),128);
        bufp->chgWData(oldp+368,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem[1]),128);
        bufp->chgWData(oldp+372,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem[2]),128);
        bufp->chgWData(oldp+376,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem[3]),128);
        bufp->chgWData(oldp+380,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem[4]),128);
        bufp->chgWData(oldp+384,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem[5]),128);
        bufp->chgWData(oldp+388,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem[6]),128);
        bufp->chgWData(oldp+392,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem[7]),128);
        bufp->chgCData(oldp+396,((0xfU & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))),4);
        bufp->chgBit(oldp+397,(((0x300U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                   >> 2U))));
        bufp->chgBit(oldp+398,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr));
        bufp->chgBit(oldp+399,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie));
        bufp->chgBit(oldp+400,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie));
        bufp->chgCData(oldp+401,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp),2);
        bufp->chgBit(oldp+402,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena));
        bufp->chgBit(oldp+403,((1U & ((~ ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                          >> 1U)) & 
                                      ((1U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                        ? (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)
                                        : ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                            ? (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_csr_write_csr_data 
                                               >> 3U)
                                            : (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)))))));
        bufp->chgBit(oldp+404,((1U & ((2U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                       ? (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)
                                       : ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                          | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                              ? (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_csr_write_csr_data 
                                                 >> 7U)
                                              : (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)))))));
        bufp->chgCData(oldp+405,(((2U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                   ? 3U : ((1U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                            ? 0U : 
                                           (3U & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                                   ? 
                                                  (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_csr_write_csr_data 
                                                   >> 0xdU)
                                                   : (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp)))))),2);
        bufp->chgBit(oldp+406,((1U & (((0x305U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                       & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                          >> 2U)) | 
                                      ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 1U)))));
        bufp->chgBit(oldp+407,(((0x305U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                   >> 3U))));
        bufp->chgIData(oldp+408,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mtvec_base),30);
        bufp->chgBit(oldp+409,((1U & (((0x341U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                       & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                          >> 2U)) | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl)))));
        bufp->chgBit(oldp+410,((1U & (((0x341U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                       & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                          >> 3U)) | 
                                      ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                       >> 1U)))));
        bufp->chgBit(oldp+411,(((0x342U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                   >> 2U))));
        bufp->chgBit(oldp+412,(((0x342U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                   >> 3U))));
        bufp->chgBit(oldp+413,(((0xf12U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                   >> 2U))));
        bufp->chgBit(oldp+414,(((0x340U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                   >> 2U))));
        bufp->chgBit(oldp+415,(((0x340U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                                & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                   >> 3U))));
        bufp->chgBit(oldp+416,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall));
        bufp->chgIData(oldp+417,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1),32);
        bufp->chgIData(oldp+418,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2),32);
        bufp->chgIData(oldp+419,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2),32);
        bufp->chgIData(oldp+420,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2),32);
        bufp->chgBit(oldp+421,((1U & (((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                           >> 0x1fU)) 
                                       & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                          >> 0x1fU)) 
                                      | (((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                              >> 0x1fU)) 
                                          & ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                 >> 0x1fU)) 
                                             & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2 
                                                >> 0x1fU))) 
                                         | ((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                             & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2)) 
                                            >> 0x1fU))))));
        bufp->chgIData(oldp+422,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2),32);
        bufp->chgQData(oldp+423,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul),64);
        bufp->chgIData(oldp+425,((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul)),32);
        bufp->chgIData(oldp+426,((IData)((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+427,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div),32);
        bufp->chgIData(oldp+428,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__rem),32);
        bufp->chgIData(oldp+429,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr),32);
        bufp->chgBit(oldp+430,(((0x94U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                | ((0xc8U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                   | (0xa4U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))))));
        bufp->chgCData(oldp+431,((0x1fU & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+432,((0x7fU & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst)),7);
        bufp->chgCData(oldp+433,((7U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+434,((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                  >> 0x19U)),7);
        bufp->chgSData(oldp+435,((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                  >> 0x14U)),12);
        bufp->chgIData(oldp+436,(((0x80000U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                               >> 0xcU)) 
                                  | ((0x7f800U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                            >> 0x15U)))))),20);
        bufp->chgIData(oldp+437,((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                  >> 0xcU)),20);
        bufp->chgSData(oldp+438,(((0xfe0U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                             >> 0x14U)) 
                                  | (0x1fU & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                              >> 7U)))),12);
        bufp->chgSData(oldp+439,((((0x800U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                              >> 0x14U)) 
                                   | (0x400U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                                << 3U))) 
                                  | ((0x3f0U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                                >> 0x15U)) 
                                     | (0xfU & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                                >> 8U))))),12);
        bufp->chgBit(oldp+440,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__data_ok));
        bufp->chgCData(oldp+441,((3U & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res)),2);
        bufp->chgBit(oldp+442,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_mem__DOT__data_ok));
        bufp->chgCData(oldp+443,((0xffU & vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_DPIC_MEM_data)),8);
        bufp->chgSData(oldp+444,((0xffffU & vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_DPIC_MEM_data)),16);
        bufp->chgIData(oldp+445,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0]),32);
        bufp->chgIData(oldp+446,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[1]),32);
        bufp->chgIData(oldp+447,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[2]),32);
        bufp->chgIData(oldp+448,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[3]),32);
        bufp->chgIData(oldp+449,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[4]),32);
        bufp->chgIData(oldp+450,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[5]),32);
        bufp->chgIData(oldp+451,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[6]),32);
        bufp->chgIData(oldp+452,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[7]),32);
        bufp->chgIData(oldp+453,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[8]),32);
        bufp->chgIData(oldp+454,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[9]),32);
        bufp->chgIData(oldp+455,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[10]),32);
        bufp->chgIData(oldp+456,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[11]),32);
        bufp->chgIData(oldp+457,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[12]),32);
        bufp->chgIData(oldp+458,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[13]),32);
        bufp->chgIData(oldp+459,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[14]),32);
        bufp->chgIData(oldp+460,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[15]),32);
        bufp->chgIData(oldp+461,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[16]),32);
        bufp->chgIData(oldp+462,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[17]),32);
        bufp->chgIData(oldp+463,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[18]),32);
        bufp->chgIData(oldp+464,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[19]),32);
        bufp->chgIData(oldp+465,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[20]),32);
        bufp->chgIData(oldp+466,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[21]),32);
        bufp->chgIData(oldp+467,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[22]),32);
        bufp->chgIData(oldp+468,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[23]),32);
        bufp->chgIData(oldp+469,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[24]),32);
        bufp->chgIData(oldp+470,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[25]),32);
        bufp->chgIData(oldp+471,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[26]),32);
        bufp->chgIData(oldp+472,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[27]),32);
        bufp->chgIData(oldp+473,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[28]),32);
        bufp->chgIData(oldp+474,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[29]),32);
        bufp->chgIData(oldp+475,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[30]),32);
        bufp->chgIData(oldp+476,(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[31]),32);
    }
    bufp->chgBit(oldp+477,(vlSelfRef.clk));
    bufp->chgBit(oldp+478,(vlSelfRef.rst));
    bufp->chgIData(oldp+479,((((~ (IData)(vlSelfRef.rst)) 
                               & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_ena))
                               ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_addr]
                               : 0U)),32);
    bufp->chgIData(oldp+480,((((~ (IData)(vlSelfRef.rst)) 
                               & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_ena))
                               ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                              [vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_addr]
                               : 0U)),32);
    bufp->chgBit(oldp+481,(((~ ((IData)(vlSelfRef.rst) 
                                & (0U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)))) 
                            & (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_ena) 
                                & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_27) 
                                   & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_addr) 
                                      == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))) 
                               | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_26) 
                                  & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_addr) 
                                     == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr)))))));
    bufp->chgBit(oldp+482,(((~ ((IData)(vlSelfRef.rst) 
                                & (0U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)))) 
                            & (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_ena) 
                                & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_27) 
                                   & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_addr) 
                                      == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))) 
                               | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_26) 
                                  & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_addr) 
                                     == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr)))))));
    bufp->chgCData(oldp+483,(((IData)(vlSelfRef.rst)
                               ? 0U : ((0U == (3U & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                        ? 3U : ((2U 
                                                 == 
                                                 (3U 
                                                  & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                                 ? 0xcU
                                                 : 0U)))),4);
    bufp->chgIData(oldp+484,(((IData)(vlSelfRef.rst)
                               ? 0U : ((8U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                        ? ((4U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                    ? 0U
                                                    : 
                                                   (0xffffU 
                                                    & vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_DPIC_MEM_data))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                    ? 
                                                   (0xffU 
                                                    & vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_DPIC_MEM_data)
                                                    : 0U))
                                            : ((2U 
                                                & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                    ? vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_DPIC_MEM_data
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_DPIC_MEM_data 
                                                                    >> 0xfU)))) 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_DPIC_MEM_data)))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_DPIC_MEM_data 
                                                                    >> 7U)))) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_DPIC_MEM_data))
                                                    : 0U)))
                                        : 0U))),32);
}

void Vysyx_25060170_topcore___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root__trace_cleanup\n"); );
    // Init
    Vysyx_25060170_topcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25060170_topcore___024root*>(voidSelf);
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
