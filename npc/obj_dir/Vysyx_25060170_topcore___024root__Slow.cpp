// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25060170_topcore.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25060170_topcore__Syms.h"
#include "Vysyx_25060170_topcore___024root.h"

void Vysyx_25060170_topcore___024root___ctor_var_reset(Vysyx_25060170_topcore___024root* vlSelf);

Vysyx_25060170_topcore___024root::Vysyx_25060170_topcore___024root(Vysyx_25060170_topcore__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vysyx_25060170_topcore___024root___ctor_var_reset(this);
}

void Vysyx_25060170_topcore___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vysyx_25060170_topcore___024root::~Vysyx_25060170_topcore___024root() {
}
