// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_25060170_top.h for the primary calling header

#ifndef VERILATED_VYSYX_25060170_TOP___024ROOT_H_
#define VERILATED_VYSYX_25060170_TOP___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_25060170_top__Syms;

class Vysyx_25060170_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*4:0*/ ysyx_25060170_top__DOT__id_reg_rd_addr;
        CData/*0:0*/ ysyx_25060170_top__DOT__id_reg_rs1_ena;
        CData/*0:0*/ ysyx_25060170_top__DOT__id_reg_rs2_ena;
        CData/*0:0*/ ysyx_25060170_top__DOT__id_reg_rd_ena;
        CData/*0:0*/ ysyx_25060170_top__DOT__id_ex_branch;
        CData/*0:0*/ ysyx_25060170_top__DOT__id_ex_jump;
        CData/*3:0*/ ysyx_25060170_top__DOT__id_ls_ctl;
        CData/*1:0*/ ysyx_25060170_top__DOT__id_wb_ctl;
        CData/*7:0*/ ysyx_25060170_top__DOT__id_ex_alu_sel;
        CData/*3:0*/ ysyx_25060170_top__DOT__id_ex_csrctl;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__csr_wr_ena;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__csr_rd_ena;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__mret_ena;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__ecall_ena;
        CData/*7:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_lui;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_auipc;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jal;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jalr;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_ecall;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrw;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrs;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrc;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrsi;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgExtracted_hf20bcbe5__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h7773c72a__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h70f4116c__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h70c0839c__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h77488b95__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hf62a170c__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h77eb01fa__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h77acc5df__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h489c6f46__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_he80da865__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hc65f4c50__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h1167153d__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h29152e89__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_heac6e652__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h7855af38__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h2bc0716a__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h6fd23990__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hb3c59122__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h03cab0f1__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h7b49f5a3__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h36e9ef3c__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_he2955f6b__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h4c825e07__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h3b427111__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hb3ea081b__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hd7439362__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h7a82fdcc__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h41ceee20__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hc1b77381__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_ha08c85bd__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h5a06bcf6__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h2e86cea5__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h84595378__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h48d21361__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h5f1400db__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hed177170__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hbd811272__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h893e271f__0;
    };
    struct {
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h177d4809__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hebf21d33__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h8893bd80__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h5766d1a7__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h2696076e__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h100d9d21__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hcfecf178__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_hfbecd367__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h91eba5f9__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h712d9166__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_h88fffb3a__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2;
        CData/*0:0*/ ysyx_25060170_top__DOT__exu2__DOT____VdfgTmp_h485df6cb__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr;
        CData/*0:0*/ ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mie;
        CData/*0:0*/ ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpie;
        CData/*1:0*/ ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpp;
        CData/*0:0*/ ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_ie_ena;
        CData/*0:0*/ ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mie_set;
        CData/*0:0*/ ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mpie_set;
        CData/*1:0*/ ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mpp_set;
        CData/*0:0*/ ysyx_25060170_top__DOT__lsu3__DOT__re;
        CData/*3:0*/ ysyx_25060170_top__DOT__lsu3__DOT__sb_mask;
        CData/*0:0*/ ysyx_25060170_top__DOT__lsu3__DOT____VdfgTmp_h0e831b4e__0;
        CData/*7:0*/ __Vtableidx1;
        CData/*2:0*/ __Vtableidx2;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__b_imm;
        SData/*11:0*/ ysyx_25060170_top__DOT__exu2__DOT__csr_addr;
        IData/*31:0*/ ysyx_25060170_top__DOT__DPIC_if_inst;
        IData/*31:0*/ ysyx_25060170_top__DOT__if_id_pc;
        IData/*31:0*/ ysyx_25060170_top__DOT__id_ex_imm;
        IData/*31:0*/ ysyx_25060170_top__DOT__id_ex_pc;
        IData/*31:0*/ ysyx_25060170_top__DOT__id_ex_op1;
        IData/*31:0*/ ysyx_25060170_top__DOT__id_ex_op2;
        IData/*31:0*/ ysyx_25060170_top__DOT__ex_aludata;
        IData/*31:0*/ ysyx_25060170_top__DOT__ifu0__DOT__pc_next;
        IData/*19:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__j_imm;
        IData/*31:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgTmp_ha434cdb1__0;
        IData/*31:0*/ ysyx_25060170_top__DOT__exu2__DOT__op1_add_op2;
        IData/*31:0*/ ysyx_25060170_top__DOT__exu2__DOT__op1_sub_op2;
        IData/*31:0*/ ysyx_25060170_top__DOT__exu2__DOT__op1_sra_op2;
        IData/*31:0*/ ysyx_25060170_top__DOT__exu2__DOT__div;
        IData/*31:0*/ ysyx_25060170_top__DOT__exu2__DOT__rem;
        IData/*31:0*/ ysyx_25060170_top__DOT__exu2__DOT__alu_res;
        IData/*31:0*/ ysyx_25060170_top__DOT__exu2__DOT__read_csr_data;
        IData/*31:0*/ ysyx_25060170_top__DOT__exu2__DOT__write_csr_data;
        IData/*31:0*/ ysyx_25060170_top__DOT__exu2__DOT__mcause_value;
        IData/*31:0*/ ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus;
        IData/*29:0*/ ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mtvec_base;
        IData/*31:0*/ ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mepc;
        IData/*31:0*/ ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mcause;
        IData/*31:0*/ ysyx_25060170_top__DOT__lsu3__DOT__raddr;
        IData/*31:0*/ ysyx_25060170_top__DOT__lsu3__DOT__data_i;
        IData/*31:0*/ __Vtask_ysyx_25060170_top__DOT__dpic__DOT__pmem_read__2__rdata;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ ysyx_25060170_top__DOT__exu2__DOT__mul;
        VlUnpacked<IData/*31:0*/, 32> ysyx_25060170_top__DOT__reg3__DOT__regs;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_25060170_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_25060170_top___024root(Vysyx_25060170_top__Syms* symsp, const char* v__name);
    ~Vysyx_25060170_top___024root();
    VL_UNCOPYABLE(Vysyx_25060170_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
