// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25060170_topcore.h for the primary calling header

#include "Vysyx_25060170_topcore__pch.h"
#include "Vysyx_25060170_topcore___024root.h"

VL_ATTR_COLD void Vysyx_25060170_topcore___024root___eval_static(Vysyx_25060170_topcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root___eval_static\n"); );
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vysyx_25060170_topcore___024root___eval_initial__TOP(Vysyx_25060170_topcore___024root* vlSelf);
VL_ATTR_COLD void Vysyx_25060170_topcore___024root____Vm_traceActivitySetAll(Vysyx_25060170_topcore___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25060170_topcore___024root___eval_initial(Vysyx_25060170_topcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root___eval_initial\n"); );
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_25060170_topcore___024root___eval_initial__TOP(vlSelf);
    Vysyx_25060170_topcore___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vysyx_25060170_topcore___024root___eval_initial__TOP(Vysyx_25060170_topcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root___eval_initial__TOP\n"); );
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ready = 1U;
}

VL_ATTR_COLD void Vysyx_25060170_topcore___024root___eval_final(Vysyx_25060170_topcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root___eval_final\n"); );
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_topcore___024root___dump_triggers__stl(Vysyx_25060170_topcore___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vysyx_25060170_topcore___024root___eval_phase__stl(Vysyx_25060170_topcore___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25060170_topcore___024root___eval_settle(Vysyx_25060170_topcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root___eval_settle\n"); );
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vysyx_25060170_topcore___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("vsrc/sim/ysyx_25060170_topcore.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vysyx_25060170_topcore___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_topcore___024root___dump_triggers__stl(Vysyx_25060170_topcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root___dump_triggers__stl\n"); );
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_25060170_topcore___024root___stl_sequent__TOP__0(Vysyx_25060170_topcore___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25060170_topcore___024root___eval_stl(Vysyx_25060170_topcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root___eval_stl\n"); );
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vysyx_25060170_topcore___024root___stl_sequent__TOP__0(vlSelf);
        Vysyx_25060170_topcore___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

void Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_regs_TOP(IData/*31:0*/ regs0, IData/*31:0*/ regs1, IData/*31:0*/ regs2, IData/*31:0*/ regs3, IData/*31:0*/ regs4, IData/*31:0*/ regs5, IData/*31:0*/ regs6, IData/*31:0*/ regs7, IData/*31:0*/ regs8, IData/*31:0*/ regs9, IData/*31:0*/ regs10, IData/*31:0*/ regs11, IData/*31:0*/ regs12, IData/*31:0*/ regs13, IData/*31:0*/ regs14, IData/*31:0*/ regs15, IData/*31:0*/ regs16, IData/*31:0*/ regs17, IData/*31:0*/ regs18, IData/*31:0*/ regs19, IData/*31:0*/ regs20, IData/*31:0*/ regs21, IData/*31:0*/ regs22, IData/*31:0*/ regs23, IData/*31:0*/ regs24, IData/*31:0*/ regs25, IData/*31:0*/ regs26, IData/*31:0*/ regs27, IData/*31:0*/ regs28, IData/*31:0*/ regs29, IData/*31:0*/ regs30, IData/*31:0*/ regs31);
void Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_csr_TOP(IData/*31:0*/ csr_mstatus, IData/*31:0*/ csr_mtvec, IData/*31:0*/ csr_mepc, IData/*31:0*/ csr_mcause, IData/*31:0*/ csr_mhartid, IData/*31:0*/ csr_mscratch);
void Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata, CData/*7:0*/ rlen, IData/*31:0*/ mode, IData/*31:0*/ &dpic_difftest_skip_flag);
extern const VlUnpacked<CData/*3:0*/, 8> Vysyx_25060170_topcore__ConstPool__TABLE_hbbe98c18_0;
extern const VlUnpacked<CData/*1:0*/, 8> Vysyx_25060170_topcore__ConstPool__TABLE_h4afdbdff_0;

VL_ATTR_COLD void Vysyx_25060170_topcore___024root___stl_sequent__TOP__0(Vysyx_25060170_topcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root___stl_sequent__TOP__0\n"); );
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_regs_TOP(
                                                                                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0U], 
                                                                                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [1U], 
                                                                                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [2U], 
                                                                                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [3U], 
                                                                                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [4U], 
                                                                                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [5U], 
                                                                                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [6U], 
                                                                                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [7U], 
                                                                                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [8U], 
                                                                                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [9U], 
                                                                                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0xaU], 
                                                                                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0xbU], 
                                                                                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0xcU], 
                                                                                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0xdU], 
                                                                                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0xeU], 
                                                                                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0xfU], 
                                                                                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x10U], 
                                                                                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x11U], 
                                                                                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x12U], 
                                                                                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x13U], 
                                                                                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x14U], 
                                                                                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x15U], 
                                                                                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x16U], 
                                                                                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x17U], 
                                                                                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x18U], 
                                                                                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x19U], 
                                                                                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x1aU], 
                                                                                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x1bU], 
                                                                                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x1cU], 
                                                                                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x1dU], 
                                                                                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x1eU], 
                                                                                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x1fU]);
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[0U] 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem
        [(7U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                >> 2U))][0U];
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[1U] 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem
        [(7U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                >> 2U))][1U];
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[2U] 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem
        [(7U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                >> 2U))][2U];
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set[3U] 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem
        [(7U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                >> 2U))][3U];
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall 
        = (1U & ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ready)) 
                 | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_valid)));
    if (vlSelfRef.rst) {
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_data = 0U;
    } else {
        if ((0x2aU != (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
            if (((0xa8U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                 || (0x94U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))) {
                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena = 1U;
            } else if ((1U & (~ ((0x25U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                 || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                if ((1U & (~ ((0x4aU == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                              || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                    if ((0x54U != (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
                        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena = 0U;
                    }
                }
            }
            if ((1U & (~ ((0xa8U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                          || (0x94U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                if (((0x25U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                     || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))) {
                    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena = 1U;
                } else if ((1U & (~ ((0x4aU == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                     || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                    if ((0x54U != (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
                        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena = 0U;
                    }
                }
                if ((1U & (~ ((0x25U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                              || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                    if (((0x4aU == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                         || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))) {
                        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena = 1U;
                    } else if ((0x54U != (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
                        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena = 0U;
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl) 
                      >> 3U)))) {
            vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_data 
                = ((1U == (7U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))
                    ? ((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                        << 0x18U) | ((0xff0000U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                                                   << 0x10U)) 
                                     | ((0xff00U & 
                                         (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                                          << 8U)) | 
                                        (0xffU & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data))))
                    : ((2U == (7U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))
                        ? ((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                            << 0x10U) | (0xffffU & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data))
                        : ((4U == (7U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))
                            ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data
                            : 0U)));
        }
    }
    Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_csr_TOP(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus, 
                                                                                (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
                                                                                << 2U), vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mepc, vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mcause, 0U, vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mscratch);
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_valid 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_valid) 
           | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re) 
              & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_mem__DOT__data_ok)));
    Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read_TOP(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc, vlSelfRef.__Vtask_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__0__rdata, 4U, 1U, vlSelfRef.__Vtask_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__0__dpic_difftest_skip_flag);
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__DPIC_inst_reg 
        = vlSelfRef.__Vtask_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__0__rdata;
    vlSelfRef.__Vtableidx3 = ((6U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res 
                                     << 1U)) | (IData)(vlSelfRef.rst));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask 
        = Vysyx_25060170_topcore__ConstPool__TABLE_hbbe98c18_0
        [vlSelfRef.__Vtableidx3];
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_csr_write_csr_data 
        = (((- (IData)((1U & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                              >> 6U)))) & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data) 
           | ((- (IData)((1U & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 1U)))) & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_pc));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr 
        = ((0x300U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
           & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
              >> 3U));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__target1 
        = ((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem
            [(7U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                    >> 2U))][3U] << 0x1cU) | (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem
                                              [(7U 
                                                & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                                                   >> 2U))][2U] 
                                              >> 4U));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__target2 
        = ((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem
            [(7U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                    >> 2U))][1U] << 0x1cU) | (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem
                                              [(7U 
                                                & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                                                   >> 2U))][0U] 
                                              >> 4U));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_27 
        = ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_valid)) 
           & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_25 
        = ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_valid)) 
           & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__fsm1 
        = (3U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem
                 [(7U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                         >> 2U))][2U] >> 2U));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__fsm2 
        = (3U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem
                 [(7U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                         >> 2U))][0U] >> 2U));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h0c034a45_0_1 
        = (1U & (~ ((IData)(vlSelfRef.rst) | (0U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__lru_write 
        = (1U & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_lru__DOT__lru_reg) 
                 >> (7U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                           >> 2U))));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__valid1 
        = (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem
           [(7U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                   >> 2U))][3U] >> 0x1fU);
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__tag1 
        = (0x7ffffffU & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem
                         [(7U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                                 >> 2U))][3U] >> 4U));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__valid2 
        = (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem
           [(7U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                   >> 2U))][1U] >> 0x1fU);
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__tag2 
        = (0x7ffffffU & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem
                         [(7U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                                 >> 2U))][1U] >> 4U));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal 
        = ((~ (IData)(vlSelfRef.rst)) & (0x6cU == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui 
        = ((~ (IData)(vlSelfRef.rst)) & (0x34U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc 
        = ((~ (IData)(vlSelfRef.rst)) & (0x14U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward 
        = (((- (IData)((1U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl)))) 
            & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res) 
           | ((- (IData)((2U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl)))) 
              & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_data 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re)
            ? ((IData)(vlSelfRef.rst) ? 0U : ((8U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                               ? ((4U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                     ? 0U
                                                     : 
                                                    (0xffffU 
                                                     & vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_DPIC_MEM_data))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                     ? 
                                                    (0xffU 
                                                     & vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_DPIC_MEM_data)
                                                     : 0U))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                    ? 
                                                   ((1U 
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
                                                    : 
                                                   ((1U 
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
                                               : 0U))
            : 0U);
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_92 
        = (IData)((0U == (0x42000000U & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_91 
        = (IData)((0x40000000U == (0x42000000U & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__5__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x18U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr 
        = ((~ (IData)(vlSelfRef.rst)) & (0x64U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x10U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
        = ((((- (IData)((1U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel)))) 
             | (- (IData)((3U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel))))) 
            & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2) 
           | ((4U & (- (IData)((2U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel))))) 
              | ((- (IData)((4U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel)))) 
                 & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_load_flag 
        = ((~ (IData)(vlSelfRef.rst)) & (IData)((3U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst))));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
        = (((- (IData)((1U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel)))) 
            & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1) 
           | ((- (IData)((2U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel)))) 
              & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__6__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x38U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x20U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__branch 
        = ((~ (IData)(vlSelfRef.rst)) & (0x60U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__3__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x30U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x70U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr) 
           | (0U != (3U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))));
    if ((2U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))) {
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mpp_set = 3U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mpie_set 
            = (1U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie));
    } else {
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mpp_set 
            = ((1U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                ? 0U : (3U & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                               ? (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_csr_write_csr_data 
                                  >> 0xdU) : (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp))));
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mpie_set 
            = (1U & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                     | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                         ? (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_csr_write_csr_data 
                            >> 7U) : (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie))));
    }
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mie_set 
        = (1U & ((~ ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                     >> 1U)) & ((1U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                 ? (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)
                                 : ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                     ? (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_csr_write_csr_data 
                                        >> 3U) : (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)))));
    vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_we 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h0c034a45_0_1) 
           & (~ ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl) 
                 >> 3U)));
    vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_mem_re 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h0c034a45_0_1) 
           & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl) 
              >> 3U));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch1 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__valid1) 
           & ((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
               >> 5U) == vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__tag1));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch2 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__valid2) 
           & ((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
               >> 5U) == vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__tag2));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_28 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui) 
           | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_rd_data_forward 
        = (((- (IData)((1U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl)))) 
            & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_data) 
           | ((- (IData)((2U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl)))) 
              & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res));
    if (vlSelfRef.rst) {
        vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_raddr = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena = 0U;
    } else {
        vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_raddr 
            = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res;
        if ((0x2aU != (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
            if ((1U & (~ ((0xa8U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                          || (0x94U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                if ((1U & (~ ((0x25U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                              || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                    if ((1U & (~ ((0x4aU == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                  || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena 
                            = (0x54U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc));
                    }
                }
            }
            if (((0xa8U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                 || (0x94U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))) {
                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena = 1U;
                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena 
                    = (0U != (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr));
            } else if (((0x25U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                        || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))) {
                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena 
                    = (0U != (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr));
                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena = 1U;
            } else if (((0x4aU == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                        || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))) {
                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena 
                    = (0U != (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr));
                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena = 1U;
            } else if ((0x54U != (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena = 0U;
                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena = 0U;
            }
        }
        if ((0x2aU == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
            vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena = 1U;
        } else if ((1U & (~ ((0xa8U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                             || (0x94U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
            if ((1U & (~ ((0x25U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                          || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                if ((1U & (~ ((0x4aU == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                              || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                    if ((0x54U != (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
                        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena = 0U;
                    }
                }
            }
        }
    }
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgRegularize_h788ac90a_0_6 
        = ((((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena) 
             << 3U) | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena) 
                       << 2U)) | (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena) 
                                   << 1U) | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_89 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0xeU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__4__KET__));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_19 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__4__KET__) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0xeU));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_26 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
           | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__4__KET__));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_6 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0xeU));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_104 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0xeU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_load_flag));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div 
        = VL_DIVS_III(32, vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1, vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__rem 
        = VL_MODDIVS_III(32, vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1, vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h0e145671__0 
        = (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
           >> (0x1fU & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h0fc673a9__0 
        = (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
           < vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h0e0c055b__0 
        = (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
           << (0x1fU & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h252d97a0__0 
        = (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
           & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2 
        = (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
           - vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2 
        = VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1, 
                         (0x1fU & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1), 
                      VL_EXTENDS_QI(64,32, vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h273e5a99__0 
        = (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
           | vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2 
        = (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
           + vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
    vlSelfRef.__VdfgRegularize_h495687df_0_15 = (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                 + vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm);
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_108 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0xeU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_101 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__branch) 
           & (IData)((0U == (0x6000U & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst))));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_7 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__branch) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0xeU));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_99 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0xeU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__3__KET__));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_14 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__3__KET__) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0xeU));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_ena 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__6__KET__) 
           | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__3__KET__) 
              | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__branch) 
                 | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__))));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_wbctl 
        = ((2U & ((- (IData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__))) 
                  | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__6__KET__))) 
                     | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__5__KET__))) 
                        | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__4__KET__))) 
                           | (- (IData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__3__KET__)))))))) 
           | ((1U & (- (IData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_load_flag)))) 
              | (2U & ((- (IData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui))) 
                       | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc))) 
                          | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                             | (- (IData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr)))))))));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_23 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0xeU));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_85 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0xeU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__));
    if ((1U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
        vlSelfRef.__VdfgRegularize_h495687df_0_9 = 0U;
        vlSelfRef.__VdfgRegularize_h495687df_0_12 = 0U;
        vlSelfRef.__VdfgRegularize_h495687df_0_10 = 0U;
    } else {
        vlSelfRef.__VdfgRegularize_h495687df_0_9 = 
            (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
             ^ vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
        vlSelfRef.__VdfgRegularize_h495687df_0_12 = 
            ((~ vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1) 
             & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
        vlSelfRef.__VdfgRegularize_h495687df_0_10 = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1;
    }
    if (vlSelfRef.rst) {
        vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_wlen = 0U;
    } else if ((1U & (~ ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl) 
                         >> 3U)))) {
        vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_wlen 
            = ((1U == (7U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))
                ? (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask)
                : ((2U == (7U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))
                    ? ((IData)(vlSelfRef.rst) ? 0U : 
                       ((0U == (3U & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                         ? 3U : ((2U == (3U & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                  ? 0xcU : 0U))) : 
                   ((4U == (7U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))
                     ? 0xfU : 0U)));
    }
    if (vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_mem_re) {
        Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read_TOP(vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_raddr, vlSelfRef.__Vtask_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__1__rdata, 4U, 2U, vlSelfRef.__Vtask_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__1__dpic_difftest_skip_flag);
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__mem_data 
            = vlSelfRef.__Vtask_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__1__rdata;
        vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_dpi_ls_mem_skip_flag 
            = vlSelfRef.__Vtask_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__1__dpic_difftest_skip_flag;
    } else {
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__mem_data = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_dpi_ls_mem_skip_flag = 0U;
    }
    if ((1U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
        vlSelfRef.__VdfgRegularize_h495687df_0_7 = 0U;
        vlSelfRef.__VdfgRegularize_h495687df_0_13 = 0U;
        vlSelfRef.__VdfgRegularize_h495687df_0_16 = 0U;
    } else {
        vlSelfRef.__VdfgRegularize_h495687df_0_7 = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h273e5a99__0;
        vlSelfRef.__VdfgRegularize_h495687df_0_13 = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2;
        vlSelfRef.__VdfgRegularize_h495687df_0_16 = vlSelfRef.__VdfgRegularize_h495687df_0_15;
    }
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h0c034a45_0_0 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__data_ok) 
           & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_mem_re) 
              | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_we)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_88 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_89));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_18 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_89) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_20 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_19) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_87 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_19));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_imm 
        = (((- (IData)(((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_26) 
                        | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__5__KET__) 
                           | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__) 
                              | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr)))))) 
            & (((- (IData)((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                            >> 0x1fU))) << 0xcU) | 
               (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                >> 0x14U))) | ((0xfffff000U & ((- (IData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_28))) 
                                               & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst)) 
                               | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                                   & ((((- (IData)(
                                                   (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                                    >> 0x1fU))) 
                                        << 0x15U) | 
                                       (0x100000U & 
                                        (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                         >> 0xbU))) 
                                      | (((0xff000U 
                                           & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst) 
                                          | (0x800U 
                                             & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                                >> 9U))) 
                                         | (0x7feU 
                                            & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                               >> 0x14U))))) 
                                  | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__))) 
                                      & (((- (IData)(
                                                     (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | ((0xfe0U 
                                             & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                                  >> 7U))))) 
                                     | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__branch))) 
                                        & (((- (IData)(
                                                       (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                                        >> 0x1fU))) 
                                            << 0xdU) 
                                           | (((0x1000U 
                                                & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                                   >> 0x13U)) 
                                               | (0x800U 
                                                  & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                                     << 4U))) 
                                              | ((0x7e0U 
                                                  & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                                       >> 7U))))))))));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lwu 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_6) 
           & (IData)((0x2000U == (0x3000U & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst))));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_102 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_6));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_103 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_104));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_5 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_104) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0xdU));
    if ((2U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
        vlSelfRef.__VdfgRegularize_h495687df_0_11 = 0U;
        vlSelfRef.__VdfgRegularize_h495687df_0_8 = 0U;
        vlSelfRef.__VdfgRegularize_h495687df_0_14 = 0U;
        vlSelfRef.__VdfgRegularize_h495687df_0_17 = 0U;
    } else {
        vlSelfRef.__VdfgRegularize_h495687df_0_11 = vlSelfRef.__VdfgRegularize_h495687df_0_10;
        vlSelfRef.__VdfgRegularize_h495687df_0_8 = vlSelfRef.__VdfgRegularize_h495687df_0_7;
        vlSelfRef.__VdfgRegularize_h495687df_0_14 = vlSelfRef.__VdfgRegularize_h495687df_0_13;
        vlSelfRef.__VdfgRegularize_h495687df_0_17 = vlSelfRef.__VdfgRegularize_h495687df_0_16;
    }
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res 
        = ((IData)(vlSelfRef.rst) ? 0U : ((0x80U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                           ? ((0x40U 
                                               & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                               ? ((0x20U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : vlSelfRef.__VdfgRegularize_h495687df_0_8)
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 0U
                                                       : vlSelfRef.__VdfgRegularize_h495687df_0_9)))))
                                               : ((0x20U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? 0U
                                                        : (IData)(
                                                                  (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul 
                                                                   >> 0x20U))))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : vlSelfRef.__VdfgRegularize_h495687df_0_11)
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 0U
                                                       : vlSelfRef.__VdfgRegularize_h495687df_0_12)
                                                      : vlSelfRef.__VdfgRegularize_h495687df_0_14)))
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div)))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? vlSelfRef.__VdfgRegularize_h495687df_0_11
                                                      : 0U))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__rem)
                                                       : vlSelfRef.__VdfgRegularize_h495687df_0_10)
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? vlSelfRef.__VdfgRegularize_h495687df_0_16
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? vlSelfRef.__VdfgRegularize_h495687df_0_15
                                                        : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h0e145671__0)))))))
                                           : ((0x40U 
                                               & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                               ? ((0x20U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : vlSelfRef.__VdfgRegularize_h495687df_0_17)
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h0fc673a9__0)))))
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? 0U
                                                        : (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : vlSelfRef.__VdfgRegularize_h495687df_0_14))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? vlSelfRef.__VdfgRegularize_h495687df_0_12
                                                       : 0U))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__rem
                                                        : 
                                                       ((IData)(4U) 
                                                        + vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? vlSelfRef.__VdfgRegularize_h495687df_0_15
                                                        : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h0e0c055b__0))))))
                                               : ((0x20U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? vlSelfRef.__VdfgRegularize_h495687df_0_17
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & (((~ 
                                                             (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                              >> 0x1fU)) 
                                                            & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                               >> 0x1fU)) 
                                                           | (((~ 
                                                                (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                                 >> 0x1fU)) 
                                                               & ((~ 
                                                                   (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                                    >> 0x1fU)) 
                                                                  & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2 
                                                                     >> 0x1fU))) 
                                                              | ((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                                  & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                                     & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2)) 
                                                                 >> 0x1fU))))))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h252d97a0__0)))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h273e5a99__0
                                                        : 0U))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div
                                                        : 0U)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? 
                                                       ((IData)(4U) 
                                                        + vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc)
                                                        : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h252d97a0__0)))))
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? vlSelfRef.__VdfgRegularize_h495687df_0_16
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h0e0c055b__0)))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? vlSelfRef.__VdfgRegularize_h495687df_0_16
                                                       : vlSelfRef.__VdfgRegularize_h495687df_0_7)
                                                      : vlSelfRef.__VdfgRegularize_h495687df_0_8))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? vlSelfRef.__VdfgRegularize_h495687df_0_15
                                                        : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2)
                                                       : vlSelfRef.__VdfgRegularize_h495687df_0_9))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? vlSelfRef.__VdfgRegularize_h495687df_0_13
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h0e145671__0
                                                        : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h0fc673a9__0))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2
                                                        : 
                                                       (1U 
                                                        & (((~ 
                                                             (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                              >> 0x1fU)) 
                                                            & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                               >> 0x1fU)) 
                                                           | (((~ 
                                                                (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                                 >> 0x1fU)) 
                                                               & ((~ 
                                                                   (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                                    >> 0x1fU)) 
                                                                  & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2 
                                                                     >> 0x1fU))) 
                                                              | ((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                                  & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                                     & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2)) 
                                                                 >> 0x1fU)))))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2
                                                        : 0U)))))))));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_106 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_108));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_4 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_108) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bne 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_101) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_beq 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_101));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_100 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_7));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_8 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_7) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_12 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_99) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_98 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_99));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_16 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_14) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_94 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_14));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_addr 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_ena)
            ? (0x1fU & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                        >> 0x14U)) : 0U);
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rd_ena 
        = ((0U != (0x1fU & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                            >> 7U))) & (0U != (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_wbctl)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_23) 
           & (IData)((0x1000U == (0x3000U & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst))));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_24 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_23) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_84 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_85));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_22 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_85) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_valid 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_valid) 
           | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h0c034a45_0_0));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_21 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_87) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_28 
        = (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_imm 
           + vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc);
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lhu 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_102) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lbu 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_102));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lh 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_103) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lb 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_103));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ld 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_5) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lw 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_5));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sh 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_106) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sb 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_106));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sw 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_4));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sd 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_4) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bge 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_100) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_blt 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_100));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bltu 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_8));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bgeu 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_8) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_95 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_12));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_13 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_12) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_11 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_98) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_97 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_98));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_90 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_16));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_17 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_16) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_93 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_94));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_15 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_94) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_5 
        = (1U & ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_ena)) 
                 | (0U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_addr))));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_24) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_24));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_84) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_83 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_84));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_22));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_22) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_26 
        = ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_valid)) 
           & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_24 
        = ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_valid)) 
           & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_csr_ena));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srai 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_21) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0x1eU));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_slt 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0x19U)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_95));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhsu 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_95) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0x19U));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sltu 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0x19U)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_13));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhu 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_13) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0x19U));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulh 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_11) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0x19U));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sll 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0x19U)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_11));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mul 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_97) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0x19U));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sub 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_97) 
           & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_91));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_add 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_97) 
           & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_92));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_rem 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_90) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0x19U));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_or 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0x19U)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_90));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_remu 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_17) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0x19U));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_and 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0x19U)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_17));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_xor 
        = ((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0x19U)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_93));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_div 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_93) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0x19U));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_divu 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_15) 
           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
              >> 0x19U));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sra 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_15) 
           & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_91));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srl 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_15) 
           & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_92));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op2_forward 
        = ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_5)) 
           & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr) 
              == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward 
        = ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_5)) 
           & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr) 
              == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward 
        = ((~ ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag) 
               | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_5))) 
           & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr) 
              == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward 
        = ((~ ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag) 
               | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_5))) 
           & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr) 
              == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)));
    vlSelfRef.__VdfgRegularize_h495687df_0_21 = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi) 
                                                 | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi) 
                                                    | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ebreak 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_83) 
           & (1U == (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                     >> 0x14U)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mret 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_83) 
           & (IData)((0x30000000U == (0x30000000U & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst))));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_83) 
           & (0U == (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                     >> 0x14U)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_25 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw) 
           | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs));
    vlSelfRef.__VdfgRegularize_h495687df_0_22 = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc) 
                                                 | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__exu_res 
        = (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res 
           | (((- (IData)((0U != (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgRegularize_h788ac90a_0_6)))) 
               & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1) 
              | ((- (IData)(((0x94U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                             | ((0xc8U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                | (0xa4U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) 
                 & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr))));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op2_forward_ena 
        = (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward) 
            | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward) 
               | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op2_forward) 
                  | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward)))) 
           & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_ena));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_ena 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_25) 
           | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc) 
              | (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_21)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_ena 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__6__KET__) 
           | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__5__KET__) 
              | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__4__KET__) 
                 | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__3__KET__) 
                    | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__branch) 
                       | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                          | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__) 
                             | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr) 
                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_25) 
                                   | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc) 
                                      | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall)))))))))));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc 
        = ((((((~ (IData)(vlSelfRef.rst)) & (((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                                  >> 0x1eU)) 
                                              & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_21)) 
                                             | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_xor) 
                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc) 
                                                   | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ebreak) 
                                                      | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sh) 
                                                         | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sw) 
                                                            | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bltu) 
                                                               | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ld) 
                                                                  | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulh) 
                                                                     | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_div) 
                                                                        | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_remu) 
                                                                           | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw) 
                                                                              | (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_21)))))))))))))) 
              << 7U) | (((~ (IData)(vlSelfRef.rst)) 
                         << 6U) & ((0x3ffffc0U & (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_88) 
                                                   << 6U) 
                                                  & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                                     >> 6U))) 
                                   | (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sltu) 
                                       | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_xor) 
                                          | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui) 
                                             | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr) 
                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sb) 
                                                   | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bge) 
                                                      | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bltu) 
                                                         | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lw) 
                                                            | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ld) 
                                                               | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mul) 
                                                                  | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_rem) 
                                                                     | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mret) 
                                                                        | (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_22))))))))))))) 
                                      << 6U)))) | (
                                                   (((~ (IData)(vlSelfRef.rst)) 
                                                     << 5U) 
                                                    & ((0x1ffffe0U 
                                                        & (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_20) 
                                                            << 5U) 
                                                           & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                                              >> 7U))) 
                                                       | (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_slt) 
                                                           | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sltu) 
                                                              | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_and) 
                                                                 | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc) 
                                                                    | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal) 
                                                                       | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_blt) 
                                                                          | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bge) 
                                                                             | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bltu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lh) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lw) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lwu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulh) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_divu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs) 
                                                                                | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci)))))))))))))))))) 
                                                          << 5U))) 
                                                   | (((~ (IData)(vlSelfRef.rst)) 
                                                       & (((~ 
                                                            (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                                             >> 0xcU)) 
                                                           & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_20)) 
                                                          | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sll) 
                                                             | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_slt) 
                                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_or) 
                                                                   | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui) 
                                                                      | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bne) 
                                                                         | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_blt) 
                                                                            | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bge) 
                                                                               | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lb) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lh) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ld) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lhu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mul) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulh) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_div) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mret) 
                                                                                | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi))))))))))))))))))) 
                                                      << 4U))) 
           | (((((~ (IData)(vlSelfRef.rst)) & (((~ 
                                                 (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                                  >> 0xcU)) 
                                                & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_87)) 
                                               | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sub) 
                                                  | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sll) 
                                                     | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sra) 
                                                        | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_and) 
                                                           | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_beq) 
                                                              | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bne) 
                                                                 | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_blt) 
                                                                    | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bgeu) 
                                                                       | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lb) 
                                                                          | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lw) 
                                                                             | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lbu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lwu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mul) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_div) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw) 
                                                                                | (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_22))))))))))))))))))) 
                << 3U) | (((~ (IData)(vlSelfRef.rst)) 
                           << 2U) & ((0x3ffffcU & (
                                                   ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_18) 
                                                    << 2U) 
                                                   & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                                      >> 0xaU))) 
                                     | (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_add) 
                                         | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sub) 
                                            | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srl) 
                                               | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_or) 
                                                  | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ebreak) 
                                                     | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sd) 
                                                        | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_beq) 
                                                           | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bne) 
                                                              | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bgeu) 
                                                                 | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lh) 
                                                                    | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lhu) 
                                                                       | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lwu) 
                                                                          | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhu) 
                                                                             | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_remu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mret) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi) 
                                                                                | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci)))))))))))))))))) 
                                        << 2U)))) | 
              ((((~ (IData)(vlSelfRef.rst)) & (((~ 
                                                 (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                                  >> 0xcU)) 
                                                & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_18)) 
                                               | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srai) 
                                                  | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_add) 
                                                     | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sra) 
                                                        | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr) 
                                                           | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sh) 
                                                              | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sd) 
                                                                 | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_beq) 
                                                                    | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lb) 
                                                                       | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lbu) 
                                                                          | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lhu) 
                                                                             | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhsu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_divu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_rem) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_remu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall) 
                                                                                | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc))))))))))))))))))) 
                << 1U) | ((~ (IData)(vlSelfRef.rst)) 
                          & (((~ (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                  >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_88)) 
                             | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srai) 
                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srl) 
                                   | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal) 
                                      | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sb) 
                                         | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sw) 
                                            | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sd) 
                                               | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bgeu) 
                                                  | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lbu) 
                                                     | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhsu) 
                                                        | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_divu) 
                                                           | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_rem) 
                                                              | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs)))))))))))))))));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_addr 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_ena)
            ? (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
               >> 0x14U) : 0U);
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_addr 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_ena)
            ? (0x1fU & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                        >> 0xfU)) : 0U);
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__inst_jxx 
        = ((0x21U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
           | (0x42U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__inst_bxx 
        = ((0xeU == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
           | ((0x1cU == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
              | ((0xe0U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                 | ((0xdU == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                    | ((0x38U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                       | (0x70U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc)))))));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_op2 
        = (((- (IData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op2_forward_ena))) 
            & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward)
                ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__exu_res
                : ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward)
                    ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
                    : ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op2_forward)
                        ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_rd_data_forward
                        : ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward)
                            ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward
                            : 0U))))) | (((- (IData)(
                                                     ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op2_forward_ena)) 
                                                      & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_ena)))) 
                                          & (((~ (IData)(vlSelfRef.rst)) 
                                              & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_ena))
                                              ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                             [vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_addr]
                                              : 0U)) 
                                         | ((- (IData)(
                                                       ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_ena) 
                                                        & ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_ena)) 
                                                           & (~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op2_forward_ena)))))) 
                                            & (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_ena) 
                                                & (0x300U 
                                                   == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_addr)))
                                                ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus
                                                : (
                                                   ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_ena) 
                                                    & (0x305U 
                                                       == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_addr)))
                                                    ? 
                                                   (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
                                                    << 2U)
                                                    : 
                                                   (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_ena) 
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
                                                        : 0U)))))))));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_1 
        = (1U & ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_ena)) 
                 | (0U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_addr))));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_BPU_update 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__inst_jxx) 
           | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__inst_bxx));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op1_forward 
        = ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_1)) 
           & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr) 
              == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward 
        = ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_1)) 
           & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr) 
              == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward 
        = ((~ ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag) 
               | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_1))) 
           & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr) 
              == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward 
        = ((~ ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag) 
               | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_1))) 
           & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr) 
              == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__new_entry 
        = ((~ ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch1) 
               | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch2))) 
           & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_BPU_update));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_stall 
        = ((~ (IData)(vlSelfRef.rst)) & (((~ ((IData)(vlSelfRef.rst) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)))) 
                                          & (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_ena) 
                                              & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_27) 
                                                 & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_addr) 
                                                    == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))) 
                                             | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_26) 
                                                & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_addr) 
                                                   == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr))))) 
                                         | (((~ ((IData)(vlSelfRef.rst) 
                                                 & (0U 
                                                    == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)))) 
                                             & (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_ena) 
                                                 & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_27) 
                                                    & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_addr) 
                                                       == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))) 
                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_26) 
                                                   & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_addr) 
                                                      == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr))))) 
                                            | ((((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward) 
                                                 & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_25)) 
                                                | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward) 
                                                   & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_24))) 
                                               | (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward) 
                                                   & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_25)) 
                                                  | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward) 
                                                     & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_24)))))));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_forward_ena 
        = (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward) 
            | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward) 
               | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op1_forward) 
                  | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward)))) 
           & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_ena));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__insert_branch1 
        = ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__lru_write)) 
           & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__new_entry));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__insert_branch2 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__new_entry) 
           & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__lru_write));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_valid 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_valid) 
           | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_stall));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ready 
        = ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_stall)) 
           & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ready));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_op1 
        = (((- (IData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_forward_ena))) 
            & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward)
                ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__exu_res
                : ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward)
                    ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
                    : ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op1_forward)
                        ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_rd_data_forward
                        : ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward)
                            ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward
                            : 0U))))) | ((- (IData)(
                                                    ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_forward_ena)) 
                                                     & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_ena)))) 
                                         & (((~ (IData)(vlSelfRef.rst)) 
                                             & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_ena))
                                             ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                            [vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_addr]
                                             : 0U)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__take_branch1 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch1) 
           | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__insert_branch1));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__take_branch2 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch2) 
           | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__insert_branch2));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_id_ex_reg__DOT__stall 
        = (1U & ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ready)) 
                 | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_valid)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if1if2reg__DOT__stall 
        = (1U & ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ready)) 
                 | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_stall)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if2idureg__DOT__stall 
        = (1U & (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_stall) 
                  | (~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ready))) 
                 | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_valid)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2 
        = (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_op1 
           < vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_op2);
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2 
        = (1U & (((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_op1 
                   ^ vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_op2) 
                  >> 0x1fU) ? (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_op1 
                               >> 0x1fU) : (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__now_bxx_jump_yes 
        = ((IData)(vlSelfRef.rst) | (((0xeU == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                                      & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_op1 
                                         == vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_op2)) 
                                     | (((0x1cU == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                                         & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_op1 
                                            != vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_op2)) 
                                        | (((0xe0U 
                                             == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                                            & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2)) 
                                           | (((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2)) 
                                               & (0xdU 
                                                  == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))) 
                                              | (((0x38U 
                                                   == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                                                  & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2)) 
                                                 | ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2)) 
                                                    & (0x70U 
                                                       == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc)))))))));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_next_pc 
        = ((0x21U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))
            ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_28
            : ((0x42U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                ? (0xfffffffeU & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_op1 
                                  + vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_imm))
                : (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__inst_bxx) 
                    & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__now_bxx_jump_yes))
                    ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_28
                    : (((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__now_bxx_jump_yes)) 
                        & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__inst_bxx))
                        ? ((IData)(4U) + vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc)
                        : ((0x73U == vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst)
                            ? (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
                               << 2U) : ((0x30200073U 
                                          == vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst)
                                          ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mepc
                                          : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_nextpc))))));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_22 
        = (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__inst_bxx) 
            & ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_bpupredict)) 
               & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__now_bxx_jump_yes)))
            ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_28
            : 0U);
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_btb_mispredicted 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_bpupredict) 
           ^ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__now_bxx_jump_yes));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_23 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_valid) 
           | (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_currentpc 
              == vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_next_pc));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_btb_updateTarget 
        = ((0x42U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))
            ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_op1
            : ((0x21U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_28
                : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_22));
    vlSelfRef.__Vtableidx1 = (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_btb_mispredicted) 
                               << 2U) | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__insert_branch1)
                                          ? 0U : (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__fsm1)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__next_fsm1 
        = Vysyx_25060170_topcore__ConstPool__TABLE_h4afdbdff_0
        [vlSelfRef.__Vtableidx1];
    vlSelfRef.__Vtableidx2 = (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_btb_mispredicted) 
                               << 2U) | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__insert_branch2)
                                          ? 0U : (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__fsm2)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__next_fsm2 
        = Vysyx_25060170_topcore__ConstPool__TABLE_h4afdbdff_0
        [vlSelfRef.__Vtableidx2];
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if1if2reg__DOT__flush 
        = (1U & ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_stall)) 
                 & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_btb_mispredicted) 
                    | ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_23)) 
                       | ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_bpupredict)) 
                          & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__inst_jxx))))));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__write_set[0U] 
        = (IData)((((QData)((IData)(((((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__valid2) 
                                       | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__take_branch2)) 
                                      << 0x1bU) | (0x7ffffffU 
                                                   & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__insert_branch2)
                                                       ? 
                                                      (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                                                       >> 5U)
                                                       : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__tag2))))) 
                    << 0x24U) | (((QData)((IData)(((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__take_branch2)
                                                    ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_btb_updateTarget
                                                    : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__target2))) 
                                  << 4U) | (QData)((IData)(
                                                           ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__next_fsm2) 
                                                            << 2U))))));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__write_set[1U] 
        = (IData)(((((QData)((IData)(((((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__valid2) 
                                        | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__take_branch2)) 
                                       << 0x1bU) | 
                                      (0x7ffffffU & 
                                       ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__insert_branch2)
                                         ? (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                                            >> 5U) : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__tag2))))) 
                     << 0x24U) | (((QData)((IData)(
                                                   ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__take_branch2)
                                                     ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_btb_updateTarget
                                                     : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__target2))) 
                                   << 4U) | (QData)((IData)(
                                                            ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__next_fsm2) 
                                                             << 2U))))) 
                   >> 0x20U));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__write_set[2U] 
        = (0xfffffffcU & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__write_set[2U]);
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__write_set[2U] 
        = ((3U & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__write_set[2U]) 
           | ((IData)((((QData)((IData)(((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__take_branch1)
                                          ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_btb_updateTarget
                                          : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__target1))) 
                        << 2U) | (QData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__next_fsm1)))) 
              << 2U));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__write_set[3U] 
        = ((0xfffffff0U & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__write_set[3U]) 
           | (((IData)((((QData)((IData)(((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__take_branch1)
                                           ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_btb_updateTarget
                                           : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__target1))) 
                         << 2U) | (QData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__next_fsm1)))) 
               >> 0x1eU) | ((IData)(((((QData)((IData)(
                                                       ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__take_branch1)
                                                         ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_btb_updateTarget
                                                         : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__target1))) 
                                       << 2U) | (QData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__next_fsm1))) 
                                     >> 0x20U)) << 2U)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__write_set[3U] 
        = ((0xfU & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__write_set[3U]) 
           | (0xfffffff0U & ((((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__valid1) 
                               | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__take_branch1)) 
                              << 0x1fU) | (0x7ffffff0U 
                                           & (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__insert_branch1)
                                                ? (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                                                   >> 5U)
                                                : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__tag1) 
                                              << 4U)))));
    if (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_BPU_update) 
         & ((7U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc 
                   >> 2U)) == (7U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                                     >> 2U))))) {
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[0U] 
            = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__write_set[0U];
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[1U] 
            = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__write_set[1U];
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[2U] 
            = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__write_set[2U];
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[3U] 
            = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__write_set[3U];
    } else {
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[0U] 
            = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem
            [(7U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc 
                    >> 2U))][0U];
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[1U] 
            = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem
            [(7U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc 
                    >> 2U))][1U];
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[2U] 
            = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem
            [(7U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc 
                    >> 2U))][2U];
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[3U] 
            = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem
            [(7U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc 
                    >> 2U))][3U];
    }
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__check_branch1 
        = ((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[3U] 
            >> 0x1fU) & ((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc 
                          >> 5U) == (0x7ffffffU & (
                                                   vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[3U] 
                                                   >> 4U))));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__check_branch2 
        = ((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[1U] 
            >> 0x1fU) & ((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc 
                          >> 5U) == (0x7ffffffU & (
                                                   vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[1U] 
                                                   >> 4U))));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__btb_valid 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__check_branch1) 
           | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__check_branch2));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_read__DOT__fsm_state 
        = (3U & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__check_branch1)
                  ? ((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[2U] 
                      << 0x1eU) | (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[2U] 
                                   >> 2U)) : ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__check_branch2)
                                               ? ((
                                                   vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[0U] 
                                                   << 0x1eU) 
                                                  | (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[0U] 
                                                     >> 2U))
                                               : 0U)));
}

VL_ATTR_COLD void Vysyx_25060170_topcore___024root___eval_triggers__stl(Vysyx_25060170_topcore___024root* vlSelf);

VL_ATTR_COLD bool Vysyx_25060170_topcore___024root___eval_phase__stl(Vysyx_25060170_topcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root___eval_phase__stl\n"); );
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vysyx_25060170_topcore___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vysyx_25060170_topcore___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_topcore___024root___dump_triggers__ico(Vysyx_25060170_topcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root___dump_triggers__ico\n"); );
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_topcore___024root___dump_triggers__act(Vysyx_25060170_topcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root___dump_triggers__act\n"); );
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_topcore___024root___dump_triggers__nba(Vysyx_25060170_topcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root___dump_triggers__nba\n"); );
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_25060170_topcore___024root____Vm_traceActivitySetAll(Vysyx_25060170_topcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root____Vm_traceActivitySetAll\n"); );
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vysyx_25060170_topcore___024root___ctor_var_reset(Vysyx_25060170_topcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root___ctor_var_reset\n"); );
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1121981920388016411ull);
    vlSelf->ysyx_25060170_topcore__DOT__DPIC_ls_mem_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9089545820066271710ull);
    vlSelf->ysyx_25060170_topcore__DOT__DPIC_ls_dpic_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17691246293249058455ull);
    vlSelf->ysyx_25060170_topcore__DOT__DPIC_ls_dpic_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13727272127896999294ull);
    vlSelf->ysyx_25060170_topcore__DOT__DPIC_ls_dpic_wlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2503568987876842855ull);
    vlSelf->ysyx_25060170_topcore__DOT__DPIC_DPIC_MEM_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7863500990975580763ull);
    vlSelf->ysyx_25060170_topcore__DOT__DPIC_ls_dpic_raddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13598897412452838464ull);
    vlSelf->ysyx_25060170_topcore__DOT__DPIC_dpi_ls_mem_skip_flag = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6381941188430951157ull);
    vlSelf->ysyx_25060170_topcore__DOT__diff_test_skip_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17640259184736937662ull);
    vlSelf->ysyx_25060170_topcore__DOT__dpic_diff_skip_flag_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6245987940576051898ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__btb_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15109874285456472077ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14773813356234318948ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4284534961401511940ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14333237726261380109ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_currentpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15281247061111211400ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_nextpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10308557530255760323ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_bpupredict = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10491711646867373531ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7609507461834035675ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_bpuvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13360472126631992230ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8317268070274554545ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15174186329431962688ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_nextpc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14432874453786524281ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_bpupredict = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3045792506789367769ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_bpuvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11902569491162672140ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1969663621430206333ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_csr_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14727048789332265172ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17015953800883255685ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8135891937458705205ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7789125664387520697ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5436117159869476385ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8693284403573184231ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13132645865117472451ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rd_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14455344083686626842ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8594895823288962698ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_wbctl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1066226973312380996ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_load_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10825243556061940693ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14815591165802011525ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3151859749335789197ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17764437218587978535ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15558278391426700682ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13936273448766440202ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_BPU_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18416520732622426386ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_btb_updateTarget = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2714914415236583658ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_btb_mispredicted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11390155652097861130ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 348659111484446425ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7030806569264768878ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14434363095610415849ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15800387211430418635ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15055808293295782991ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8704404891105986230ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8841886774723642051ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15273127382960333920ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9838669212329489672ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3759256391440237860ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2902747118282252254ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7787001065248038127ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18247317419888732208ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5719493542451657376ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4950190765146789221ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6597089118784718444ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3222131801976170938ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__exu_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6697165019360165198ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8601484494291445568ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10687287608439534803ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12514149571350498930ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1549637579589233991ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17130425506818750911ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4012091180860892105ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9691920851314688578ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12700678484254121356ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17793194210844460276ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4140350696634265190ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10460382620230859684ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7058507931336408913ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17113485626096087112ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9725987010428482509ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2390519665261073147ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16613673203559887724ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4049739012049697014ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7442503550130058752ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8409712334513616327ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9622013525460192462ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17263761822812691811ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13823726259756314906ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13118068758609232070ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1196689835142811699ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9722761084773234858ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7754821857558414675ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14177412633716228870ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15093372843874134698ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5158426389299098318ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11980906006280896818ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16370211454943942815ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3822913508575819524ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12503249033895995212ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4049760105197584672ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4034635759131093271ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17087114094656579100ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6844699896576202366ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6076140367379978684ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2586477919008387537ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5184967126052729741ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6112000650728639441ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12358175536894783255ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16834827179339162175ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9906244112342913749ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_rd_data_forward = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13555824692913094970ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_reg_load_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4512187956130581443ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5465856535932571471ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_csr_write_csr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16680543459269715568ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mepc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13592888003137080612ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set, __VscopeHash, 8261942614431233654ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_set, __VscopeHash, 9495731094909958992ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__write_set, __VscopeHash, 3744406810455391193ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__check_branch1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9892457640415672310ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__check_branch2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7274308986379003110ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14216805857336636462ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10652640093221274241ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__lru_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4074135699291124124ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem[__Vi0], __VscopeHash, 16234292622568791487ull);
    }
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_read__DOT__fsm_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1301463010094881416ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__valid1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4837050536164117014ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__valid2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7765459221250517473ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__tag1 = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 14330392955428964460ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__tag2 = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 18219089307392277883ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__target1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1665252921147966708ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__target2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2930949231244161150ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__fsm1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7992707290798513033ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__fsm2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4504486978780833894ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_lru__DOT__lru_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18258929167382885099ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__new_entry = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8675742555570326121ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__insert_branch1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1460354710678598573ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__insert_branch2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15170825439045757503ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__take_branch1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16637982664518219127ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__take_branch2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3354862015573408083ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__next_fsm1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9777454385854626795ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__next_fsm2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1717761656122178611ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if1if2reg__DOT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10381139711555772069ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if1if2reg__DOT__flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8890778828717142787ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if2idureg__DOT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6557748859793863800ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9296124843893385319ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17630556920566521633ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5780349126325662924ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op1_forward = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 816167450430018582ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12966237882026839739ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16347809942493059927ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 988982346772827835ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op2_forward = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15167064380886718827ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10756627999166906299ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_forward_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16752785332519961267ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op2_forward_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5238516229473860635ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12357140081925517157ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15241621398178179647ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__now_bxx_jump_yes = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8063697003915736820ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__inst_bxx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11141028086724313678ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__inst_jxx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7873614459878388261ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17979623404229249984ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10772597028587987826ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_22 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18315170894623065066ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_23 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7881931217211129504ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_24 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1190131014340358442ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_25 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1321858253124955235ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_26 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6152507164171122859ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_27 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6284234402955781452ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_28 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7474211357597904301ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18318515768709614003ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__6__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9087874503865033283ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__5__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5392351782246157647ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__4__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8216945589059202608ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16234217856877467576ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9442654733286378889ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3391390110608599279ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6386424440058206646ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11954805345398575473ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14464998562353773302ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11824794604774759867ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12626431135730531572ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 377228406204543210ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17899666658025174094ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8208036145361653238ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15820661974713452420ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16085896435944947795ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14282908198612210008ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lbu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7420193587367020034ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3656735710004050530ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lwu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16803188552677750098ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_beq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10910064594048255110ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bne = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6767662335626533351ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_blt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5451179812560108712ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13217683923955790353ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9891606817459988173ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bgeu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8976450404618520333ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_add = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5286648496080212244ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6262038761365436400ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sll = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7558738766877215749ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_slt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13819951321490637261ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5284816035726169705ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_xor = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6959799252436033854ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12370173648861922205ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11480283991352276724ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_or = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5603012541555505831ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_and = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7535721872790507838ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_div = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8955339752032346593ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_divu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12395859094362693185ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mul = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 952786326225543477ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16673381072916335518ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4985338616263949888ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15946991218815341509ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_rem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5233686874367479076ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_remu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7906996150794151587ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srai = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14465257777508898351ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8206855665469864620ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 406828429249710699ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1797599642525924994ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5920195194023202188ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8846449569369671125ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5294983974721271566ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15266909074875669839ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16658510132050492712ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ebreak = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18053750954875715756ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13530738354089966307ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4849548708829610848ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2441184799201724615ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14385068492802449622ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10677057733467085767ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9919664892489743474ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11636653072485197053ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11553303900773456764ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16830856488744694261ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8461092379356551303ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11506352505334221532ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_17 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1148244702294193080ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_18 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8778880569557840286ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_19 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6666335055548372339ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_20 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10522000782515035010ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_21 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8199997826806147165ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_22 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5555875062741481630ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_23 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8601135188719111009ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_24 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 231371079330935603ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_25 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1543721479163042609ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_26 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3375139154453844899ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_28 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18069599959076613555ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_83 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17952840893145731918ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_84 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13561743400616306172ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_85 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2649864894559072310ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_87 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17344325699181945473ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_88 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15346209680467573397ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_89 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15148431013460772737ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_90 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2905289229489028422ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_91 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 261166465424393205ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_92 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3306426591402040382ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_93 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7011758465049384421ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_94 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6813979798042449193ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_95 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16359382512308707902ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_97 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12774891361759615176ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_98 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10776775343045223109ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_99 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11921333624339771531ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_100 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9229660562261213210ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_101 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11616656470315341929ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_102 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 79733035973979588ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_103 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14436583818497770738ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_104 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6823656272151196666ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_106 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9538342511767903207ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_108 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16979657134416488961ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_id_ex_reg__DOT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16803702670822210336ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5023205322253607264ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10595448237473672110ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10529124961820841161ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15501431735674903820ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15591883669915348440ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5819117375231530763ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10121763419216474095ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__rem = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14157157875566700313ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8182467033393017301ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12162886466901862756ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5942979966321263681ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11532596273834004420ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17010277529344215813ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11630051227773979120ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2742700256111165674ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9048407609982125550ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h0fc673a9__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8915518476135909191ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h273e5a99__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17788631770046302499ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h252d97a0__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16937708564742914598ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h0e0c055b__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3210138843474321523ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h0e145671__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4690888597957797108ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgRegularize_h788ac90a_0_6 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1352632907764031553ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17357149047258617099ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__data_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16701637663109636089ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5562496365455409025ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h0c034a45_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5813852868859964064ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h0c034a45_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1918054313390764621ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_mem__DOT__data_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11313985468655089589ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5687462034836736125ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16875588282201302469ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8180959923519807888ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4388284440246014989ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4180968212719599831ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3587112649730907031ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mie_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 137830912212257254ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mpie_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8173148164440053300ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mpp_set = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4781034544201499594ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mtvec_base = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 11137020042078964725ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mcause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10056780437239730997ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mscratch = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14403539453236924402ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5465253624359487956ull);
    }
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__DPIC_inst_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1864364718860927550ull);
    vlSelf->ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__mem_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1186998681215963499ull);
    vlSelf->__Vtask_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__0__rdata = 0;
    vlSelf->__Vtask_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__0__dpic_difftest_skip_flag = 0;
    vlSelf->__Vtask_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__1__rdata = 0;
    vlSelf->__Vtask_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__1__dpic_difftest_skip_flag = 0;
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtableidx2 = 0;
    vlSelf->__Vtableidx3 = 0;
    vlSelf->__VdfgRegularize_h495687df_0_7 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13274218766982498660ull);
    vlSelf->__VdfgRegularize_h495687df_0_8 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14821175674958249185ull);
    vlSelf->__VdfgRegularize_h495687df_0_9 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5668960702345687918ull);
    vlSelf->__VdfgRegularize_h495687df_0_10 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6996227585280104470ull);
    vlSelf->__VdfgRegularize_h495687df_0_11 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9845818090104929725ull);
    vlSelf->__VdfgRegularize_h495687df_0_12 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11917002032595770774ull);
    vlSelf->__VdfgRegularize_h495687df_0_13 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2023296356072706623ull);
    vlSelf->__VdfgRegularize_h495687df_0_14 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3132856617443542949ull);
    vlSelf->__VdfgRegularize_h495687df_0_15 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2068239855133095956ull);
    vlSelf->__VdfgRegularize_h495687df_0_16 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13757078957120861112ull);
    vlSelf->__VdfgRegularize_h495687df_0_17 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 283266112618723667ull);
    vlSelf->__VdfgRegularize_h495687df_0_21 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10034728411878291563ull);
    vlSelf->__VdfgRegularize_h495687df_0_22 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5960013198840170116ull);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
