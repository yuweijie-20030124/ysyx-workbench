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
        VL_IN8(rst,0,0);
        CData/*3:0*/ ysyx_25060170_top__DOT__ALUop;
        CData/*1:0*/ ysyx_25060170_top__DOT__need_sign_ext;
        CData/*0:0*/ ysyx_25060170_top__DOT__is_beq;
        CData/*0:0*/ ysyx_25060170_top__DOT__is_blt;
        CData/*0:0*/ ysyx_25060170_top__DOT__is_bne;
        CData/*0:0*/ ysyx_25060170_top__DOT__is_bge;
        CData/*0:0*/ ysyx_25060170_top__DOT__is_bltu;
        CData/*0:0*/ ysyx_25060170_top__DOT__is_bgeu;
        CData/*0:0*/ ysyx_25060170_top__DOT__is_sltiu;
        CData/*0:0*/ ysyx_25060170_top__DOT__is_sltu;
        CData/*0:0*/ ysyx_25060170_top__DOT__beq_flag;
        CData/*0:0*/ ysyx_25060170_top__DOT__blt_flag;
        CData/*0:0*/ ysyx_25060170_top__DOT__bne_flag;
        CData/*0:0*/ ysyx_25060170_top__DOT__bge_flag;
        CData/*0:0*/ ysyx_25060170_top__DOT__bltu_flag;
        CData/*0:0*/ ysyx_25060170_top__DOT__bgeu_flag;
        CData/*1:0*/ ysyx_25060170_top__DOT__regS;
        CData/*0:0*/ ysyx_25060170_top__DOT__reg_write_en_o;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__is_Utype;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srli;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__slli;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srai;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lbu;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__addi;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lb;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lh;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lhu;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__lw;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__andi;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__xori;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__ori;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__jalr;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__is_Itype;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sw;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sh;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sb;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sd;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__srl;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__add;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sll;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__slt;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcxor;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcor;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__npcand;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sra;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__sub;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mul;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulh;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulhsu;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__mulhu;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__div;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__divu;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__rem;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__remu;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_2;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_14;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_15;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_16;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_17;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_18;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_19;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_21;
    };
    struct {
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT____VdfgRegularize_h93622925_0_22;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_sign;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT____VdfgRegularize_h08aa94b0_0_0;
        CData/*0:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__tiaojian;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ ysyx_25060170_top__DOT__PCout;
        IData/*31:0*/ ysyx_25060170_top__DOT__op_1;
        IData/*31:0*/ ysyx_25060170_top__DOT__op_2;
        IData/*31:0*/ ysyx_25060170_top__DOT__exu_res1;
        IData/*31:0*/ ysyx_25060170_top__DOT__MEM_inst_o;
        IData/*31:0*/ ysyx_25060170_top__DOT__reg_write_data_o;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IFU__DOT__PC_temp;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__imm;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__1__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__2__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__3__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__4__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__5__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__6__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__7__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__8__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__9__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__10__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__11__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__12__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__13__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__14__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__15__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__16__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__17__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__18__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__19__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__20__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__21__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__22__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__23__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__24__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__25__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__26__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__27__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__28__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__29__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__30__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT____Vcellout__reg_gen__BRA__31__KET____DOT__reg_x__dout;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__jumpaddr;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_op_2;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__reg1_sub_reg2;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT____VdfgRegularize_h08aa94b0_0_3;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__paddr_data;
        IData/*31:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT____VdfgRegularize_hca46b70a_1_1;
        IData/*31:0*/ __Vtask_ysyx_25060170_top__DOT__u_ysyx_25060170_MEM__DOT__pmem_read__1__rdata;
        IData/*31:0*/ __Vfunc_ysyx_25060170_top__DOT__u_ysyx_25060170_WBU__DOT__paddr_read__2__Vfuncout;
        IData/*31:0*/ __VactIterCount;
        QData/*32:0*/ ysyx_25060170_top__DOT__u_ysyx_25060170_EXU__DOT__sub_unsigned;
        VlUnpacked<IData/*31:0*/, 32> ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__rf;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

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
