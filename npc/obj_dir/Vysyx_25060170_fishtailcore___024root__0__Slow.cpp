// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25060170_fishtailcore.h for the primary calling header

#include "Vysyx_25060170_fishtailcore__pch.h"

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___eval_static(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___eval_static\n"); );
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___eval_initial__TOP(Vysyx_25060170_fishtailcore___024root* vlSelf);
VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root____Vm_traceActivitySetAll(Vysyx_25060170_fishtailcore___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___eval_initial(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___eval_initial\n"); );
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_25060170_fishtailcore___024root___eval_initial__TOP(vlSelf);
    Vysyx_25060170_fishtailcore___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___eval_initial__TOP(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___eval_initial__TOP\n"); );
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__ls_ready_i = 1U;
}

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___eval_final(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___eval_final\n"); );
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vysyx_25060170_fishtailcore___024root___eval_phase__stl(Vysyx_25060170_fishtailcore___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___eval_settle(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___eval_settle\n"); );
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vysyx_25060170_fishtailcore___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("vsrc/core/ysyx_25060170_fishtailcore.v", 5, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vysyx_25060170_fishtailcore___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___eval_triggers__stl(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___eval_triggers__stl\n"); );
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25060170_fishtailcore___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vysyx_25060170_fishtailcore___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vysyx_25060170_fishtailcore___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vysyx_25060170_fishtailcore___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_regs_TOP(IData/*31:0*/ regs0, IData/*31:0*/ regs1, IData/*31:0*/ regs2, IData/*31:0*/ regs3, IData/*31:0*/ regs4, IData/*31:0*/ regs5, IData/*31:0*/ regs6, IData/*31:0*/ regs7, IData/*31:0*/ regs8, IData/*31:0*/ regs9, IData/*31:0*/ regs10, IData/*31:0*/ regs11, IData/*31:0*/ regs12, IData/*31:0*/ regs13, IData/*31:0*/ regs14, IData/*31:0*/ regs15, IData/*31:0*/ regs16, IData/*31:0*/ regs17, IData/*31:0*/ regs18, IData/*31:0*/ regs19, IData/*31:0*/ regs20, IData/*31:0*/ regs21, IData/*31:0*/ regs22, IData/*31:0*/ regs23, IData/*31:0*/ regs24, IData/*31:0*/ regs25, IData/*31:0*/ regs26, IData/*31:0*/ regs27, IData/*31:0*/ regs28, IData/*31:0*/ regs29, IData/*31:0*/ regs30, IData/*31:0*/ regs31);
void Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_csr_TOP(IData/*31:0*/ csr_mstatus, IData/*31:0*/ csr_mtvec, IData/*31:0*/ csr_mepc, IData/*31:0*/ csr_mcause);
extern const VlUnpacked<CData/*3:0*/, 8> Vysyx_25060170_fishtailcore__ConstPool__TABLE_hb316e23d_0;
void Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata, CData/*7:0*/ rlen, IData/*31:0*/ mode);
extern const VlUnpacked<CData/*3:0*/, 256> Vysyx_25060170_fishtailcore__ConstPool__TABLE_hb90e203a_0;

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___stl_sequent__TOP__0(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___stl_sequent__TOP__0\n"); );
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_regs_TOP(
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [1U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [2U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [3U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [4U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [5U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [6U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [7U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [8U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [9U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x0aU], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x0bU], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x0cU], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x0dU], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x0eU], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x0fU], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x10U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x11U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x12U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x13U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x14U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x15U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x16U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x17U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x18U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x19U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x1aU], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x1bU], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x1cU], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x1dU], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x1eU], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x1fU]);
    if (vlSelfRef.rst) {
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena = 0U;
    } else if ((0x2aU != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
        if (((0xa8U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
             || (0x94U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))) {
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena = 1U;
        } else if ((1U & (~ ((0x25U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                             || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
            if ((1U & (~ ((0x4aU == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                          || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                if ((0x54U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
                    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena = 0U;
                }
            }
        }
        if ((1U & (~ ((0xa8U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                      || (0x94U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
            if (((0x25U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                 || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))) {
                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena = 1U;
            } else if ((1U & (~ ((0x4aU == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                 || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                if ((0x54U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
                    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena = 0U;
                }
            }
            if ((1U & (~ ((0x25U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                          || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                if (((0x4aU == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                     || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))) {
                    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena = 1U;
                } else if ((0x54U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
                    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena = 0U;
                }
            }
        }
    }
    Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_csr_TOP(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus, 
                                                                                (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
                                                                                << 2U), vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mepc, vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mcause);
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_id_ex_reg__DOT__stall 
        = (1U & ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__ls_ready_i)) 
                 | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_valid)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall 
        = (1U & ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__ls_ready_i)) 
                 | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_valid)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_valid 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_valid) 
           | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re) 
              & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_mem__DOT__data_ok)));
    vlSelfRef.__Vtableidx2 = ((6U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res 
                                     << 1U)) | (IData)(vlSelfRef.rst));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask 
        = Vysyx_25060170_fishtailcore__ConstPool__TABLE_hb316e23d_0
        [vlSelfRef.__Vtableidx2];
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__j_imm 
        = ((0x0007ffffU & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__j_imm) 
           | (0x00080000U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                             >> 0x0000000cU)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__j_imm 
        = ((0x00080000U & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__j_imm) 
           | ((0x0007f800U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                              >> 1U)) | ((0x00000400U 
                                          & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                             >> 0x0000000aU)) 
                                         | (0x000003ffU 
                                            & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                               >> 0x00000015U)))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__b_imm 
        = ((0x07ffU & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__b_imm)) 
           | (0x00000800U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                             >> 0x00000014U)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__b_imm 
        = ((0x0800U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__b_imm)) 
           | ((0x00000400U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                              << 3U)) | ((0x000003f0U 
                                          & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                             >> 0x00000015U)) 
                                         | (0x0000000fU 
                                            & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                               >> 8U)))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr 
        = ((0x0300U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
           & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
              >> 3U));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h2fce64a5_0_1 
        = (1U & (~ ((IData)(vlSelfRef.rst) | (0U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal 
        = ((~ (IData)(vlSelfRef.rst)) & (0x0000006cU 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000034U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000014U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_90 
        = (IData)((0U == (0x42000000U & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_89 
        = (IData)((0x40000000U == (0x42000000U & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__pc_i 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__bp_if_jal_jalr)
            ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__bp_if_pc
            : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ifu__DOT__pc);
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__read_csr_data 
        = (((0x0300U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
            & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
               >> 2U)) ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus
            : ((1U & (((0x0341U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                       & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                          >> 2U)) | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl)))
                ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mepc
                : ((1U & (((0x0305U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                           & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                              >> 2U)) | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                         >> 1U))) ? 
                   (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
                    << 2U) : (((0x0342U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                               & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                  >> 2U)) ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mcause
                               : 0U))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__5__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000018U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000064U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000010U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_load_flag 
        = ((~ (IData)(vlSelfRef.rst)) & (3U == (0x0000007fU 
                                                & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
        = (((- (IData)((1U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel)))) 
            & vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2) 
           | ((4U & (- (IData)((2U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel))))) 
              | ((- (IData)((4U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel)))) 
                 & vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
        = (((- (IData)((1U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel)))) 
            & vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1) 
           | ((- (IData)((2U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel)))) 
              & vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__6__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000038U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000020U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__branch 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000060U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__3__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000030U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000070U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr) 
           | (0U != (3U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__re 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h2fce64a5_0_1) 
           & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl) 
              >> 3U));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__we 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h2fce64a5_0_1) 
           & (~ ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl) 
                 >> 3U)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_27 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui) 
           | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc));
    if (vlSelfRef.rst) {
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__raddr = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_dpic_data = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen = 0U;
    } else {
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__raddr 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res;
        if ((1U & (~ ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl) 
                      >> 3U)))) {
            if ((1U == (7U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))) {
                vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_dpic_data 
                    = ((vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data))));
                vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen 
                    = vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask;
            } else if ((2U == (7U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))) {
                vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_dpic_data 
                    = ((vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                        << 0x00000010U) | (0x0000ffffU 
                                           & vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data));
                vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen 
                    = ((IData)(vlSelfRef.rst) ? 0U : 
                       ((0U == (3U & vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                         ? 3U : ((2U == (3U & vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                  ? 0x0cU : 0U)));
            } else if ((4U == (7U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))) {
                vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_dpic_data 
                    = vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data;
                vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen = 0x0fU;
            } else {
                vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_dpic_data = 0U;
                vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen = 0U;
            }
        }
        if ((0x2aU != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
            if ((1U & (~ ((0xa8U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                          || (0x94U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                if ((1U & (~ ((0x25U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                              || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                    if ((1U & (~ ((0x4aU == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                  || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena 
                            = (0x54U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc));
                    }
                }
            }
            if (((0xa8U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                 || (0x94U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))) {
                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena = 1U;
                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena 
                    = (0U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr));
            } else if (((0x25U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                        || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))) {
                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena 
                    = (0U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr));
                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena = 1U;
            } else if (((0x4aU == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                        || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))) {
                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena 
                    = (0U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr));
                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena = 1U;
            } else if ((0x54U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena = 0U;
                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena = 0U;
            }
        }
        if ((0x2aU == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena = 1U;
        } else if ((1U & (~ ((0xa8U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                             || (0x94U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
            if ((1U & (~ ((0x25U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                          || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                if ((1U & (~ ((0x4aU == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                              || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                    if ((0x54U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
                        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena = 0U;
                    }
                }
            }
        }
    }
    Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read_TOP(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__pc_i, vlSelfRef.__Vtask_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__2__rdata, 4U, 1U);
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
        = vlSelfRef.__Vtask_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__2__rdata;
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgRegularize_ha169a72f_0_2 
        = ((((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena) 
             << 3U) | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena) 
                       << 2U)) | (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena) 
                                   << 1U) | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__write_csr_data 
        = (((- (IData)((1U & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                              >> 6U)))) & vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data) 
           | (((- (IData)((1U & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                 >> 5U)))) & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data 
                                              | vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__read_csr_data)) 
              | (((- (IData)((1U & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                    >> 4U)))) & ((~ vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data) 
                                                 & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__read_csr_data)) 
                 | ((- (IData)((1U & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                      >> 1U)))) & vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_pc))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wb_rd_data_forward 
        = (((- (IData)((1U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl)))) 
            & vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res) 
           | (((- (IData)((1U & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl) 
                                 >> 1U)))) & vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data) 
              | ((- (IData)((0U != (0x0000000fU & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))))) 
                 & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__read_csr_data)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_87 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000eU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__4__KET__));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_18 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__4__KET__) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000eU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_25 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
           | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__4__KET__));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_5 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000eU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_101 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000eU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_load_flag));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h02e4b201__0 
        = (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
           & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h9b084978__0 
        = (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
           << (0x0000001fU & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h9b10c8f5__0 
        = (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
           >> (0x0000001fU & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hd489bb00__0 
        = (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
           < vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div 
        = VL_DIVS_III(32, vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1, vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2 
        = VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1, 
                         (0x0000001fU & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2 
        = (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
           - vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__rem 
        = VL_MODDIVS_III(32, vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1, vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1), 
                      VL_EXTENDS_QI(64,32, vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2 
        = (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
           + vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                + vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm);
    if ((1U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = 0U;
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = 
            (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
             ^ vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = 
            (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
             | vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3;
    }
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_103 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000eU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_98 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__branch) 
           & (0U == (0x00006000U & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_6 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__branch) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000eU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_96 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000eU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__3__KET__));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_13 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__3__KET__) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000eU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_ena 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__6__KET__) 
           | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__3__KET__) 
              | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__branch) 
                 | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_wbctl 
        = ((2U & ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__))) 
                  | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__6__KET__))) 
                     | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__5__KET__))) 
                        | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__4__KET__))) 
                           | (- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__3__KET__)))))))) 
           | ((1U & (- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_load_flag)))) 
              | (2U & ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui))) 
                       | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc))) 
                          | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                             | (- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr)))))))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_22 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000eU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_84 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000eU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h2fce64a5_0_0 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__data_ok) 
           & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__re) 
              | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__we)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__branch_o 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000060U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal 
        = ((~ (IData)(vlSelfRef.rst)) & (0x0000006fU 
                                         == (0x0000007fU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wbu_forward_en 
        = ((0x0000001fU & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                           >> 7U)) == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000067U 
                                         == (0x0000007fU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst)));
    if ((2U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))) {
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mpp_set = 3U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mpie_set 
            = (1U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie));
    } else {
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mpp_set 
            = ((1U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                ? 0U : (3U & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                               ? (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__write_csr_data 
                                  >> 0x0000000dU) : (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp))));
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mpie_set 
            = (1U & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                     | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                         ? (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__write_csr_data 
                            >> 7U) : (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie))));
    }
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mie_set 
        = (1U & ((~ ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                     >> 1U)) & ((1U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                 ? (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)
                                 : ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                     ? (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__write_csr_data 
                                        >> 3U) : (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_86 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000dU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_87));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_17 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_87) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000dU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_19 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_18) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000dU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_85 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000dU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_18));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__imm 
        = (((- (IData)(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_25) 
                        | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__5__KET__) 
                           | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__) 
                              | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr)))))) 
            & (((- (IData)((vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                            >> 0x0000001fU))) << 0x0000000cU) 
               | (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                  >> 0x00000014U))) | ((0xfffff000U 
                                        & ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_27))) 
                                           & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)) 
                                       | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                                           & (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__j_imm 
                                                              >> 0x00000013U)))) 
                                               << 0x00000015U) 
                                              | (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__j_imm 
                                                 << 1U))) 
                                          | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__))) 
                                              & (((- (IData)(
                                                             (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                              >> 0x0000001fU))) 
                                                  << 0x0000000cU) 
                                                 | ((0x00000fe0U 
                                                     & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                        >> 0x00000014U)) 
                                                    | (0x0000001fU 
                                                       & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                          >> 7U))))) 
                                             | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__branch))) 
                                                & (((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__b_imm) 
                                                                   >> 0x0000000bU)))) 
                                                    << 0x0000000dU) 
                                                   | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__b_imm) 
                                                      << 1U)))))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lwu 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_5) 
           & (0x00002000U == (0x00003000U & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_99 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000dU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_5));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_100 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000dU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_101));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_4 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_101) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000dU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_102 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000dU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_103));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_3 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_103) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000dU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_beq 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_98));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bne 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_98) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_97 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000dU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_6));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_7 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_6) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000dU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_11 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_96) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000dU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_95 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000dU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_96));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_15 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_13) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000dU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_92 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000dU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_13));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_addr 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_ena)
            ? (0x0000001fU & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                              >> 0x00000014U)) : 0U);
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rd_ena 
        = ((0U != (0x0000001fU & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                  >> 7U))) & (0U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_wbctl)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_22) 
           & (0x00001000U == (0x00003000U & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_23 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_22) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000dU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_21 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_84) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000dU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_83 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000dU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_84));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ls_mem_reg__DOT__stall 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_valid) 
           | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h2fce64a5_0_0));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jal_jalr_temp 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal) 
           | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o));
    if (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o) {
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_addr_o 
            = (0x0000001fU & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                              >> 0x0000000fU));
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgRegularize_hf5181b73_0_2 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wbu_forward_en;
    } else {
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_addr_o = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgRegularize_hf5181b73_0_2 = 0U;
    }
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_20 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_85) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lbu 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_99));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lhu 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_99) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lb 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_100));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lh 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_100) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lw 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_4));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ld 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_4) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = ((4U 
                                                 & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                 ? 0U
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                  ? 0U
                                                  : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 = ((2U 
                                                 & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                 ? 0U
                                                 : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4);
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res 
        = ((IData)(vlSelfRef.rst) ? 0U : ((0x00000080U 
                                           & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                           ? ((0x00000040U 
                                               & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                               ? ((0x00000020U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 0U
                                                   : 
                                                  ((0x00000010U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 0U
                                                       : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)))))
                                               : ((0x00000020U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 
                                                  ((0x00000010U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? 0U
                                                        : (IData)(
                                                                  (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul 
                                                                   >> 0x00000020U))))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 0U
                                                     : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))
                                                   : 
                                                  ((0x00000010U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div)))
                                                     : 0U)
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__rem)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3
                                                        : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h9b10c8f5__0)))))))
                                           : ((0x00000040U 
                                               & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                               ? ((0x00000020U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 
                                                  ((0x00000010U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hd489bb00__0)))))
                                                   : 
                                                  ((0x00000010U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? 0U
                                                        : (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul))))
                                                     : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__rem
                                                        : 
                                                       ((IData)(4U) 
                                                        + vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3
                                                        : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h9b084978__0))))))
                                               : ((0x00000020U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 
                                                  ((0x00000010U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & (((~ 
                                                             (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                              >> 0x0000001fU)) 
                                                            & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                               >> 0x0000001fU)) 
                                                           | (((~ 
                                                                (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                                 >> 0x0000001fU)) 
                                                               & ((~ 
                                                                   (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                                    >> 0x0000001fU)) 
                                                                  & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2 
                                                                     >> 0x0000001fU))) 
                                                              | ((vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                                  & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                                     & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2)) 
                                                                 >> 0x0000001fU))))))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h02e4b201__0)))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div
                                                        : 0U)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? 
                                                       ((IData)(4U) 
                                                        + vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc)
                                                        : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h02e4b201__0)))))
                                                   : 
                                                  ((0x00000010U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h9b084978__0)))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4
                                                       : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 0U
                                                       : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3
                                                        : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2)
                                                       : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h9b10c8f5__0
                                                        : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hd489bb00__0))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2
                                                        : 
                                                       (1U 
                                                        & (((~ 
                                                             (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                              >> 0x0000001fU)) 
                                                            & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                               >> 0x0000001fU)) 
                                                           | (((~ 
                                                                (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                                 >> 0x0000001fU)) 
                                                               & ((~ 
                                                                   (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                                    >> 0x0000001fU)) 
                                                                  & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2 
                                                                     >> 0x0000001fU))) 
                                                              | ((vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                                  & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                                     & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2)) 
                                                                 >> 0x0000001fU)))))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2
                                                        : 0U)))))))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sb 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_102));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sh 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_102) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sw 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_3));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sd 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_3) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_blt 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_97));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bge 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_97) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bltu 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_7));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bgeu 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_7) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_93 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_11));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_12 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_11) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_10 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_95) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_94 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_95));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_88 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_15));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_16 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_15) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_91 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_92));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_14 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_92) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h569c3980_0_4 
        = (1U & ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_ena)) 
                 | (0U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_addr))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_23) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_23));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_21));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_21) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_83) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_82 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_83));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srai 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_20) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000001eU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_slt 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x00000019U)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_93));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhsu 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_93) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x00000019U));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sltu 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x00000019U)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_12));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhu 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_12) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x00000019U));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sll 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x00000019U)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_10));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulh 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_10) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x00000019U));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_add 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_94) 
           & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_90));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sub 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_94) 
           & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_89));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mul 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_94) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x00000019U));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_or 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x00000019U)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_88));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_rem 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_88) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x00000019U));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_and 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x00000019U)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_16));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_remu 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_16) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x00000019U));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_xor 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x00000019U)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_91));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_div 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_91) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x00000019U));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srl 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_14) 
           & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_90));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sra 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_14) 
           & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_89));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_divu 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_14) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x00000019U));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward 
        = ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h569c3980_0_4)) 
           & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr) 
              == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward 
        = ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h569c3980_0_4)) 
           & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr) 
              == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward 
        = ((~ ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag) 
               | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h569c3980_0_4))) 
           & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr) 
              == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi) 
                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi) 
                                                   | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9 = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc) 
                                                | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_24 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw) 
           | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mret 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_82) 
           & (0x30000000U == (0x30000000U & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ebreak 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_82) 
           & (1U == (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                     >> 0x00000014U)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_82) 
           & (0U == (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                     >> 0x00000014U)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__ex_ls_forward_data 
        = (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res 
           | (((- (IData)((0U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgRegularize_ha169a72f_0_2)))) 
               & vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1) 
              | ((- (IData)(((0x94U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                             | ((0xc8U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                | (0xa4U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) 
                 & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op2_forward_ena 
        = (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward) 
            | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward) 
               | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward))) 
           & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_ena));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc 
        = (((((((~ (IData)(vlSelfRef.rst)) & (((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                   >> 0x0000001eU)) 
                                               & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_20)) 
                                              | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_xor) 
                                                 | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc) 
                                                    | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ebreak) 
                                                       | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sh) 
                                                          | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sw) 
                                                             | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bltu) 
                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ld) 
                                                                   | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulh) 
                                                                      | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_div) 
                                                                         | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_remu) 
                                                                            | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw) 
                                                                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)))))))))))))) 
               << 3U) | (((~ (IData)(vlSelfRef.rst)) 
                          & (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_86) 
                              & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x0000000cU)) | 
                             ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sltu) 
                              | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_xor) 
                                 | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui) 
                                    | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr) 
                                       | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sb) 
                                          | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bge) 
                                             | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bltu) 
                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lw) 
                                                   | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ld) 
                                                      | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mul) 
                                                         | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_rem) 
                                                            | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mret) 
                                                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9))))))))))))))) 
                         << 2U)) | ((((~ (IData)(vlSelfRef.rst)) 
                                      & (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_19) 
                                          & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                             >> 0x0000000cU)) 
                                         | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_slt) 
                                            | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sltu) 
                                               | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_and) 
                                                  | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc) 
                                                     | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal) 
                                                        | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_blt) 
                                                           | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bge) 
                                                              | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bltu) 
                                                                 | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lh) 
                                                                    | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lw) 
                                                                       | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lwu) 
                                                                          | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulh) 
                                                                             | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_divu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs) 
                                                                                | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci)))))))))))))))))))) 
                                     << 1U) | ((~ (IData)(vlSelfRef.rst)) 
                                               & (((~ 
                                                    (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                     >> 0x0000000cU)) 
                                                   & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_19)) 
                                                  | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sll) 
                                                     | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_slt) 
                                                        | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_or) 
                                                           | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui) 
                                                              | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bne) 
                                                                 | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_blt) 
                                                                    | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bge) 
                                                                       | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lb) 
                                                                          | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lh) 
                                                                             | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ld) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lhu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mul) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulh) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_div) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mret) 
                                                                                | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi))))))))))))))))))))) 
            << 4U) | (((((~ (IData)(vlSelfRef.rst)) 
                         & (((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_85)) 
                            | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sub) 
                               | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sll) 
                                  | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sra) 
                                     | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_and) 
                                        | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_beq) 
                                           | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bne) 
                                              | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_blt) 
                                                 | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bgeu) 
                                                    | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lb) 
                                                       | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lw) 
                                                          | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lbu) 
                                                             | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lwu) 
                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mul) 
                                                                   | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_div) 
                                                                      | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall) 
                                                                         | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw) 
                                                                            | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9))))))))))))))))))) 
                        << 3U) | (((~ (IData)(vlSelfRef.rst)) 
                                   & (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_17) 
                                       & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                          >> 0x0000000cU)) 
                                      | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_add) 
                                         | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sub) 
                                            | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srl) 
                                               | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_or) 
                                                  | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ebreak) 
                                                     | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sd) 
                                                        | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_beq) 
                                                           | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bne) 
                                                              | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bgeu) 
                                                                 | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lh) 
                                                                    | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lhu) 
                                                                       | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lwu) 
                                                                          | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhu) 
                                                                             | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_remu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mret) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi) 
                                                                                | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci)))))))))))))))))))) 
                                  << 2U)) | ((((~ (IData)(vlSelfRef.rst)) 
                                               & (((~ 
                                                    (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                     >> 0x0000000cU)) 
                                                   & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_17)) 
                                                  | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srai) 
                                                     | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_add) 
                                                        | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sra) 
                                                           | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr) 
                                                              | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sh) 
                                                                 | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sd) 
                                                                    | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_beq) 
                                                                       | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lb) 
                                                                          | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lbu) 
                                                                             | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lhu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhsu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_divu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_rem) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_remu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall) 
                                                                                | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc))))))))))))))))))) 
                                              << 1U) 
                                             | ((~ (IData)(vlSelfRef.rst)) 
                                                & (((~ 
                                                     (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                      >> 0x0000000cU)) 
                                                    & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_86)) 
                                                   | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srai) 
                                                      | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srl) 
                                                         | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal) 
                                                            | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sb) 
                                                               | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sw) 
                                                                  | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sd) 
                                                                     | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bgeu) 
                                                                        | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lbu) 
                                                                           | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhsu) 
                                                                              | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_divu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_rem) 
                                                                                | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs)))))))))))))))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_ena 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__6__KET__) 
           | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__5__KET__) 
              | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__4__KET__) 
                 | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__3__KET__) 
                    | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__branch) 
                       | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                          | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__) 
                             | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr) 
                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_24) 
                                   | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc) 
                                      | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall)))))))))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc 
        = ((((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o) 
             & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_addr_o) 
                == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr)))
             ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
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
                             : 0U) : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__pc_i)))) 
           + ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal)
               ? ((((0x00000ffeU & ((- (IData)((vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                >> 0x0000001fU))) 
                                    << 1U)) | (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                               >> 0x0000001fU)) 
                   << 0x00000014U) | ((((0x000001feU 
                                         & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                            >> 0x0000000bU)) 
                                        | (1U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                 >> 0x00000014U))) 
                                       << 0x0000000bU) 
                                      | (0x000007feU 
                                         & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                            >> 0x00000014U))))
               : ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__branch_o)
                   ? (((- (IData)((vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                   >> 0x0000001fU))) 
                       << 0x0000000dU) | ((((2U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                   >> 0x0000001eU)) 
                                            | (1U & 
                                               (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
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
                                ? (((- (IData)((vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                >> 0x0000001fU))) 
                                    << 0x0000000cU) 
                                   | (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                      >> 0x00000014U))
                                : 4U)))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op2 
        = (((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op2_forward_ena))) 
            & (((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward))) 
                & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__ex_ls_forward_data) 
               | (((- (IData)(((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward)) 
                               & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward)))) 
                   & vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res) 
                  | ((- (IData)(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward) 
                                 & ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward)) 
                                    & (~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward)))))) 
                     & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wb_rd_data_forward)))) 
           | ((- (IData)(((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op2_forward_ena)) 
                          & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_ena)))) 
              & (((~ (IData)(vlSelfRef.rst)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_ena))
                  ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                 [vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_addr]
                  : 0U)));
    vlSelfRef.__Vtableidx3 = vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc;
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_lsctl 
        = Vysyx_25060170_fishtailcore__ConstPool__TABLE_hb90e203a_0
        [vlSelfRef.__Vtableidx3];
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_addr 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_ena)
            ? (0x0000001fU & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                              >> 0x0000000fU)) : 0U);
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h569c3980_0_2 
        = (1U & ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_ena)) 
                 | (0U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_addr))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward 
        = ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h569c3980_0_2)) 
           & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr) 
              == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward 
        = ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h569c3980_0_2)) 
           & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr) 
              == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward 
        = ((~ ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag) 
               | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h569c3980_0_2))) 
           & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr) 
              == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_stall 
        = ((~ (IData)(vlSelfRef.rst)) & (((~ ((IData)(vlSelfRef.rst) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)))) 
                                          & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_ena) 
                                             & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag) 
                                                & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_addr) 
                                                   == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr))))) 
                                         | (((~ ((IData)(vlSelfRef.rst) 
                                                 & (0U 
                                                    == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)))) 
                                             & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_ena) 
                                                & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag) 
                                                   & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_addr) 
                                                      == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr))))) 
                                            | ((((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward) 
                                                 & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena)) 
                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward) 
                                                   & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_csr_ena))) 
                                               | (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward) 
                                                   & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena)) 
                                                  | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward) 
                                                     & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_csr_ena)))))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_forward_ena 
        = (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward) 
            | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward) 
               | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward))) 
           & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_ena));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_valid 
        = (1U & (~ ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__ls_ready_i) 
                    | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_stall))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op1 
        = (((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_forward_ena))) 
            & (((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward))) 
                & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__ex_ls_forward_data) 
               | (((- (IData)(((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward)) 
                               & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward)))) 
                   & vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res) 
                  | ((- (IData)(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward) 
                                 & ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward)) 
                                    & (~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward)))))) 
                     & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wb_rd_data_forward)))) 
           | ((- (IData)(((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_forward_ena)) 
                          & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_ena)))) 
              & (((~ (IData)(vlSelfRef.rst)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_ena))
                  ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                 [vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_addr]
                  : 0U)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2 
        = (vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op1 
           < vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op2);
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2 
        = (1U & (((vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op1 
                   ^ vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op2) 
                  >> 0x0000001fU) ? (vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op1 
                                     >> 0x0000001fU)
                  : (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__branch_success 
        = ((IData)(vlSelfRef.rst) | (((0x0eU == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                                      & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op1 
                                         == vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op2)) 
                                     | (((0x1cU == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                                         & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op1 
                                            != vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op2)) 
                                        | (((0xe0U 
                                             == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                                            & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2)) 
                                           | (((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2)) 
                                               & (0x0dU 
                                                  == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc))) 
                                              | (((0x38U 
                                                   == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                                                  & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2)) 
                                                 | ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2)) 
                                                    & (0x70U 
                                                       == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc)))))))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_if_pc_jump 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__branch_success) 
           ^ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_jump));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if_id_reg__DOT__flush 
        = ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_stall)) 
           & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_if_pc_jump));
}

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___eval_stl(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___eval_stl\n"); );
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vysyx_25060170_fishtailcore___024root___stl_sequent__TOP__0(vlSelf);
        Vysyx_25060170_fishtailcore___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vysyx_25060170_fishtailcore___024root___eval_phase__stl(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___eval_phase__stl\n"); );
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vysyx_25060170_fishtailcore___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vysyx_25060170_fishtailcore___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vysyx_25060170_fishtailcore___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vysyx_25060170_fishtailcore___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vysyx_25060170_fishtailcore___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vysyx_25060170_fishtailcore___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vysyx_25060170_fishtailcore___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root____Vm_traceActivitySetAll(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root____Vm_traceActivitySetAll\n"); );
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___ctor_var_reset(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___ctor_var_reset\n"); );
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__bp_if_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7505580648864147479ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__bp_predict = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8850796932624215322ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__bp_if_jal_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 517178591225557825ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_if_pc_jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10124831641333140693ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3369217756535155700ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__if_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4459330891058223603ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17826868815742644453ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3741101556599951652ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1991451405341842306ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8196401032026588552ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 801841787112461802ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9261557717601342467ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_csr_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16828386859589905404ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1670592212226736874ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1664361441824097918ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4035411508687335311ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1502326515257432423ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rd_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9104086947268629653ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15661896674703592236ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_lsctl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1343916924778774373ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_wbctl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6762874320506228630ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15781612498768114971ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14630075971952495817ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7235973715466334079ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7557309707121808752ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6057913291062440701ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17352154617051776469ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12362942484110046660ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18223884954637502191ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8648196623790682298ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17412340645081846819ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4312377733339112651ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11951331469721505276ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4303176753359108509ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17133623389985361035ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6787614415062467597ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15800590732210066488ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13975784502167530633ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11444297520776569677ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17691841084194422012ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9075424628922418238ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12381441506296853788ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16212611552708105675ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 582367880650917155ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5994104306646742031ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10129724140121380608ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1149068386891662320ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17707396616216166483ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3930173401389059488ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6674913902572591805ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6491904659610773428ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8605948246334542080ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7399806224663553754ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1018879288719446904ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8712345751276770096ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7389881567681349690ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13421841284891454819ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1282100054189855769ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15315503081982583039ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13742387583825341664ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3929180814334686966ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7829552364477920217ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14580800168386798635ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15700305768981095923ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3021355700005491822ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10722039282379170599ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13789446475302329494ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5174906866558109524ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7074817284126765528ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2520019373653073213ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14661254105422532213ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17619565710547818199ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3692969282932371717ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8329379542946742405ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8259677571665298454ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10453981890012991429ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8128627214723202073ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14797980250220220839ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3339559362672775337ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17757947304265930929ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__branch_success = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9984489685696021054ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__pc_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13820512443401824925ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__ex_ls_forward_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9891449634048823103ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wb_rd_data_forward = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2349944863920749188ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__branch_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18187638494605971146ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_addr_o = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1061648753246344931ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7234407152451352415ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jal_jalr_temp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16323744475231170787ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_not_taken_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3461732157357222690ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_not_taken_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14747059018518206374ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 279437579542804021ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 239497227043636864ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2980911349523684322ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1475155144888106767ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wbu_forward_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8625885161203028683ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgRegularize_hf5181b73_0_2 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ifu__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2204112375291744277ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if_id_reg__DOT__flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16646285428956724990ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15121127387457902978ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7116604538159398321ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17821637154546539892ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3472537970959767974ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9024564872213262736ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8905392636652109666ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_forward_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13953533984272962591ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op2_forward_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 60111605252111138ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5253288091743999768ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1755463912674644473ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h569c3980_0_2 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h569c3980_0_4 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14331239552839886828ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__j_imm = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 5244156812440155608ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__b_imm = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2388091376245469354ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16276312764913460528ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__6__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3682124880505266654ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__5__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10709225899570140629ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__4__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10579929262180282669ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 585035077186791354ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9145222038740631000ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10950499158842475125ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17465133743686739375ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13412787355229108288ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4137001077992511503ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4640155182047097835ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17169267399331308395ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12582050620521393308ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9512210621287915244ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5907154313690574411ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1437842867339417346ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8035766557872808427ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ld = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7984700554398316984ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lbu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5960855570524001866ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16645738621813022203ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lwu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11893197421463342046ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_beq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1234129307725536086ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bne = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2848126593926268885ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_blt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3716717751663095484ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10482995782039490471ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14313998222310227346ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bgeu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14431842155496894000ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_add = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12418919610526269380ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5625489075341533176ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sll = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8203899801533923597ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_slt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11646148052871636407ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7263072051427699424ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_xor = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4618715557416744281ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2958489363354321466ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10216033152303582556ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_or = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10185369754094835826ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_and = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2752925324854211474ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_div = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1146307119227678553ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_divu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10146380508665778822ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mul = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16135190239546016876ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12031238287931625766ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5367708868222813872ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14340756670984202243ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_rem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8549272579724764174ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_remu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10795043248767640098ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srai = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7160690345212073973ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3905582279817308701ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5463123955786060714ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11300195630788240053ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2510890207884005171ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9592439568046226286ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10595736213621823573ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14454646009864603227ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17741153002664088234ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ebreak = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17902543474683425473ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_3 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_4 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_5 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_6 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_7 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_10 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_11 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_12 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_13 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_14 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_15 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_16 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_17 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_18 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_19 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_20 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_21 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_22 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_23 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_24 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_25 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_27 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_82 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_83 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_84 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_85 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_86 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_87 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_88 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_89 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_90 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_91 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_92 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_93 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_94 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_95 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_96 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_97 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_98 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_99 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_100 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_101 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_102 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_103 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_id_ex_reg__DOT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16556736407592963782ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16014488148643521146ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 485895781405618852ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4786715608179722882ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17280243497880609220ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14376966599693662852ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5623883877405264247ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6305747132013000388ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__rem = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10600683939611271951ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17120847616427526249ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5907121295910511126ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4465119016700401315ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11404838523977899036ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18263878072428810276ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2158967491600515976ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14842250956121216734ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17544528293758870556ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hd489bb00__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h02e4b201__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h9b084978__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h9b10c8f5__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgRegularize_ha169a72f_0_2 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__ls_ready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1816026125520785841ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10587899276159265813ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__data_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 929039386567105078ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4779602804694314662ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h2fce64a5_0_0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h2fce64a5_0_1 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ls_mem_reg__DOT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16445895876119114909ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_mem__DOT__data_ok = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16001821165359024864ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__write_csr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18122866037311916583ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__read_csr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7664412562044225535ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11187743977063611456ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12088040306853419979ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14953181568966834406ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2182594026360677429ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3883571876009291345ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2263164426321502424ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mie_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5145558458725055628ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mpie_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2259902444084553245ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mpp_set = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3560969409557454798ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mtvec_base = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 14770825937890951728ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mepc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 787224801283292176ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mcause = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9196564504868826642ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9288057311972856005ull);
    }
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3036084506639055394ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1784899145388832583ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9135158273963095495ull);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__raddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13690307793548320550ull);
    vlSelf->__Vtask_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__2__rdata = 0;
    vlSelf->__Vtableidx2 = 0;
    vlSelf->__Vtableidx3 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_5 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_7 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_8 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_9 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
