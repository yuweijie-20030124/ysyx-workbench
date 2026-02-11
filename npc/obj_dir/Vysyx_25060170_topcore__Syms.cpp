// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vysyx_25060170_topcore__pch.h"
#include "Vysyx_25060170_topcore.h"
#include "Vysyx_25060170_topcore___024root.h"

void Vysyx_25060170_topcore___024root____Vdpiexp_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__IDU_SEND_CALL_FLAG_TOP(Vysyx_25060170_topcore__Syms* __restrict vlSymsp, IData/*31:0*/ &call_flag, IData/*31:0*/ &pc, IData/*31:0*/ &dnpc);
void Vysyx_25060170_topcore___024root____Vdpiexp_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__IDU_SEND_RET_FLAG_TOP(Vysyx_25060170_topcore__Syms* __restrict vlSymsp, IData/*31:0*/ &ret_flag, IData/*31:0*/ &pc);

// FUNCTIONS
Vysyx_25060170_topcore__Syms::~Vysyx_25060170_topcore__Syms()
{
}

Vysyx_25060170_topcore__Syms::Vysyx_25060170_topcore__Syms(VerilatedContext* contextp, const char* namep, Vysyx_25060170_topcore* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(2143);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_ysyx_25060170_topcore__u_ysyx_25060170_DPIC.configure(this, name(), "ysyx_25060170_topcore.u_ysyx_25060170_DPIC", "u_ysyx_25060170_DPIC", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_ysyx_25060170_topcore__u_ysyx_25060170_DPIC.exportInsert(__Vfinal, "IDU_SEND_CALL_FLAG", (void*)(&Vysyx_25060170_topcore___024root____Vdpiexp_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__IDU_SEND_CALL_FLAG_TOP));
        __Vscope_ysyx_25060170_topcore__u_ysyx_25060170_DPIC.exportInsert(__Vfinal, "IDU_SEND_RET_FLAG", (void*)(&Vysyx_25060170_topcore___024root____Vdpiexp_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__IDU_SEND_RET_FLAG_TOP));
    }
}
