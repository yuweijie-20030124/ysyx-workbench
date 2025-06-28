// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMux.h for the primary calling header

#include "VMux__pch.h"
#include "VMux__Syms.h"
#include "VMux___024unit.h"

void VMux___024unit___ctor_var_reset(VMux___024unit* vlSelf);

VMux___024unit::VMux___024unit(VMux__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMux___024unit___ctor_var_reset(this);
}

void VMux___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VMux___024unit::~VMux___024unit() {
}
