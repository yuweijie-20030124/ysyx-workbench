// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_25060170_top.h for the primary calling header

#ifndef VERILATED_VYSYX_25060170_TOP___024ROOT_H_
#define VERILATED_VYSYX_25060170_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vysyx_25060170_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_25060170_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        CData/*0:0*/ ysyx_25060170_top__DOT__dpic__DOT__ebreak_ena;
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
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__7__KET__;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__6__KET__;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__5__KET__;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__4__KET__;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__3__KET__;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__1__KET__;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_type__BRA__0__KET__;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_lui;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_auipc;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jal;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_jalr;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_ecall;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrw;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrs;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrc;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__inst_csrrsi;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgExtracted_hb8436119__0;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_4;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_5;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_6;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_7;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_8;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_11;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_12;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_13;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_14;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_15;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_16;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_17;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_18;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_19;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_20;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_21;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_22;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_23;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_24;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_77;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_78;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_79;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_81;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_82;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_83;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_84;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_85;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_86;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_87;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_88;
    };
    struct {
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_89;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_91;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_92;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_93;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_94;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_95;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_96;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_97;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_98;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_100;
        CData/*0:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_102;
        CData/*0:0*/ ysyx_25060170_top__DOT__exu2__DOT__op1_lt_op2;
        CData/*0:0*/ ysyx_25060170_top__DOT__exu2__DOT____VdfgRegularize_hc2007cd8_0_4;
        CData/*0:0*/ ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_wr;
        CData/*0:0*/ ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mie;
        CData/*0:0*/ ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpie;
        CData/*1:0*/ ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_mpp;
        CData/*0:0*/ ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mstatus_ie_ena;
        CData/*0:0*/ ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mie_set;
        CData/*0:0*/ ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mpie_set;
        CData/*1:0*/ ysyx_25060170_top__DOT__exu2__DOT__csr_operate__DOT__mpp_set;
        CData/*0:0*/ ysyx_25060170_top__DOT__lsu3__DOT__re;
        CData/*7:0*/ ysyx_25060170_top__DOT__lsu3__DOT__data_byte;
        CData/*3:0*/ ysyx_25060170_top__DOT__lsu3__DOT__sb_mask;
        CData/*0:0*/ ysyx_25060170_top__DOT__lsu3__DOT____VdfgRegularize_hcffc0c70_0_0;
        CData/*7:0*/ __Vtableidx1;
        CData/*2:0*/ __Vtableidx2;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ysyx_25060170_top__DOT__dpic__DOT__ebreak_ena__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__b_imm;
        SData/*11:0*/ ysyx_25060170_top__DOT__exu2__DOT__csr_addr;
        SData/*15:0*/ ysyx_25060170_top__DOT__lsu3__DOT__data_half;
        IData/*31:0*/ ysyx_25060170_top__DOT__DPIC_if_inst;
        IData/*31:0*/ ysyx_25060170_top__DOT__if_id_pc;
        IData/*31:0*/ ysyx_25060170_top__DOT__id_ex_imm;
        IData/*31:0*/ ysyx_25060170_top__DOT__id_ex_pc;
        IData/*31:0*/ ysyx_25060170_top__DOT__id_ex_op1;
        IData/*31:0*/ ysyx_25060170_top__DOT__id_ex_op2;
        IData/*31:0*/ ysyx_25060170_top__DOT__ex_aludata;
        IData/*31:0*/ ysyx_25060170_top__DOT__ifu0__DOT__pc_next;
        IData/*19:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT__j_imm;
        IData/*31:0*/ ysyx_25060170_top__DOT__idu1__DOT__decode__DOT____VdfgRegularize_h77367796_0_32;
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
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ ysyx_25060170_top__DOT__exu2__DOT__mul;
        VlUnpacked<IData/*31:0*/, 32> ysyx_25060170_top__DOT__reg3__DOT__regs;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_25060170_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_25060170_top___024root(Vysyx_25060170_top__Syms* symsp, const char* v__name);
    ~Vysyx_25060170_top___024root();
    VL_UNCOPYABLE(Vysyx_25060170_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
