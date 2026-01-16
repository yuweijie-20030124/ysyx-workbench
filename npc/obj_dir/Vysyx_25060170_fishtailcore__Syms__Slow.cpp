// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vysyx_25060170_fishtailcore__pch.h"

void Vysyx_25060170_fishtailcore___024root____Vdpiexp_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__IDU_SEND_CALL_FLAG_TOP(Vysyx_25060170_fishtailcore__Syms* __restrict vlSymsp, IData/*31:0*/ &call_flag, IData/*31:0*/ &pc, IData/*31:0*/ &dnpc);
void Vysyx_25060170_fishtailcore___024root____Vdpiexp_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__IDU_SEND_RET_FLAG_TOP(Vysyx_25060170_fishtailcore__Syms* __restrict vlSymsp, IData/*31:0*/ &ret_flag, IData/*31:0*/ &pc);

Vysyx_25060170_fishtailcore__Syms::Vysyx_25060170_fishtailcore__Syms(VerilatedContext* contextp, const char* namep, Vysyx_25060170_fishtailcore* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(1744);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscopep_ysyx_25060170_fishtailcore__u_ysyx_25060170_DPIC = new VerilatedScope{this, "ysyx_25060170_fishtailcore.u_ysyx_25060170_DPIC", "u_ysyx_25060170_DPIC", "<null>", -12, VerilatedScope::SCOPE_OTHER};
    // Setup export functions - final: 0
    __Vscopep_ysyx_25060170_fishtailcore__u_ysyx_25060170_DPIC->exportInsert(0, "IDU_SEND_CALL_FLAG", (void*)(&Vysyx_25060170_fishtailcore___024root____Vdpiexp_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__IDU_SEND_CALL_FLAG_TOP));
    __Vscopep_ysyx_25060170_fishtailcore__u_ysyx_25060170_DPIC->exportInsert(0, "IDU_SEND_RET_FLAG", (void*)(&Vysyx_25060170_fishtailcore___024root____Vdpiexp_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__IDU_SEND_RET_FLAG_TOP));
    // Setup export functions - final: 1
    __Vscopep_ysyx_25060170_fishtailcore__u_ysyx_25060170_DPIC->exportInsert(1, "IDU_SEND_CALL_FLAG", (void*)(&Vysyx_25060170_fishtailcore___024root____Vdpiexp_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__IDU_SEND_CALL_FLAG_TOP));
    __Vscopep_ysyx_25060170_fishtailcore__u_ysyx_25060170_DPIC->exportInsert(1, "IDU_SEND_RET_FLAG", (void*)(&Vysyx_25060170_fishtailcore___024root____Vdpiexp_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__IDU_SEND_RET_FLAG_TOP));
}

Vysyx_25060170_fishtailcore__Syms::~Vysyx_25060170_fishtailcore__Syms() {
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_ysyx_25060170_fishtailcore__u_ysyx_25060170_DPIC, __Vscopep_ysyx_25060170_fishtailcore__u_ysyx_25060170_DPIC = nullptr);
    // Tear down sub module instances
}
