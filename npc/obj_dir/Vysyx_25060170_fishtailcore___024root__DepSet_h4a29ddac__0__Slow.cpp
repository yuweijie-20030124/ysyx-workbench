// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25060170_fishtailcore.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25060170_fishtailcore___024root.h"

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___eval_static(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___eval_initial__TOP(Vysyx_25060170_fishtailcore___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___eval_initial(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___eval_initial\n"); );
    // Body
    Vysyx_25060170_fishtailcore___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___eval_initial__TOP(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ready = 1U;
}

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___eval_final(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___eval_triggers__stl(Vysyx_25060170_fishtailcore___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___dump_triggers__stl(Vysyx_25060170_fishtailcore___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___eval_stl(Vysyx_25060170_fishtailcore___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___eval_settle(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vysyx_25060170_fishtailcore___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vysyx_25060170_fishtailcore___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/core/ysyx_25060170_fishtailcore.v", 3, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vysyx_25060170_fishtailcore___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___dump_triggers__stl(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_regs_TOP(IData/*31:0*/ regs0, IData/*31:0*/ regs1, IData/*31:0*/ regs2, IData/*31:0*/ regs3, IData/*31:0*/ regs4, IData/*31:0*/ regs5, IData/*31:0*/ regs6, IData/*31:0*/ regs7, IData/*31:0*/ regs8, IData/*31:0*/ regs9, IData/*31:0*/ regs10, IData/*31:0*/ regs11, IData/*31:0*/ regs12, IData/*31:0*/ regs13, IData/*31:0*/ regs14, IData/*31:0*/ regs15, IData/*31:0*/ regs16, IData/*31:0*/ regs17, IData/*31:0*/ regs18, IData/*31:0*/ regs19, IData/*31:0*/ regs20, IData/*31:0*/ regs21, IData/*31:0*/ regs22, IData/*31:0*/ regs23, IData/*31:0*/ regs24, IData/*31:0*/ regs25, IData/*31:0*/ regs26, IData/*31:0*/ regs27, IData/*31:0*/ regs28, IData/*31:0*/ regs29, IData/*31:0*/ regs30, IData/*31:0*/ regs31);
void Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_csr_TOP(IData/*31:0*/ csr_mstatus, IData/*31:0*/ csr_mtvec, IData/*31:0*/ csr_mepc, IData/*31:0*/ csr_mcause);
extern const VlUnpacked<CData/*3:0*/, 8> Vysyx_25060170_fishtailcore__ConstPool__TABLE_hf15ee880_0;
void Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata, CData/*7:0*/ rlen, IData/*31:0*/ mode);

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___stl_sequent__TOP__0(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___stl_sequent__TOP__0\n"); );
    // Body
    Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_regs_TOP(
                                                                                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0U], 
                                                                                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [1U], 
                                                                                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [2U], 
                                                                                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [3U], 
                                                                                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [4U], 
                                                                                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [5U], 
                                                                                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [6U], 
                                                                                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [7U], 
                                                                                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [8U], 
                                                                                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [9U], 
                                                                                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0xaU], 
                                                                                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0xbU], 
                                                                                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0xcU], 
                                                                                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0xdU], 
                                                                                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0xeU], 
                                                                                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0xfU], 
                                                                                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x10U], 
                                                                                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x11U], 
                                                                                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x12U], 
                                                                                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x13U], 
                                                                                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x14U], 
                                                                                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x15U], 
                                                                                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x16U], 
                                                                                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x17U], 
                                                                                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x18U], 
                                                                                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x19U], 
                                                                                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x1aU], 
                                                                                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x1bU], 
                                                                                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x1cU], 
                                                                                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x1dU], 
                                                                                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x1eU], 
                                                                                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x1fU]);
    vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_pc 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ifu__DOT__pc;
    if (vlSelf->rst) {
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena = 0U;
    } else if ((0x2aU != (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
        if (((0xa8U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
             | (0x94U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))) {
            vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena = 1U;
        } else if ((1U & (~ ((0x25U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                             | (0xc8U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
            if ((1U & (~ ((0x4aU == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                          | (0xa4U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                if ((0x54U != (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
                    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena = 0U;
                }
            }
        }
        if ((1U & (~ ((0xa8U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                      | (0x94U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
            if (((0x25U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                 | (0xc8U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))) {
                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena = 1U;
            } else if ((1U & (~ ((0x4aU == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                 | (0xa4U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                if ((0x54U != (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
                    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena = 0U;
                }
            }
            if ((1U & (~ ((0x25U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                          | (0xc8U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                if (((0x4aU == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                     | (0xa4U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))) {
                    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena = 1U;
                } else if ((0x54U != (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
                    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena = 0U;
                }
            }
        }
    }
    Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_csr_TOP(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus, 
                                                                                (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
                                                                                << 2U), vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mepc, vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mcause);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall 
        = (1U & ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ready)) 
                 | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_valid)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_valid 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_valid) 
           | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re) 
              & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_mem__DOT__data_ok)));
    vlSelf->__Vtableidx2 = ((6U & (vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res 
                                   << 1U)) | (IData)(vlSelf->rst));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask 
        = Vysyx_25060170_fishtailcore__ConstPool__TABLE_hf15ee880_0
        [vlSelf->__Vtableidx2];
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr 
        = ((0x300U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
           & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
              >> 3U));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__read_csr_data 
        = (((0x300U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
            & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
               >> 2U)) ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus
            : ((1U & (((0x341U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                       & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                          >> 2U)) | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl)))
                ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mepc
                : ((1U & (((0x305U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                           & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                              >> 2U)) | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                         >> 1U))) ? 
                   (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
                    << 2U) : (((0x342U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                               & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                  >> 2U)) ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mcause
                               : 0U))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h5a345cf6__0 
        = ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_valid)) 
           & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_hf3b640d6__0 
        = ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_valid)) 
           & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h03cab0f1__0 
        = (IData)((0U == (0x42000000U & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7b49f5a3__0 
        = (IData)((0x40000000U == (0x42000000U & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal 
        = ((~ (IData)(vlSelf->rst)) & (0x6cU == (0x7cU 
                                                 & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui 
        = ((~ (IData)(vlSelf->rst)) & (0x34U == (0x7cU 
                                                 & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc 
        = ((~ (IData)(vlSelf->rst)) & (0x14U == (0x7cU 
                                                 & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h72104a67__0 
        = (1U & (~ ((IData)(vlSelf->rst) | (0U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_data 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re)
            ? ((IData)(vlSelf->rst) ? 0U : ((8U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                             ? ((4U 
                                                 & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl))
                                                 ? 
                                                ((2U 
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
                                                 : 
                                                ((2U 
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
                                             : 0U))
            : 0U);
    vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward 
        = (((- (IData)((1U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl)))) 
            & vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res) 
           | ((- (IData)((2U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl)))) 
              & vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data));
    if (vlSelf->rst) {
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_data = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl) 
                      >> 3U)))) {
            vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_data 
                = ((1U == (7U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))
                    ? ((vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                        << 0x18U) | ((0xff0000U & (vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                                                   << 0x10U)) 
                                     | ((0xff00U & 
                                         (vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                                          << 8U)) | 
                                        (0xffU & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data))))
                    : ((2U == (7U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))
                        ? ((vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                            << 0x10U) | (0xffffU & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data))
                        : ((4U == (7U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))
                            ? vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data
                            : 0U)));
        }
        if ((0x2aU != (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
            if ((1U & (~ ((0xa8U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                          | (0x94U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                if ((1U & (~ ((0x25U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                              | (0xc8U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                    if ((1U & (~ ((0x4aU == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                  | (0xa4U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena 
                            = (0x54U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc));
                    }
                }
            }
            if (((0xa8U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                 | (0x94U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))) {
                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena = 1U;
                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena 
                    = (0U != (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr));
            } else if (((0x25U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                        | (0xc8U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))) {
                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena 
                    = (0U != (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr));
                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena = 1U;
            } else if (((0x4aU == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                        | (0xa4U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))) {
                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena 
                    = (0U != (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr));
                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena = 1U;
            } else if ((0x54U != (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena = 0U;
                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena = 0U;
            }
        }
        if ((0x2aU == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
            vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena = 1U;
        } else if ((1U & (~ ((0xa8U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                             | (0x94U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
            if ((1U & (~ ((0x25U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                          | (0xc8U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                if ((1U & (~ ((0x4aU == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                              | (0xa4U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                    if ((0x54U != (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
                        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena = 0U;
                    }
                }
            }
        }
    }
    Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read_TOP(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ifu__DOT__pc, vlSelf->__Vtask_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__1__rdata, 4U, 1U);
    vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
        = vlSelf->__Vtask_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__1__rdata;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
        = (((- (IData)((1U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel)))) 
            & vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1) 
           | ((- (IData)((2U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel)))) 
              & vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
        = (((- (IData)((1U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel)))) 
            & vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2) 
           | ((4U & (- (IData)((2U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel))))) 
              | ((- (IData)((4U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel)))) 
                 & vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70f4116c__0 
        = ((~ (IData)(vlSelf->rst)) & (0x18U == (0x7cU 
                                                 & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr 
        = ((~ (IData)(vlSelf->rst)) & (0x64U == (0x7cU 
                                                 & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag 
        = ((~ (IData)(vlSelf->rst)) & (IData)((3U == 
                                               (0x7fU 
                                                & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0 
        = ((~ (IData)(vlSelf->rst)) & (0x10U == (0x7cU 
                                                 & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7773c72a__0 
        = ((~ (IData)(vlSelf->rst)) & (0x38U == (0x7cU 
                                                 & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77eb01fa__0 
        = ((~ (IData)(vlSelf->rst)) & (0x20U == (0x7cU 
                                                 & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__branch 
        = ((~ (IData)(vlSelf->rst)) & (0x60U == (0x7cU 
                                                 & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77488b95__0 
        = ((~ (IData)(vlSelf->rst)) & (0x30U == (0x7cU 
                                                 & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0 
        = ((~ (IData)(vlSelf->rst)) & (0x70U == (0x7cU 
                                                 & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr) 
           | (0U != (3U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data 
        = (((- (IData)((1U & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                              >> 6U)))) & vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data) 
           | (((- (IData)((1U & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                 >> 5U)))) & (vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data 
                                              | vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__read_csr_data)) 
              | (((- (IData)((1U & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                    >> 4U)))) & ((~ vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data) 
                                                 & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__read_csr_data)) 
                 | ((- (IData)((1U & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                      >> 1U)))) & vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_pc))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd9b03bc2__0 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui) 
           | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc));
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_re 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h72104a67__0) 
           & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl) 
              >> 3U));
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_rd_data_forward 
        = (((- (IData)((1U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl)))) 
            & vlSelf->ysyx_25060170_fishtailcore__DOT__mem_data) 
           | ((- (IData)((2U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl)))) 
              & vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_he71b3f47__0 
        = (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena) 
            << 3U) | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena) 
                       << 2U) | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena) 
                                  << 1U) | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal 
        = ((~ (IData)(vlSelf->rst)) & (IData)((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_bxx 
        = ((~ (IData)(vlSelf->rst)) & (0x60U == (0x7cU 
                                                 & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr 
        = ((~ (IData)(vlSelf->rst)) & (IData)((0x67U 
                                               == (0x7fU 
                                                   & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2 
        = (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
           + vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2 
        = (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
           - vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hdbadd230__0 
        = (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
           < vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2 
        = VL_SHIFTRS_III(32,32,5, vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1, 
                         (0x1fU & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hc5cf7009__0 
        = (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
           ^ vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hc5ccd4d6__0 
        = (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
           | vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hc5be2994__0 
        = (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
           & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h52af767a__0 
        = (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
           << (0x1fU & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h52a30ec4__0 
        = (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
           >> (0x1fU & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div 
        = VL_DIVS_III(32, vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1, vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__rem 
        = VL_MODDIVS_III(32, vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1, vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1), 
                      VL_EXTENDS_QI(64,32, vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_heac6e652__0 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
           & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0xeU));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h177d4809__0 
        = ((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0xeU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h91eba5f9__0 
        = ((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0xeU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h712d9166__0 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0) 
           & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0xeU));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h893e271f__0 
        = ((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0xeU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77eb01fa__0));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7855af38__0 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__branch) 
           & (IData)((0U == (0x6000U & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hebf21d33__0 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__branch) 
           & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0xeU));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h8893bd80__0 
        = ((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0xeU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77488b95__0));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h100d9d21__0 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77488b95__0) 
           & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0xeU));
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7773c72a__0) 
           | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77488b95__0) 
              | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__branch) 
                 | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77eb01fa__0))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_wbctl 
        = ((2U & ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0))) 
                  | ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7773c72a__0))) 
                     | ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70f4116c__0))) 
                        | ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0))) 
                           | (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77488b95__0)))))))) 
           | ((1U & (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag)))) 
              | (2U & ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui))) 
                       | ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc))) 
                          | ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                             | (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr)))))))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hed177170__0 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
           & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0xeU));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h88fffb3a__0 
        = ((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0xeU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0));
    if ((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))) {
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mpp_set = 3U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mpie_set 
            = (1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie));
    } else {
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mpp_set 
            = ((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                ? 0U : (3U & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                               ? (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data 
                                  >> 0xdU) : (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp))));
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mpie_set 
            = (1U & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                     | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                         ? (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data 
                            >> 7U) : (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie))));
    }
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mie_set 
        = (1U & ((~ ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                     >> 1U)) & ((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                 ? (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)
                                 : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                     ? (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data 
                                        >> 3U) : (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm 
        = (((- (IData)(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                        | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0) 
                           | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70f4116c__0) 
                              | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
                                 | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr))))))) 
            & (((- (IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                            >> 0x1fU))) << 0xcU) | 
               (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                >> 0x14U))) | ((0xfffff000U & ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd9b03bc2__0))) 
                                               & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)) 
                               | (((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                                   & (((- (IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                   >> 0x1fU))) 
                                       << 0x15U) | 
                                      ((0x100000U & 
                                        (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                         >> 0xbU)) 
                                       | ((0xff000U 
                                           & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst) 
                                          | ((0x800U 
                                              & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                 >> 9U)) 
                                             | (0x7feU 
                                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                   >> 0x14U))))))) 
                                  | (((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77eb01fa__0))) 
                                      & (((- (IData)(
                                                     (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | ((0xfe0U 
                                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                  >> 7U))))) 
                                     | ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__branch))) 
                                        & (((- (IData)(
                                                       (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                        >> 0x1fU))) 
                                            << 0xdU) 
                                           | ((0x1000U 
                                               & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                  >> 0x13U)) 
                                              | ((0x800U 
                                                  & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                          >> 7U)))))))))));
    if (vlSelf->rst) {
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl) 
                         >> 3U)))) {
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen 
            = ((1U == (7U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))
                ? (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask)
                : ((2U == (7U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))
                    ? ((IData)(vlSelf->rst) ? 0U : 
                       ((0U == (3U & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                         ? 3U : ((2U == (3U & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                  ? 0xcU : 0U))) : 
                   ((4U == (7U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))
                     ? 0xfU : 0U)));
    }
    if (vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_re) {
        Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read_TOP(
                                                                                ((IData)(vlSelf->rst)
                                                                                 ? 0U
                                                                                 : vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res), vlSelf->__Vtask_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__0__rdata, 4U, 2U);
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__mem_data 
            = vlSelf->__Vtask_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__0__rdata;
    } else {
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__mem_data = 0U;
    }
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res 
        = ((IData)(vlSelf->rst) ? 0U : ((0x80U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                         ? ((0x40U 
                                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                             ? ((0x20U 
                                                 & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                 ? 0U
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                  ? 0U
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hc5cf7009__0))))))
                                             : ((0x20U 
                                                 & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                 ? 
                                                ((0x10U 
                                                  & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : (IData)(
                                                                (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul 
                                                                 >> 0x20U))))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2)))))
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div)))
                                                   : 0U)
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__rem)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                      + vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 
                                                     (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                      + vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm)
                                                      : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h52a30ec4__0)))))))
                                         : ((0x40U 
                                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                             ? ((0x20U 
                                                 & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                 ? 
                                                ((0x10U 
                                                  & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                  ? 0U
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                      + vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hdbadd230__0)))))
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__rem
                                                      : 
                                                     ((IData)(4U) 
                                                      + vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 
                                                     (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                      + vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm)
                                                      : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h52af767a__0))))))
                                             : ((0x20U 
                                                 & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                 ? 
                                                ((0x10U 
                                                  & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                      + vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     (1U 
                                                      & (((~ 
                                                           (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                            >> 0x1fU)) 
                                                          & (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                             >> 0x1fU)) 
                                                         | (((~ 
                                                              (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                               >> 0x1fU)) 
                                                             & ((~ 
                                                                 (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                                  >> 0x1fU)) 
                                                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2 
                                                                   >> 0x1fU))) 
                                                            | ((vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                                   & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2)) 
                                                               >> 0x1fU))))))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hc5be2994__0)))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div
                                                      : 0U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 
                                                     ((IData)(4U) 
                                                      + vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc)
                                                      : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hc5be2994__0)))))
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                      + vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h52af767a__0)))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                      + vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hc5ccd4d6__0))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hc5ccd4d6__0))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 
                                                     (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                      + vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm)
                                                      : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hc5cf7009__0)))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h52a30ec4__0
                                                      : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hdbadd230__0))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2
                                                      : 
                                                     (1U 
                                                      & (((~ 
                                                           (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                            >> 0x1fU)) 
                                                          & (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                             >> 0x1fU)) 
                                                         | (((~ 
                                                              (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                               >> 0x1fU)) 
                                                             & ((~ 
                                                                 (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                                  >> 0x1fU)) 
                                                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2 
                                                                   >> 0x1fU))) 
                                                            | ((vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                                   & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2)) 
                                                               >> 0x1fU)))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2
                                                      : 0U)))))))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h53258981__0 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__data_ok) 
           & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_re) 
              | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h72104a67__0) 
                 & (~ ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl) 
                       >> 3U)))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bxx_taken 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_bxx) 
           & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state) 
              | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr)
            ? (0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                        >> 0xfU)) : 0U);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h29152e89__0 
        = ((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0xdU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_heac6e652__0));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc65f4c50__0 
        = ((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0xdU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h177d4809__0));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h1167153d__0 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h177d4809__0) 
           & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0xdU));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h41ceee20__0 
        = ((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0xdU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h91eba5f9__0));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc1b77381__0 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h91eba5f9__0) 
           & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0xdU));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5a06bcf6__0 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h712d9166__0) 
           & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0xdU));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_ha08c85bd__0 
        = ((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0xdU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h712d9166__0));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h489c6f46__0 
        = ((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0xdU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h893e271f__0));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he80da865__0 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h893e271f__0) 
           & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0xdU));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2bc0716a__0 
        = ((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0xdU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hebf21d33__0));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h6fd23990__0 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hebf21d33__0) 
           & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0xdU));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5766d1a7__0 
        = ((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0xdU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h8893bd80__0));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2696076e__0 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h8893bd80__0) 
           & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0xdU));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hcfecf178__0 
        = ((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0xdU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h100d9d21__0));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hfbecd367__0 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h100d9d21__0) 
           & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0xdU));
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena)
            ? (0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                        >> 0x14U)) : 0U);
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rd_ena 
        = ((0U != (0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                            >> 7U))) & (0U != (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_wbctl)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hed177170__0) 
           & (IData)((0x1000U == (0x3000U & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hbd811272__0 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hed177170__0) 
           & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0xdU));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h48d21361__0 
        = ((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0xdU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h88fffb3a__0));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5f1400db__0 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h88fffb3a__0) 
           & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0xdU));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h71cc746e__0 
        = (vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm 
           + vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_valid 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_valid) 
           | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h53258981__0));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgTmp_hff229178__0 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr) 
           & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
              == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr)));
    vlSelf->__VdfgTmp_h46471f4e__0 = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr) 
                                      & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                                         == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res 
        = (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res 
           | (((- (IData)((0U != (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_he71b3f47__0)))) 
               & vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1) 
              | ((- (IData)(((0x94U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                             | ((0xc8U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                | (0xa4U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) 
                 & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2e86cea5__0 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_ha08c85bd__0) 
           & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0xcU));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0 
        = ((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5766d1a7__0));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h36e9ef3c__0 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5766d1a7__0) 
           & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0xcU));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he2955f6b__0 
        = ((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2696076e__0));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h4c825e07__0 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2696076e__0) 
           & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0xcU));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h3b427111__0 
        = ((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hcfecf178__0));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hcfecf178__0) 
           & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0xcU));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd7439362__0 
        = ((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hfbecd367__0));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7a82fdcc__0 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hfbecd367__0) 
           & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0xcU));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_hd71610cc__0 
        = (1U & ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena)) 
                 | (0U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hbd811272__0) 
           & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0xcU));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi 
        = ((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hbd811272__0));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h48d21361__0) 
           & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0xcU));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h84595378__0 
        = ((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h48d21361__0));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs 
        = ((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5f1400db__0));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5f1400db__0) 
           & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0xcU));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_ha77af658__0 
        = ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_valid)) 
           & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h5ab066c6__0 
        = ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_valid)) 
           & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_csr_ena));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc 
        = (((IData)(vlSelf->__VdfgTmp_h46471f4e__0)
             ? vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
             : (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr) 
                 & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                    == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))
                 ? vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res
                 : ((IData)(vlSelf->__VdfgTmp_h46471f4e__0)
                     ? vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
                     : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgTmp_hff229178__0)
                         ? vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward
                         : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr)
                             ? (((~ (IData)(vlSelf->rst)) 
                                 & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr))
                                 ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                [vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr]
                                 : 0U) : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ifu__DOT__pc))))) 
           + ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal)
               ? (((- (IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                               >> 0x1fU))) << 0x15U) 
                  | ((0x100000U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                   >> 0xbU)) | ((0xff000U 
                                                 & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                         >> 0x14U))))))
               : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr)
                   ? (((- (IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                   >> 0x1fU))) << 0xcU) 
                      | (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                         >> 0x14U)) : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_bxx)
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
                                        : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgTmp_hff229178__0)
                                            ? 0U : 4U)))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op2_forward 
        = ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_hd71610cc__0)) 
           & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr) 
              == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward 
        = ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_hd71610cc__0)) 
           & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr) 
              == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward 
        = ((~ ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag) 
               | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_hd71610cc__0))) 
           & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr) 
              == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward 
        = ((~ ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag) 
               | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_hd71610cc__0))) 
           & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr) 
              == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h84595378__0) 
           & (0U == (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                     >> 0x14U)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_ha434cdb1__0 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc) 
           | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi));
    vlSelf->ysyx_25060170_fishtailcore__DOT__bp_if_pc 
        = ((0x80000000U & (- (IData)((IData)(vlSelf->rst)))) 
           | (((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal))) 
               & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc) 
              | ((0xfffffffeU & ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr))) 
                                 & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc)) 
                 | (((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bxx_taken))) 
                     & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc) 
                    | ((- (IData)(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_bxx) 
                                   & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_not_taken_state) 
                                      | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_not_taken_state))))) 
                       & ((IData)(4U) + vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ifu__DOT__pc))))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op2_forward_ena 
        = (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward) 
            | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward) 
               | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op2_forward) 
                  | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward)))) 
           & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena));
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7773c72a__0) 
           | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70f4116c__0) 
              | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0) 
                 | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77488b95__0) 
                    | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__branch) 
                       | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                          | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77eb01fa__0) 
                             | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr) 
                                | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw) 
                                   | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs) 
                                      | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc) 
                                         | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall))))))))))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc 
        = ((((~ (IData)(vlSelf->rst)) << 7U) & ((((~ 
                                                   (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                    >> 0x1eU)) 
                                                  & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2e86cea5__0)) 
                                                 << 7U) 
                                                | ((((~ 
                                                      (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                       >> 0x19U)) 
                                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h3b427111__0)) 
                                                    << 7U) 
                                                   | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc) 
                                                       << 7U) 
                                                      | ((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h84595378__0) 
                                                           & (1U 
                                                              == 
                                                              (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                               >> 0x14U))) 
                                                          << 7U) 
                                                         | ((0x7ffff80U 
                                                             & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h489c6f46__0) 
                                                                 << 7U) 
                                                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                   >> 5U))) 
                                                            | ((((~ 
                                                                  (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                   >> 0xcU)) 
                                                                 & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he80da865__0)) 
                                                                << 7U) 
                                                               | ((((~ 
                                                                     (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                      >> 0xcU)) 
                                                                    & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h6fd23990__0)) 
                                                                   << 7U) 
                                                                  | ((0x7ffff80U 
                                                                      & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h1167153d__0) 
                                                                          << 7U) 
                                                                         & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                            >> 5U))) 
                                                                     | ((0x3f80U 
                                                                         & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h36e9ef3c__0) 
                                                                             << 7U) 
                                                                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                               >> 0x12U))) 
                                                                        | ((0x3f80U 
                                                                            & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h3b427111__0) 
                                                                                << 7U) 
                                                                               & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                                >> 0x12U))) 
                                                                           | ((0x3f80U 
                                                                               & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7a82fdcc__0) 
                                                                                << 7U) 
                                                                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                                >> 0x12U))) 
                                                                              | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw) 
                                                                                | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi) 
                                                                                | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi) 
                                                                                | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci)))) 
                                                                                << 7U))))))))))))) 
           | ((0x40U & (((~ (IData)(vlSelf->rst)) << 6U) 
                        & ((0x3ffffc0U & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h41ceee20__0) 
                                           << 6U) & 
                                          (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                           >> 6U))) 
                           | ((((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                    >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h4c825e07__0)) 
                               << 6U) | ((((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                               >> 0x19U)) 
                                           & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h3b427111__0)) 
                                          << 6U) | 
                                         (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui) 
                                           << 6U) | 
                                          (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr) 
                                            << 6U) 
                                           | ((((~ 
                                                 (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                  >> 0xcU)) 
                                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h489c6f46__0)) 
                                               << 6U) 
                                              | ((0x3ffffc0U 
                                                  & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2bc0716a__0) 
                                                      << 6U) 
                                                     & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                        >> 6U))) 
                                                 | ((((~ 
                                                       (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                        >> 0xcU)) 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h6fd23990__0)) 
                                                     << 6U) 
                                                    | ((((~ 
                                                          (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                           >> 0xcU)) 
                                                         & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h1167153d__0)) 
                                                        << 6U) 
                                                       | ((0x3ffffc0U 
                                                           & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h1167153d__0) 
                                                               << 6U) 
                                                              & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                 >> 6U))) 
                                                          | ((0x1fc0U 
                                                              & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                                                                  << 6U) 
                                                                 & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                    >> 0x13U))) 
                                                             | ((0x1fc0U 
                                                                 & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd7439362__0) 
                                                                     << 6U) 
                                                                    & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                       >> 0x13U))) 
                                                                | ((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h84595378__0) 
                                                                     & (IData)(
                                                                               (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)))) 
                                                                    | vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_ha434cdb1__0) 
                                                                   << 6U))))))))))))))) 
              | ((((~ (IData)(vlSelf->rst)) << 5U) 
                  & ((0x1ffffe0U & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5a06bcf6__0) 
                                     << 5U) & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                               >> 7U))) 
                     | ((((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                              >> 0x19U)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he2955f6b__0)) 
                         << 5U) | ((((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                         >> 0x19U)) 
                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h4c825e07__0)) 
                                    << 5U) | ((((~ 
                                                 (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                  >> 0x19U)) 
                                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7a82fdcc__0)) 
                                               << 5U) 
                                              | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal) 
                                                     << 5U) 
                                                    | ((((~ 
                                                          (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                           >> 0xcU)) 
                                                         & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2bc0716a__0)) 
                                                        << 5U) 
                                                       | ((0x1ffffe0U 
                                                           & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2bc0716a__0) 
                                                               << 5U) 
                                                              & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                 >> 7U))) 
                                                          | ((((~ 
                                                                (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                 >> 0xcU)) 
                                                               & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h6fd23990__0)) 
                                                              << 5U) 
                                                             | ((0x1ffffe0U 
                                                                 & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc65f4c50__0) 
                                                                     << 5U) 
                                                                    & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                       >> 7U))) 
                                                                | ((((~ 
                                                                      (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                       >> 0xcU)) 
                                                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h1167153d__0)) 
                                                                    << 5U) 
                                                                   | ((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_heac6e652__0) 
                                                                        & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)))) 
                                                                       << 5U) 
                                                                      | ((0xfe0U 
                                                                          & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h36e9ef3c__0) 
                                                                              << 5U) 
                                                                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                                >> 0x14U))) 
                                                                         | ((0xfe0U 
                                                                             & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h4c825e07__0) 
                                                                                << 5U) 
                                                                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                                >> 0x14U))) 
                                                                            | ((0xfe0U 
                                                                                & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                                                                                << 5U) 
                                                                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                                >> 0x14U))) 
                                                                               | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall) 
                                                                                | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw) 
                                                                                | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs) 
                                                                                | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci)))) 
                                                                                << 5U))))))))))))))))) 
                 | ((((~ (IData)(vlSelf->rst)) << 4U) 
                     & ((((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                              >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5a06bcf6__0)) 
                         << 4U) | ((((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                         >> 0x19U)) 
                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h36e9ef3c__0)) 
                                    << 4U) | ((((~ 
                                                 (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                  >> 0x19U)) 
                                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he2955f6b__0)) 
                                               << 4U) 
                                              | ((((~ 
                                                    (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                     >> 0x19U)) 
                                                   & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd7439362__0)) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui) 
                                                     << 4U) 
                                                    | ((0xfffff0U 
                                                        & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7855af38__0) 
                                                            << 4U) 
                                                           & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                              >> 8U))) 
                                                       | ((((~ 
                                                             (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                              >> 0xcU)) 
                                                            & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2bc0716a__0)) 
                                                           << 4U) 
                                                          | ((0xfffff0U 
                                                              & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2bc0716a__0) 
                                                                  << 4U) 
                                                                 & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                    >> 8U))) 
                                                             | ((((~ 
                                                                   (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                    >> 0xcU)) 
                                                                  & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc65f4c50__0)) 
                                                                 << 4U) 
                                                                | ((0xfffff0U 
                                                                    & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc65f4c50__0) 
                                                                        << 4U) 
                                                                       & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                          >> 8U))) 
                                                                   | ((0xfffff0U 
                                                                       & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h1167153d__0) 
                                                                           << 4U) 
                                                                          & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                             >> 8U))) 
                                                                      | ((0xfffff0U 
                                                                          & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h29152e89__0) 
                                                                              << 4U) 
                                                                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                                >> 8U))) 
                                                                         | ((0x7f0U 
                                                                             & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                                                                                << 4U) 
                                                                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                                >> 0x15U))) 
                                                                            | ((0x7f0U 
                                                                                & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h36e9ef3c__0) 
                                                                                << 4U) 
                                                                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                                >> 0x15U))) 
                                                                               | ((0x7f0U 
                                                                                & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h4c825e07__0) 
                                                                                << 4U) 
                                                                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                                >> 0x15U))) 
                                                                                | ((0x7f0U 
                                                                                & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h3b427111__0) 
                                                                                << 4U) 
                                                                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                                >> 0x15U))) 
                                                                                | ((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h84595378__0) 
                                                                                & (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)))) 
                                                                                | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi)) 
                                                                                << 4U)))))))))))))))))) 
                    | ((8U & (((~ (IData)(vlSelf->rst)) 
                               << 3U) & ((((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                               >> 0xcU)) 
                                           & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_ha08c85bd__0)) 
                                          << 3U) | 
                                         ((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                                            & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7b49f5a3__0)) 
                                           << 3U) | 
                                          ((((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                 >> 0x19U)) 
                                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h36e9ef3c__0)) 
                                            << 3U) 
                                           | ((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7b49f5a3__0)) 
                                               << 3U) 
                                              | ((((~ 
                                                    (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                     >> 0x19U)) 
                                                   & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7a82fdcc__0)) 
                                                  << 3U) 
                                                 | ((((~ 
                                                       (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                        >> 0xcU)) 
                                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7855af38__0)) 
                                                     << 3U) 
                                                    | ((0x7ffff8U 
                                                        & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7855af38__0) 
                                                            << 3U) 
                                                           & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                              >> 9U))) 
                                                       | ((((~ 
                                                             (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                              >> 0xcU)) 
                                                            & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2bc0716a__0)) 
                                                           << 3U) 
                                                          | ((0x7ffff8U 
                                                              & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h6fd23990__0) 
                                                                  << 3U) 
                                                                 & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                    >> 9U))) 
                                                             | ((((~ 
                                                                   (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                    >> 0xcU)) 
                                                                  & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc65f4c50__0)) 
                                                                 << 3U) 
                                                                | ((((~ 
                                                                      (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                       >> 0xcU)) 
                                                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h1167153d__0)) 
                                                                    << 3U) 
                                                                   | ((((~ 
                                                                         (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                          >> 0xcU)) 
                                                                        & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h29152e89__0)) 
                                                                       << 3U) 
                                                                      | ((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_heac6e652__0) 
                                                                           & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)))) 
                                                                          << 3U) 
                                                                         | ((0x3f8U 
                                                                             & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                                                                                << 3U) 
                                                                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                                >> 0x16U))) 
                                                                            | ((0x3f8U 
                                                                                & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h3b427111__0) 
                                                                                << 3U) 
                                                                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                                >> 0x16U))) 
                                                                               | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall) 
                                                                                | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw) 
                                                                                | vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_ha434cdb1__0)) 
                                                                                << 3U)))))))))))))))))) 
                       | ((((~ (IData)(vlSelf->rst)) 
                            << 2U) & ((0x3ffffcU & 
                                       (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc1b77381__0) 
                                         << 2U) & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                   >> 0xaU))) 
                                      | ((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                                           & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h03cab0f1__0)) 
                                          << 2U) | 
                                         ((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                                            & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7b49f5a3__0)) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h03cab0f1__0)) 
                                            << 2U) 
                                           | ((((~ 
                                                 (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                  >> 0x19U)) 
                                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd7439362__0)) 
                                               << 2U) 
                                              | ((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h84595378__0) 
                                                   & (1U 
                                                      == 
                                                      (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                       >> 0x14U))) 
                                                  << 2U) 
                                                 | ((0x3ffffcU 
                                                     & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he80da865__0) 
                                                         << 2U) 
                                                        & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                           >> 0xaU))) 
                                                    | ((((~ 
                                                          (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                           >> 0xcU)) 
                                                         & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7855af38__0)) 
                                                        << 2U) 
                                                       | ((0x3ffffcU 
                                                           & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7855af38__0) 
                                                               << 2U) 
                                                              & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                 >> 0xaU))) 
                                                          | ((0x3ffffcU 
                                                              & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h6fd23990__0) 
                                                                  << 2U) 
                                                                 & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                    >> 0xaU))) 
                                                             | ((0x3ffffcU 
                                                                 & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc65f4c50__0) 
                                                                     << 2U) 
                                                                    & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                       >> 0xaU))) 
                                                                | ((0x3ffffcU 
                                                                    & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h29152e89__0) 
                                                                        << 2U) 
                                                                       & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                          >> 0xaU))) 
                                                                   | ((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_heac6e652__0) 
                                                                        & (IData)(
                                                                                (0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)))) 
                                                                       << 2U) 
                                                                      | ((0x1fcU 
                                                                          & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h4c825e07__0) 
                                                                              << 2U) 
                                                                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                                >> 0x17U))) 
                                                                         | ((0x1fcU 
                                                                             & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7a82fdcc__0) 
                                                                                << 2U) 
                                                                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                                >> 0x17U))) 
                                                                            | ((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h84595378__0) 
                                                                                & (IData)(
                                                                                (0x30000000U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)))) 
                                                                                | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs) 
                                                                                | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi) 
                                                                                | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci)))) 
                                                                               << 2U))))))))))))))))) 
                          | ((((~ (IData)(vlSelf->rst)) 
                               << 1U) & ((((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                               >> 0xcU)) 
                                           & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc1b77381__0)) 
                                          << 1U) | 
                                         ((6U & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2e86cea5__0) 
                                                  << 1U) 
                                                 & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                    >> 0x1dU))) 
                                          | ((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0) 
                                               & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h03cab0f1__0)) 
                                              << 1U) 
                                             | ((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                                                  & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7b49f5a3__0)) 
                                                 << 1U) 
                                                | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr) 
                                                    << 1U) 
                                                   | ((0x1ffffeU 
                                                       & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h489c6f46__0) 
                                                           << 1U) 
                                                          & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                             >> 0xbU))) 
                                                      | ((0x1ffffeU 
                                                          & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he80da865__0) 
                                                              << 1U) 
                                                             & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                >> 0xbU))) 
                                                         | ((((~ 
                                                               (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                >> 0xcU)) 
                                                              & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7855af38__0)) 
                                                             << 1U) 
                                                            | ((((~ 
                                                                  (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                   >> 0xcU)) 
                                                                 & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc65f4c50__0)) 
                                                                << 1U) 
                                                               | ((((~ 
                                                                     (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                      >> 0xcU)) 
                                                                    & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h29152e89__0)) 
                                                                   << 1U) 
                                                                  | ((0x1ffffeU 
                                                                      & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h29152e89__0) 
                                                                          << 1U) 
                                                                         & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                            >> 0xbU))) 
                                                                     | ((0xfeU 
                                                                         & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he2955f6b__0) 
                                                                             << 1U) 
                                                                            & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                               >> 0x18U))) 
                                                                        | ((0xfeU 
                                                                            & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h4c825e07__0) 
                                                                                << 1U) 
                                                                               & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                                >> 0x18U))) 
                                                                           | ((0xfeU 
                                                                               & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                                                                                << 1U) 
                                                                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                                >> 0x18U))) 
                                                                              | ((0xfeU 
                                                                                & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd7439362__0) 
                                                                                << 1U) 
                                                                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                                >> 0x18U))) 
                                                                                | ((0xfeU 
                                                                                & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7a82fdcc__0) 
                                                                                << 1U) 
                                                                                & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                                >> 0x18U))) 
                                                                                | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall) 
                                                                                | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc)) 
                                                                                << 1U)))))))))))))))))) 
                             | ((~ (IData)(vlSelf->rst)) 
                                & (((~ (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                        >> 0xcU)) & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h41ceee20__0)) 
                                   | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2e86cea5__0) 
                                       & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                          >> 0x1eU)) 
                                      | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                                          & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h03cab0f1__0)) 
                                         | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal) 
                                            | (((~ 
                                                 (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                  >> 0xcU)) 
                                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h489c6f46__0)) 
                                               | (((~ 
                                                    (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                     >> 0xcU)) 
                                                   & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he80da865__0)) 
                                                  | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he80da865__0) 
                                                      & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                         >> 0xcU)) 
                                                     | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h6fd23990__0) 
                                                         & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                            >> 0xcU)) 
                                                        | (((~ 
                                                             (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                              >> 0xcU)) 
                                                            & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h29152e89__0)) 
                                                           | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he2955f6b__0) 
                                                               & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                  >> 0x19U)) 
                                                              | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0) 
                                                                  & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                     >> 0x19U)) 
                                                                 | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd7439362__0) 
                                                                     & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                                        >> 0x19U)) 
                                                                    | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs)))))))))))))))))))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op2 
        = (((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op2_forward_ena))) 
            & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward)
                ? vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res
                : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward)
                    ? vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
                    : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op2_forward)
                        ? vlSelf->ysyx_25060170_fishtailcore__DOT__mem_rd_data_forward
                        : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward)
                            ? vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward
                            : 0U))))) | ((- (IData)(
                                                    ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op2_forward_ena)) 
                                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena)))) 
                                         & (((~ (IData)(vlSelf->rst)) 
                                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena))
                                             ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                            [vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr]
                                             : 0U)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena)
            ? (0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                        >> 0xfU)) : 0U);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h068a7135__0 
        = (1U & ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena)) 
                 | (0U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op1_forward 
        = ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h068a7135__0)) 
           & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr) 
              == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward 
        = ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h068a7135__0)) 
           & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr) 
              == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward 
        = ((~ ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag) 
               | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h068a7135__0))) 
           & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr) 
              == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward 
        = ((~ ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag) 
               | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h068a7135__0))) 
           & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr) 
              == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_stall 
        = ((~ (IData)(vlSelf->rst)) & (((~ ((IData)(vlSelf->rst) 
                                            & (0U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)))) 
                                        & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena) 
                                            & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h5a345cf6__0) 
                                               & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr) 
                                                  == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))) 
                                           | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_ha77af658__0) 
                                              & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr) 
                                                 == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr))))) 
                                       | (((~ ((IData)(vlSelf->rst) 
                                               & (0U 
                                                  == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)))) 
                                           & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena) 
                                               & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h5a345cf6__0) 
                                                  & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr) 
                                                     == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))) 
                                              | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_ha77af658__0) 
                                                 & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr) 
                                                    == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr))))) 
                                          | ((((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward) 
                                               & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_hf3b640d6__0)) 
                                              | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward) 
                                                 & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h5ab066c6__0))) 
                                             | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward) 
                                                 & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_hf3b640d6__0)) 
                                                | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward) 
                                                   & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h5ab066c6__0)))))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_forward_ena 
        = (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward) 
            | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward) 
               | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op1_forward) 
                  | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward)))) 
           & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena));
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ready 
        = ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_stall)) 
           & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ready));
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_valid 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_valid) 
           | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_stall));
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1 
        = (((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_forward_ena))) 
            & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward)
                ? vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res
                : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward)
                    ? vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
                    : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op1_forward)
                        ? vlSelf->ysyx_25060170_fishtailcore__DOT__mem_rd_data_forward
                        : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward)
                            ? vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward
                            : 0U))))) | ((- (IData)(
                                                    ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_forward_ena)) 
                                                     & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena)))) 
                                         & (((~ (IData)(vlSelf->rst)) 
                                             & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena))
                                             ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                            [vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr]
                                             : 0U)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__if_valid 
        = (1U & ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ready)) 
                 | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_stall)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_id_ex_reg__DOT__stall 
        = (1U & ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ready)) 
                 | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_valid)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_hd158f2b5__0 
        = (vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1 
           + vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2 
        = (vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1 
           < vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op2);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__jalr_bpu_jump_error 
        = ((0x42U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
           & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc 
              != (0xfffffffeU & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_hd158f2b5__0)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2 
        = (1U & (((vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1 
                   ^ vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op2) 
                  >> 0x1fU) ? (vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1 
                               >> 0x1fU) : (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__now_bxx_jump_yes 
        = ((IData)(vlSelf->rst) | (((0xeU == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                                    & (vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1 
                                       == vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op2)) 
                                   | (((0x1cU == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                                       & (vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1 
                                          != vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op2)) 
                                      | (((0xe0U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                                          & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2)) 
                                         | (((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2)) 
                                             & (0xdU 
                                                == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))) 
                                            | (((0x38U 
                                                 == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2)) 
                                               | ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2)) 
                                                  & (0x70U 
                                                     == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc)))))))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__predict_error_ctl 
        = (3U & ((2U & (- (IData)(((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_bp_jump)) 
                                   & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__now_bxx_jump_yes))))) 
                 | (- (IData)(((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__now_bxx_jump_yes)) 
                               & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_bp_jump))))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if_id_reg__DOT__flush 
        = ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_stall)) 
           & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_bp_jump) 
               ^ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__now_bxx_jump_yes)) 
              | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__jalr_bpu_jump_error)));
}

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___eval_stl(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_25060170_fishtailcore___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___dump_triggers__ico(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___dump_triggers__act(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___dump_triggers__nba(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___ctor_var_reset(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__bp_if_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_stall = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__if_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst_bxx = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_bp_jump = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_csr_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rd_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc = VL_RAND_RESET_I(8);
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_wbctl = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc = VL_RAND_RESET_I(8);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel = VL_RAND_RESET_I(3);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl = VL_RAND_RESET_I(7);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen = VL_RAND_RESET_I(8);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_re = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl = VL_RAND_RESET_I(7);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl = VL_RAND_RESET_I(7);
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_valid_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_rd_data_forward = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_reg_load_flag = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_not_taken_state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_not_taken_state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_bxx = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bxx_taken = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgTmp_hff229178__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ifu__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if_id_reg__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op1_forward = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__mem_op2_forward = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_forward_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op2_forward_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__jalr_bpu_jump_error = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2 = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__now_bxx_jump_yes = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__predict_error_ctl = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h71cc746e__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_hd158f2b5__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h068a7135__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_hd71610cc__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h5a345cf6__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_ha77af658__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_hf3b640d6__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h5ab066c6__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7773c72a__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70f4116c__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77488b95__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77eb01fa__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd9b03bc2__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_ha434cdb1__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h489c6f46__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he80da865__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc65f4c50__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h1167153d__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h29152e89__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_heac6e652__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7855af38__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2bc0716a__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h6fd23990__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h03cab0f1__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7b49f5a3__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h36e9ef3c__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he2955f6b__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h4c825e07__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h3b427111__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd7439362__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7a82fdcc__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h41ceee20__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc1b77381__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_ha08c85bd__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5a06bcf6__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2e86cea5__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h84595378__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h48d21361__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5f1400db__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hed177170__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hbd811272__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h893e271f__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h177d4809__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hebf21d33__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h8893bd80__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5766d1a7__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2696076e__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h100d9d21__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hcfecf178__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hfbecd367__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h91eba5f9__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h712d9166__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h88fffb3a__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_id_ex_reg__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__rem = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hdbadd230__0 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hc5cf7009__0 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hc5ccd4d6__0 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hc5be2994__0 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h52af767a__0 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h52a30ec4__0 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_he71b3f47__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__data_ok = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h53258981__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h72104a67__0 = 0;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_mem__DOT__data_ok = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__read_csr_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mie_set = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mpie_set = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mpp_set = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mtvec_base = VL_RAND_RESET_I(30);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mcause = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__mem_data = VL_RAND_RESET_I(32);
    vlSelf->__VdfgTmp_h46471f4e__0 = 0;
    vlSelf->__Vtask_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__0__rdata = 0;
    vlSelf->__Vtask_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__1__rdata = 0;
    vlSelf->__Vtableidx2 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
