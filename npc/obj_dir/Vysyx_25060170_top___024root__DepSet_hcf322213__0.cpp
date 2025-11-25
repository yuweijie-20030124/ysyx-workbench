// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25060170_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25060170_top___024root.h"

extern const VlUnpacked<CData/*3:0*/, 8> Vysyx_25060170_top__ConstPool__TABLE_hf15ee880_0;

VL_INLINE_OPT void Vysyx_25060170_top___024root___ico_sequent__TOP__0(Vysyx_25060170_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->ysyx_25060170_top__DOT__inst_finish_o 
            = ((1U == (IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_wbctl_o)) 
               | (2U == (IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_wbctl_o)));
    }
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h0e831b4e__0 
        = (1U & (~ ((IData)(vlSelf->rst) | (0U == (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o)))));
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
    vlSelf->__Vtableidx1 = ((6U & (vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_exu_res_o 
                                   << 1U)) | (IData)(vlSelf->rst));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_lsu__DOT__sb_mask 
        = Vysyx_25060170_top__ConstPool__TABLE_hf15ee880_0
        [vlSelf->__Vtableidx1];
    if (vlSelf->rst) {
        vlSelf->ysyx_25060170_top__DOT__dpic_lsu_raddr = 0U;
        vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__wb_data_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__alu_res = 0U;
        vlSelf->ysyx_25060170_top__DOT__dpic_lsu_wlen = 0U;
    } else {
        vlSelf->ysyx_25060170_top__DOT__dpic_lsu_raddr 
            = vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_exu_res_o;
        if ((1U == (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))) {
            vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_o 
                = ((vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_store_data_o 
                    << 0x18U) | ((0xff0000U & (vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_store_data_o 
                                               << 0x10U)) 
                                 | ((0xff00U & (vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_store_data_o 
                                                << 8U)) 
                                    | (0xffU & vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_store_data_o))));
            vlSelf->ysyx_25060170_top__DOT__dpic_lsu_wlen 
                = vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_lsu__DOT__sb_mask;
        } else if ((2U == (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))) {
            vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_o 
                = ((vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_store_data_o 
                    << 0x10U) | (0xffffU & vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_store_data_o));
            vlSelf->ysyx_25060170_top__DOT__dpic_lsu_wlen 
                = ((IData)(vlSelf->rst) ? 0U : ((0U 
                                                 == 
                                                 (3U 
                                                  & vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_exu_res_o))
                                                 ? 3U
                                                 : 
                                                ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_exu_res_o))
                                                  ? 0xcU
                                                  : 0U)));
        } else if ((4U == (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))) {
            vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_o 
                = vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_store_data_o;
            vlSelf->ysyx_25060170_top__DOT__dpic_lsu_wlen = 0xfU;
        } else {
            vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_o = 0U;
            vlSelf->ysyx_25060170_top__DOT__dpic_lsu_wlen = 0U;
        }
        vlSelf->ysyx_25060170_top__DOT__wb_data_o = 
            ((1U == (IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_wbctl_o))
              ? vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_data_o
              : ((2U == (IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_wbctl_o))
                  ? vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_exu_res_o
                  : 0U));
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
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7773c72a__0 
        = ((~ (IData)(vlSelf->rst)) & (0x38U == (0x7cU 
                                                 & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst)));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h70f4116c__0 
        = ((~ (IData)(vlSelf->rst)) & (0x18U == (0x7cU 
                                                 & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst)));
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
    vlSelf->ysyx_25060170_top__DOT__dpic_lsu_re = ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h0e831b4e__0) 
                                                   & ((IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o) 
                                                      >> 3U));
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

void Vysyx_25060170_top___024root___eval_ico(Vysyx_25060170_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vysyx_25060170_top___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vysyx_25060170_top___024root___eval_act(Vysyx_25060170_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_act\n"); );
}

void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_csr_TOP(IData/*31:0*/ csr_mstatus, IData/*31:0*/ csr_mtvec, IData/*31:0*/ csr_mepc, IData/*31:0*/ csr_mcause);
void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_regs_TOP(IData/*31:0*/ regs0, IData/*31:0*/ regs1, IData/*31:0*/ regs2, IData/*31:0*/ regs3, IData/*31:0*/ regs4, IData/*31:0*/ regs5, IData/*31:0*/ regs6, IData/*31:0*/ regs7, IData/*31:0*/ regs8, IData/*31:0*/ regs9, IData/*31:0*/ regs10, IData/*31:0*/ regs11, IData/*31:0*/ regs12, IData/*31:0*/ regs13, IData/*31:0*/ regs14, IData/*31:0*/ regs15, IData/*31:0*/ regs16, IData/*31:0*/ regs17, IData/*31:0*/ regs18, IData/*31:0*/ regs19, IData/*31:0*/ regs20, IData/*31:0*/ regs21, IData/*31:0*/ regs22, IData/*31:0*/ regs23, IData/*31:0*/ regs24, IData/*31:0*/ regs25, IData/*31:0*/ regs26, IData/*31:0*/ regs27, IData/*31:0*/ regs28, IData/*31:0*/ regs29, IData/*31:0*/ regs30, IData/*31:0*/ regs31);

VL_INLINE_OPT void Vysyx_25060170_top___024root___nba_sequent__TOP__0(Vysyx_25060170_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__ysyx_25060170_top__DOT__id_ex_reg_valid_o;
    __Vdly__ysyx_25060170_top__DOT__id_ex_reg_valid_o = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_top__DOT__ex_lsu_valid_i;
    __Vdly__ysyx_25060170_top__DOT__ex_lsu_valid_i = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs__v0;
    __Vdlyvset__ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs__v32;
    __Vdlyvdim0__ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs__v32 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs__v32;
    __Vdlyvval__ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs__v32 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs__v32;
    __Vdlyvset__ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs__v32 = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus;
    __Vdly__ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus = 0;
    // Body
    __Vdly__ysyx_25060170_top__DOT__ex_lsu_valid_i 
        = vlSelf->ysyx_25060170_top__DOT__ex_lsu_valid_i;
    __Vdly__ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus 
        = vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus;
    __Vdly__ysyx_25060170_top__DOT__id_ex_reg_valid_o 
        = vlSelf->ysyx_25060170_top__DOT__id_ex_reg_valid_o;
    __Vdlyvset__ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs__v0 = 0U;
    __Vdlyvset__ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs__v32 = 0U;
    vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_valid_o 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_lsu_valid_i));
    if (vlSelf->rst) {
        __Vdly__ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus 
            = __Vdly__ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus;
        __Vdly__ysyx_25060170_top__DOT__id_ex_reg_valid_o = 0U;
        __Vdly__ysyx_25060170_top__DOT__id_ex_reg_valid_o = 0U;
        __Vdlyvset__ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs__v0 = 1U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mepc = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mtvec_base = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mcause = 0U;
        vlSelf->ysyx_25060170_top__DOT__id_ex_reg_imm_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_rd_ena_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__id_ex_reg_pc_o = 0x80000000U;
        vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_wbctl_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_data_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_exu_res_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_store_data_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__ex_pcsrc_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_rd_ena_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_rd_addr_o = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena)))) {
            __Vdly__ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus 
                = vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus;
        }
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus 
            = __Vdly__ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus;
        if (vlSelf->ysyx_25060170_top__DOT__if_id_reg_ready) {
            __Vdly__ysyx_25060170_top__DOT__id_ex_reg_valid_o = 1U;
            vlSelf->ysyx_25060170_top__DOT__id_ex_reg_imm_o 
                = vlSelf->ysyx_25060170_top__DOT__id_imm_o;
            vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_rd_ena_o 
                = vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__csr_rd_ena;
            vlSelf->ysyx_25060170_top__DOT__id_ex_reg_pc_o 
                = ((IData)(vlSelf->rst) ? 0U : vlSelf->ysyx_25060170_top__DOT__ifu_idu_pc);
        } else if (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_valid_o) {
            __Vdly__ysyx_25060170_top__DOT__id_ex_reg_valid_o = 0U;
        } else if (((~ (IData)(vlSelf->ysyx_25060170_top__DOT__if_id_reg_ready)) 
                    & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_valid_o))) {
            __Vdly__ysyx_25060170_top__DOT__id_ex_reg_valid_o = 0U;
        }
        if (((IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_rd_ena_o) 
             & (0U != (IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_rd_addr_o)))) {
            __Vdlyvval__ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs__v32 
                = vlSelf->ysyx_25060170_top__DOT__wb_data_o;
            __Vdlyvset__ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs__v32 = 1U;
            __Vdlyvdim0__ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs__v32 
                = vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_rd_addr_o;
        }
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mepc 
            = ((1U & (((0x341U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_addr_o)) 
                       & ((IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o) 
                          >> 2U)) | ((IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o) 
                                     >> 1U))) ? vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_write_csr_data_o
                : vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mepc);
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
            = (0x3fffffffU & (((0x305U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_addr_o)) 
                               & ((IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o) 
                                  >> 2U)) ? (vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_write_csr_data_o 
                                             >> 2U)
                               : vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mtvec_base));
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mcause 
            = (((0x342U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_addr_o)) 
                & ((IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o) 
                   >> 2U)) ? vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_write_csr_data_o
                : ((2U & (IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o))
                    ? vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_mcause_value_o
                    : vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mcause));
        if (vlSelf->ysyx_25060170_top__DOT__ex_lsu_valid_i) {
            vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_wbctl_o 
                = vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_wb_ctl_o;
            vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_data_o 
                = ((IData)(vlSelf->ysyx_25060170_top__DOT__dpic_lsu_re)
                    ? ((IData)(vlSelf->rst) ? 0U : 
                       ((8U & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                         ? ((4U & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                             ? ((2U & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                 ? ((1U & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                     ? 0U : (0xffffU 
                                             & vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i))
                                 : ((1U & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                     ? (0xffU & vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i)
                                     : 0U)) : ((2U 
                                                & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                                    ? vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i
                                                    : 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i 
                                                                    >> 0xfU)))) 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i)))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o))
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i 
                                                                    >> 7U)))) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i))
                                                    : 0U)))
                         : 0U)) : 0U);
            vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_exu_res_o 
                = vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_exu_res_o;
            vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_rd_ena_o 
                = vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_rd_ena_o;
            vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_rd_addr_o 
                = vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_rd_addr_o;
        }
        if (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_valid_o) {
            vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_store_data_o 
                = vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o;
            vlSelf->ysyx_25060170_top__DOT__ex_pcsrc_o 
                = ((IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_jump_o) 
                   | (((IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_branch_o) 
                       & ((0xeU == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                           ? (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                              == vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o)
                           : ((0x1cU == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                               ? (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                  != vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o)
                               : ((0xe0U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                   ? (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                      < vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o)
                                   : ((0xdU == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                       ? (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                                          >= vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o)
                                       : ((0x38U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))
                                           ? (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_lt_op2)
                                           : ((0x70U 
                                               == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o)) 
                                              & (~ (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_lt_op2))))))))) 
                      | (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_h485df6cb__0)));
        }
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_valid_o) {
            __Vdly__ysyx_25060170_top__DOT__ex_lsu_valid_i = 1U;
        } else if (vlSelf->ysyx_25060170_top__DOT__ex_lsu_valid_i) {
            __Vdly__ysyx_25060170_top__DOT__ex_lsu_valid_i = 0U;
        }
        if (vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena) {
            vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp 
                = vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mpp_set;
            vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie 
                = vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mpie_set;
            vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie 
                = vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mie_set;
        }
    }
    Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_csr_TOP(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus, 
                                                                                (vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
                                                                                << 2U), vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mepc, vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mcause);
    if (vlSelf->rst) {
        vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_mcause_value_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_write_csr_data_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__ex_lsu_valid_i 
            = __Vdly__ysyx_25060170_top__DOT__ex_lsu_valid_i;
        vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_addr_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_wb_ctl_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__wb_data_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_exu_res_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__id_ex_reg_jump_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__id_ex_reg_branch_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o = 0U;
    } else {
        if (vlSelf->ysyx_25060170_top__DOT__ex_lsu_valid_i) {
            vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_mcause_value_o 
                = vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_mcause_value_o;
            vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_write_csr_data_o 
                = vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_write_csr_data_o;
            vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_csr_ctl_o 
                = vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_csr_ctl_o;
        }
        vlSelf->ysyx_25060170_top__DOT__ex_lsu_valid_i 
            = __Vdly__ysyx_25060170_top__DOT__ex_lsu_valid_i;
        if (vlSelf->ysyx_25060170_top__DOT__if_id_reg_ready) {
            vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_addr_o 
                = (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                   >> 0x14U);
            vlSelf->ysyx_25060170_top__DOT__id_ex_reg_jump_o 
                = vlSelf->ysyx_25060170_top__DOT__id_jump_o;
            vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o 
                = vlSelf->ysyx_25060170_top__DOT__id_alusrc_o;
            vlSelf->ysyx_25060170_top__DOT__id_ex_reg_branch_o 
                = vlSelf->ysyx_25060170_top__DOT__id_branch_o;
            if (vlSelf->rst) {
                vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o = 0U;
                vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o = 0U;
            } else {
                vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
                    = ((IData)(vlSelf->ysyx_25060170_top__DOT__rs1_ena)
                        ? (((~ (IData)(vlSelf->rst)) 
                            & (IData)(vlSelf->ysyx_25060170_top__DOT__rs1_ena))
                            ? vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                           [((IData)(vlSelf->ysyx_25060170_top__DOT__rs1_ena)
                              ? (0x1fU & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                          >> 0xfU))
                              : 0U)] : 0U) : (((0xa0U 
                                                == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o)) 
                                               | (0x21U 
                                                  == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o)))
                                               ? vlSelf->ysyx_25060170_top__DOT__ifu_idu_pc
                                               : ((
                                                   ((0x94U 
                                                     == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o)) 
                                                    | (0xc8U 
                                                       == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))) 
                                                   | (0xa4U 
                                                      == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o)))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                                      >> 0xfU))
                                                   : 0U)));
                vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o 
                    = ((IData)(vlSelf->ysyx_25060170_top__DOT__rs2_ena)
                        ? (((~ (IData)(vlSelf->rst)) 
                            & (IData)(vlSelf->ysyx_25060170_top__DOT__rs2_ena))
                            ? vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs
                           [((IData)(vlSelf->ysyx_25060170_top__DOT__rs2_ena)
                              ? (0x1fU & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                          >> 0x14U))
                              : 0U)] : 0U) : (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77eb01fa__0) 
                                               | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hf62a170c__0) 
                                                  | ((IData)(vlSelf->ysyx_25060170_top__DOT__id_branch_o) 
                                                     | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h70c0839c__0) 
                                                        | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h70f4116c__0) 
                                                           | ((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h77acc5df__0) 
                                                              | (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_hd9b03bc2__0)))))))
                                               ? vlSelf->ysyx_25060170_top__DOT__id_imm_o
                                               : 0U));
            }
        }
        if (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_valid_o) {
            vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_wb_ctl_o 
                = vlSelf->ysyx_25060170_top__DOT__id_ex_reg_wbctl_o;
            vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o 
                = vlSelf->ysyx_25060170_top__DOT__id_ex_reg_lsctl_o;
            vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_exu_res_o 
                = ((0U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_ctl_o))
                    ? vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__alu_res
                    : vlSelf->ysyx_25060170_top__DOT__read_csr_data);
        }
        vlSelf->ysyx_25060170_top__DOT__wb_data_o = 
            ((1U == (IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_wbctl_o))
              ? vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_data_o
              : ((2U == (IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_wbctl_o))
                  ? vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_exu_res_o
                  : 0U));
    }
    if (__Vdlyvset__ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs__v0) {
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[0U] = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[1U] = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[2U] = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[3U] = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[4U] = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[5U] = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[6U] = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[7U] = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[8U] = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[9U] = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[0xaU] = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[0xbU] = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[0xcU] = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[0xdU] = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[0xeU] = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[0xfU] = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[0x10U] = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[0x11U] = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[0x12U] = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[0x13U] = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[0x14U] = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[0x15U] = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[0x16U] = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[0x17U] = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[0x18U] = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[0x19U] = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[0x1aU] = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[0x1bU] = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[0x1cU] = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[0x1dU] = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[0x1eU] = 0U;
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[0x1fU] = 0U;
    }
    if (__Vdlyvset__ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs__v32) {
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs[__Vdlyvdim0__ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs__v32] 
            = __Vdlyvval__ysyx_25060170_top__DOT__u_ysyx_25060170_regfile__DOT__regs__v32;
    }
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_csr__DOT__mstatus_rd 
        = ((0x300U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_addr_o)) 
           & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_rd_ena_o));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h0e831b4e__0 
        = (1U & (~ ((IData)(vlSelf->rst) | (0U == (IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o)))));
    vlSelf->__Vtableidx1 = ((6U & (vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_exu_res_o 
                                   << 1U)) | (IData)(vlSelf->rst));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_lsu__DOT__sb_mask 
        = Vysyx_25060170_top__ConstPool__TABLE_hf15ee880_0
        [vlSelf->__Vtableidx1];
    if (vlSelf->rst) {
        vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_rd_ena_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_rd_addr_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_mcause_value_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_write_csr_data_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_csr_ctl_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__id_ex_reg_wbctl_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__id_ex_reg_lsctl_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__dpic_lsu_raddr = 0U;
    } else {
        if (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_valid_o) {
            vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_rd_ena_o 
                = vlSelf->ysyx_25060170_top__DOT__id_ex_reg_rd_ena_o;
            vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_rd_addr_o 
                = vlSelf->ysyx_25060170_top__DOT__id_ex_reg_rd_addr_o;
            vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_mcause_value_o 
                = vlSelf->ysyx_25060170_top__DOT__exu_mcause_value;
            vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_write_csr_data_o 
                = vlSelf->ysyx_25060170_top__DOT__exu_write_csr_data;
            vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_csr_ctl_o 
                = vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_ctl_o;
        }
        if (vlSelf->ysyx_25060170_top__DOT__if_id_reg_ready) {
            vlSelf->ysyx_25060170_top__DOT__id_ex_reg_wbctl_o 
                = vlSelf->ysyx_25060170_top__DOT__id_wbctl_o;
            vlSelf->ysyx_25060170_top__DOT__id_ex_reg_lsctl_o 
                = (0xfU & ((1U & (- (IData)((0x41U 
                                             == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))))) 
                           | ((2U & (- (IData)((0x82U 
                                                == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))))) 
                              | ((4U & (- (IData)((0x81U 
                                                   == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))))) 
                                 | ((5U & (- (IData)(
                                                     (7U 
                                                      == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))))) 
                                    | ((9U & (- (IData)(
                                                        (0x1aU 
                                                         == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))))) 
                                       | ((0xaU & (- (IData)(
                                                             (0x34U 
                                                              == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))))) 
                                          | ((0xbU 
                                              & (- (IData)(
                                                           (0x68U 
                                                            == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))))) 
                                             | ((0xcU 
                                                 & (- (IData)(
                                                              (0xd0U 
                                                               == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))))) 
                                                | ((0xdU 
                                                    & (- (IData)(
                                                                 (0xbU 
                                                                  == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))))) 
                                                   | ((0xeU 
                                                       & (- (IData)(
                                                                    (0x16U 
                                                                     == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o))))) 
                                                      | (- (IData)(
                                                                   (0x2cU 
                                                                    == (IData)(vlSelf->ysyx_25060170_top__DOT__id_alusrc_o)))))))))))))));
        }
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
        vlSelf->ysyx_25060170_top__DOT__dpic_lsu_raddr 
            = vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_exu_res_o;
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->ysyx_25060170_top__DOT__inst_finish_o 
            = ((1U == (IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_wbctl_o)) 
               | (2U == (IData)(vlSelf->ysyx_25060170_top__DOT__lsu_wbu_reg_wbctl_o)));
    }
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
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2 
        = (vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op1_o 
           - vlSelf->ysyx_25060170_top__DOT__id_ex_reg_op2_o);
    vlSelf->ysyx_25060170_top__DOT__exu_mcause_value = 0U;
    vlSelf->ysyx_25060170_top__DOT__id_ex_reg_valid_o 
        = __Vdly__ysyx_25060170_top__DOT__id_ex_reg_valid_o;
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
    if ((0x2aU == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o))) {
        vlSelf->ysyx_25060170_top__DOT__exu_mcause_value = 0xbU;
        vlSelf->ysyx_25060170_top__DOT__exu_write_csr_data 
            = vlSelf->ysyx_25060170_top__DOT__id_ex_reg_pc_o;
    } else {
        if ((1U & (~ ((0xa8U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o)) 
                      | (0x94U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o)))))) {
            if ((1U & (~ ((0x25U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o)) 
                          | (0xc8U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o)))))) {
                if ((1U & (~ ((0x4aU == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o)) 
                              | (0xa4U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o)))))) {
                    vlSelf->ysyx_25060170_top__DOT__exu_mcause_value = 0U;
                }
            }
        }
        vlSelf->ysyx_25060170_top__DOT__exu_write_csr_data 
            = (((0xa8U == (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_alusrc_o)) 
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
                        : 0U)));
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
        vlSelf->ysyx_25060170_top__DOT__id_ex_reg_rd_ena_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__id_ex_reg_rd_addr_o = 0U;
        vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_ctl_o = 0U;
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
        if (vlSelf->ysyx_25060170_top__DOT__if_id_reg_ready) {
            if (vlSelf->ysyx_25060170_top__DOT__rd_ena) {
                vlSelf->ysyx_25060170_top__DOT__id_ex_reg_rd_ena_o = 1U;
                vlSelf->ysyx_25060170_top__DOT__id_ex_reg_rd_addr_o 
                    = (0x1fU & (vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
                                >> 7U));
            } else {
                vlSelf->ysyx_25060170_top__DOT__id_ex_reg_rd_ena_o = 0U;
                vlSelf->ysyx_25060170_top__DOT__id_ex_reg_rd_addr_o = 0U;
            }
            vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_ctl_o 
                = (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__csr_wr_ena) 
                    << 2U) | (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__ecall_ena) 
                               << 1U) | (IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__mret_ena)));
        }
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->ysyx_25060170_top__DOT__if_id_reg_ready = 1U;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT__alu_res = 0U;
        vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst = 0U;
    } else {
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
        vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst 
            = vlSelf->ysyx_25060170_top__DOT__dpic_ifu_inst;
    }
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_h485df6cb__0 
        = (IData)((0U != (3U & (IData)(vlSelf->ysyx_25060170_top__DOT__id_ex_reg_csr_ctl_o))));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h7773c72a__0 
        = ((~ (IData)(vlSelf->rst)) & (0x38U == (0x7cU 
                                                 & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst)));
    vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_idu__DOT__decode__DOT____VdfgTmp_h70f4116c__0 
        = ((~ (IData)(vlSelf->rst)) & (0x18U == (0x7cU 
                                                 & vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst)));
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

void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__pc_inst_end_TOP(IData/*31:0*/ thepc_data, IData/*31:0*/ the_inst);

VL_INLINE_OPT void Vysyx_25060170_top___024root___nba_sequent__TOP__1(Vysyx_25060170_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___nba_sequent__TOP__1\n"); );
    // Body
    Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__pc_inst_end_TOP(vlSelf->ysyx_25060170_top__DOT__ifu_idu_pc, vlSelf->ysyx_25060170_top__DOT__dpic_ifu_inst);
}

void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata, CData/*7:0*/ rlen);
void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wlen);

VL_INLINE_OPT void Vysyx_25060170_top___024root___nba_sequent__TOP__2(Vysyx_25060170_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___nba_sequent__TOP__2\n"); );
    // Init
    IData/*31:0*/ __Vtask_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__0__rdata;
    __Vtask_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__0__rdata = 0;
    // Body
    if (vlSelf->ysyx_25060170_top__DOT__dpic_lsu_re) {
        Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read_TOP(vlSelf->ysyx_25060170_top__DOT__dpic_lsu_raddr, __Vtask_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__0__rdata, 4U);
        vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_i 
            = __Vtask_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__0__rdata;
    }
    if (((IData)(vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h0e831b4e__0) 
         & (~ ((IData)(vlSelf->ysyx_25060170_top__DOT__ex_ls_reg_ls_ctl_o) 
               >> 3U)))) {
        Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__pmem_write_TOP(vlSelf->ysyx_25060170_top__DOT__dpic_lsu_raddr, vlSelf->ysyx_25060170_top__DOT__dpic_lsu_data_o, (IData)(vlSelf->ysyx_25060170_top__DOT__dpic_lsu_wlen));
    }
}

void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__set_npc_exit_TOP(IData/*31:0*/ pc, IData/*31:0*/ halt_ret);
void Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__magic_instruction_TOP();

VL_INLINE_OPT void Vysyx_25060170_top___024root___nba_sequent__TOP__3(Vysyx_25060170_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->ysyx_25060170_top__DOT__ifu_idu_pc = ((IData)(vlSelf->rst)
                                                   ? 0U
                                                   : vlSelf->ysyx_25060170_top__DOT__u_ysyx_25060170_if_id_reg__DOT__pc_next);
    Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read_TOP(vlSelf->ysyx_25060170_top__DOT__ifu_idu_pc, vlSelf->__Vtask_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__2__rdata, 4U);
    vlSelf->ysyx_25060170_top__DOT__dpic_ifu_inst = vlSelf->__Vtask_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__2__rdata;
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
    if ((0x100073U == vlSelf->ysyx_25060170_top__DOT__dpic_ifu_inst)) {
        Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__set_npc_exit_TOP(vlSelf->ysyx_25060170_top__DOT__ifu_idu_pc, 0U);
    } else if ((0x40000033U == vlSelf->ysyx_25060170_top__DOT__ifu_idu_inst)) {
        Vysyx_25060170_top___024root____Vdpiimwrap_ysyx_25060170_top__DOT__u_ysyx_25060170_DPIC__DOT__magic_instruction_TOP();
    }
}

void Vysyx_25060170_top___024root___eval_nba(Vysyx_25060170_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_25060170_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vysyx_25060170_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_25060170_top___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_25060170_top___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

void Vysyx_25060170_top___024root___eval_triggers__ico(Vysyx_25060170_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_top___024root___dump_triggers__ico(Vysyx_25060170_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_25060170_top___024root___eval_triggers__act(Vysyx_25060170_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_top___024root___dump_triggers__act(Vysyx_25060170_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_top___024root___dump_triggers__nba(Vysyx_25060170_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25060170_top___024root___eval(Vysyx_25060170_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<3> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vysyx_25060170_top___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vysyx_25060170_top___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/core/ysyx_25060170_top.v", 5, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vysyx_25060170_top___024root___eval_ico(vlSelf);
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
            Vysyx_25060170_top___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vysyx_25060170_top___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/core/ysyx_25060170_top.v", 5, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vysyx_25060170_top___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vysyx_25060170_top___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/core/ysyx_25060170_top.v", 5, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vysyx_25060170_top___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_25060170_top___024root___eval_debug_assertions(Vysyx_25060170_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25060170_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
