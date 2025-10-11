// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25060170_top.h for the primary calling header

#include "Vysyx_25060170_top__pch.h"
#include "Vysyx_25060170_top___024root.h"

VL_ATTR_COLD void Vysyx_25060170_top___024root___eval_static(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_static\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vysyx_25060170_top___024root___eval_initial(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_initial\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vysyx_25060170_top___024root___eval_final(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_final\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_top___024root___dump_triggers__stl(Vysyx_25060170_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vysyx_25060170_top___024root___eval_phase__stl(Vysyx_25060170_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25060170_top___024root___eval_settle(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_settle\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vysyx_25060170_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("vsrc/ysyx_25060170_top.v", 5, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vysyx_25060170_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_top___024root___dump_triggers__stl(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___dump_triggers__stl\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vysyx_25060170_top___024root___stl_sequent__TOP__0(Vysyx_25060170_top___024root* vlSelf);
VL_ATTR_COLD void Vysyx_25060170_top___024root____Vm_traceActivitySetAll(Vysyx_25060170_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25060170_top___024root___eval_stl(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_stl\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vysyx_25060170_top___024root___stl_sequent__TOP__0(vlSelf);
        Vysyx_25060170_top___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__dpic__DOT__difftest_dut_regs_TOP(IData/*31:0*/ regs0, IData/*31:0*/ regs1, IData/*31:0*/ regs2, IData/*31:0*/ regs3, IData/*31:0*/ regs4, IData/*31:0*/ regs5, IData/*31:0*/ regs6, IData/*31:0*/ regs7, IData/*31:0*/ regs8, IData/*31:0*/ regs9, IData/*31:0*/ regs10, IData/*31:0*/ regs11, IData/*31:0*/ regs12, IData/*31:0*/ regs13, IData/*31:0*/ regs14, IData/*31:0*/ regs15, IData/*31:0*/ regs16, IData/*31:0*/ regs17, IData/*31:0*/ regs18, IData/*31:0*/ regs19, IData/*31:0*/ regs20, IData/*31:0*/ regs21, IData/*31:0*/ regs22, IData/*31:0*/ regs23, IData/*31:0*/ regs24, IData/*31:0*/ regs25, IData/*31:0*/ regs26, IData/*31:0*/ regs27, IData/*31:0*/ regs28, IData/*31:0*/ regs29, IData/*31:0*/ regs30, IData/*31:0*/ regs31);
void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__dpic__DOT__difftest_dut_csr_TOP(IData/*31:0*/ csr_mstatus, IData/*31:0*/ csr_mtvec, IData/*31:0*/ csr_mepc, IData/*31:0*/ csr_mcause);
void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__lsu3__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata, CData/*7:0*/ rlen);
void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__dpic__DOT__pc_inst_end_TOP(IData/*31:0*/ thepc_data, IData/*31:0*/ the_inst);
void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__dpic__DOT__set_npc_exit_TOP(IData/*31:0*/ pc, IData/*31:0*/ halt_ret);
void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__dpic__DOT__magic_instruction_TOP();
extern const VlUnpacked<CData/*3:0*/, 256> Vysyx_25060170_top__ConstPool__TABLE_h3b4d3bf7_0;
extern const VlUnpacked<CData/*3:0*/, 8> Vysyx_25060170_top__ConstPool__TABLE_h1ece3f4a_0;

VL_ATTR_COLD void Vysyx_25060170_top___024root___stl_sequent__TOP__0(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___stl_sequent__TOP__0\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__dpic__DOT__difftest_dut_regs_TOP(
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [1U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [2U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [3U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [4U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [5U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [6U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [7U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [8U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [9U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0xaU], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0xbU], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0xcU], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0xdU], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0xeU], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0xfU], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0x10U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0x11U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0x12U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0x13U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0x14U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0x15U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0x16U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0x17U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0x18U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0x19U], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0x1aU], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0x1bU], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0x1cU], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0x1dU], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0x1eU], 
                                                                                vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                                                                                [0x1fU]);
    Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__dpic__DOT__difftest_dut_csr_TOP(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus, vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mepc, 
                                                                                (vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mtvec_base 
                                                                                << 2U), vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mcause);
    vlSelfRef.ysyx_25060170_top__DOT__id_ex_pc = ((IData)(vlSelfRef.rst)
                                                   ? 0U
                                                   : vlSelfRef.ysyx_25060170_top__DOT__if_id_pc);
    Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__lsu3__DOT__pmem_read_TOP(vlSelfRef.ysyx_25060170_top__DOT__if_id_pc, vlSelfRef.__Vtask_ysyx_25060170_top__DOT__dpic__DOT__pmem_read__2__rdata, 4U);
    vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
        = vlSelfRef.__Vtask_ysyx_25060170_top__DOT__dpic__DOT__pmem_read__2__rdata;
    Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__dpic__DOT__pc_inst_end_TOP(vlSelfRef.ysyx_25060170_top__DOT__if_id_pc, vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst);
    if ((0x100073U == vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)) {
        Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__dpic__DOT__set_npc_exit_TOP(vlSelfRef.ysyx_25060170_top__DOT__if_id_pc, 0U);
    } else if ((0x40000033U == vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)) {
        Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__dpic__DOT__magic_instruction_TOP();
    }
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__j_imm 
        = ((0x80000U & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                        >> 0xcU)) | ((0x7f800U & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                            >> 0x15U)))));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__b_imm 
        = (((0x800U & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                       >> 0x14U)) | (0x400U & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                               << 3U))) 
           | ((0x3f0U & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                         >> 0x15U)) | (0xfU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                               >> 8U))));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__6__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x38U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__5__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x18U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_86 
        = (IData)((0U == (0x42000000U & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_85 
        = (IData)((0x40000000U == (0x42000000U & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jal 
        = ((~ (IData)(vlSelfRef.rst)) & (0x6cU == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_lui 
        = ((~ (IData)(vlSelfRef.rst)) & (0x34U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_auipc 
        = ((~ (IData)(vlSelfRef.rst)) & (0x14U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jalr 
        = ((~ (IData)(vlSelfRef.rst)) & (0x64U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__0__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x20U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch 
        = ((~ (IData)(vlSelfRef.rst)) & (0x60U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__1__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (IData)((3U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst))));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x10U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__3__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x30U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__7__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x70U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgExtracted_hb8436119__0 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_lui) 
           | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_auipc));
    vlSelfRef.ysyx_25060170_top__DOT__id_ex_jump = 
        ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jal) 
         | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jalr));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_102 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xeU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__0__KET__));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_95 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch) 
           & (IData)((0U == (0x6000U & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst))));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_7 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xeU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_6 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__1__KET__) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xeU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_98 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xeU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__1__KET__));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_83 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xeU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__4__KET__));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_19 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__4__KET__) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xeU));
    vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs2_ena 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__6__KET__) 
           | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__3__KET__) 
              | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch) 
                 | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__0__KET__))));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_93 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xeU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__3__KET__));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_14 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__3__KET__) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xeU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_23 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__7__KET__) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xeU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_79 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xeU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__7__KET__));
    vlSelfRef.ysyx_25060170_top__DOT__id_wb_ctl = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__1__KET__)
                                                    ? 1U
                                                    : 
                                                   (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__7__KET__) 
                                                     | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__6__KET__) 
                                                        | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__5__KET__) 
                                                           | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__4__KET__) 
                                                              | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__3__KET__) 
                                                                 | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_lui) 
                                                                    | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_auipc) 
                                                                       | (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_jump))))))))
                                                     ? 2U
                                                     : 0U));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_100 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_102));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_4 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_102) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_94 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_7));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_8 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_7) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_96 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_6));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_97 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_98));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_5 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_98) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_82 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_83));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_18 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_83) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_20 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_19) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_81 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_19));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_92 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_93));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_12 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_93) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_88 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_14));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_16 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_14) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_24 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_23) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_78 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xdU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_79));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_22 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_79) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xdU));
    vlSelfRef.ysyx_25060170_top__DOT__id_reg_rd_ena 
        = ((0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                            >> 7U))) & (0U != (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_wb_ctl)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_21 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_81) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_91 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_92));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_11 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_92) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_89 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_12));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_13 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_12) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_87 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_88));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_15 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_88) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_84 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_16));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_17 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_16) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrsi 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_24));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrw 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_78) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_77 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_78));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrs 
        = ((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_22));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrc 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_22) 
           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
              >> 0xcU));
    vlSelfRef.ysyx_25060170_top__DOT__id_reg_rd_addr 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rd_ena)
            ? (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                        >> 7U)) : 0U);
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_ecall 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_77) 
           & (0U == (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                     >> 0x14U)));
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_32 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrc) 
           | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrsi));
    vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs1_ena 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__6__KET__) 
           | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__5__KET__) 
              | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__4__KET__) 
                 | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__3__KET__) 
                    | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch) 
                       | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__1__KET__) 
                          | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__0__KET__) 
                             | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jalr) 
                                | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrw) 
                                    | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrs) 
                                       | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrc))) 
                                   | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_ecall))))))))));
    vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel 
        = ((((((~ (IData)(vlSelfRef.rst)) << 7U) & 
              ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                     >> 0x1eU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_21)) 
                << 7U) | ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0x19U)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_87)) 
                           << 7U) | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_auipc) 
                                      << 7U) | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_77) 
                                                  & (1U 
                                                     == 
                                                     (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                      >> 0x14U))) 
                                                 << 7U) 
                                                | ((0x7ffff80U 
                                                    & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_100) 
                                                        << 7U) 
                                                       & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                          >> 5U))) 
                                                   | ((((~ 
                                                         (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                          >> 0xcU)) 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_4)) 
                                                       << 7U) 
                                                      | ((((~ 
                                                            (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                             >> 0xcU)) 
                                                           & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_8)) 
                                                          << 7U) 
                                                         | ((0x7ffff80U 
                                                             & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_5) 
                                                                 << 7U) 
                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                   >> 5U))) 
                                                            | ((0x3f80U 
                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_11) 
                                                                    << 7U) 
                                                                   & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                      >> 0x12U))) 
                                                               | ((0x3f80U 
                                                                   & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_87) 
                                                                       << 7U) 
                                                                      & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                         >> 0x12U))) 
                                                                  | ((0x3f80U 
                                                                      & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_17) 
                                                                          << 7U) 
                                                                         & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                            >> 0x12U))) 
                                                                     | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrw) 
                                                                         << 7U) 
                                                                        | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_23) 
                                                                             & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)))) 
                                                                            << 7U) 
                                                                           | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrsi) 
                                                                               << 7U) 
                                                                              | (0x7ffff80U 
                                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_24) 
                                                                                << 7U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 5U)))))))))))))))))) 
             | (0x40U & (((~ (IData)(vlSelfRef.rst)) 
                          << 6U) & ((0x3ffffc0U & (
                                                   ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_82) 
                                                    << 6U) 
                                                   & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                      >> 6U))) 
                                    | ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                             >> 0x19U)) 
                                         & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_13)) 
                                        << 6U) | ((
                                                   ((~ 
                                                     (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                      >> 0x19U)) 
                                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_87)) 
                                                   << 6U) 
                                                  | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_lui) 
                                                      << 6U) 
                                                     | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jalr) 
                                                         << 6U) 
                                                        | ((((~ 
                                                              (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                               >> 0xcU)) 
                                                             & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_100)) 
                                                            << 6U) 
                                                           | ((0x3ffffc0U 
                                                               & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_94) 
                                                                   << 6U) 
                                                                  & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                     >> 6U))) 
                                                              | ((((~ 
                                                                    (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                     >> 0xcU)) 
                                                                   & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_8)) 
                                                                  << 6U) 
                                                                 | ((((~ 
                                                                       (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                        >> 0xcU)) 
                                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_5)) 
                                                                     << 6U) 
                                                                    | ((0x3ffffc0U 
                                                                        & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_5) 
                                                                            << 6U) 
                                                                           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                              >> 6U))) 
                                                                       | ((0x1fc0U 
                                                                           & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_91) 
                                                                               << 6U) 
                                                                              & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x13U))) 
                                                                          | ((0x1fc0U 
                                                                              & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_84) 
                                                                                << 6U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x13U))) 
                                                                             | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_77) 
                                                                                & (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)))) 
                                                                                | vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_32) 
                                                                                << 6U)))))))))))))))) 
            | ((((~ (IData)(vlSelfRef.rst)) << 5U) 
                & ((0x1ffffe0U & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_20) 
                                   << 5U) & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                             >> 7U))) 
                   | ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                            >> 0x19U)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_89)) 
                       << 5U) | ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                       >> 0x19U)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_13)) 
                                  << 5U) | ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                  >> 0x19U)) 
                                              & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_17)) 
                                             << 5U) 
                                            | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_auipc) 
                                                << 5U) 
                                               | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jal) 
                                                   << 5U) 
                                                  | ((((~ 
                                                        (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                         >> 0xcU)) 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_94)) 
                                                      << 5U) 
                                                     | ((0x1ffffe0U 
                                                         & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_94) 
                                                             << 5U) 
                                                            & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                               >> 7U))) 
                                                        | ((((~ 
                                                              (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                               >> 0xcU)) 
                                                             & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_8)) 
                                                            << 5U) 
                                                           | ((0x1ffffe0U 
                                                               & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_97) 
                                                                   << 5U) 
                                                                  & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                     >> 7U))) 
                                                              | ((((~ 
                                                                    (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                     >> 0xcU)) 
                                                                   & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_5)) 
                                                                  << 5U) 
                                                                 | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_6) 
                                                                      & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)))) 
                                                                     << 5U) 
                                                                    | ((0xfe0U 
                                                                        & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_11) 
                                                                            << 5U) 
                                                                           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                              >> 0x14U))) 
                                                                       | ((0xfe0U 
                                                                           & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_13) 
                                                                               << 5U) 
                                                                              & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x14U))) 
                                                                          | ((0xfe0U 
                                                                              & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_15) 
                                                                                << 5U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x14U))) 
                                                                             | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_ecall) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrw) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrs) 
                                                                                << 5U) 
                                                                                | (0x1ffffe0U 
                                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_24) 
                                                                                << 5U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 7U)))))))))))))))))))))) 
               | (((~ (IData)(vlSelfRef.rst)) << 4U) 
                  & ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                           >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_20)) 
                      << 4U) | ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                      >> 0x19U)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_11)) 
                                 << 4U) | ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                 >> 0x19U)) 
                                             & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_89)) 
                                            << 4U) 
                                           | ((((~ 
                                                 (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                  >> 0x19U)) 
                                                & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_84)) 
                                               << 4U) 
                                              | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_lui) 
                                                  << 4U) 
                                                 | ((0xfffff0U 
                                                     & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_95) 
                                                         << 4U) 
                                                        & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                           >> 8U))) 
                                                    | ((((~ 
                                                          (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                           >> 0xcU)) 
                                                         & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_94)) 
                                                        << 4U) 
                                                       | ((0xfffff0U 
                                                           & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_94) 
                                                               << 4U) 
                                                              & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                 >> 8U))) 
                                                          | ((((~ 
                                                                (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                 >> 0xcU)) 
                                                               & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_97)) 
                                                              << 4U) 
                                                             | ((0xfffff0U 
                                                                 & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_97) 
                                                                     << 4U) 
                                                                    & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                       >> 8U))) 
                                                                | ((0xfffff0U 
                                                                    & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_5) 
                                                                        << 4U) 
                                                                       & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                          >> 8U))) 
                                                                   | ((0xfffff0U 
                                                                       & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_96) 
                                                                           << 4U) 
                                                                          & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                             >> 8U))) 
                                                                      | ((0x7f0U 
                                                                          & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_91) 
                                                                              << 4U) 
                                                                             & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x15U))) 
                                                                         | ((0x7f0U 
                                                                             & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_11) 
                                                                                << 4U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x15U))) 
                                                                            | ((0x7f0U 
                                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_13) 
                                                                                << 4U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x15U))) 
                                                                               | ((0x7f0U 
                                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_87) 
                                                                                << 4U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x15U))) 
                                                                                | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_77) 
                                                                                & (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)))) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_23) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst))))) 
                                                                                << 4U)))))))))))))))))))) 
           | (((8U & (((~ (IData)(vlSelfRef.rst)) << 3U) 
                      & ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                               >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_81)) 
                          << 3U) | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_91) 
                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_85)) 
                                     << 3U) | ((((~ 
                                                  (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                   >> 0x19U)) 
                                                 & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_11)) 
                                                << 3U) 
                                               | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_15) 
                                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_85)) 
                                                   << 3U) 
                                                  | ((((~ 
                                                        (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                         >> 0x19U)) 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_17)) 
                                                      << 3U) 
                                                     | ((((~ 
                                                           (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                            >> 0xcU)) 
                                                          & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_95)) 
                                                         << 3U) 
                                                        | ((0x7ffff8U 
                                                            & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_95) 
                                                                << 3U) 
                                                               & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                  >> 9U))) 
                                                           | ((((~ 
                                                                 (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                  >> 0xcU)) 
                                                                & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_94)) 
                                                               << 3U) 
                                                              | ((0x7ffff8U 
                                                                  & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_8) 
                                                                      << 3U) 
                                                                     & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                        >> 9U))) 
                                                                 | ((((~ 
                                                                       (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                        >> 0xcU)) 
                                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_97)) 
                                                                     << 3U) 
                                                                    | ((((~ 
                                                                          (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                           >> 0xcU)) 
                                                                         & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_5)) 
                                                                        << 3U) 
                                                                       | ((((~ 
                                                                             (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                              >> 0xcU)) 
                                                                            & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_96)) 
                                                                           << 3U) 
                                                                          | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_6) 
                                                                               & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)))) 
                                                                              << 3U) 
                                                                             | ((0x3f8U 
                                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_91) 
                                                                                << 3U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x16U))) 
                                                                                | ((0x3f8U 
                                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_87) 
                                                                                << 3U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x16U))) 
                                                                                | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_ecall) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrw) 
                                                                                | vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_32)) 
                                                                                << 3U)))))))))))))))))) 
               | (((~ (IData)(vlSelfRef.rst)) << 2U) 
                  & ((0x3ffffcU & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_18) 
                                    << 2U) & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                              >> 0xaU))) 
                     | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_91) 
                          & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_86)) 
                         << 2U) | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_91) 
                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_85)) 
                                    << 2U) | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_15) 
                                                & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_86)) 
                                               << 2U) 
                                              | ((((~ 
                                                    (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                     >> 0x19U)) 
                                                   & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_84)) 
                                                  << 2U) 
                                                 | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_77) 
                                                      & (1U 
                                                         == 
                                                         (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                          >> 0x14U))) 
                                                     << 2U) 
                                                    | ((0x3ffffcU 
                                                        & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_4) 
                                                            << 2U) 
                                                           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                              >> 0xaU))) 
                                                       | ((((~ 
                                                             (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                              >> 0xcU)) 
                                                            & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_95)) 
                                                           << 2U) 
                                                          | ((0x3ffffcU 
                                                              & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_95) 
                                                                  << 2U) 
                                                                 & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                    >> 0xaU))) 
                                                             | ((0x3ffffcU 
                                                                 & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_8) 
                                                                     << 2U) 
                                                                    & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                       >> 0xaU))) 
                                                                | ((0x3ffffcU 
                                                                    & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_97) 
                                                                        << 2U) 
                                                                       & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                          >> 0xaU))) 
                                                                   | ((0x3ffffcU 
                                                                       & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_96) 
                                                                           << 2U) 
                                                                          & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                             >> 0xaU))) 
                                                                      | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_6) 
                                                                           & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)))) 
                                                                          << 2U) 
                                                                         | ((0x1fcU 
                                                                             & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_13) 
                                                                                << 2U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x17U))) 
                                                                            | ((0x1fcU 
                                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_17) 
                                                                                << 2U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x17U))) 
                                                                               | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_77) 
                                                                                & (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)))) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrs) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_23) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)))) 
                                                                                << 2U) 
                                                                                | (0x3ffffcU 
                                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_24) 
                                                                                << 2U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0xaU))))))))))))))))))))))) 
              | ((((~ (IData)(vlSelfRef.rst)) << 1U) 
                  & ((((~ (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                           >> 0xcU)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_18)) 
                      << 1U) | ((6U & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_21) 
                                        << 1U) & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                  >> 0x1dU))) 
                                | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_91) 
                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_86)) 
                                    << 1U) | ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_15) 
                                                & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_85)) 
                                               << 1U) 
                                              | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jalr) 
                                                  << 1U) 
                                                 | ((0x1ffffeU 
                                                     & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_100) 
                                                         << 1U) 
                                                        & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                           >> 0xbU))) 
                                                    | ((0x1ffffeU 
                                                        & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_4) 
                                                            << 1U) 
                                                           & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                              >> 0xbU))) 
                                                       | ((((~ 
                                                             (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                              >> 0xcU)) 
                                                            & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_95)) 
                                                           << 1U) 
                                                          | ((((~ 
                                                                (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                 >> 0xcU)) 
                                                               & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_97)) 
                                                              << 1U) 
                                                             | ((((~ 
                                                                   (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                    >> 0xcU)) 
                                                                  & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_96)) 
                                                                 << 1U) 
                                                                | ((0x1ffffeU 
                                                                    & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_96) 
                                                                        << 1U) 
                                                                       & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                          >> 0xbU))) 
                                                                   | ((0xfeU 
                                                                       & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_89) 
                                                                           << 1U) 
                                                                          & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                             >> 0x18U))) 
                                                                      | ((0xfeU 
                                                                          & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_13) 
                                                                              << 1U) 
                                                                             & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x18U))) 
                                                                         | ((0xfeU 
                                                                             & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_15) 
                                                                                << 1U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x18U))) 
                                                                            | ((0xfeU 
                                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_84) 
                                                                                << 1U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x18U))) 
                                                                               | ((0xfeU 
                                                                                & (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_17) 
                                                                                << 1U) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x18U))) 
                                                                                | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_ecall) 
                                                                                | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrc)) 
                                                                                << 1U)))))))))))))))))) 
                 | ((~ (IData)(vlSelfRef.rst)) & ((
                                                   (~ 
                                                    (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                     >> 0xcU)) 
                                                   & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_82)) 
                                                  | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_21) 
                                                      & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                         >> 0x1eU)) 
                                                     | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_15) 
                                                         & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_86)) 
                                                        | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jal) 
                                                           | (((~ 
                                                                (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                 >> 0xcU)) 
                                                               & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_100)) 
                                                              | (((~ 
                                                                   (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                    >> 0xcU)) 
                                                                  & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_4)) 
                                                                 | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_4) 
                                                                     & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                        >> 0xcU)) 
                                                                    | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_8) 
                                                                        & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                           >> 0xcU)) 
                                                                       | (((~ 
                                                                            (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                             >> 0xcU)) 
                                                                           & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_96)) 
                                                                          | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_89) 
                                                                              & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x19U)) 
                                                                             | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_15) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x19U)) 
                                                                                | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_84) 
                                                                                & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                                                >> 0x19U)) 
                                                                                | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrs)))))))))))))))));
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__mcause_value = 0U;
    vlSelfRef.__Vtableidx1 = vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel;
    vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl = Vysyx_25060170_top__ConstPool__TABLE_h3b4d3bf7_0
        [vlSelfRef.__Vtableidx1];
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena = 0U;
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena = 0U;
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena = 0U;
    if ((0x2aU != (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) {
        if ((0x54U != (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) {
            vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena 
                = (((0xa8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                    || (0x94U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                   || (((((0x25U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                          || (0x4aU == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                         || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                        || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                       && (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                           >> 0xfU)))));
            vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena 
                = (((0xa8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                    || (0x94U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))
                    ? (0U != (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                       >> 7U))) : (
                                                   (((0x25U 
                                                      == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                                                     || (0x4aU 
                                                         == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                                                    || (0xc8U 
                                                        == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                                                   || (0xa4U 
                                                       == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))));
        }
        if ((0x54U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) {
            vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena = 1U;
        } else if ((1U & (~ ((0xa8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                             || (0x94U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))))) {
            if ((1U & (~ ((((0x25U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                            || (0x4aU == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                           || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                          || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))))) {
                vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena = 0U;
            }
        }
    }
    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena = 0U;
    vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT____VdfgRegularize_hcffc0c70_0_0 
        = (1U & (~ ((IData)(vlSelfRef.rst) | (0U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl)))));
    if ((0x2aU == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) {
        vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__mcause_value = 0xbU;
        vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena = 1U;
    } else {
        if ((1U & (~ ((0xa8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                      || (0x94U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))))) {
            if ((1U & (~ ((0x25U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                          || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))))) {
                if ((1U & (~ ((0x4aU == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                              || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))))) {
                    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__mcause_value = 0U;
                }
            }
        }
        if ((0x54U != (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) {
            if ((1U & (~ ((0xa8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                          || (0x94U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))))) {
                if ((1U & (~ ((((0x25U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                                || (0x4aU == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                               || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                              || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))))) {
                    vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena = 0U;
                }
            }
        }
    }
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT____VdfgRegularize_hc2007cd8_0_4 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena) 
           | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena));
    vlSelfRef.ysyx_25060170_top__DOT__id_ex_csrctl 
        = ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena) 
             << 3U) | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena) 
                       << 2U)) | (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena) 
                                   << 1U) | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena)));
    if (vlSelfRef.rst) {
        vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2 = 0U;
        vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 = 0U;
    } else {
        vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm 
            = (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__1__KET__) 
                | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__4__KET__) 
                   | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__5__KET__) 
                      | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__7__KET__) 
                         | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jalr)))))
                ? (((- (IData)((vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                >> 0x1fU))) << 0xcU) 
                   | (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                      >> 0x14U)) : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgExtracted_hb8436119__0)
                                     ? (0xfffff000U 
                                        & vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst)
                                     : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jal)
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__j_imm 
                                                            >> 0x13U)))) 
                                             << 0x15U) 
                                            | (vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__j_imm 
                                               << 1U))
                                         : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__0__KET__)
                                             ? (((- (IData)(
                                                            (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | ((0xfe0U 
                                                    & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                                         >> 7U))))
                                             : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch)
                                                 ? 
                                                (((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__b_imm) 
                                                                 >> 0xbU)))) 
                                                  << 0xdU) 
                                                 | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__b_imm) 
                                                    << 1U))
                                                 : 0U)))));
        vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2 
            = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs2_ena)
                ? (((~ (IData)(vlSelfRef.rst)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs2_ena))
                    ? vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                   [((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs2_ena)
                      ? (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0x14U)) : 0U)]
                    : 0U) : (((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__0__KET__) 
                              | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__1__KET__) 
                                 | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch) 
                                    | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__4__KET__) 
                                       | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__5__KET__) 
                                          | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__7__KET__) 
                                             | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgExtracted_hb8436119__0)))))))
                              ? vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm
                              : 0U));
        vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
            = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs1_ena)
                ? (((~ (IData)(vlSelfRef.rst)) & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs1_ena))
                    ? vlSelfRef.ysyx_25060170_top__DOT__reg3__DOT__regs
                   [((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_reg_rs1_ena)
                      ? (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                  >> 0xfU)) : 0U)] : 0U)
                : (((0xa0U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                    | (0x21U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))
                    ? vlSelfRef.ysyx_25060170_top__DOT__if_id_pc
                    : ((((0x94U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                         | (0xc8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))) 
                        | (0xa4U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))
                        ? (0x1fU & (vlSelfRef.ysyx_25060170_top__DOT__DPIC_if_inst 
                                    >> 0xfU)) : 0U)));
    }
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_add_op2 
        = (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
           + vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2);
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_sra_op2 
        = VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1, 
                         (0x1fU & vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2));
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__div 
        = VL_DIVS_III(32, vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1, vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2);
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__rem 
        = VL_MODDIVS_III(32, vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1, vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2);
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__mul 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1), 
                      VL_EXTENDS_QI(64,32, vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2));
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_sub_op2 
        = (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
           - vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2);
    vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__re 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT____VdfgRegularize_hcffc0c70_0_0) 
           & ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ls_ctl) 
              >> 3U));
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2 
        = (1U & (((~ (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2 
                      >> 0x1fU)) & (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                    >> 0x1fU)) | ((
                                                   (~ 
                                                    (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                     >> 0x1fU)) 
                                                   & ((~ 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2 
                                                        >> 0x1fU)) 
                                                      & (vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_sub_op2 
                                                         >> 0x1fU))) 
                                                  | ((vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                      & (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2 
                                                         & vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_sub_op2)) 
                                                     >> 0x1fU))));
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr 
        = ((0U != (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_csrctl))
            ? (0xfffU & vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm)
            : 0U);
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr 
        = ((0x300U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
           & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena));
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__read_csr_data 
        = (((0x300U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
            & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena))
            ? vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus
            : ((((0x341U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                 & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena)) 
                | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena))
                ? vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mepc
                : ((((0x305U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena)) 
                    | (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena))
                    ? (vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mtvec_base 
                       << 2U) : (((0x342U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_addr)) 
                                  & (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena))
                                  ? vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mcause
                                  : 0U))));
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__write_csr_data 
        = ((0x2aU == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
            ? vlSelfRef.ysyx_25060170_top__DOT__id_ex_pc
            : (((0xa8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                || (0x94U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))
                ? vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1
                : (((0x25U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                    || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))
                    ? (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                       | vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__read_csr_data)
                    : (((0x4aU == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                        || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)))
                        ? ((~ vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1) 
                           & vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__read_csr_data)
                        : 0U))));
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__alu_res 
        = ((IData)(vlSelfRef.rst) ? 0U : ((0x80U & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                           ? ((0x40U 
                                               & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                               ? ((0x20U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        ^ vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)))))))
                                               : ((0x20U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : (IData)(
                                                                  (vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__mul 
                                                                   >> 0x20U))))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_add_op2)))))
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__div)))
                                                     : 0U)
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__rem)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        + vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        + vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm)
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)))))))))
                                           : ((0x40U 
                                               & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                               ? ((0x20U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        + vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        < vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2))))))
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__mul))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_add_op2))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__rem
                                                        : 
                                                       ((IData)(4U) 
                                                        + vlSelfRef.ysyx_25060170_top__DOT__id_ex_pc))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        + vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm)
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        << 
                                                        (0x1fU 
                                                         & vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2))))))))
                                               : ((0x20U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        + vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2)))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        & vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__div
                                                        : 0U)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 
                                                       ((IData)(4U) 
                                                        + vlSelfRef.ysyx_25060170_top__DOT__id_ex_pc)
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        & vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2))))))
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        + vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        << 
                                                        (0x1fU 
                                                         & vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        + vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        | vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        | vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_sub_op2))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        + vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm)
                                                        : vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_sra_op2)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        ^ vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_add_op2)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2))
                                                        : 
                                                       (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                                        < vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_sra_op2
                                                        : (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                                        ? vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_add_op2
                                                        : 0U)))))))));
    vlSelfRef.ysyx_25060170_top__DOT__ex_aludata = 
        ((0U != (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_csrctl))
          ? vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__read_csr_data
          : vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__alu_res);
    if (vlSelfRef.rst) {
        vlSelfRef.ysyx_25060170_top__DOT__ifu0__DOT__pc_next = 0x80000000U;
        vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__raddr = 0U;
    } else {
        vlSelfRef.ysyx_25060170_top__DOT__ifu0__DOT__pc_next 
            = ((((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch) 
                 && ((0xeU == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                      ? (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                         == vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)
                      : ((0x1cU == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                          ? (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                             != vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)
                          : ((0xe0U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                              ? (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                 < vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)
                              : ((0xdU == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                  ? (vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1 
                                     >= vlSelfRef.ysyx_25060170_top__DOT__id_ex_op2)
                                  : ((0x38U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                                      ? (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2)
                                      : ((0x70U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                                         && (1U & (~ (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2)))))))))) 
                | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_jump) 
                   | (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT____VdfgRegularize_hc2007cd8_0_4)))
                ? (((0x21U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel)) 
                    | (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_branch))
                    ? (vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm 
                       + vlSelfRef.ysyx_25060170_top__DOT__id_ex_pc)
                    : ((0x42U == (IData)(vlSelfRef.ysyx_25060170_top__DOT__id_ex_alu_sel))
                        ? (0xfffffffeU & (vlSelfRef.ysyx_25060170_top__DOT__id_ex_imm 
                                          + vlSelfRef.ysyx_25060170_top__DOT__id_ex_op1))
                        : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT____VdfgRegularize_hc2007cd8_0_4)
                            ? vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__read_csr_data
                            : 0U))) : ((IData)(vlSelfRef.rst)
                                        ? 0x80000000U
                                        : ((IData)(4U) 
                                           + vlSelfRef.ysyx_25060170_top__DOT__if_id_pc)));
        vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__raddr 
            = vlSelfRef.ysyx_25060170_top__DOT__ex_aludata;
    }
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_ie_ena 
        = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr) 
           | (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT____VdfgRegularize_hc2007cd8_0_4));
    if (vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena) {
        vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mpp_set = 3U;
        vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mpie_set 
            = (1U & (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mie));
    } else {
        vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mpp_set 
            = ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena)
                ? 0U : (3U & ((IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr)
                               ? (vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__write_csr_data 
                                  >> 0xdU) : (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpp))));
        vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mpie_set 
            = (1U & ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena) 
                     | ((IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr)
                         ? (vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__write_csr_data 
                            >> 7U) : (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpie))));
    }
    vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mie_set 
        = (1U & ((~ (IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__ecall_ena)) 
                 & ((IData)(vlSelfRef.ysyx_25060170_top__DOT__idu1__DOT__mret_ena)
                     ? (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpie)
                     : ((IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr)
                         ? (vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__write_csr_data 
                            >> 3U) : (IData)(vlSelfRef.ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mie)))));
    vlSelfRef.__Vtableidx2 = ((6U & (vlSelfRef.ysyx_25060170_top__DOT__ex_aludata 
                                     << 1U)) | (IData)(vlSelfRef.rst));
    vlSelfRef.ysyx_25060170_top__DOT__lsu3__DOT__sb_mask 
        = Vysyx_25060170_top__ConstPool__TABLE_h1ece3f4a_0
        [vlSelfRef.__Vtableidx2];
}

VL_ATTR_COLD void Vysyx_25060170_top___024root___eval_triggers__stl(Vysyx_25060170_top___024root* vlSelf);

VL_ATTR_COLD bool Vysyx_25060170_top___024root___eval_phase__stl(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_phase__stl\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vysyx_25060170_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vysyx_25060170_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_top___024root___dump_triggers__ico(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___dump_triggers__ico\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
VL_ATTR_COLD void Vysyx_25060170_top___024root___dump_triggers__act(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___dump_triggers__act\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_top___024root___dump_triggers__nba(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___dump_triggers__nba\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_25060170_top___024root____Vm_traceActivitySetAll(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root____Vm_traceActivitySetAll\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vysyx_25060170_top___024root___ctor_var_reset(Vysyx_25060170_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___ctor_var_reset\n"); );
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->ysyx_25060170_top__DOT__DPIC_if_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17606960794872072478ull);
    vlSelf->ysyx_25060170_top__DOT__if_id_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13421803467794821736ull);
    vlSelf->ysyx_25060170_top__DOT__id_reg_rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11831646023726074349ull);
    vlSelf->ysyx_25060170_top__DOT__id_reg_rs1_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4377774502378056583ull);
    vlSelf->ysyx_25060170_top__DOT__id_reg_rs2_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4766195229992704090ull);
    vlSelf->ysyx_25060170_top__DOT__id_reg_rd_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11439801551173002161ull);
    vlSelf->ysyx_25060170_top__DOT__id_ex_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7569218486038723299ull);
    vlSelf->ysyx_25060170_top__DOT__id_ex_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12311870124475213074ull);
    vlSelf->ysyx_25060170_top__DOT__id_ex_jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8480508146063870815ull);
    vlSelf->ysyx_25060170_top__DOT__id_ls_ctl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6791177537328262051ull);
    vlSelf->ysyx_25060170_top__DOT__id_wb_ctl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13968541476255531530ull);
    vlSelf->ysyx_25060170_top__DOT__id_ex_alu_sel = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7498381492431002220ull);
    vlSelf->ysyx_25060170_top__DOT__id_ex_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1604646224693511533ull);
    vlSelf->ysyx_25060170_top__DOT__id_ex_op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15439096609212218035ull);
    vlSelf->ysyx_25060170_top__DOT__id_ex_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2102944127560343348ull);
    vlSelf->ysyx_25060170_top__DOT__id_ex_csrctl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7368999778694199924ull);
    vlSelf->ysyx_25060170_top__DOT__ex_aludata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5512478920477896562ull);
    vlSelf->ysyx_25060170_top__DOT__ifu0__DOT__pc_next = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11408893115606990151ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6182046244482165437ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3426834136554263551ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__mret_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12940654544844740728ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__ecall_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9377709154277457746ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__j_imm = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 16343666018107671444ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__b_imm = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12218539100053784576ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__7__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13857030899901461903ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__6__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17993879494172419102ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__5__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14964426199950656983ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__4__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8663353398374697113ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3142516080269548009ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7272042693093791970ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18162100140920539025ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_lui = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9969595202672419276ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_auipc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4343646969016731427ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5878642819339311048ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18213996251930648928ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_ecall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13105015548618242331ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14428180821912211375ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16082863127124039312ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6955947486825489599ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrsi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14997769727481448640ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgExtracted_hb8436119__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15715563761991912143ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5353954346453537199ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2835852670086163719ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1822544082480893359ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4358809226828367577ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14693839033739394601ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_11 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17978533579586014552ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11676832263661280533ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_13 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1063128855794215232ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_14 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6462525229225867265ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_15 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15863969929889042169ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3634237773002366232ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_17 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2990595507443522731ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_18 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18329837738531322607ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_19 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2172845197833757276ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_20 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8951881028441756222ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_21 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6912468301535497888ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_22 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17275832903296657712ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_23 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8777907750609228870ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_24 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4443311129497238014ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_32 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17795837086337769522ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_77 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5403191267133600429ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_78 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15204551233271478001ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_79 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11017413567043666588ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_81 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5386292526124062802ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_82 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17157336990229659644ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_83 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17968906140544609346ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_84 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 996996799857257374ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_85 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14972826565783559922ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_86 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7787248067450138636ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_87 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3984533957979166708ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_88 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17534464674036853818ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_89 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6270937841316277190ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_91 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10925217749114677138ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_92 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12673085709240239325ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_93 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15810915331866370497ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_94 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5544011827802472127ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_95 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8366118124731067047ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_96 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2126967818777954510ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_97 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5370038549969908215ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_98 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9695855160213448498ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_100 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13821099796657856802ull);
    vlSelf->ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_102 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 974225475046426226ull);
    vlSelf->ysyx_25060170_top__DOT__exu2__DOT__op1_add_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11526856169023985680ull);
    vlSelf->ysyx_25060170_top__DOT__exu2__DOT__op1_sub_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6534576357350013478ull);
    vlSelf->ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 56429650941479465ull);
    vlSelf->ysyx_25060170_top__DOT__exu2__DOT__op1_sra_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1762962766771724246ull);
    vlSelf->ysyx_25060170_top__DOT__exu2__DOT__mul = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8045905654086719787ull);
    vlSelf->ysyx_25060170_top__DOT__exu2__DOT__div = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11745631882631012598ull);
    vlSelf->ysyx_25060170_top__DOT__exu2__DOT__rem = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17018391650188929089ull);
    vlSelf->ysyx_25060170_top__DOT__exu2__DOT__alu_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11815205732306446876ull);
    vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15642993247514888927ull);
    vlSelf->ysyx_25060170_top__DOT__exu2__DOT__read_csr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11423591020608230041ull);
    vlSelf->ysyx_25060170_top__DOT__exu2__DOT__write_csr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5413853268302096713ull);
    vlSelf->ysyx_25060170_top__DOT__exu2__DOT__mcause_value = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14721811347651217067ull);
    vlSelf->ysyx_25060170_top__DOT__exu2__DOT____VdfgRegularize_hc2007cd8_0_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1474078053155363740ull);
    vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3047735443873132999ull);
    vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mie = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 415946645065988145ull);
    vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpie = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17646568655479198255ull);
    vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9366755534087584036ull);
    vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1174867193713929527ull);
    vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_ie_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12372300510549768890ull);
    vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mie_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16311237197628282109ull);
    vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mpie_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2528390902069940027ull);
    vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mpp_set = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17542734126962779033ull);
    vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mtvec_base = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 17298079531215406612ull);
    vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mepc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15211532769714198618ull);
    vlSelf->ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mcause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4171299359801859727ull);
    vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__raddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13479921451345858708ull);
    vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__data_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7759489259847866802ull);
    vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11000126074172385539ull);
    vlSelf->ysyx_25060170_top__DOT__lsu3__DOT__sb_mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13922805611635128732ull);
    vlSelf->ysyx_25060170_top__DOT__lsu3__DOT____VdfgRegularize_hcffc0c70_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7691818418016335799ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_25060170_top__DOT__reg3__DOT__regs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12534104483223301910ull);
    }
    vlSelf->__Vtask_ysyx_25060170_top__DOT__dpic__DOT__pmem_read__2__rdata = 0;
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtableidx2 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
