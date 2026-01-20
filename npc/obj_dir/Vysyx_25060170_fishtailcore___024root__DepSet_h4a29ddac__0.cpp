// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25060170_fishtailcore.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25060170_fishtailcore___024root.h"

extern const VlUnpacked<CData/*3:0*/, 8> Vysyx_25060170_fishtailcore__ConstPool__TABLE_hf15ee880_0;
void Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata, CData/*7:0*/ rlen, IData/*31:0*/ mode);
void Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wlen);

VL_INLINE_OPT void Vysyx_25060170_fishtailcore___024root___ico_sequent__TOP__0(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal 
        = ((~ (IData)(vlSelf->rst)) & (0x6cU == (0x7cU 
                                                 & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui 
        = ((~ (IData)(vlSelf->rst)) & (0x34U == (0x7cU 
                                                 & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc 
        = ((~ (IData)(vlSelf->rst)) & (0x14U == (0x7cU 
                                                 & vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
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
    vlSelf->__Vtableidx2 = ((6U & (vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res 
                                   << 1U)) | (IData)(vlSelf->rst));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask 
        = Vysyx_25060170_fishtailcore__ConstPool__TABLE_hf15ee880_0
        [vlSelf->__Vtableidx2];
    if (vlSelf->rst) {
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_raddr = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_data = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen = 0U;
    } else {
        if ((0x2aU != (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
            if (((0xa8U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                 | (0x94U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))) {
                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena = 1U;
                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena = 1U;
                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena 
                    = (0U != (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr));
            } else {
                if ((1U & (~ ((0x25U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                              | (0xc8U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                    if ((1U & (~ ((0x4aU == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                  | (0xa4U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                        if ((0x54U != (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
                            vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena = 0U;
                        }
                    }
                }
                if (((0x25U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
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
                    if ((1U & (~ ((0x4aU == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                  | (0xa4U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena 
                            = (0x54U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc));
                    }
                }
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
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res 
            = ((0x80U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                ? ((0x40U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                    ? ((0x20U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                        ? 0U : ((0x10U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                 ? 0U : ((8U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                          ? 0U : ((4U 
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
                    : ((0x20U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                        ? ((0x10U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                            ? ((8U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                ? 0U : ((4U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                         ? 0U : ((2U 
                                                  & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 0U
                                                   : (IData)(
                                                             (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul 
                                                              >> 0x20U))))))
                            : ((8U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                ? 0U : ((4U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                         ? 0U : ((2U 
                                                  & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 0U
                                                   : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2)))))
                        : ((0x10U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                            ? ((8U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                ? ((4U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                    ? 0U : ((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                              ? 0U : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div)))
                                : 0U) : ((8U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                          ? 0U : ((4U 
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
                : ((0x40U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                    ? ((0x20U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                        ? ((0x10U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                            ? 0U : ((8U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                     ? ((4U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                         ? 0U : ((2U 
                                                  & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 0U
                                                   : 
                                                  (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                   + vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm))))
                                     : ((4U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                         ? 0U : ((2U 
                                                  & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 0U
                                                   : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hdbadd230__0)))))
                        : ((0x10U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                            ? ((8U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                ? ((4U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                    ? 0U : ((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                              ? 0U : (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul))))
                                : ((4U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                    ? 0U : ((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                              ? 0U : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2))))
                            : ((8U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                ? 0U : ((4U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                         ? 0U : ((2U 
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
                    : ((0x20U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                        ? ((0x10U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                            ? ((8U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                ? 0U : ((4U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                         ? ((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                              ? 0U : 
                                             (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                              + vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm)))
                                         : ((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                              ? 0U : 
                                             (1U & 
                                              (((~ 
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
                            : ((8U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                ? ((4U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                    ? 0U : ((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                              ? 0U : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hc5be2994__0)))
                                : ((4U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                    ? 0U : ((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                 ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div
                                                 : 0U)
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                 ? 
                                                ((IData)(4U) 
                                                 + vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc)
                                                 : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hc5be2994__0)))))
                        : ((0x10U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                            ? ((8U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                ? ((4U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                    ? 0U : ((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                 ? 0U
                                                 : 
                                                (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                 + vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm))
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                 ? 0U
                                                 : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h52af767a__0)))
                                : ((4U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                    ? ((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                        ? ((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                            ? 0U : 
                                           (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                            + vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm))
                                        : ((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                            ? 0U : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hc5ccd4d6__0))
                                    : ((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                        ? 0U : ((1U 
                                                 & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                 ? 0U
                                                 : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hc5ccd4d6__0))))
                            : ((8U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                ? ((4U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                    ? ((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                        ? 0U : ((1U 
                                                 & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                 ? 0U
                                                 : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2))
                                    : ((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                        ? ((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                            ? (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                               + vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm)
                                            : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2)
                                        : ((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                            ? 0U : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hc5cf7009__0)))
                                : ((4U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                    ? ((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                        ? ((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                            ? 0U : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2)
                                        : ((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                            ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h52a30ec4__0
                                            : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hdbadd230__0))
                                    : ((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                        ? ((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                            ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2
                                            : (1U & 
                                               (((~ 
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
                                        : ((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                            ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2
                                            : 0U))))))));
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_raddr 
            = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res;
        if ((1U & (~ ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl) 
                      >> 3U)))) {
            if ((1U == (7U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))) {
                vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_data 
                    = ((vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                        << 0x18U) | ((0xff0000U & (vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                                                   << 0x10U)) 
                                     | ((0xff00U & 
                                         (vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                                          << 8U)) | 
                                        (0xffU & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data))));
                vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask;
            } else if ((2U == (7U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))) {
                vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_data 
                    = ((vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                        << 0x10U) | (0xffffU & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data));
                vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen 
                    = ((IData)(vlSelf->rst) ? 0U : 
                       ((0U == (3U & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                         ? 3U : ((2U == (3U & vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                  ? 0xcU : 0U)));
            } else if ((4U == (7U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))) {
                vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_data 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data;
                vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen = 0xfU;
            } else {
                vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_data = 0U;
                vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen = 0U;
            }
        }
    }
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h72104a67__0 
        = (1U & (~ ((IData)(vlSelf->rst) | (0U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))));
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
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd9b03bc2__0 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui) 
           | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc));
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
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_re 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h72104a67__0) 
           & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl) 
              >> 3U));
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_we 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h72104a67__0) 
           & (~ ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl) 
                 >> 3U)));
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
    vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res 
        = (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res 
           | (((- (IData)((0U != (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_he71b3f47__0)))) 
               & vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1) 
              | ((- (IData)(((0x94U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                             | ((0xc8U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                | (0xa4U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) 
                 & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h53258981__0 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__data_ok) 
           & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_re) 
              | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_we)));
    if (vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_re) {
        Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read_TOP(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_raddr, vlSelf->__Vtask_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__0__rdata, 4U, 2U);
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__mem_data 
            = vlSelf->__Vtask_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__0__rdata;
    } else {
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__mem_data = 0U;
    }
    if (vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_we) {
        Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_write_TOP(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_raddr, vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_data, (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen));
    }
    Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read_TOP(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_pc, vlSelf->__Vtask_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__2__rdata, 4U, 1U);
    vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
        = vlSelf->__Vtask_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__2__rdata;
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
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_valid 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_valid) 
           | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h53258981__0));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_bxx 
        = ((~ (IData)(vlSelf->rst)) & (0x60U == (0x7cU 
                                                 & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal 
        = ((~ (IData)(vlSelf->rst)) & (IData)((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wbu_forward_en 
        = ((0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                     >> 7U)) == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr 
        = ((~ (IData)(vlSelf->rst)) & (IData)((0x67U 
                                               == (0x7fU 
                                                   & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst))));
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
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jal_jalr_temp 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal) 
           | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr));
    if (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr) {
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgTmp_h15760a56__0 
            = vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wbu_forward_en;
        vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr 
            = (0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                        >> 0xfU));
    } else {
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgTmp_h15760a56__0 = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr = 0U;
    }
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
    vlSelf->__VdfgTmp_h46471f4e__0 = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr) 
                                      & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                                         == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr)));
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
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc 
        = (((IData)(vlSelf->__VdfgTmp_h46471f4e__0)
             ? vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
             : (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr) 
                 & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                    == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))
                 ? vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res
                 : ((IData)(vlSelf->__VdfgTmp_h46471f4e__0)
                     ? vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
                     : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgTmp_h15760a56__0)
                         ? vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward
                         : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr)
                             ? (((~ (IData)(vlSelf->rst)) 
                                 & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr))
                                 ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                [vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr]
                                 : 0U) : vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_pc))))) 
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
               : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_bxx)
                   ? (((- (IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                   >> 0x1fU))) << 0xdU) 
                      | ((0x1000U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                     >> 0x13U)) | (
                                                   (0x800U 
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
                                ? (((- (IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                >> 0x14U))
                                : 4U)))));
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
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2 
        = (vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1 
           < vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op2);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2 
        = (1U & (((vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1 
                   ^ vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op2) 
                  >> 0x1fU) ? (vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1 
                               >> 0x1fU) : (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__ex_branch 
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
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_if_pc_jump 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_branch) 
           ^ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_jump));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if_id_reg__DOT__flush 
        = ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_stall)) 
           & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_if_pc_jump));
}

void Vysyx_25060170_fishtailcore___024root___eval_ico(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vysyx_25060170_fishtailcore___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vysyx_25060170_fishtailcore___024root___eval_act(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___eval_act\n"); );
}

void Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pc_inst_end_TOP(IData/*31:0*/ thepc_data, IData/*31:0*/ the_inst);
void Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__set_npc_exit_TOP(IData/*31:0*/ pc, IData/*31:0*/ halt_ret);
void Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__magic_instruction_TOP();
extern const VlUnpacked<CData/*3:0*/, 128> Vysyx_25060170_fishtailcore__ConstPool__TABLE_ha1f11ad5_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_25060170_fishtailcore__ConstPool__TABLE_h533c4dc0_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_25060170_fishtailcore__ConstPool__TABLE_hc96c04b6_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_25060170_fishtailcore__ConstPool__TABLE_h898eb57e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_25060170_fishtailcore__ConstPool__TABLE_hc0216118_0;
void Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_csr_TOP(IData/*31:0*/ csr_mstatus, IData/*31:0*/ csr_mtvec, IData/*31:0*/ csr_mepc, IData/*31:0*/ csr_mcause);
void Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_regs_TOP(IData/*31:0*/ regs0, IData/*31:0*/ regs1, IData/*31:0*/ regs2, IData/*31:0*/ regs3, IData/*31:0*/ regs4, IData/*31:0*/ regs5, IData/*31:0*/ regs6, IData/*31:0*/ regs7, IData/*31:0*/ regs8, IData/*31:0*/ regs9, IData/*31:0*/ regs10, IData/*31:0*/ regs11, IData/*31:0*/ regs12, IData/*31:0*/ regs13, IData/*31:0*/ regs14, IData/*31:0*/ regs15, IData/*31:0*/ regs16, IData/*31:0*/ regs17, IData/*31:0*/ regs18, IData/*31:0*/ regs19, IData/*31:0*/ regs20, IData/*31:0*/ regs21, IData/*31:0*/ regs22, IData/*31:0*/ regs23, IData/*31:0*/ regs24, IData/*31:0*/ regs25, IData/*31:0*/ regs26, IData/*31:0*/ regs27, IData/*31:0*/ regs28, IData/*31:0*/ regs29, IData/*31:0*/ regs30, IData/*31:0*/ regs31);

VL_INLINE_OPT void Vysyx_25060170_fishtailcore___024root___nba_sequent__TOP__0(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state;
    __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state;
    __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_inst;
    __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_inst = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_pc;
    __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_pc = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc;
    __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__id_jump;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_jump = 0;
    CData/*7:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm = 0;
    CData/*4:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr = 0;
    CData/*4:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena = 0;
    CData/*2:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel = 0;
    CData/*1:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2 = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1 = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst = 0;
    CData/*3:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl = 0;
    CData/*1:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_valid;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_valid = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__ls_csr_ena;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ls_csr_ena = 0;
    CData/*4:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena = 0;
    CData/*6:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl = 0;
    CData/*1:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl = 0;
    CData/*3:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst = 0;
    SData/*11:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_valid;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_valid = 0;
    SData/*11:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr = 0;
    CData/*6:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl = 0;
    CData/*4:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res = 0;
    CData/*1:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl = 0;
    CData/*3:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena = 0;
    SData/*11:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr;
    __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr = 0;
    CData/*6:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl;
    __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena;
    __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena = 0;
    CData/*1:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl;
    __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_reg_load_flag;
    __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_reg_load_flag = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res;
    __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data;
    __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc;
    __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_pc;
    __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_pc = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_inst;
    __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_inst = 0;
    CData/*4:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr;
    __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus;
    __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v0;
    __Vdlyvset__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32;
    __Vdlyvdim0__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32;
    __Vdlyvval__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32;
    __Vdlyvset__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32 = 0;
    // Body
    __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_reg_load_flag 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_reg_load_flag;
    __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_inst 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_inst;
    __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc;
    __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr;
    __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state;
    __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state;
    __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_pc 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_pc;
    __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl;
    __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_valid 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_valid;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ls_csr_ena 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_csr_ena;
    __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc;
    __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_pc 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl;
    __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_valid 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_valid;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_jump 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__id_jump;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl;
    __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl;
    __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re;
    __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res;
    __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag;
    __Vdlyvset__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v0 = 0U;
    __Vdlyvset__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32 = 0U;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2;
    __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel;
    if ((1U & (~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_valid_o)))) {
        Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pc_inst_end_TOP(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc, vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_inst);
    }
    if ((0x100073U == vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_inst)) {
        Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__set_npc_exit_TOP(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_pc, 0U);
    }
    if ((0x40000033U == vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)) {
        Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__magic_instruction_TOP();
    }
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr;
    __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst;
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_valid_o 
        = ((IData)(vlSelf->rst) | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_valid) 
                                   | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_valid) 
                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_valid_o))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_valid 
        = (((IData)(vlSelf->rst) | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if_id_reg__DOT__flush)) 
           | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ready) 
               & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__if_valid)) 
              | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__if_valid) 
                 & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_valid))));
    __Vtableidx1 = (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_branch) 
                     << 6U) | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_jump) 
                                << 5U) | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state) 
                                           << 4U) | 
                                          (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state) 
                                            << 3U) 
                                           | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_not_taken_state) 
                                               << 2U) 
                                              | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_not_taken_state) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->rst)))))));
    if ((1U & Vysyx_25060170_fishtailcore__ConstPool__TABLE_ha1f11ad5_0
         [__Vtableidx1])) {
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_not_taken_state 
            = Vysyx_25060170_fishtailcore__ConstPool__TABLE_h533c4dc0_0
            [__Vtableidx1];
    }
    if ((2U & Vysyx_25060170_fishtailcore__ConstPool__TABLE_ha1f11ad5_0
         [__Vtableidx1])) {
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_not_taken_state 
            = Vysyx_25060170_fishtailcore__ConstPool__TABLE_hc96c04b6_0
            [__Vtableidx1];
    }
    if ((4U & Vysyx_25060170_fishtailcore__ConstPool__TABLE_ha1f11ad5_0
         [__Vtableidx1])) {
        __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state 
            = Vysyx_25060170_fishtailcore__ConstPool__TABLE_h898eb57e_0
            [__Vtableidx1];
    }
    if ((8U & Vysyx_25060170_fishtailcore__ConstPool__TABLE_ha1f11ad5_0
         [__Vtableidx1])) {
        __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state 
            = Vysyx_25060170_fishtailcore__ConstPool__TABLE_hc0216118_0
            [__Vtableidx1];
    }
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_if_pc_jump))) {
        __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2 = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1 = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ready) 
                         & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_valid))))) {
        if (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_id_ex_reg__DOT__stall) {
            __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena;
            __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl;
            __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl 
                = (0xfU & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl));
            __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc;
            __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc;
            __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag;
            __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2;
            __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena;
            __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc;
            __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm;
            __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1;
            __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel;
            __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel;
            __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst;
            __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr 
                = (0x1fU & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr));
            __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr 
                = (0x1fU & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr));
        } else {
            __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rd_ena;
            __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__idu_wbctl;
            __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl 
                = (0xfU & ((1U & (- (IData)((0x41U 
                                             == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                           | ((2U & (- (IData)((0x82U 
                                                == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                              | ((4U & (- (IData)((0x81U 
                                                   == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                 | ((5U & (- (IData)(
                                                     (7U 
                                                      == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                    | ((9U & (- (IData)(
                                                        (0x1aU 
                                                         == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))))) 
                                       | ((0xaU & (- (IData)(
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
                                                                    == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc)))))))))))))));
            __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc 
                = (((0x21U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                    | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_if_pc_jump))
                    ? (vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm 
                       + vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc)
                    : ((0x42U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                        ? (0xfffffffeU & (vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1 
                                          + vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm))
                        : vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc));
            __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc;
            __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag;
            __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op2;
            __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena 
                = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw) 
                   | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs) 
                      | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc) 
                         | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi) 
                            | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi) 
                               | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci))))));
            __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc;
            __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm;
            __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1;
            __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel 
                = ((2U & ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                          | ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr))) 
                             | (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc)))))) 
                   | (1U & (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs1_ena)))));
            __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel 
                = ((2U & ((- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                          | (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr))))) 
                   | ((4U & (- (IData)(((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77eb01fa__0) 
                                        | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                                           | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0) 
                                              | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70f4116c__0) 
                                                 | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0) 
                                                    | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd9b03bc2__0))))))))) 
                      | (1U & (- (IData)((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rs2_ena))))));
            __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst;
            __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr 
                = (0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                            >> 0xfU));
            __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr 
                = (0x1fU & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_rd_ena)
                             ? (vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                >> 7U) : 0U));
        }
    }
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_valid 
        = (((IData)(vlSelf->rst) | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_if_pc_jump)) 
           | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ready) 
               & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_valid)) 
              | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_id_ex_reg__DOT__stall) 
                 & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_valid))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_valid 
        = ((IData)(vlSelf->rst) | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_valid) 
                                   | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_valid) 
                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_valid))));
    if (((IData)(vlSelf->rst) | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if_id_reg__DOT__flush))) {
        __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_pc = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__id_jump = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_inst = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ready) 
                         & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__if_valid))))) {
        if (vlSelf->ysyx_25060170_fishtailcore__DOT__if_valid) {
            __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc;
            __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_pc 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc;
            __Vdly__ysyx_25060170_fishtailcore__DOT__id_jump 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__id_jump;
            __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst;
        } else {
            __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc 
                = ((IData)(4U) + vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_pc);
            __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_pc 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_pc;
            __Vdly__ysyx_25060170_fishtailcore__DOT__id_jump 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__bp_predict;
            __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst;
        }
    }
    __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_valid 
        = ((IData)(vlSelf->rst) | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ready) 
                                    & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_valid)) 
                                   | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall) 
                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_valid))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_mem__DOT__data_ok = 0U;
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena) {
            vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mpp_set;
            vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mpie_set;
            vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mie_set;
        }
        vlSelf->ysyx_25060170_fishtailcore__DOT__bp_if_jal_jalr 
            = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal)
                ? (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jal_jalr_temp)
                : ((~ ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_bxx) 
                       & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state) 
                          | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state)))) 
                   & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr) 
                       & (~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wbu_forward_en)))
                       ? (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jal_jalr_temp)
                       : ((~ ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_jump) 
                              & (~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_branch)))) 
                          & ((~ ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_jump)) 
                                 & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_branch))) 
                             & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr) 
                                 & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wbu_forward_en)) 
                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jal_jalr_temp)))))));
    }
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__data_ok 
        = (1U & ((~ (IData)(vlSelf->rst)) & (~ ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ready) 
                                                | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_valid)))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data 
        = vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__mem_data;
    if (vlSelf->rst) {
        __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_reg_load_flag = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_reg_load_flag 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_reg_load_flag;
        __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_inst = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_inst 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_inst;
        __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc;
        __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena;
        __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst;
        __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc;
        __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_pc = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc;
        vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_pc 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_pc;
        __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus;
        __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst;
        __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc;
        __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena;
        vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena;
        vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl;
        __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr;
        __Vdly__ysyx_25060170_fishtailcore__DOT__ls_csr_ena = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_csr_ena 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ls_csr_ena;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mcause = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mepc = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mtvec_base = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr;
        __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl;
        __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl;
        vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc;
        vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc;
        __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag;
        __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl;
        __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl;
        __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re;
        __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res;
        __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr;
        __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl;
        __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag;
        __Vdlyvset__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v0 = 1U;
    } else {
        if ((1U & (~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_valid)))) {
            if (vlSelf->ysyx_25060170_fishtailcore__DOT__mem_valid) {
                __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_reg_load_flag 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_reg_load_flag;
                __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_inst 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_inst;
                __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc;
                __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena;
                __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_pc 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_pc;
                __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr;
                __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl;
                __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl;
                __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res;
                __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data;
                __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr;
            } else {
                __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_reg_load_flag 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag;
                __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_inst 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst;
                __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc;
                __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena;
                __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_pc 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc;
                __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr;
                __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl;
                __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl;
                __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__mem_data;
                __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res;
                __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr;
            }
        }
        vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_reg_load_flag 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_reg_load_flag;
        vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_inst 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_inst;
        vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc;
        if ((1U & (~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_valid)))) {
            if (vlSelf->ysyx_25060170_fishtailcore__DOT__ls_valid) {
                __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl;
            } else {
                __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_re;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl;
            }
        }
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc;
        vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_pc 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_pc;
        if ((1U & (~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena)))) {
            __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus;
        }
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus;
        if ((1U & (~ ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ready) 
                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_valid))))) {
            if (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall) {
                __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ls_csr_ena 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ls_csr_ena;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag;
            } else {
                __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ls_csr_ena 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl 
                    = (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena) 
                        << 6U) | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena) 
                                   << 5U) | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena) 
                                              << 4U) 
                                             | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_he71b3f47__0))));
                __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag;
            }
        }
        vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena;
        vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena;
        vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_csr_ena 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ls_csr_ena;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mcause 
            = (((0x342U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                   >> 3U)) ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data
                : ((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                    ? ((2U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                        ? 0xbU : 0U) : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mcause));
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mepc 
            = ((1U & (((0x341U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                       & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                          >> 3U)) | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                     >> 1U))) ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data
                : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mepc);
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
            = (0x3fffffffU & (((0x305U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                               & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                  >> 3U)) ? (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data 
                                             >> 2U)
                               : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mtvec_base));
        vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl;
        vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc;
        vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_load_flag;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag;
        if (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena) 
             & (0U != (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr)))) {
            __Vdlyvval__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32 
                = (((- (IData)((1U & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl)))) 
                    & vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res) 
                   | (((- (IData)((1U & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl) 
                                         >> 1U)))) 
                       & vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data) 
                      | ((- (IData)((0U != (0xfU & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))))) 
                         & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__read_csr_data)));
            __Vdlyvset__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32 = 1U;
            __Vdlyvdim0__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32 
                = vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr;
        }
    }
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena 
        = __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena;
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl 
        = __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl;
    if (__Vdlyvset__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v0) {
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0U] = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[1U] = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[2U] = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[3U] = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[4U] = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[5U] = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[6U] = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[7U] = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[8U] = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[9U] = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0xaU] = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0xbU] = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0xcU] = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0xdU] = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0xeU] = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0xfU] = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x10U] = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x11U] = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x12U] = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x13U] = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x14U] = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x15U] = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x16U] = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x17U] = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x18U] = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x19U] = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x1aU] = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x1bU] = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x1cU] = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x1dU] = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x1eU] = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x1fU] = 0U;
    }
    if (__Vdlyvset__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32) {
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[__Vdlyvdim0__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32] 
            = __Vdlyvval__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32;
    }
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl 
        = __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl;
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res 
        = __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res;
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data 
        = __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data;
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr 
        = __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr;
    if (vlSelf->rst) {
        __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr;
        __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res;
        __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc;
        __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr;
        __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data;
        vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc;
        __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl;
        vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_valid 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_valid;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl;
        vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag;
        vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ifu__DOT__pc = 0x80000000U;
    } else {
        if ((1U & (~ ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ready) 
                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_valid))))) {
            if (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall) {
                __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr 
                    = (0xfffU & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr));
                __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl;
            } else {
                __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr 
                    = (0xfffU & ((0U != (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_he71b3f47__0))
                                  ? vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm
                                  : 0U));
                __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2;
                __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl 
                    = vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl;
            }
        }
        vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data;
        vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc;
        vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl;
        vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_valid 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_valid;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl;
        vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag;
        vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ifu__DOT__pc 
            = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_stall)
                ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ifu__DOT__pc
                : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_predict)
                    ? vlSelf->ysyx_25060170_fishtailcore__DOT__bp_if_pc
                    : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_if_pc_jump)
                        ? ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_if_pc_jump)
                            ? (((0x42U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                                 ? vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1
                                 : vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc) 
                               + ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_jump)
                                   ? 4U : vlSelf->ysyx_25060170_fishtailcore__DOT__idu_imm))
                            : 0U) : (((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_stall)) 
                                      & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__if_valid))
                                      ? 0x80000000U
                                      : ((IData)(4U) 
                                         + vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_pc)))));
    }
    vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_pc 
        = __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_pc;
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1 
        = __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1;
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel 
        = __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel;
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel 
        = __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel;
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst 
        = __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst;
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr 
        = __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr;
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr 
        = __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr;
    vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
        = __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_inst;
    vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_valid 
        = __Vdly__ysyx_25060170_fishtailcore__DOT__ex_ls_valid;
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h5ab066c6__0 
        = ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_valid)) 
           & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_csr_ena));
    Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_csr_TOP(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus, 
                                                                                (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
                                                                                << 2U), vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mepc, vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mcause);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_ha77af658__0 
        = ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_valid)) 
           & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_load_flag));
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
    vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward 
        = (((- (IData)((1U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl)))) 
            & vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res) 
           | ((- (IData)((2U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl)))) 
              & vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data));
    vlSelf->__Vtableidx2 = ((6U & (vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res 
                                   << 1U)) | (IData)(vlSelf->rst));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask 
        = Vysyx_25060170_fishtailcore__ConstPool__TABLE_hf15ee880_0
        [vlSelf->__Vtableidx2];
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall 
        = (1U & ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ready)) 
                 | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_valid)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h72104a67__0 
        = (1U & (~ ((IData)(vlSelf->rst) | (0U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__bp_predict 
        = ((~ (IData)(vlSelf->rst)) & ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal)) 
                                       & (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_bxx) 
                                           & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state) 
                                              | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state))) 
                                          | ((~ ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr) 
                                                 & (~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wbu_forward_en)))) 
                                             & ((~ 
                                                 ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_jump) 
                                                  & (~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_branch)))) 
                                                & ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_jump)) 
                                                   & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_branch)))))));
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
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_valid 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_valid) 
           | ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re) 
              & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_mem__DOT__data_ok)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h5a345cf6__0 
        = ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_valid)) 
           & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_hf3b640d6__0 
        = ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_valid)) 
           & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena));
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
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_re 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h72104a67__0) 
           & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl) 
              >> 3U));
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_we 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h72104a67__0) 
           & (~ ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl) 
                 >> 3U)));
    if (vlSelf->rst) {
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_raddr = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_data = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__bp_if_pc = 0x80000000U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state;
        vlSelf->ysyx_25060170_fishtailcore__DOT__id_jump 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__id_jump;
        vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc;
        vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena = 0U;
    } else {
        vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_raddr 
            = vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res;
        if ((0x2aU != (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
            if (((0xa8U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                 | (0x94U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))) {
                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena = 1U;
                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena = 1U;
                vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena 
                    = (0U != (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr));
            } else {
                if ((1U & (~ ((0x25U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                              | (0xc8U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                    if ((1U & (~ ((0x4aU == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                  | (0xa4U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                        if ((0x54U != (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
                            vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena = 0U;
                        }
                    }
                }
                if (((0x25U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
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
                    if ((1U & (~ ((0x4aU == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                  | (0xa4U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena 
                            = (0x54U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc));
                    }
                }
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
        vlSelf->ysyx_25060170_fishtailcore__DOT__bp_if_pc 
            = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal)
                ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc
                : (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_bxx) 
                    & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state) 
                       | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state)))
                    ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc
                    : (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr) 
                        & (~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wbu_forward_en)))
                        ? (0xfffffffeU & vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc)
                        : (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_jump) 
                            & (~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_branch)))
                            ? ((IData)(4U) + vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc)
                            : (((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_jump)) 
                                & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_branch))
                                ? (vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc 
                                   + vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm)
                                : (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr) 
                                    & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wbu_forward_en))
                                    ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc
                                    : ((IData)(4U) 
                                       + vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_pc)))))));
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state;
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state;
        vlSelf->ysyx_25060170_fishtailcore__DOT__id_jump 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__id_jump;
        vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc;
        vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm;
    }
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_he71b3f47__0 
        = (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena) 
            << 3U) | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena) 
                       << 2U) | (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena) 
                                  << 1U) | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd9b03bc2__0 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui) 
           | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc));
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
    vlSelf->ysyx_25060170_fishtailcore__DOT__mem_rd_data_forward 
        = (((- (IData)((1U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl)))) 
            & vlSelf->ysyx_25060170_fishtailcore__DOT__mem_data) 
           | ((- (IData)((2U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl)))) 
              & vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res));
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
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h53258981__0 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__data_ok) 
           & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_mem_re) 
              | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_we)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_pc 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_if_jal_jalr)
            ? vlSelf->ysyx_25060170_fishtailcore__DOT__bp_if_pc
            : vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ifu__DOT__pc);
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
    vlSelf->ysyx_25060170_fishtailcore__DOT__ls_valid 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_valid) 
           | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h53258981__0));
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
        Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read_TOP(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_raddr, vlSelf->__Vtask_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__0__rdata, 4U, 2U);
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__mem_data 
            = vlSelf->__Vtask_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__0__rdata;
    } else {
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__mem_data = 0U;
    }
    if (vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_we) {
        Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_write_TOP(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_raddr, vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_data, (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen));
    }
    Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read_TOP(vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_pc, vlSelf->__Vtask_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__2__rdata, 4U, 1U);
    vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
        = vlSelf->__Vtask_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__2__rdata;
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
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_bxx 
        = ((~ (IData)(vlSelf->rst)) & (0x60U == (0x7cU 
                                                 & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal 
        = ((~ (IData)(vlSelf->rst)) & (IData)((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst))));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wbu_forward_en 
        = ((0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                     >> 7U)) == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr 
        = ((~ (IData)(vlSelf->rst)) & (IData)((0x67U 
                                               == (0x7fU 
                                                   & vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst))));
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
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jal_jalr_temp 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal) 
           | (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr));
    if (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr) {
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgTmp_h15760a56__0 
            = vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wbu_forward_en;
        vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr 
            = (0x1fU & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                        >> 0xfU));
    } else {
        vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgTmp_h15760a56__0 = 0U;
        vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr = 0U;
    }
    vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res 
        = (vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res 
           | (((- (IData)((0U != (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_he71b3f47__0)))) 
               & vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1) 
              | ((- (IData)(((0x94U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                             | ((0xc8U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                | (0xa4U == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) 
                 & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr))));
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
    vlSelf->__VdfgTmp_h46471f4e__0 = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr) 
                                      & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                                         == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr)));
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
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc 
        = (((IData)(vlSelf->__VdfgTmp_h46471f4e__0)
             ? vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
             : (((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr) 
                 & ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr) 
                    == (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))
                 ? vlSelf->ysyx_25060170_fishtailcore__DOT__exu_res
                 : ((IData)(vlSelf->__VdfgTmp_h46471f4e__0)
                     ? vlSelf->ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
                     : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgTmp_h15760a56__0)
                         ? vlSelf->ysyx_25060170_fishtailcore__DOT__wb_rd_data_forward
                         : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr)
                             ? (((~ (IData)(vlSelf->rst)) 
                                 & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jalr))
                                 ? vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                [vlSelf->ysyx_25060170_fishtailcore__DOT__bp_rs1_addr]
                                 : 0U) : vlSelf->ysyx_25060170_fishtailcore__DOT__if_id_pc))))) 
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
               : ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_bxx)
                   ? (((- (IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                   >> 0x1fU))) << 0xdU) 
                      | ((0x1000U & (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                     >> 0x13U)) | (
                                                   (0x800U 
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
                                ? (((- (IData)((vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelf->ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                >> 0x14U))
                                : 4U)))));
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
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2 
        = (vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1 
           < vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op2);
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2 
        = (1U & (((vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1 
                   ^ vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op2) 
                  >> 0x1fU) ? (vlSelf->ysyx_25060170_fishtailcore__DOT__idu_op1 
                               >> 0x1fU) : (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2)));
    vlSelf->ysyx_25060170_fishtailcore__DOT__ex_branch 
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
    vlSelf->ysyx_25060170_fishtailcore__DOT__id_if_pc_jump 
        = ((IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__ex_branch) 
           ^ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_jump));
    vlSelf->ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if_id_reg__DOT__flush 
        = ((~ (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_stall)) 
           & (IData)(vlSelf->ysyx_25060170_fishtailcore__DOT__id_if_pc_jump));
}

void Vysyx_25060170_fishtailcore___024root___eval_nba(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_25060170_fishtailcore___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void Vysyx_25060170_fishtailcore___024root___eval_triggers__ico(Vysyx_25060170_fishtailcore___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___dump_triggers__ico(Vysyx_25060170_fishtailcore___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_25060170_fishtailcore___024root___eval_triggers__act(Vysyx_25060170_fishtailcore___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___dump_triggers__act(Vysyx_25060170_fishtailcore___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___dump_triggers__nba(Vysyx_25060170_fishtailcore___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25060170_fishtailcore___024root___eval(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vysyx_25060170_fishtailcore___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vysyx_25060170_fishtailcore___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/core/ysyx_25060170_fishtailcore.v", 3, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vysyx_25060170_fishtailcore___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vysyx_25060170_fishtailcore___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vysyx_25060170_fishtailcore___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/core/ysyx_25060170_fishtailcore.v", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vysyx_25060170_fishtailcore___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vysyx_25060170_fishtailcore___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/core/ysyx_25060170_fishtailcore.v", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vysyx_25060170_fishtailcore___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_25060170_fishtailcore___024root___eval_debug_assertions(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
