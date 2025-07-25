// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vysyx_25060170_MEM__pch.h"
#include "Vysyx_25060170_MEM.h"
#include "Vysyx_25060170_MEM___024root.h"
#include "Vysyx_25060170_MEM___024unit.h"

// FUNCTIONS
Vysyx_25060170_MEM__Syms::~Vysyx_25060170_MEM__Syms()
{
}

Vysyx_25060170_MEM__Syms::Vysyx_25060170_MEM__Syms(VerilatedContext* contextp, const char* namep, Vysyx_25060170_MEM* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
        // Check resources
        Verilated::stackCheck(73);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
