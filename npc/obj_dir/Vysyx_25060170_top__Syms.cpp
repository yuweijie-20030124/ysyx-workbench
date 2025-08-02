// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vysyx_25060170_top__pch.h"
#include "Vysyx_25060170_top.h"
#include "Vysyx_25060170_top___024root.h"

void Vysyx_25060170_top___024root____Vdpiexp_ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__GPR_SEND_VALUE_TOP(Vysyx_25060170_top__Syms* __restrict vlSymsp, IData/*31:0*/ &r1, IData/*31:0*/ &r2, IData/*31:0*/ &r3, IData/*31:0*/ &r4, IData/*31:0*/ &r5, IData/*31:0*/ &r6, IData/*31:0*/ &r7, IData/*31:0*/ &r8, IData/*31:0*/ &r9, IData/*31:0*/ &r10, IData/*31:0*/ &r11, IData/*31:0*/ &r12, IData/*31:0*/ &r13, IData/*31:0*/ &r14, IData/*31:0*/ &r15, IData/*31:0*/ &r16, IData/*31:0*/ &r17, IData/*31:0*/ &r18, IData/*31:0*/ &r19, IData/*31:0*/ &r20, IData/*31:0*/ &r21, IData/*31:0*/ &r22, IData/*31:0*/ &r23, IData/*31:0*/ &r24, IData/*31:0*/ &r25, IData/*31:0*/ &r26, IData/*31:0*/ &r27, IData/*31:0*/ &r28, IData/*31:0*/ &r29, IData/*31:0*/ &r30, IData/*31:0*/ &r31);
void Vysyx_25060170_top___024root____Vdpiexp_ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__IDU_SEND_CALL_FLAG_TOP(Vysyx_25060170_top__Syms* __restrict vlSymsp, IData/*31:0*/ &call_flag, IData/*31:0*/ &pc, IData/*31:0*/ &dnpc);
void Vysyx_25060170_top___024root____Vdpiexp_ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__IDU_SEND_INST_TOP(Vysyx_25060170_top__Syms* __restrict vlSymsp, IData/*31:0*/ &c_inst);
void Vysyx_25060170_top___024root____Vdpiexp_ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__IDU_SEND_RET_FLAG_TOP(Vysyx_25060170_top__Syms* __restrict vlSymsp, IData/*31:0*/ &ret_flag, IData/*31:0*/ &pc);
void Vysyx_25060170_top___024root____Vdpiexp_ysyx_25060170_top__DOT__u_ysyx_25060170_IFU__DOT__IDU_SEND_PC_TOP(Vysyx_25060170_top__Syms* __restrict vlSymsp, IData/*31:0*/ &c_pc);

// FUNCTIONS
Vysyx_25060170_top__Syms::~Vysyx_25060170_top__Syms()
{
}

Vysyx_25060170_top__Syms::Vysyx_25060170_top__Syms(VerilatedContext* contextp, const char* namep, Vysyx_25060170_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(617);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_ysyx_25060170_top__u_ysyx_25060170_GPR.configure(this, name(), "ysyx_25060170_top.u_ysyx_25060170_GPR", "u_ysyx_25060170_GPR", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyx_25060170_top__u_ysyx_25060170_IDU.configure(this, name(), "ysyx_25060170_top.u_ysyx_25060170_IDU", "u_ysyx_25060170_IDU", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyx_25060170_top__u_ysyx_25060170_IFU.configure(this, name(), "ysyx_25060170_top.u_ysyx_25060170_IFU", "u_ysyx_25060170_IFU", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_ysyx_25060170_top__u_ysyx_25060170_GPR.exportInsert(__Vfinal, "GPR_SEND_VALUE", (void*)(&Vysyx_25060170_top___024root____Vdpiexp_ysyx_25060170_top__DOT__u_ysyx_25060170_GPR__DOT__GPR_SEND_VALUE_TOP));
        __Vscope_ysyx_25060170_top__u_ysyx_25060170_IDU.exportInsert(__Vfinal, "IDU_SEND_CALL_FLAG", (void*)(&Vysyx_25060170_top___024root____Vdpiexp_ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__IDU_SEND_CALL_FLAG_TOP));
        __Vscope_ysyx_25060170_top__u_ysyx_25060170_IDU.exportInsert(__Vfinal, "IDU_SEND_INST", (void*)(&Vysyx_25060170_top___024root____Vdpiexp_ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__IDU_SEND_INST_TOP));
        __Vscope_ysyx_25060170_top__u_ysyx_25060170_IDU.exportInsert(__Vfinal, "IDU_SEND_RET_FLAG", (void*)(&Vysyx_25060170_top___024root____Vdpiexp_ysyx_25060170_top__DOT__u_ysyx_25060170_IDU__DOT__IDU_SEND_RET_FLAG_TOP));
        __Vscope_ysyx_25060170_top__u_ysyx_25060170_IFU.exportInsert(__Vfinal, "IDU_SEND_PC", (void*)(&Vysyx_25060170_top___024root____Vdpiexp_ysyx_25060170_top__DOT__u_ysyx_25060170_IFU__DOT__IDU_SEND_PC_TOP));
    }
}
