// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25060170_topcore.h for the primary calling header

#include "Vysyx_25060170_topcore__pch.h"
#include "Vysyx_25060170_topcore___024root.h"

void Vysyx_25060170_topcore___024root___ico_sequent__TOP__0(Vysyx_25060170_topcore___024root* vlSelf);

void Vysyx_25060170_topcore___024root___eval_ico(Vysyx_25060170_topcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root___eval_ico\n"); );
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vysyx_25060170_topcore___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

extern const VlUnpacked<CData/*3:0*/, 8> Vysyx_25060170_topcore__ConstPool__TABLE_hbbe98c18_0;
void Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata, CData/*7:0*/ rlen, IData/*31:0*/ mode, IData/*31:0*/ &dpic_difftest_skip_flag);
extern const VlUnpacked<CData/*1:0*/, 8> Vysyx_25060170_topcore__ConstPool__TABLE_h4afdbdff_0;

VL_INLINE_OPT void Vysyx_25060170_topcore___024root___ico_sequent__TOP__0(Vysyx_25060170_topcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root___ico_sequent__TOP__0\n"); );
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx3 = ((6U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res 
                                     << 1U)) | (IData)(vlSelfRef.rst));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask 
        = Vysyx_25060170_topcore__ConstPool__TABLE_hbbe98c18_0
        [vlSelfRef.__Vtableidx3];
    if (vlSelfRef.rst) {
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_data = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_raddr = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_wlen = 0U;
    } else {
        if ((0x2aU != (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
            if (((0xa8U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                 || (0x94U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))) {
                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena = 1U;
                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena = 1U;
                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena 
                    = (0U != (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr));
            } else {
                if ((1U & (~ ((0x25U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                              || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                    if ((1U & (~ ((0x4aU == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                  || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                        if ((0x54U != (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
                            vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena = 0U;
                        }
                    }
                }
                if (((0x25U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
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
                    if ((1U & (~ ((0x4aU == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                  || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena 
                            = (0x54U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc));
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl) 
                      >> 3U)))) {
            if ((1U == (7U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))) {
                vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_data 
                    = ((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                        << 0x18U) | ((0xff0000U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                                                   << 0x10U)) 
                                     | ((0xff00U & 
                                         (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                                          << 8U)) | 
                                        (0xffU & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data))));
                vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_wlen 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask;
            } else if ((2U == (7U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))) {
                vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_data 
                    = ((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                        << 0x10U) | (0xffffU & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data));
                vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_wlen 
                    = ((IData)(vlSelfRef.rst) ? 0U : 
                       ((0U == (3U & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                         ? 3U : ((2U == (3U & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                  ? 0xcU : 0U)));
            } else if ((4U == (7U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))) {
                vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_data 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data;
                vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_wlen = 0xfU;
            } else {
                vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_data = 0U;
                vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_wlen = 0U;
            }
        }
        vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_raddr 
            = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res;
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
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res 
            = ((0x80U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                ? ((0x40U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                    ? ((0x20U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                        ? 0U : ((0x10U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                 ? 0U : ((8U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                          ? ((4U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                              ? 0U : vlSelfRef.__VdfgRegularize_h495687df_0_8)
                                          : ((4U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                              ? 0U : 
                                             ((2U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                               ? 0U
                                               : vlSelfRef.__VdfgRegularize_h495687df_0_9)))))
                    : ((0x20U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                        ? ((0x10U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                            ? ((8U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                ? 0U : ((4U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                         ? 0U : ((2U 
                                                  & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 0U
                                                   : (IData)(
                                                             (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul 
                                                              >> 0x20U))))))
                            : ((8U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                ? ((4U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                    ? 0U : vlSelfRef.__VdfgRegularize_h495687df_0_11)
                                : ((4U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                    ? ((2U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                        ? 0U : vlSelfRef.__VdfgRegularize_h495687df_0_12)
                                    : vlSelfRef.__VdfgRegularize_h495687df_0_14)))
                        : ((0x10U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                            ? ((8U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                ? ((4U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                    ? 0U : ((2U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                              ? 0U : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div)))
                                : ((4U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                    ? vlSelfRef.__VdfgRegularize_h495687df_0_11
                                    : 0U)) : ((8U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                               ? 0U
                                               : ((4U 
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
                : ((0x40U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                    ? ((0x20U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                        ? ((0x10U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                            ? 0U : ((8U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                     ? ((4U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                         ? 0U : vlSelfRef.__VdfgRegularize_h495687df_0_17)
                                     : ((4U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                         ? 0U : ((2U 
                                                  & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 0U
                                                   : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h0fc673a9__0)))))
                        : ((0x10U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                            ? ((8U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                ? ((4U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                    ? 0U : ((2U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                              ? 0U : (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul))))
                                : ((4U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                    ? 0U : vlSelfRef.__VdfgRegularize_h495687df_0_14))
                            : ((8U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                ? ((4U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                    ? 0U : ((2U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                             ? vlSelfRef.__VdfgRegularize_h495687df_0_12
                                             : 0U))
                                : ((4U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                    ? 0U : ((2U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                 ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__rem
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc))
                                             : ((1U 
                                                 & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                 ? vlSelfRef.__VdfgRegularize_h495687df_0_15
                                                 : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h0e0c055b__0))))))
                    : ((0x20U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                        ? ((0x10U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                            ? ((8U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                ? 0U : ((4U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                         ? vlSelfRef.__VdfgRegularize_h495687df_0_17
                                         : ((2U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                              ? 0U : 
                                             (1U & 
                                              (((~ 
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
                            : ((8U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                ? ((4U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                    ? 0U : ((2U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                              ? 0U : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h252d97a0__0)))
                                : ((4U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                    ? ((2U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                        ? 0U : ((1U 
                                                 & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                 ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h273e5a99__0
                                                 : 0U))
                                    : ((2U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                        ? ((1U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                            ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div
                                            : 0U) : 
                                       ((1U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                         ? ((IData)(4U) 
                                            + vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc)
                                         : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h252d97a0__0)))))
                        : ((0x10U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                            ? ((8U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                ? ((4U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                    ? 0U : ((2U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                             ? vlSelfRef.__VdfgRegularize_h495687df_0_16
                                             : ((1U 
                                                 & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                 ? 0U
                                                 : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h0e0c055b__0)))
                                : ((4U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                    ? ((2U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                        ? vlSelfRef.__VdfgRegularize_h495687df_0_16
                                        : vlSelfRef.__VdfgRegularize_h495687df_0_7)
                                    : vlSelfRef.__VdfgRegularize_h495687df_0_8))
                            : ((8U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                ? ((4U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                    ? ((2U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                        ? 0U : ((1U 
                                                 & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                 ? 0U
                                                 : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2))
                                    : ((2U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                        ? ((1U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                            ? vlSelfRef.__VdfgRegularize_h495687df_0_15
                                            : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2)
                                        : vlSelfRef.__VdfgRegularize_h495687df_0_9))
                                : ((4U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                    ? ((2U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                        ? vlSelfRef.__VdfgRegularize_h495687df_0_13
                                        : ((1U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                            ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h0e145671__0
                                            : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h0fc673a9__0))
                                    : ((2U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                        ? ((1U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                            ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2
                                            : (1U & 
                                               (((~ 
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
                                        : ((1U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                            ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2
                                            : 0U))))))));
    }
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h0c034a45_0_1 
        = (1U & (~ ((IData)(vlSelfRef.rst) | (0U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal 
        = ((~ (IData)(vlSelfRef.rst)) & (0x6cU == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui 
        = ((~ (IData)(vlSelfRef.rst)) & (0x34U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc 
        = ((~ (IData)(vlSelfRef.rst)) & (0x14U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst)));
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
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__5__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x18U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr 
        = ((~ (IData)(vlSelfRef.rst)) & (0x64U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x10U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_load_flag 
        = ((~ (IData)(vlSelfRef.rst)) & (IData)((3U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst))));
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
    vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_we 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h0c034a45_0_1) 
           & (~ ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl) 
                 >> 3U)));
    vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_mem_re 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h0c034a45_0_1) 
           & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl) 
              >> 3U));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_28 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui) 
           | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_rd_data_forward 
        = (((- (IData)((1U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl)))) 
            & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_data) 
           | ((- (IData)((2U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl)))) 
              & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res));
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
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h0c034a45_0_0 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__data_ok) 
           & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_mem_re) 
              | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_we)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__exu_res 
        = (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res 
           | (((- (IData)((0U != (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgRegularize_h788ac90a_0_6)))) 
               & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1) 
              | ((- (IData)(((0x94U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                             | ((0xc8U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                | (0xa4U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) 
                 & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr))));
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

void Vysyx_25060170_topcore___024root___eval_triggers__ico(Vysyx_25060170_topcore___024root* vlSelf);

bool Vysyx_25060170_topcore___024root___eval_phase__ico(Vysyx_25060170_topcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root___eval_phase__ico\n"); );
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vysyx_25060170_topcore___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vysyx_25060170_topcore___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vysyx_25060170_topcore___024root___eval_act(Vysyx_25060170_topcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root___eval_act\n"); );
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vysyx_25060170_topcore___024root___nba_sequent__TOP__0(Vysyx_25060170_topcore___024root* vlSelf);

void Vysyx_25060170_topcore___024root___eval_nba(Vysyx_25060170_topcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root___eval_nba\n"); );
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vysyx_25060170_topcore___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

void Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pc_inst_end_TOP(IData/*31:0*/ thepc_data, IData/*31:0*/ the_inst, IData/*31:0*/ diff_skip_flag);
void Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__set_npc_exit_TOP(IData/*31:0*/ pc, IData/*31:0*/ halt_ret);
void Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__magic_instruction_TOP();
void Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wlen, IData/*31:0*/ &dpic_difftest_skip_flag);
void Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_csr_TOP(IData/*31:0*/ csr_mstatus, IData/*31:0*/ csr_mtvec, IData/*31:0*/ csr_mepc, IData/*31:0*/ csr_mcause, IData/*31:0*/ csr_mhartid, IData/*31:0*/ csr_mscratch);
void Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_regs_TOP(IData/*31:0*/ regs0, IData/*31:0*/ regs1, IData/*31:0*/ regs2, IData/*31:0*/ regs3, IData/*31:0*/ regs4, IData/*31:0*/ regs5, IData/*31:0*/ regs6, IData/*31:0*/ regs7, IData/*31:0*/ regs8, IData/*31:0*/ regs9, IData/*31:0*/ regs10, IData/*31:0*/ regs11, IData/*31:0*/ regs12, IData/*31:0*/ regs13, IData/*31:0*/ regs14, IData/*31:0*/ regs15, IData/*31:0*/ regs16, IData/*31:0*/ regs17, IData/*31:0*/ regs18, IData/*31:0*/ regs19, IData/*31:0*/ regs20, IData/*31:0*/ regs21, IData/*31:0*/ regs22, IData/*31:0*/ regs23, IData/*31:0*/ regs24, IData/*31:0*/ regs25, IData/*31:0*/ regs26, IData/*31:0*/ regs27, IData/*31:0*/ regs28, IData/*31:0*/ regs29, IData/*31:0*/ regs30, IData/*31:0*/ regs31);

VL_INLINE_OPT void Vysyx_25060170_topcore___024root___nba_sequent__TOP__0(Vysyx_25060170_topcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root___nba_sequent__TOP__0\n"); );
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_write__2__dpic_difftest_skip_flag;
    __Vtask_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_write__2__dpic_difftest_skip_flag = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_topcore__DOT__diff_test_skip_o;
    __Vdly__ysyx_25060170_topcore__DOT__diff_test_skip_o = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_topcore__DOT__dpic_diff_skip_flag_o;
    __Vdly__ysyx_25060170_topcore__DOT__dpic_diff_skip_flag_o = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_currentpc;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_currentpc = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_bpupredict;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_bpupredict = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_bpuvalid;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_bpuvalid = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_bpupredict;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_bpupredict = 0;
    CData/*7:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm = 0;
    CData/*4:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr = 0;
    CData/*4:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena = 0;
    CData/*2:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel = 0;
    CData/*1:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2 = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1 = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst = 0;
    CData/*3:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl = 0;
    CData/*1:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_valid;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_valid = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_csr_ena;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_csr_ena = 0;
    CData/*4:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena = 0;
    CData/*6:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl = 0;
    CData/*1:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl = 0;
    CData/*3:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst = 0;
    SData/*11:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_data;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_data = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_valid;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_valid = 0;
    SData/*11:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr = 0;
    CData/*6:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl = 0;
    CData/*4:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res = 0;
    CData/*1:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl = 0;
    CData/*3:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_data;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_data = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_data;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_data = 0;
    SData/*11:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr = 0;
    CData/*6:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena = 0;
    CData/*1:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_reg_load_flag;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_reg_load_flag = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_pc;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_pc = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_inst;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_inst = 0;
    CData/*4:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus = 0;
    VlWide<4>/*127:0*/ __VdlyVal__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem__v0;
    VL_ZERO_W(128, __VdlyVal__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem__v0);
    CData/*2:0*/ __VdlyDim0__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem__v0;
    __VdlyDim0__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem__v0;
    __VdlySet__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v0;
    __VdlySet__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v0 = 0;
    IData/*31:0*/ __VdlyVal__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32;
    __VdlyVal__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32 = 0;
    CData/*4:0*/ __VdlyDim0__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32;
    __VdlyDim0__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32 = 0;
    CData/*0:0*/ __VdlySet__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32;
    __VdlySet__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32 = 0;
    // Body
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_reg_load_flag 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_reg_load_flag;
    __Vdly__ysyx_25060170_topcore__DOT__dpic_diff_skip_flag_o 
        = vlSelfRef.ysyx_25060170_topcore__DOT__dpic_diff_skip_flag_o;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_data 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_data;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_inst 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_inst;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_bpuvalid 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_bpuvalid;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_bpupredict 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_bpupredict;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_pc 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_pc;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_data 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_data;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_currentpc 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_currentpc;
    __Vdly__ysyx_25060170_topcore__DOT__diff_test_skip_o 
        = vlSelfRef.ysyx_25060170_topcore__DOT__diff_test_skip_o;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_csr_ena 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_csr_ena;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_valid 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_valid;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_valid 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_valid;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_bpupredict 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_bpupredict;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc;
    __VdlySet__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem__v0 = 0U;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr;
    __VdlySet__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v0 = 0U;
    __VdlySet__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32 = 0U;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_data 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_data;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel;
    if ((1U & (~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_valid_o)))) {
        Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pc_inst_end_TOP(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc, vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_inst, vlSelfRef.ysyx_25060170_topcore__DOT__dpic_diff_skip_flag_o);
    }
    if ((0x100073U == vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_inst)) {
        Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__set_npc_exit_TOP(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_pc, 0U);
    }
    if ((0x40000033U == vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst)) {
        Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__magic_instruction_TOP();
    }
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr;
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr;
    if (vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_we) {
        Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_write_TOP(vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_raddr, vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_data, (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_wlen), __Vtask_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_write__2__dpic_difftest_skip_flag);
        vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_dpi_ls_mem_skip_flag 
            = __Vtask_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_write__2__dpic_difftest_skip_flag;
    }
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_valid_o 
        = ((IData)(vlSelfRef.rst) || ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_valid) 
                                      || ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_valid) 
                                          && (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_valid_o))));
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_bpuvalid 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if1if2reg__DOT__stall)
                                                  ? (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_bpuvalid)
                                                  : 
                                                 ((1U 
                                                   & (~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if1if2reg__DOT__flush))) 
                                                  && (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__btb_valid))));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_bpuvalid 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if2idureg__DOT__stall)
                                                  ? (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_bpuvalid)
                                                  : 
                                                 ((1U 
                                                   & (~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if1if2reg__DOT__flush))) 
                                                  && (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_bpuvalid))));
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_bpupredict 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if1if2reg__DOT__stall)
                                                  ? (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_bpupredict)
                                                  : 
                                                 ((1U 
                                                   & (~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if1if2reg__DOT__flush))) 
                                                  && (1U 
                                                      & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_read__DOT__fsm_state) 
                                                         >> 1U)))));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_valid 
        = ((IData)(vlSelfRef.rst) || ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if1if2reg__DOT__stall)
                                       ? (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_valid)
                                       : (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if1if2reg__DOT__flush)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_valid 
        = ((IData)(vlSelfRef.rst) || ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if2idureg__DOT__stall)
                                       ? (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_valid)
                                       : (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if1if2reg__DOT__flush)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_valid 
        = ((IData)(vlSelfRef.rst) || ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_valid) 
                                      || ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_valid) 
                                          && (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_valid))));
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_valid 
        = ((IData)(vlSelfRef.rst) || (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ready) 
                                       & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_valid)) 
                                      || ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_id_ex_reg__DOT__stall) 
                                          && (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_valid))));
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_valid 
        = ((IData)(vlSelfRef.rst) || (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ready) 
                                       & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_valid)) 
                                      || ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall) 
                                          && (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_valid))));
    __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_bpupredict 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if2idureg__DOT__stall)
                                                  ? (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_bpupredict)
                                                  : 
                                                 ((1U 
                                                   & (~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if1if2reg__DOT__flush))) 
                                                  && (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_bpupredict))));
    if (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_BPU_update) {
        __VdlyVal__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem__v0[0U] 
            = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__write_set[0U];
        __VdlyVal__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem__v0[1U] 
            = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__write_set[1U];
        __VdlyVal__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem__v0[2U] 
            = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__write_set[2U];
        __VdlyVal__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem__v0[3U] 
            = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__write_set[3U];
        __VdlyDim0__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem__v0 
            = (7U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                     >> 2U));
        __VdlySet__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem__v0 = 1U;
    }
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_mem__DOT__data_ok = 0U;
    if ((1U & (~ (IData)(vlSelfRef.rst)))) {
        if (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena) {
            vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp 
                = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mpp_set;
            vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie 
                = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mie_set;
            vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie 
                = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mpie_set;
        }
    }
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__data_ok 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && (1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ready) 
                                                     | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_valid)))));
    vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_DPIC_MEM_data 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__mem_data;
    if (vlSelfRef.rst) {
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_reg_load_flag = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_reg_load_flag 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_reg_load_flag;
        __Vdly__ysyx_25060170_topcore__DOT__dpic_diff_skip_flag_o = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__dpic_diff_skip_flag_o 
            = __Vdly__ysyx_25060170_topcore__DOT__dpic_diff_skip_flag_o;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_data = 0U;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena = 0U;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_inst = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_inst 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_inst;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_bpuvalid 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_bpuvalid;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_pc = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_pc 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_pc;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_nextpc = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_nextpc = 0U;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr = 0U;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena = 0U;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl = 0U;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_data = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_data 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_data;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl = 0U;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_currentpc = 0U;
        __Vdly__ysyx_25060170_topcore__DOT__diff_test_skip_o = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__diff_test_skip_o 
            = __Vdly__ysyx_25060170_topcore__DOT__diff_test_skip_o;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc = 0U;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_csr_ena = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_csr_ena 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_csr_ena;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_bpupredict 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_bpupredict;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl = 0U;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus = 0x1800U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mcause = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mscratch = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mtvec_base = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mepc = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc = 0x80000000U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_bpupredict 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_bpupredict;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res = 0U;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data = 0U;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_valid)))) {
            if (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_valid) {
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_reg_load_flag 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_reg_load_flag;
                __Vdly__ysyx_25060170_topcore__DOT__dpic_diff_skip_flag_o 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__dpic_diff_skip_flag_o;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_data 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_data;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_inst 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_inst;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_pc 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_pc;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data;
            } else {
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_reg_load_flag 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag;
                __Vdly__ysyx_25060170_topcore__DOT__dpic_diff_skip_flag_o 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__diff_test_skip_o;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_data 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_data;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_inst 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_pc 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_data;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res;
            }
        }
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_reg_load_flag 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_reg_load_flag;
        vlSelfRef.ysyx_25060170_topcore__DOT__dpic_diff_skip_flag_o 
            = __Vdly__ysyx_25060170_topcore__DOT__dpic_diff_skip_flag_o;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_inst 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_inst;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_bpuvalid 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_bpuvalid;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_pc 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_pc;
        if (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if2idureg__DOT__stall) {
            vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_nextpc 
                = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_nextpc;
            __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc;
        } else if (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if1if2reg__DOT__flush) {
            vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_nextpc = 0U;
            __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc = 0U;
        } else {
            vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_nextpc 
                = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_nextpc;
            __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_currentpc;
        }
        if (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if1if2reg__DOT__stall) {
            vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_nextpc 
                = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_nextpc;
            __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_currentpc 
                = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_currentpc;
        } else if (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if1if2reg__DOT__flush) {
            vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_nextpc = 0U;
            __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_currentpc = 0U;
        } else {
            vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_nextpc 
                = ((IData)(4U) + vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc);
            __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_currentpc 
                = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc;
        }
        if ((1U & (~ ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ready) 
                      & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_valid))))) {
            if (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_id_ex_reg__DOT__stall) {
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl 
                    = (0xfU & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl));
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena;
            } else {
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rd_ena;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_wbctl;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_next_pc;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl 
                    = (0xfU & ((1U & (- (IData)((0x41U 
                                                 == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                               | ((2U & (- (IData)(
                                                   (0x82U 
                                                    == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                  | ((4U & (- (IData)(
                                                      (0x81U 
                                                       == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                     | ((5U & (- (IData)(
                                                         (7U 
                                                          == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                        | ((9U & (- (IData)(
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
                                                                        == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc)))))))))))))));
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_ena;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_valid)))) {
            if (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_valid) {
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_data 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_data;
                __Vdly__ysyx_25060170_topcore__DOT__diff_test_skip_o 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__diff_test_skip_o;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res;
            } else {
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_data 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_data;
                __Vdly__ysyx_25060170_topcore__DOT__diff_test_skip_o 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_dpi_ls_mem_skip_flag;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_mem_re;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res;
            }
        }
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_data 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_data;
        vlSelfRef.ysyx_25060170_topcore__DOT__diff_test_skip_o 
            = __Vdly__ysyx_25060170_topcore__DOT__diff_test_skip_o;
        if ((1U & (~ ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ready) 
                      & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_valid))))) {
            if (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall) {
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_csr_ena 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_csr_ena;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res;
            } else {
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_csr_ena 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl 
                    = (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena) 
                        << 6U) | (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena) 
                                   << 5U) | (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena) 
                                              << 4U) 
                                             | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgRegularize_h788ac90a_0_6))));
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__exu_res;
            }
        }
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_csr_ena 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_csr_ena;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_bpupredict 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_bpupredict;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl;
        if ((1U & (~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena)))) {
            __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus 
                = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus;
        }
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mcause 
            = (((0x342U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                   >> 3U)) ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_csr_write_csr_data
                : ((2U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                    ? ((2U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                        ? 0xbU : 0U) : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mcause));
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mscratch 
            = (((0x340U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                   >> 3U)) ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_csr_write_csr_data
                : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mscratch);
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
            = (0x3fffffffU & (((0x305U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                               & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                  >> 3U)) ? (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_csr_write_csr_data 
                                             >> 2U)
                               : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mtvec_base));
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mepc 
            = ((1U & (((0x341U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                       & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                          >> 3U)) | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                     >> 1U))) ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_csr_write_csr_data
                : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mepc);
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc 
            = ((1U & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__inst_jxx) 
                      | ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_23)) 
                         | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__inst_bxx) 
                            & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_btb_mispredicted)))))
                ? ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_23)
                    ? ((0x42U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                        ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_op1
                        : ((0x21U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                            ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_28
                            : (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__inst_bxx) 
                                & ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__now_bxx_jump_yes)) 
                                   & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_bpupredict)))
                                ? ((IData)(4U) + vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc)
                                : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_22)))
                    : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_next_pc)
                : (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__btb_valid) 
                    & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_read__DOT__fsm_state) 
                       >> 1U)) ? ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__check_branch1)
                                   ? ((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[3U] 
                                       << 0x1cU) | 
                                      (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[2U] 
                                       >> 4U)) : ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__check_branch2)
                                                   ? 
                                                  ((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[1U] 
                                                    << 0x1cU) 
                                                   | (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__read_set[0U] 
                                                      >> 4U))
                                                   : 0U))
                    : ((IData)(4U) + vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc)));
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_bpupredict 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_bpupredict;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res;
    }
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_currentpc 
        = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_currentpc;
    if (__VdlySet__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem__v0) {
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem[__VdlyDim0__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem__v0][0U] 
            = __VdlyVal__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem__v0[0U];
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem[__VdlyDim0__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem__v0][1U] 
            = __VdlyVal__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem__v0[1U];
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem[__VdlyDim0__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem__v0][2U] 
            = __VdlyVal__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem__v0[2U];
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem[__VdlyDim0__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem__v0][3U] 
            = __VdlyVal__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem__v0[3U];
    }
    if (vlSelfRef.rst) {
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr = 0U;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr;
        __VdlySet__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v0 = 1U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_valid)))) {
            __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr 
                = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_valid)
                    ? (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr)
                    : (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr));
        }
        if ((1U & (~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_valid)))) {
            __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr 
                = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_valid)
                    ? (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr)
                    : (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr));
        }
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr;
        if ((1U & (~ ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ready) 
                      & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_valid))))) {
            if (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall) {
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr;
            } else {
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr;
            }
        }
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr;
        if (((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena) 
             & (0U != (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr)))) {
            __VdlyVal__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32 
                = (((- (IData)((1U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl)))) 
                    & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res) 
                   | (((- (IData)((1U & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl) 
                                         >> 1U)))) 
                       & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data) 
                      | ((- (IData)((0U != (0xfU & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))))) 
                         & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_data)));
            __VdlyDim0__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32 
                = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr;
            __VdlySet__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32 = 1U;
        }
    }
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena 
        = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena;
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_data 
        = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_data;
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl 
        = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl;
    if (__VdlySet__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v0) {
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0U] = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[1U] = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[2U] = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[3U] = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[4U] = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[5U] = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[6U] = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[7U] = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[8U] = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[9U] = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0xaU] = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0xbU] = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0xcU] = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0xdU] = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0xeU] = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0xfU] = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x10U] = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x11U] = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x12U] = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x13U] = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x14U] = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x15U] = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x16U] = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x17U] = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x18U] = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x19U] = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x1aU] = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x1bU] = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x1cU] = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x1dU] = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x1eU] = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x1fU] = 0U;
    }
    if (__VdlySet__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32) {
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[__VdlyDim0__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32] 
            = __VdlyVal__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32;
    }
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl 
        = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl;
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res 
        = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res;
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data 
        = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data;
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr 
        = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr;
    if (vlSelfRef.rst) {
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_data = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_data 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_data;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_valid 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_valid;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2 = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1 = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr;
        __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_valid 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_valid;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_lru__DOT__lru_reg = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ready) 
                      & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_valid))))) {
            if (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall) {
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_data 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_data;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr 
                    = (0xfffU & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr));
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc;
            } else {
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_data 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr 
                    = (0xfffU & ((0U != (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgRegularize_h788ac90a_0_6))
                                  ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm
                                  : 0U));
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc;
            }
        }
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_data 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_data;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_valid 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_valid;
        if ((1U & (~ ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ready) 
                      & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_valid))))) {
            if (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_id_ex_reg__DOT__stall) {
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr 
                    = (0x1fU & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr));
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr 
                    = (0x1fU & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr));
            } else {
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_load_flag;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_op2;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_alusrc;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_imm;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_op1;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel 
                    = ((2U & ((- (IData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                              | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr))) 
                                 | (- (IData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc)))))) 
                       | (1U & (- (IData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs1_ena)))));
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel 
                    = ((2U & ((- (IData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                              | (- (IData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr))))) 
                       | ((4U & (- (IData)(((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_ena)) 
                                            & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__) 
                                               | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_26) 
                                                  | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__5__KET__) 
                                                     | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__) 
                                                        | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_28))))))))) 
                          | ((1U & (- (IData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rs2_ena)))) 
                             | (3U & (- (IData)((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_csr_ena)))))));
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst 
                    = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst;
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr 
                    = (0x1fU & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                >> 0xfU));
                __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr 
                    = (0x1fU & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_rd_ena)
                                 ? (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
                                    >> 7U) : 0U));
            }
        }
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_valid 
            = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_valid;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst 
            = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if2idureg__DOT__stall)
                ? vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst
                : ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if1if2reg__DOT__flush)
                    ? 0U : vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst));
        if (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__check_branch1) {
            vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_lru__DOT__lru_reg 
                = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_lru__DOT__lru_reg) 
                   | (0xffU & ((IData)(1U) << (7U & 
                                               (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc 
                                                >> 2U)))));
        } else if (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__check_branch2) {
            vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_lru__DOT__lru_reg 
                = ((~ ((IData)(1U) << (7U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc 
                                             >> 2U)))) 
                   & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_lru__DOT__lru_reg));
        }
        if (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__new_entry) {
            if (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__insert_branch1) {
                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_lru__DOT__lru_reg 
                    = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_lru__DOT__lru_reg) 
                       | (0xffU & ((IData)(1U) << (7U 
                                                   & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                                                      >> 2U)))));
            } else if (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_write_logic__DOT__insert_branch2) {
                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_lru__DOT__lru_reg 
                    = ((~ ((IData)(1U) << (7U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                                                 >> 2U)))) 
                       & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_lru__DOT__lru_reg));
            }
        }
    }
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc 
        = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc;
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
        = __Vdly__ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc;
    Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_csr_TOP(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus, 
                                                                                (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
                                                                                << 2U), vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mepc, vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mcause, 0U, vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mscratch);
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h0c034a45_0_1 
        = (1U & (~ ((IData)(vlSelfRef.rst) | (0U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))));
    vlSelfRef.__Vtableidx3 = ((6U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res 
                                     << 1U)) | (IData)(vlSelfRef.rst));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask 
        = Vysyx_25060170_topcore__ConstPool__TABLE_hbbe98c18_0
        [vlSelfRef.__Vtableidx3];
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr 
        = ((0x300U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
           & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
              >> 3U));
    vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_raddr 
        = ((IData)(vlSelfRef.rst) ? 0U : vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res);
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
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_csr_write_csr_data 
        = (((- (IData)((1U & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                              >> 6U)))) & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data) 
           | ((- (IData)((1U & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                >> 1U)))) & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_pc));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward 
        = (((- (IData)((1U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl)))) 
            & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res) 
           | ((- (IData)((2U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl)))) 
              & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall 
        = (1U & ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ready)) 
                 | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_valid)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_25 
        = ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_valid)) 
           & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h0777f0a3_0_27 
        = ((~ (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_valid)) 
           & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
        = (((- (IData)((1U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel)))) 
            & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1) 
           | ((- (IData)((2U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel)))) 
              & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
        = ((((- (IData)((1U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel)))) 
             | (- (IData)((3U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel))))) 
            & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2) 
           | ((4U & (- (IData)((2U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel))))) 
              | ((- (IData)((4U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel)))) 
                 & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm)));
    vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst 
        = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__DPIC_inst_reg;
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal 
        = ((~ (IData)(vlSelfRef.rst)) & (0x6cU == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui 
        = ((~ (IData)(vlSelfRef.rst)) & (0x34U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst)));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc 
        = ((~ (IData)(vlSelfRef.rst)) & (0x14U == (0x7cU 
                                                   & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst)));
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
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_load_flag 
        = ((~ (IData)(vlSelfRef.rst)) & (IData)((3U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst))));
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
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_valid 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_valid) 
           | ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re) 
              & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_mem__DOT__data_ok)));
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
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__fsm1 
        = (3U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem
                 [(7U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                         >> 2U))][2U] >> 2U));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__fsm2 
        = (3U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__ysyx_25060170_u_btb_file__DOT__btb_mem
                 [(7U & (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
                         >> 2U))][0U] >> 2U));
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
    vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_we 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h0c034a45_0_1) 
           & (~ ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl) 
                 >> 3U)));
    vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_mem_re 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h0c034a45_0_1) 
           & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl) 
              >> 3U));
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
    vlSelfRef.__VdfgRegularize_h495687df_0_15 = (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                 + vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm);
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
    if (vlSelfRef.rst) {
        vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_data = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena = 0U;
        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena = 0U;
    } else {
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
        if ((0x2aU != (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
            if (((0xa8U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                 || (0x94U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))) {
                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena = 1U;
                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena = 1U;
                vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena 
                    = (0U != (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr));
            } else {
                if ((1U & (~ ((0x25U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                              || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                    if ((1U & (~ ((0x4aU == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                  || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                        if ((0x54U != (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
                            vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena = 0U;
                        }
                    }
                }
                if (((0x25U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
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
                    if ((1U & (~ ((0x4aU == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                  || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                        vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena 
                            = (0x54U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc));
                    }
                }
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
    if ((1U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
        vlSelfRef.__VdfgRegularize_h495687df_0_10 = 0U;
        vlSelfRef.__VdfgRegularize_h495687df_0_9 = 0U;
        vlSelfRef.__VdfgRegularize_h495687df_0_12 = 0U;
    } else {
        vlSelfRef.__VdfgRegularize_h495687df_0_10 = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1;
        vlSelfRef.__VdfgRegularize_h495687df_0_9 = 
            (vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
             ^ vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
        vlSelfRef.__VdfgRegularize_h495687df_0_12 = 
            ((~ vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1) 
             & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
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
    Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read_TOP(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc, vlSelfRef.__Vtask_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__0__rdata, 4U, 1U, vlSelfRef.__Vtask_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__0__dpic_difftest_skip_flag);
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__DPIC_inst_reg 
        = vlSelfRef.__Vtask_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__0__rdata;
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_h6980b670_0_28 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui) 
           | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc));
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
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_rd_data_forward 
        = (((- (IData)((1U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl)))) 
            & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__mem_data) 
           | ((- (IData)((2U == (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl)))) 
              & vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch1 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__valid1) 
           & ((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
               >> 5U) == vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__tag1));
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__update_branch2 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__valid2) 
           & ((vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_currentpc 
               >> 5U) == vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_btb__DOT__u_ysyx_25060170_update_read__DOT__tag2));
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
        vlSelfRef.__VdfgRegularize_h495687df_0_16 = 0U;
        vlSelfRef.__VdfgRegularize_h495687df_0_7 = 0U;
        vlSelfRef.__VdfgRegularize_h495687df_0_13 = 0U;
    } else {
        vlSelfRef.__VdfgRegularize_h495687df_0_16 = vlSelfRef.__VdfgRegularize_h495687df_0_15;
        vlSelfRef.__VdfgRegularize_h495687df_0_7 = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h273e5a99__0;
        vlSelfRef.__VdfgRegularize_h495687df_0_13 = vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2;
    }
    vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h0c034a45_0_0 
        = ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__data_ok) 
           & ((IData)(vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_mem_re) 
              | (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__DPIC_ls_dpic_we)));
    if ((2U & (IData)(vlSelfRef.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
        vlSelfRef.__VdfgRegularize_h495687df_0_11 = 0U;
        vlSelfRef.__VdfgRegularize_h495687df_0_17 = 0U;
        vlSelfRef.__VdfgRegularize_h495687df_0_8 = 0U;
        vlSelfRef.__VdfgRegularize_h495687df_0_14 = 0U;
    } else {
        vlSelfRef.__VdfgRegularize_h495687df_0_11 = vlSelfRef.__VdfgRegularize_h495687df_0_10;
        vlSelfRef.__VdfgRegularize_h495687df_0_17 = vlSelfRef.__VdfgRegularize_h495687df_0_16;
        vlSelfRef.__VdfgRegularize_h495687df_0_8 = vlSelfRef.__VdfgRegularize_h495687df_0_7;
        vlSelfRef.__VdfgRegularize_h495687df_0_14 = vlSelfRef.__VdfgRegularize_h495687df_0_13;
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

void Vysyx_25060170_topcore___024root___eval_triggers__act(Vysyx_25060170_topcore___024root* vlSelf);

bool Vysyx_25060170_topcore___024root___eval_phase__act(Vysyx_25060170_topcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root___eval_phase__act\n"); );
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vysyx_25060170_topcore___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vysyx_25060170_topcore___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vysyx_25060170_topcore___024root___eval_phase__nba(Vysyx_25060170_topcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root___eval_phase__nba\n"); );
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vysyx_25060170_topcore___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_topcore___024root___dump_triggers__ico(Vysyx_25060170_topcore___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_topcore___024root___dump_triggers__nba(Vysyx_25060170_topcore___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_topcore___024root___dump_triggers__act(Vysyx_25060170_topcore___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25060170_topcore___024root___eval(Vysyx_25060170_topcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root___eval\n"); );
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vysyx_25060170_topcore___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("vsrc/sim/ysyx_25060170_topcore.v", 3, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vysyx_25060170_topcore___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vysyx_25060170_topcore___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("vsrc/sim/ysyx_25060170_topcore.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vysyx_25060170_topcore___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("vsrc/sim/ysyx_25060170_topcore.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vysyx_25060170_topcore___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vysyx_25060170_topcore___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_25060170_topcore___024root___eval_debug_assertions(Vysyx_25060170_topcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root___eval_debug_assertions\n"); );
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
