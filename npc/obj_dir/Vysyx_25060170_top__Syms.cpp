// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vysyx_25060170_top__pch.h"
#include "Vysyx_25060170_top.h"
#include "Vysyx_25060170_top___024root.h"

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
        Verilated::stackCheck(161);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
