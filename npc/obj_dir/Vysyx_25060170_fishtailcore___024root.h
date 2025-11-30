// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_25060170_fishtailcore.h for the primary calling header

#ifndef VERILATED_VYSYX_25060170_FISHTAILCORE___024ROOT_H_
#define VERILATED_VYSYX_25060170_FISHTAILCORE___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_25060170_fishtailcore__Syms;

class Vysyx_25060170_fishtailcore___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__bp_predict;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__id_if_pc_jump;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__id_ex_flush;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__id_jump;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__ls_csr_ena;
        CData/*4:0*/ ysyx_25060170_fishtailcore__DOT__idu_rs1_addr;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__idu_rs1_ena;
        CData/*4:0*/ ysyx_25060170_fishtailcore__DOT__idu_rs2_addr;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__idu_rs2_ena;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__idu_rd_ena;
        CData/*7:0*/ ysyx_25060170_fishtailcore__DOT__idu_alusrc;
        CData/*1:0*/ ysyx_25060170_fishtailcore__DOT__idu_wbctl;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__idu_load_flag;
        CData/*7:0*/ ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc;
        CData/*1:0*/ ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel;
        CData/*2:0*/ ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena;
        CData/*4:0*/ ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr;
        CData/*4:0*/ ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr;
        CData/*3:0*/ ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl;
        CData/*1:0*/ ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag;
        CData/*3:0*/ ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl;
        CData/*1:0*/ ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl;
        CData/*6:0*/ ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena;
        CData/*4:0*/ ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__ls_dpic_re;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__ls_dpic_we;
        CData/*7:0*/ ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen;
        CData/*1:0*/ ysyx_25060170_fishtailcore__DOT__ls_wb_reg_wb_ctl;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__ls_wb_reg_rd_ena;
        CData/*4:0*/ ysyx_25060170_fishtailcore__DOT__ls_wb_reg_rd_addr;
        CData/*6:0*/ ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_ctl;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_not_taken_state;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_not_taken_state;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_bxx;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if_id_reg__DOT__flush;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__branch;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_h068a7135__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgTmp_hd71610cc__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi;
    };
    struct {
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7773c72a__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70f4116c__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h70c0839c__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77488b95__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77eb01fa__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h77acc5df__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd9b03bc2__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h489c6f46__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he80da865__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc65f4c50__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h1167153d__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h29152e89__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_heac6e652__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7855af38__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2bc0716a__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h6fd23990__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3c59122__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h03cab0f1__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7b49f5a3__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h36e9ef3c__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_he2955f6b__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h4c825e07__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h3b427111__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hb3ea081b__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hd7439362__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h7a82fdcc__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h41ceee20__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hc1b77381__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_ha08c85bd__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5a06bcf6__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2e86cea5__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h84595378__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h48d21361__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5f1400db__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hed177170__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hbd811272__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h893e271f__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h177d4809__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hebf21d33__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h8893bd80__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h5766d1a7__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h2696076e__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h100d9d21__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hcfecf178__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_hfbecd367__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h91eba5f9__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h712d9166__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_h88fffb3a__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena;
        CData/*3:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgTmp_he71b3f47__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__data_ok;
        CData/*3:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h53258981__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgTmp_h72104a67__0;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie;
    };
    struct {
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie;
        CData/*1:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mie_set;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mpie_set;
        CData/*1:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mpp_set;
        CData/*0:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__delay;
        CData/*2:0*/ __Vtableidx1;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr;
        SData/*11:0*/ ysyx_25060170_fishtailcore__DOT__ls_wb_reg_csr_addr;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__bp_if_pc;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__if_id_reg_pc;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__if_id_reg_inst;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__idu_op1;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__idu_op2;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__idu_imm;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__exu_res;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__dpic_ls_data;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__ls_dpic_data;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__ls_dpic_raddr;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__ls_data_forward;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__ls_wb_reg_inst;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__ls_wb_reg_pc;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__ls_wb_reg_lsu_res;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__ls_wb_reg_lsu_wb_data;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__wb_rf_data;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__op1;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgTmp_ha434cdb1__0;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__rem;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hdbadd230__0;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hc5cf7009__0;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hc5ccd4d6__0;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hc5be2994__0;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h52af767a__0;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h52a30ec4__0;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__load_data;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__read_csr_data;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__write_csr_data;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus;
        IData/*29:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mtvec_base;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mepc;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mcause;
        IData/*31:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__last_pc;
        IData/*31:0*/ __Vtask_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__2__rdata;
        IData/*31:0*/ __VstlIterCount;
    };
    struct {
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul;
        VlUnpacked<IData/*31:0*/, 32> ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_25060170_fishtailcore__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_25060170_fishtailcore___024root(Vysyx_25060170_fishtailcore__Syms* symsp, const char* v__name);
    ~Vysyx_25060170_fishtailcore___024root();
    VL_UNCOPYABLE(Vysyx_25060170_fishtailcore___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
