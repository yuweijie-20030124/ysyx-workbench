// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25060170_fishtailcore.h for the primary calling header

#include "Vysyx_25060170_fishtailcore__pch.h"

void Vysyx_25060170_fishtailcore___024root___ctor_var_reset(Vysyx_25060170_fishtailcore___024root* vlSelf);

Vysyx_25060170_fishtailcore___024root::Vysyx_25060170_fishtailcore___024root(Vysyx_25060170_fishtailcore__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vysyx_25060170_fishtailcore___024root___ctor_var_reset(this);
}

void Vysyx_25060170_fishtailcore___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vysyx_25060170_fishtailcore___024root::~Vysyx_25060170_fishtailcore___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
