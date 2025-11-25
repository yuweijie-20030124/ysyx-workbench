// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25060170_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25060170_top___024root.h"

VL_ATTR_COLD void Vysyx_25060170_top___024root___eval_static(Vysyx_25060170_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vysyx_25060170_top___024root___eval_initial(Vysyx_25060170_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__ysyx_25060170_top__DOT__inst_finish_o 
        = vlSelf->ysyx_25060170_top__DOT__inst_finish_o;
}

VL_ATTR_COLD void Vysyx_25060170_top___024root___eval_final(Vysyx_25060170_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vysyx_25060170_top___024root___eval_triggers__stl(Vysyx_25060170_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_top___024root___dump_triggers__stl(Vysyx_25060170_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_top___024root___eval_stl(Vysyx_25060170_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25060170_top___024root___eval_settle(Vysyx_25060170_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vysyx_25060170_top___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vysyx_25060170_top___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/core/ysyx_25060170_top.v", 5, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vysyx_25060170_top___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_top___024root___dump_triggers__stl(Vysyx_25060170_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_regs_TOP(IData/*31:0*/ regs0, IData/*31:0*/ regs1, IData/*31:0*/ regs2, IData/*31:0*/ regs3, IData/*31:0*/ regs4, IData/*31:0*/ regs5, IData/*31:0*/ regs6, IData/*31:0*/ regs7, IData/*31:0*/ regs8, IData/*31:0*/ regs9, IData/*31:0*/ regs10, IData/*31:0*/ regs11, IData/*31:0*/ regs12, IData/*31:0*/ regs13, IData/*31:0*/ regs14, IData/*31:0*/ regs15, IData/*31:0*/ regs16, IData/*31:0*/ regs17, IData/*31:0*/ regs18, IData/*31:0*/ regs19, IData/*31:0*/ regs20, IData/*31:0*/ regs21, IData/*31:0*/ regs22, IData/*31:0*/ regs23, IData/*31:0*/ regs24, IData/*31:0*/ regs25, IData/*31:0*/ regs26, IData/*31:0*/ regs27, IData/*31:0*/ regs28, IData/*31:0*/ regs29, IData/*31:0*/ regs30, IData/*31:0*/ regs31);
void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_csr_TOP(IData/*31:0*/ csr_mstatus, IData/*31:0*/ csr_mtvec, IData/*31:0*/ csr_mepc, IData/*31:0*/ csr_mcause);
void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata, CData/*7:0*/ rlen);
extern const VlUnpacked<CData/*3:0*/, 8> Vysyx_25060170_top__ConstPool__TABLE_hf15ee880_0;
void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__set_npc_exit_TOP(IData/*31:0*/ pc, IData/*31:0*/ halt_ret);
void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__magic_instruction_TOP();

VL_ATTR_COLD void Vysyx_25060170_top___024root___stl_sequent__TOP__0(Vysyx_25060170_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___stl_sequent__TOP__0\n"); );
    // Body
    Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_regs_TOP(
                                                                                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0U], 
                                                                                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [1U], 
                                                                                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [2U], 
                                                                                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [3U], 
                                                                                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [4U], 
                                                                                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [5U], 
                                                                                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [6U], 
                                                                                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [7U], 
                                                                                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [8U], 
                                                                                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [9U], 
                                                                                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0xaU], 
                                                                                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0xbU], 
                                                                                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0xcU], 
                                                                                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0xdU], 
                                                                                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0xeU], 
                                                                                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0xfU], 
                                                                                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x10U], 
                                                                                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x11U], 
                                                                                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x12U], 
                                                                                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x13U], 
                                                                                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x14U], 
                                                                                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x15U], 
                                                                                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x16U], 
                                                                                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x17U], 
                                                                                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x18U], 
                                                                                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x19U], 
                                                                                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x1aU], 
                                                                                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x1bU], 
                                                                                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x1cU], 
                                                                                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x1dU], 
                                                                                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x1eU], 
                                                                                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x1fU]);
    vlSelf->ysyx_25060170_top__DOT__exu_mcause_value = 0U;
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->ysyx_25060170_top__DOT__inst_finish_o 
            = ((1U == (IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_wbctl_o)) 
               | (2U == (IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_wbctl_o)));
    }
    if ((0x2aU == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))) {
        vlSelf->ysyx_25060170_top__DOT__exu_mcause_value = 0xbU;
    } else if ((1U & (~ ((0xa8U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o)) 
                         | (0x94U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o)))))) {
        if ((1U & (~ ((0x25U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o)) 
                      | (0xc8U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o)))))) {
            if ((1U & (~ ((0x4aU == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o)) 
                          | (0xa4U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o)))))) {
                vlSelf->ysyx_25060170_top__DOT__exu_mcause_value = 0U;
            }
        }
    }
    Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_csr_TOP(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus, 
                                                                                (vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
                                                                                << 2U), vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mepc, vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mcause);
    if (vlSelf->rst) {
        vlSelf->ysyx_25060170_top__DOT__dpic_lsu_raddr = 0U;
        vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__wb_data_o = 0U;
    } else {
        vlSelf->ysyx_25060170_top__DOT__dpic_lsu_raddr 
            = vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_exu_res_o;
        vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_o 
            = ((1U == (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                ? ((vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_store_data_o 
                    << 0x18U) | ((0xff0000U & (vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_store_data_o 
                                               << 0x10U)) 
                                 | ((0xff00U & (vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_store_data_o 
                                                << 8U)) 
                                    | (0xffU & vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_store_data_o))))
                : ((2U == (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                    ? ((vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_store_data_o 
                        << 0x10U) | (0xffffU & vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_store_data_o))
                    : ((4U == (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                        ? vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_store_data_o
                        : 0U)));
        vlSelf->ysyx_25060170_top__DOT__wb_data_o = 
            ((1U == (IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_wbctl_o))
              ? vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_data_o
              : ((2U == (IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_wbctl_o))
                  ? vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_exu_res_o
                  : 0U));
    }
    Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read_TOP(vlSelf->ysyx_25060170_top__DOT__ifu_idu_pc, vlSelf->__Vtask_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__2__rdata, 4U);
    vlSelf->ysyx_25060170_top__DOT__dpic_ifu_inst = vlSelf->__Vtask_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__2__rdata;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h0e831b4e__0 
        = (1U & (~ ((IData)(vlSelf->rst) | (0U == (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o)))));
    vlSelf->__Vtableidx1 = ((6U & (vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_exu_res_o 
                                   << 1U)) | (IData)(vlSelf->rst));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_lsu__DOT__sb_mask 
        = Vysyx_25060170_top__ConstPool__TABLE_hf15ee880_0
        [vlSelf->__Vtableidx1];
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_h485df6cb__0 
        = (IData)((0U != (3U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_ctl_o))));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2 
        = (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
           + vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2 
        = VL_SHIFTRS_III(32,32,5, vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o, 
                         (0x1fU & vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__div 
        = VL_DIVS_III(32, vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o, vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__rem 
        = VL_MODDIVS_III(32, vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o, vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__mul 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o), 
                      VL_EXTENDS_QI(64,32, vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7773c72a__0 
        = ((~ (IData)(vlSelf->rst)) & (0x38U == (0x7cU 
                                                 & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst)));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2 
        = (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
           - vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h70f4116c__0 
        = ((~ (IData)(vlSelf->rst)) & (0x18U == (0x7cU 
                                                 & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst)));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_rd 
        = ((0x300U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_addr_o)) 
           & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_rd_ena_o));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h03cab0f1__0 
        = (IData)((0U == (0x42000000U & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst)));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7b49f5a3__0 
        = (IData)((0x40000000U == (0x42000000U & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst)));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_jal 
        = ((~ (IData)(vlSelf->rst)) & (0x6cU == (0x7cU 
                                                 & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst)));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_lui 
        = ((~ (IData)(vlSelf->rst)) & (0x34U == (0x7cU 
                                                 & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst)));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_auipc 
        = ((~ (IData)(vlSelf->rst)) & (0x14U == (0x7cU 
                                                 & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst)));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_jalr 
        = ((~ (IData)(vlSelf->rst)) & (0x64U == (0x7cU 
                                                 & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst)));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77eb01fa__0 
        = ((~ (IData)(vlSelf->rst)) & (0x20U == (0x7cU 
                                                 & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst)));
    vlSelf->ysyx_25060170_top__DOT__id_branch_o = (
                                                   (~ (IData)(vlSelf->rst)) 
                                                   & (0x60U 
                                                      == 
                                                      (0x7cU 
                                                       & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst)));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hf62a170c__0 
        = ((~ (IData)(vlSelf->rst)) & (IData)((3U == 
                                               (0x7fU 
                                                & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst))));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h70c0839c__0 
        = ((~ (IData)(vlSelf->rst)) & (0x10U == (0x7cU 
                                                 & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst)));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77488b95__0 
        = ((~ (IData)(vlSelf->rst)) & (0x30U == (0x7cU 
                                                 & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst)));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77acc5df__0 
        = ((~ (IData)(vlSelf->rst)) & (0x70U == (0x7cU 
                                                 & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst)));
    if ((0x100073U == vlSelf->ysyx_25060170_top__DOT__dpic_ifu_inst)) {
        Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__set_npc_exit_TOP(vlSelf->ysyx_25060170_top__DOT__ifu_idu_pc, 0U);
    } else if ((0x40000033U == vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst)) {
        Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__magic_instruction_TOP();
    }
    vlSelf->ysyx_25060170_top__DOT__dpic_lsu_re = ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h0e831b4e__0) 
                                                   & ((IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o) 
                                                      >> 3U));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_lt_op2 
        = (1U & (((~ (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o 
                      >> 0x1fU)) & (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                    >> 0x1fU)) | ((
                                                   (~ 
                                                    (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                                     >> 0x1fU)) 
                                                   & ((~ 
                                                       (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o 
                                                        >> 0x1fU)) 
                                                      & (vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2 
                                                         >> 0x1fU))) 
                                                  | ((vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                                      & (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o 
                                                         & vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2)) 
                                                     >> 0x1fU))));
    if (vlSelf->rst) {
        vlSelf->ysyx_25060170_top__DOT__dpic_lsu_wlen = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__alu_res = 0U;
    } else {
        vlSelf->ysyx_25060170_top__DOT__dpic_lsu_wlen 
            = ((1U == (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                ? (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_lsu__DOT__sb_mask)
                : ((2U == (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                    ? ((IData)(vlSelf->rst) ? 0U : 
                       ((0U == (3U & vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_exu_res_o))
                         ? 3U : ((2U == (3U & vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_exu_res_o))
                                  ? 0xcU : 0U))) : 
                   ((4U == (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                     ? 0xfU : 0U)));
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__alu_res 
            = ((0x80U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                ? ((0x40U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                    ? ((0x20U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                        ? 0U : ((0x10U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                 ? 0U : ((8U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                          ? 0U : ((4U 
                                                   & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                                     ^ vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o)))))))
                    : ((0x20U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                        ? ((0x10U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                            ? ((8U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                ? 0U : ((4U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                         ? 0U : ((2U 
                                                  & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                   ? 0U
                                                   : (IData)(
                                                             (vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__mul 
                                                              >> 0x20U))))))
                            : ((8U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                ? 0U : ((4U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                         ? 0U : ((2U 
                                                  & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                   ? 0U
                                                   : vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2)))))
                        : ((0x10U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                            ? ((8U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                ? ((4U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                    ? 0U : ((2U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                              ? 0U : vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__div)))
                                : 0U) : ((8U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                          ? 0U : ((4U 
                                                   & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                     ? 0U
                                                     : vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__rem)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                     ? 0U
                                                     : vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                                     + vlSelf->ysyx_25060170_top__DOT__id_ex_reg_imm_o))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                     ? 
                                                    (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                                     + vlSelf->ysyx_25060170_top__DOT__id_ex_reg_imm_o)
                                                     : 
                                                    (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o)))))))))
                : ((0x40U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                    ? ((0x20U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                        ? ((0x10U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                            ? 0U : ((8U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                     ? ((4U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                         ? 0U : ((2U 
                                                  & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                   ? 0U
                                                   : 
                                                  (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                                   + vlSelf->ysyx_25060170_top__DOT__id_ex_reg_imm_o))))
                                     : ((4U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                         ? 0U : ((2U 
                                                  & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                   ? 0U
                                                   : 
                                                  (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                                   < vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o))))))
                        : ((0x10U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                            ? ((8U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                ? ((4U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                    ? 0U : ((2U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                              ? 0U : (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__mul))))
                                : ((4U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                    ? 0U : ((2U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                              ? 0U : vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2))))
                            : ((8U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                ? 0U : ((4U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                         ? 0U : ((2U 
                                                  & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                   ? vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__rem
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->ysyx_25060170_top__DOT__id_ex_reg_pc_o))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                   ? 
                                                  (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                                   + vlSelf->ysyx_25060170_top__DOT__id_ex_reg_imm_o)
                                                   : 
                                                  (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                                   << 
                                                   (0x1fU 
                                                    & vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o))))))))
                    : ((0x20U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                        ? ((0x10U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                            ? ((8U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                ? 0U : ((4U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                         ? ((2U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                              ? 0U : 
                                             (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                              + vlSelf->ysyx_25060170_top__DOT__id_ex_reg_imm_o)))
                                         : ((2U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                              ? 0U : (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_lt_op2)))))
                            : ((8U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                ? ((4U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                    ? 0U : ((2U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                              ? 0U : 
                                             (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                              & vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o))))
                                : ((4U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                    ? 0U : ((2U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                 ? vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__div
                                                 : 0U)
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                 ? 
                                                ((IData)(4U) 
                                                 + vlSelf->ysyx_25060170_top__DOT__id_ex_reg_pc_o)
                                                 : 
                                                (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                                 & vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o))))))
                        : ((0x10U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                            ? ((8U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                ? ((4U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                    ? 0U : ((2U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                 ? 0U
                                                 : 
                                                (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                                 + vlSelf->ysyx_25060170_top__DOT__id_ex_reg_imm_o))
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                 ? 0U
                                                 : 
                                                (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o)))))
                                : ((4U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                    ? ((2U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                        ? ((1U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                            ? 0U : 
                                           (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                            + vlSelf->ysyx_25060170_top__DOT__id_ex_reg_imm_o))
                                        : ((1U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                            ? 0U : 
                                           (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                            | vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o)))
                                    : ((2U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                        ? 0U : ((1U 
                                                 & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                 ? 0U
                                                 : 
                                                (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                                 | vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o)))))
                            : ((8U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                ? ((4U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                    ? ((2U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                        ? 0U : ((1U 
                                                 & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                                 ? 0U
                                                 : vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2))
                                    : ((2U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                        ? ((1U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                            ? (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                               + vlSelf->ysyx_25060170_top__DOT__id_ex_reg_imm_o)
                                            : vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2)
                                        : ((1U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                            ? 0U : 
                                           (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                            ^ vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o))))
                                : ((4U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                    ? ((2U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                        ? ((1U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                            ? 0U : vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2)
                                        : ((1U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                            ? (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                               >> (0x1fU 
                                                   & vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o))
                                            : (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                               < vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o)))
                                    : ((2U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                        ? ((1U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                            ? vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2
                                            : (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_lt_op2))
                                        : ((1U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                            ? vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2
                                            : 0U))))))));
    }
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena 
        = ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_rd) 
           | (0U != (3U & (IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o))));
    if ((2U & (IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o))) {
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mpp_set = 3U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mpie_set 
            = (1U & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie));
    } else {
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mpp_set 
            = ((1U & (IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o))
                ? 0U : (3U & ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_rd)
                               ? (vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_write_csr_data_o 
                                  >> 0xdU) : (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp))));
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mpie_set 
            = (1U & ((IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o) 
                     | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_rd)
                         ? (vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_write_csr_data_o 
                            >> 7U) : (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie))));
    }
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mie_set 
        = (1U & ((~ ((IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o) 
                     >> 1U)) & ((1U & (IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o))
                                 ? (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)
                                 : ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_rd)
                                     ? (vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_write_csr_data_o 
                                        >> 3U) : (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)))));
    vlSelf->ysyx_25060170_top__DOT__read_csr_data = 
        (((- (IData)((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_rd))) 
          & vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus) 
         | (((- (IData)((1U & (((0x341U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_addr_o)) 
                                & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_rd_ena_o)) 
                               | (IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o))))) 
             & vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mepc) 
            | (((- (IData)((1U & (((0x305U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_addr_o)) 
                                   & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_rd_ena_o)) 
                                  | ((IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o) 
                                     >> 1U))))) & (vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
                                                   << 2U)) 
               | ((- (IData)(((0x342U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_addr_o)) 
                              & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_rd_ena_o)))) 
                  & vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mcause))));
    vlSelf->ysyx_25060170_top__DOT__exu_write_csr_data 
        = ((0x2aU == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
            ? vlSelf->ysyx_25060170_top__DOT__id_ex_reg_pc_o
            : (((0xa8U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o)) 
                | (0x94U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o)))
                ? vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o
                : (((0x25U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o)) 
                    | (0xc8U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o)))
                    ? (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                       | vlSelf->ysyx_25060170_top__DOT__read_csr_data)
                    : (((0x4aU == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o)) 
                        | (0xa4U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o)))
                        ? ((~ vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o) 
                           & vlSelf->ysyx_25060170_top__DOT__read_csr_data)
                        : 0U))));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hd9b03bc2__0 
        = ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_lui) 
           | (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_auipc));
    vlSelf->ysyx_25060170_top__DOT__id_jump_o = ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_jal) 
                                                 | (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_jalr));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h893e271f__0 
        = ((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
               >> 0xeU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77eb01fa__0));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7855af38__0 
        = ((IData)(vlSelf->ysyx_25060170_top__DOT__id_branch_o) 
           & (IData)((0U == (0x6000U & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst))));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hebf21d33__0 
        = ((IData)(vlSelf->ysyx_25060170_top__DOT__id_branch_o) 
           & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
              >> 0xeU));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_heac6e652__0 
        = ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hf62a170c__0) 
           & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
              >> 0xeU));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h177d4809__0 
        = ((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
               >> 0xeU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hf62a170c__0));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h91eba5f9__0 
        = ((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
               >> 0xeU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h70c0839c__0));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h712d9166__0 
        = ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h70c0839c__0) 
           & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
              >> 0xeU));
    vlSelf->ysyx_25060170_top__DOT__rs2_ena = ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7773c72a__0) 
                                               | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77488b95__0) 
                                                  | ((IData)(vlSelf->ysyx_25060170_top__DOT__id_branch_o) 
                                                     | (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77eb01fa__0))));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h8893bd80__0 
        = ((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
               >> 0xeU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77488b95__0));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h100d9d21__0 
        = ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77488b95__0) 
           & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
              >> 0xeU));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hed177170__0 
        = ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77acc5df__0) 
           & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
              >> 0xeU));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h88fffb3a__0 
        = ((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
               >> 0xeU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77acc5df__0));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_if_id_reg__DOT__pc_next 
        = ((0x80000000U & (- (IData)((IData)(vlSelf->rst)))) 
           | (((- (IData)((1U & ((~ (IData)(vlSelf->rst)) 
                                 & (~ (IData)(vlSelf->ysyx_25060170_top__DOT__ex_pcsrc_o)))))) 
               & ((0x80000000U & (- (IData)((IData)(vlSelf->rst)))) 
                  | ((- (IData)((1U & (~ (IData)(vlSelf->rst))))) 
                     & ((IData)(4U) + vlSelf->ysyx_25060170_top__DOT__ifu_idu_pc)))) 
              | ((- (IData)(((~ (IData)(vlSelf->rst)) 
                             & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_pcsrc_o)))) 
                 & (((0x21U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o)) 
                     | (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_branch_o))
                     ? (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_imm_o 
                        + vlSelf->ysyx_25060170_top__DOT__id_ex_reg_pc_o)
                     : ((0x42U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                         ? (0xfffffffeU & (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_imm_o 
                                           + vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o))
                         : ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_h485df6cb__0)
                             ? vlSelf->ysyx_25060170_top__DOT__read_csr_data
                             : 0U))))));
    vlSelf->ysyx_25060170_top__DOT__id_imm_o = (((- (IData)(
                                                            ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hf62a170c__0) 
                                                             | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h70c0839c__0) 
                                                                | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h70f4116c__0) 
                                                                   | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77acc5df__0) 
                                                                      | (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_jalr))))))) 
                                                 & (((- (IData)(
                                                                (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                       >> 0x14U))) 
                                                | ((0xfffff000U 
                                                    & ((- (IData)((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hd9b03bc2__0))) 
                                                       & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst)) 
                                                   | (((- (IData)((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_jal))) 
                                                       & (((- (IData)(
                                                                      (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                       >> 0x1fU))) 
                                                           << 0x15U) 
                                                          | ((0x100000U 
                                                              & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                 >> 0xbU)) 
                                                             | ((0xff000U 
                                                                 & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst) 
                                                                | ((0x800U 
                                                                    & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                       >> 9U)) 
                                                                   | (0x7feU 
                                                                      & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                         >> 0x14U))))))) 
                                                      | (((- (IData)((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77eb01fa__0))) 
                                                          & (((- (IData)(
                                                                         (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                          >> 0x1fU))) 
                                                              << 0xcU) 
                                                             | ((0xfe0U 
                                                                 & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                    >> 0x14U)) 
                                                                | (0x1fU 
                                                                   & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                      >> 7U))))) 
                                                         | ((- (IData)((IData)(vlSelf->ysyx_25060170_top__DOT__id_branch_o))) 
                                                            & (((- (IData)(
                                                                           (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                            >> 0x1fU))) 
                                                                << 0xdU) 
                                                               | ((0x1000U 
                                                                   & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                      >> 0x13U)) 
                                                                  | ((0x800U 
                                                                      & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                         << 4U)) 
                                                                     | ((0x7e0U 
                                                                         & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                            >> 0x14U)) 
                                                                        | (0x1eU 
                                                                           & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                              >> 7U)))))))))));
    vlSelf->ysyx_25060170_top__DOT__id_wbctl_o = ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hf62a170c__0)
                                                   ? 1U
                                                   : 
                                                  (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77acc5df__0) 
                                                    | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7773c72a__0) 
                                                       | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h70f4116c__0) 
                                                          | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h70c0839c__0) 
                                                             | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77488b95__0) 
                                                                | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_lui) 
                                                                   | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_auipc) 
                                                                      | (IData)(vlSelf->ysyx_25060170_top__DOT__id_jump_o))))))))
                                                    ? 2U
                                                    : 0U));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h489c6f46__0 
        = ((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
               >> 0xdU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h893e271f__0));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_he80da865__0 
        = ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h893e271f__0) 
           & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
              >> 0xdU));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h2bc0716a__0 
        = ((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
               >> 0xdU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hebf21d33__0));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h6fd23990__0 
        = ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hebf21d33__0) 
           & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
              >> 0xdU));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h29152e89__0 
        = ((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
               >> 0xdU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_heac6e652__0));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hc65f4c50__0 
        = ((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
               >> 0xdU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h177d4809__0));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h1167153d__0 
        = ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h177d4809__0) 
           & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
              >> 0xdU));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h41ceee20__0 
        = ((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
               >> 0xdU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h91eba5f9__0));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hc1b77381__0 
        = ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h91eba5f9__0) 
           & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
              >> 0xdU));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h5a06bcf6__0 
        = ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h712d9166__0) 
           & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
              >> 0xdU));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_ha08c85bd__0 
        = ((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
               >> 0xdU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h712d9166__0));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h5766d1a7__0 
        = ((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
               >> 0xdU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h8893bd80__0));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h2696076e__0 
        = ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h8893bd80__0) 
           & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
              >> 0xdU));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hcfecf178__0 
        = ((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
               >> 0xdU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h100d9d21__0));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hfbecd367__0 
        = ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h100d9d21__0) 
           & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
              >> 0xdU));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hbd811272__0 
        = ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hed177170__0) 
           & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
              >> 0xdU));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h48d21361__0 
        = ((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
               >> 0xdU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h88fffb3a__0));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h5f1400db__0 
        = ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h88fffb3a__0) 
           & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
              >> 0xdU));
    vlSelf->ysyx_25060170_top__DOT__rd_ena = ((0U != 
                                               (0x1fU 
                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                   >> 7U))) 
                                              & (0U 
                                                 != (IData)(vlSelf->ysyx_25060170_top__DOT__id_wbctl_o)));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h2e86cea5__0 
        = ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_ha08c85bd__0) 
           & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
              >> 0xcU));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hb3c59122__0 
        = ((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
               >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h5766d1a7__0));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h36e9ef3c__0 
        = ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h5766d1a7__0) 
           & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
              >> 0xcU));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_he2955f6b__0 
        = ((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
               >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h2696076e__0));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h4c825e07__0 
        = ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h2696076e__0) 
           & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
              >> 0xcU));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h3b427111__0 
        = ((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
               >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hcfecf178__0));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hb3ea081b__0 
        = ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hcfecf178__0) 
           & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
              >> 0xcU));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hd7439362__0 
        = ((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
               >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hfbecd367__0));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7a82fdcc__0 
        = ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hfbecd367__0) 
           & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
              >> 0xcU));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrsi 
        = ((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
               >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hbd811272__0));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrw 
        = ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h48d21361__0) 
           & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
              >> 0xcU));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h84595378__0 
        = ((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
               >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h48d21361__0));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrs 
        = ((~ (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
               >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h5f1400db__0));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrc 
        = ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h5f1400db__0) 
           & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
              >> 0xcU));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_ecall 
        = ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h84595378__0) 
           & (0U == (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                     >> 0x14U)));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_ha434cdb1__0 
        = ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrc) 
           | (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrsi));
    vlSelf->ysyx_25060170_top__DOT__rs1_ena = ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7773c72a__0) 
                                               | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h70f4116c__0) 
                                                  | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h70c0839c__0) 
                                                     | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77488b95__0) 
                                                        | ((IData)(vlSelf->ysyx_25060170_top__DOT__id_branch_o) 
                                                           | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hf62a170c__0) 
                                                              | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77eb01fa__0) 
                                                                 | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_jalr) 
                                                                    | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrw) 
                                                                        | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrs) 
                                                                           | (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrc))) 
                                                                       | (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_ecall))))))))));
    vlSelf->ysyx_25060170_top__DOT__id_alusrc_o = (
                                                   (((~ (IData)(vlSelf->rst)) 
                                                     << 7U) 
                                                    & ((((~ 
                                                          (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                           >> 0x1eU)) 
                                                         & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h2e86cea5__0)) 
                                                        << 7U) 
                                                       | ((((~ 
                                                             (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                              >> 0x19U)) 
                                                            & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h3b427111__0)) 
                                                           << 7U) 
                                                          | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_auipc) 
                                                              << 7U) 
                                                             | ((((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h84595378__0) 
                                                                  & (1U 
                                                                     == 
                                                                     (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                      >> 0x14U))) 
                                                                 << 7U) 
                                                                | ((0x7ffff80U 
                                                                    & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h489c6f46__0) 
                                                                        << 7U) 
                                                                       & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                          >> 5U))) 
                                                                   | ((((~ 
                                                                         (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                          >> 0xcU)) 
                                                                        & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_he80da865__0)) 
                                                                       << 7U) 
                                                                      | ((((~ 
                                                                            (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                             >> 0xcU)) 
                                                                           & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h6fd23990__0)) 
                                                                          << 7U) 
                                                                         | ((0x7ffff80U 
                                                                             & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h1167153d__0) 
                                                                                << 7U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 5U))) 
                                                                            | ((0x3f80U 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h36e9ef3c__0) 
                                                                                << 7U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0x12U))) 
                                                                               | ((0x3f80U 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h3b427111__0) 
                                                                                << 7U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0x12U))) 
                                                                                | ((0x3f80U 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7a82fdcc__0) 
                                                                                << 7U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0x12U))) 
                                                                                | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrw) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hed177170__0) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst)))) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrsi) 
                                                                                << 7U) 
                                                                                | (0x7ffff80U 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hbd811272__0) 
                                                                                << 7U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 5U)))))))))))))))))) 
                                                   | ((0x40U 
                                                       & (((~ (IData)(vlSelf->rst)) 
                                                           << 6U) 
                                                          & ((0x3ffffc0U 
                                                              & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h41ceee20__0) 
                                                                  << 6U) 
                                                                 & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                    >> 6U))) 
                                                             | ((((~ 
                                                                   (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                    >> 0x19U)) 
                                                                  & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h4c825e07__0)) 
                                                                 << 6U) 
                                                                | ((((~ 
                                                                      (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                       >> 0x19U)) 
                                                                     & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h3b427111__0)) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_lui) 
                                                                       << 6U) 
                                                                      | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_jalr) 
                                                                          << 6U) 
                                                                         | ((((~ 
                                                                               (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0xcU)) 
                                                                              & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h489c6f46__0)) 
                                                                             << 6U) 
                                                                            | ((0x3ffffc0U 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h2bc0716a__0) 
                                                                                << 6U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 6U))) 
                                                                               | ((((~ 
                                                                                (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0xcU)) 
                                                                                & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h6fd23990__0)) 
                                                                                << 6U) 
                                                                                | ((((~ 
                                                                                (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0xcU)) 
                                                                                & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h1167153d__0)) 
                                                                                << 6U) 
                                                                                | ((0x3ffffc0U 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h1167153d__0) 
                                                                                << 6U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 6U))) 
                                                                                | ((0x1fc0U 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hb3c59122__0) 
                                                                                << 6U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0x13U))) 
                                                                                | ((0x1fc0U 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hd7439362__0) 
                                                                                << 6U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0x13U))) 
                                                                                | ((((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h84595378__0) 
                                                                                & (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst)))) 
                                                                                | vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_ha434cdb1__0) 
                                                                                << 6U))))))))))))))) 
                                                      | ((((~ (IData)(vlSelf->rst)) 
                                                           << 5U) 
                                                          & ((0x1ffffe0U 
                                                              & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h5a06bcf6__0) 
                                                                  << 5U) 
                                                                 & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                    >> 7U))) 
                                                             | ((((~ 
                                                                   (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                    >> 0x19U)) 
                                                                  & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_he2955f6b__0)) 
                                                                 << 5U) 
                                                                | ((((~ 
                                                                      (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                       >> 0x19U)) 
                                                                     & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h4c825e07__0)) 
                                                                    << 5U) 
                                                                   | ((((~ 
                                                                         (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                          >> 0x19U)) 
                                                                        & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7a82fdcc__0)) 
                                                                       << 5U) 
                                                                      | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_auipc) 
                                                                          << 5U) 
                                                                         | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_jal) 
                                                                             << 5U) 
                                                                            | ((((~ 
                                                                                (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0xcU)) 
                                                                                & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h2bc0716a__0)) 
                                                                                << 5U) 
                                                                               | ((0x1ffffe0U 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h2bc0716a__0) 
                                                                                << 5U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 7U))) 
                                                                                | ((((~ 
                                                                                (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0xcU)) 
                                                                                & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h6fd23990__0)) 
                                                                                << 5U) 
                                                                                | ((0x1ffffe0U 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hc65f4c50__0) 
                                                                                << 5U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 7U))) 
                                                                                | ((((~ 
                                                                                (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0xcU)) 
                                                                                & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h1167153d__0)) 
                                                                                << 5U) 
                                                                                | ((((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_heac6e652__0) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst)))) 
                                                                                << 5U) 
                                                                                | ((0xfe0U 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h36e9ef3c__0) 
                                                                                << 5U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0x14U))) 
                                                                                | ((0xfe0U 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h4c825e07__0) 
                                                                                << 5U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0x14U))) 
                                                                                | ((0xfe0U 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hb3ea081b__0) 
                                                                                << 5U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0x14U))) 
                                                                                | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_ecall) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrw) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrs) 
                                                                                << 5U) 
                                                                                | (0x1ffffe0U 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hbd811272__0) 
                                                                                << 5U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 7U)))))))))))))))))))))) 
                                                         | ((((~ (IData)(vlSelf->rst)) 
                                                              << 4U) 
                                                             & ((((~ 
                                                                   (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                    >> 0xcU)) 
                                                                  & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h5a06bcf6__0)) 
                                                                 << 4U) 
                                                                | ((((~ 
                                                                      (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                       >> 0x19U)) 
                                                                     & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h36e9ef3c__0)) 
                                                                    << 4U) 
                                                                   | ((((~ 
                                                                         (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                          >> 0x19U)) 
                                                                        & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_he2955f6b__0)) 
                                                                       << 4U) 
                                                                      | ((((~ 
                                                                            (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                             >> 0x19U)) 
                                                                           & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hd7439362__0)) 
                                                                          << 4U) 
                                                                         | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_lui) 
                                                                             << 4U) 
                                                                            | ((0xfffff0U 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7855af38__0) 
                                                                                << 4U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 8U))) 
                                                                               | ((((~ 
                                                                                (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0xcU)) 
                                                                                & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h2bc0716a__0)) 
                                                                                << 4U) 
                                                                                | ((0xfffff0U 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h2bc0716a__0) 
                                                                                << 4U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 8U))) 
                                                                                | ((((~ 
                                                                                (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0xcU)) 
                                                                                & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hc65f4c50__0)) 
                                                                                << 4U) 
                                                                                | ((0xfffff0U 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hc65f4c50__0) 
                                                                                << 4U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 8U))) 
                                                                                | ((0xfffff0U 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h1167153d__0) 
                                                                                << 4U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 8U))) 
                                                                                | ((0xfffff0U 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h29152e89__0) 
                                                                                << 4U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 8U))) 
                                                                                | ((0x7f0U 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hb3c59122__0) 
                                                                                << 4U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0x15U))) 
                                                                                | ((0x7f0U 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h36e9ef3c__0) 
                                                                                << 4U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0x15U))) 
                                                                                | ((0x7f0U 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h4c825e07__0) 
                                                                                << 4U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0x15U))) 
                                                                                | ((0x7f0U 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h3b427111__0) 
                                                                                << 4U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0x15U))) 
                                                                                | ((((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h84595378__0) 
                                                                                & (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst)))) 
                                                                                | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hed177170__0) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst))))) 
                                                                                << 4U)))))))))))))))))) 
                                                            | ((8U 
                                                                & (((~ (IData)(vlSelf->rst)) 
                                                                    << 3U) 
                                                                   & ((((~ 
                                                                         (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                          >> 0xcU)) 
                                                                        & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_ha08c85bd__0)) 
                                                                       << 3U) 
                                                                      | ((((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hb3c59122__0) 
                                                                           & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7b49f5a3__0)) 
                                                                          << 3U) 
                                                                         | ((((~ 
                                                                               (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0x19U)) 
                                                                              & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h36e9ef3c__0)) 
                                                                             << 3U) 
                                                                            | ((((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hb3ea081b__0) 
                                                                                & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7b49f5a3__0)) 
                                                                                << 3U) 
                                                                               | ((((~ 
                                                                                (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0x19U)) 
                                                                                & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7a82fdcc__0)) 
                                                                                << 3U) 
                                                                                | ((((~ 
                                                                                (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0xcU)) 
                                                                                & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7855af38__0)) 
                                                                                << 3U) 
                                                                                | ((0x7ffff8U 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7855af38__0) 
                                                                                << 3U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 9U))) 
                                                                                | ((((~ 
                                                                                (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0xcU)) 
                                                                                & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h2bc0716a__0)) 
                                                                                << 3U) 
                                                                                | ((0x7ffff8U 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h6fd23990__0) 
                                                                                << 3U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 9U))) 
                                                                                | ((((~ 
                                                                                (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0xcU)) 
                                                                                & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hc65f4c50__0)) 
                                                                                << 3U) 
                                                                                | ((((~ 
                                                                                (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0xcU)) 
                                                                                & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h1167153d__0)) 
                                                                                << 3U) 
                                                                                | ((((~ 
                                                                                (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0xcU)) 
                                                                                & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h29152e89__0)) 
                                                                                << 3U) 
                                                                                | ((((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_heac6e652__0) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst)))) 
                                                                                << 3U) 
                                                                                | ((0x3f8U 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hb3c59122__0) 
                                                                                << 3U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0x16U))) 
                                                                                | ((0x3f8U 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h3b427111__0) 
                                                                                << 3U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0x16U))) 
                                                                                | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_ecall) 
                                                                                | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrw) 
                                                                                | vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_ha434cdb1__0)) 
                                                                                << 3U)))))))))))))))))) 
                                                               | ((((~ (IData)(vlSelf->rst)) 
                                                                    << 2U) 
                                                                   & ((0x3ffffcU 
                                                                       & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hc1b77381__0) 
                                                                           << 2U) 
                                                                          & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                             >> 0xaU))) 
                                                                      | ((((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hb3c59122__0) 
                                                                           & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h03cab0f1__0)) 
                                                                          << 2U) 
                                                                         | ((((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hb3c59122__0) 
                                                                              & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7b49f5a3__0)) 
                                                                             << 2U) 
                                                                            | ((((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hb3ea081b__0) 
                                                                                & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h03cab0f1__0)) 
                                                                                << 2U) 
                                                                               | ((((~ 
                                                                                (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0x19U)) 
                                                                                & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hd7439362__0)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h84595378__0) 
                                                                                & (1U 
                                                                                == 
                                                                                (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0x14U))) 
                                                                                << 2U) 
                                                                                | ((0x3ffffcU 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_he80da865__0) 
                                                                                << 2U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0xaU))) 
                                                                                | ((((~ 
                                                                                (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0xcU)) 
                                                                                & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7855af38__0)) 
                                                                                << 2U) 
                                                                                | ((0x3ffffcU 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7855af38__0) 
                                                                                << 2U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0xaU))) 
                                                                                | ((0x3ffffcU 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h6fd23990__0) 
                                                                                << 2U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0xaU))) 
                                                                                | ((0x3ffffcU 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hc65f4c50__0) 
                                                                                << 2U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0xaU))) 
                                                                                | ((0x3ffffcU 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h29152e89__0) 
                                                                                << 2U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0xaU))) 
                                                                                | ((((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_heac6e652__0) 
                                                                                & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst)))) 
                                                                                << 2U) 
                                                                                | ((0x1fcU 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h4c825e07__0) 
                                                                                << 2U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0x17U))) 
                                                                                | ((0x1fcU 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7a82fdcc__0) 
                                                                                << 2U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0x17U))) 
                                                                                | ((((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h84595378__0) 
                                                                                & (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst)))) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrs) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hed177170__0) 
                                                                                & (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst)))) 
                                                                                << 2U) 
                                                                                | (0x3ffffcU 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hbd811272__0) 
                                                                                << 2U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0xaU)))))))))))))))))))))) 
                                                                  | ((((~ (IData)(vlSelf->rst)) 
                                                                       << 1U) 
                                                                      & ((((~ 
                                                                            (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                             >> 0xcU)) 
                                                                           & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hc1b77381__0)) 
                                                                          << 1U) 
                                                                         | ((6U 
                                                                             & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h2e86cea5__0) 
                                                                                << 1U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0x1dU))) 
                                                                            | ((((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hb3c59122__0) 
                                                                                & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h03cab0f1__0)) 
                                                                                << 1U) 
                                                                               | ((((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hb3ea081b__0) 
                                                                                & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7b49f5a3__0)) 
                                                                                << 1U) 
                                                                                | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_jalr) 
                                                                                << 1U) 
                                                                                | ((0x1ffffeU 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h489c6f46__0) 
                                                                                << 1U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0xbU))) 
                                                                                | ((0x1ffffeU 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_he80da865__0) 
                                                                                << 1U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0xbU))) 
                                                                                | ((((~ 
                                                                                (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0xcU)) 
                                                                                & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7855af38__0)) 
                                                                                << 1U) 
                                                                                | ((((~ 
                                                                                (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0xcU)) 
                                                                                & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hc65f4c50__0)) 
                                                                                << 1U) 
                                                                                | ((((~ 
                                                                                (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0xcU)) 
                                                                                & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h29152e89__0)) 
                                                                                << 1U) 
                                                                                | ((0x1ffffeU 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h29152e89__0) 
                                                                                << 1U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0xbU))) 
                                                                                | ((0xfeU 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_he2955f6b__0) 
                                                                                << 1U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0x18U))) 
                                                                                | ((0xfeU 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h4c825e07__0) 
                                                                                << 1U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0x18U))) 
                                                                                | ((0xfeU 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hb3ea081b__0) 
                                                                                << 1U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0x18U))) 
                                                                                | ((0xfeU 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hd7439362__0) 
                                                                                << 1U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0x18U))) 
                                                                                | ((0xfeU 
                                                                                & (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7a82fdcc__0) 
                                                                                << 1U) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0x18U))) 
                                                                                | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_ecall) 
                                                                                | (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrc)) 
                                                                                << 1U)))))))))))))))))) 
                                                                     | ((~ (IData)(vlSelf->rst)) 
                                                                        & (((~ 
                                                                             (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                              >> 0xcU)) 
                                                                            & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h41ceee20__0)) 
                                                                           | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h2e86cea5__0) 
                                                                               & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0x1eU)) 
                                                                              | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hb3ea081b__0) 
                                                                                & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h03cab0f1__0)) 
                                                                                | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_jal) 
                                                                                | (((~ 
                                                                                (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0xcU)) 
                                                                                & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h489c6f46__0)) 
                                                                                | (((~ 
                                                                                (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0xcU)) 
                                                                                & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_he80da865__0)) 
                                                                                | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_he80da865__0) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0xcU)) 
                                                                                | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h6fd23990__0) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0xcU)) 
                                                                                | (((~ 
                                                                                (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0xcU)) 
                                                                                & (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h29152e89__0)) 
                                                                                | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_he2955f6b__0) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0x19U)) 
                                                                                | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hb3ea081b__0) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0x19U)) 
                                                                                | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hd7439362__0) 
                                                                                & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                                                >> 0x19U)) 
                                                                                | (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrs)))))))))))))))))))));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__mret_ena = 0U;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__ecall_ena = 0U;
    if ((0x2aU == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))) {
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__ecall_ena = 1U;
    } else if ((0x54U != (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))) {
        if ((1U & (~ ((0xa8U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o)) 
                      | (0x94U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o)))))) {
            if ((1U & (~ ((((0x25U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o)) 
                            | (0x4aU == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))) 
                           | (0xc8U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))) 
                          | (0xa4U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o)))))) {
                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__ecall_ena = 0U;
            }
        }
    }
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__csr_wr_ena = 0U;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__csr_rd_ena = 0U;
    if ((0x2aU != (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))) {
        if ((0x54U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))) {
            vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__mret_ena = 1U;
        } else if ((1U & (~ ((0xa8U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o)) 
                             | (0x94U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o)))))) {
            if ((1U & (~ ((((0x25U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o)) 
                            | (0x4aU == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))) 
                           | (0xc8U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))) 
                          | (0xa4U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o)))))) {
                vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__mret_ena = 0U;
            }
        }
        if ((0x54U != (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))) {
            vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__csr_wr_ena 
                = (((0xa8U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o)) 
                    | (0x94U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))) 
                   | (((((0x25U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o)) 
                         | (0x4aU == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))) 
                        | (0xc8U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))) 
                       | (0xa4U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))) 
                      & (0U != (0x1fU & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                         >> 0xfU)))));
            vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__csr_rd_ena 
                = (((0xa8U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o)) 
                    | (0x94U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o)))
                    ? (0U != (0x1fU & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                       >> 7U))) : (
                                                   (((0x25U 
                                                      == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o)) 
                                                     | (0x4aU 
                                                        == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))) 
                                                    | (0xc8U 
                                                       == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))) 
                                                   | (0xa4U 
                                                      == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))));
        }
    }
}

VL_ATTR_COLD void Vysyx_25060170_top___024root___eval_stl(Vysyx_25060170_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_25060170_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_top___024root___dump_triggers__ico(Vysyx_25060170_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_top___024root___dump_triggers__act(Vysyx_25060170_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge ysyx_25060170_top.inst_finish_o)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_top___024root___dump_triggers__nba(Vysyx_25060170_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge ysyx_25060170_top.inst_finish_o)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_25060170_top___024root___ctor_var_reset(Vysyx_25060170_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__dpic_ifu_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_top__DOT__ifu_idu_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_top__DOT__if_id_reg_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__ex_pcsrc_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__rs1_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__rs2_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__rd_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__id_alusrc_o = VL_RAND_RESET_I(8);
    vlSelf->ysyx_25060170_top__DOT__id_wbctl_o = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25060170_top__DOT__id_branch_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__id_jump_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__id_imm_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_top__DOT__id_ex_reg_imm_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_top__DOT__id_ex_reg_pc_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_addr_o = VL_RAND_RESET_I(12);
    vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o = VL_RAND_RESET_I(8);
    vlSelf->ysyx_25060170_top__DOT__id_ex_reg_lsctl_o = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_rd_ena_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__id_ex_reg_wbctl_o = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25060170_top__DOT__id_ex_reg_branch_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__id_ex_reg_jump_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_ctl_o = VL_RAND_RESET_I(3);
    vlSelf->ysyx_25060170_top__DOT__id_ex_reg_rd_addr_o = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25060170_top__DOT__id_ex_reg_rd_ena_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__id_ex_reg_valid_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__exu_write_csr_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_top__DOT__exu_mcause_value = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_store_data_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_exu_res_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_write_csr_data_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_mcause_value_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_wb_ctl_o = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_rd_ena_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_rd_addr_o = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_csr_ctl_o = VL_RAND_RESET_I(3);
    vlSelf->ysyx_25060170_top__DOT__ex_lsu_valid_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__dpic_lsu_re = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_top__DOT__dpic_lsu_raddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_top__DOT__dpic_lsu_wlen = VL_RAND_RESET_I(8);
    vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_data_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_wbctl_o = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_exu_res_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_rd_ena_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_rd_addr_o = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_write_csr_data_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_mcause_value_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_valid_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o = VL_RAND_RESET_I(3);
    vlSelf->ysyx_25060170_top__DOT__wb_data_o = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_top__DOT__inst_finish_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__read_csr_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_if_id_reg__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__csr_wr_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__csr_rd_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__mret_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__ecall_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_lui = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_auipc = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_jal = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_jalr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_ecall = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrs = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrc = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT__inst_csrrsi = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7773c72a__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h70f4116c__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h70c0839c__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77488b95__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hf62a170c__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77eb01fa__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77acc5df__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hd9b03bc2__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_ha434cdb1__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h489c6f46__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_he80da865__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hc65f4c50__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h1167153d__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h29152e89__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_heac6e652__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7855af38__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h2bc0716a__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h6fd23990__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hb3c59122__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h03cab0f1__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7b49f5a3__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h36e9ef3c__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_he2955f6b__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h4c825e07__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h3b427111__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hb3ea081b__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hd7439362__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7a82fdcc__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h41ceee20__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hc1b77381__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_ha08c85bd__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h5a06bcf6__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h2e86cea5__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h84595378__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h48d21361__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h5f1400db__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hed177170__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hbd811272__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h893e271f__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h177d4809__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hebf21d33__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h8893bd80__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h5766d1a7__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h2696076e__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h100d9d21__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hcfecf178__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hfbecd367__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h91eba5f9__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h712d9166__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h88fffb3a__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_lt_op2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__mul = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__div = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__rem = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__alu_res = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_h485df6cb__0 = 0;
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_lsu__DOT__sb_mask = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h0e831b4e__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_rd = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mie_set = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mpie_set = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mpp_set = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mtvec_base = VL_RAND_RESET_I(30);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__2__rdata = 0;
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__ysyx_25060170_top__DOT__inst_finish_o = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
