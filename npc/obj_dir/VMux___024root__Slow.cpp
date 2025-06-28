// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMux.h for the primary calling header

#include "VMux__pch.h"
#include "VMux__Syms.h"
#include "VMux___024root.h"

void VMux___024root___ctor_var_reset(VMux___024root* vlSelf);

VMux___024root::VMux___024root(VMux__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMux___024root___ctor_var_reset(this);
}

void VMux___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VMux___024root::~VMux___024root() {
}
