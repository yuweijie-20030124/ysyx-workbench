// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMux.h for the primary calling header

#ifndef VERILATED_VMUX___024UNIT_H_
#define VERILATED_VMUX___024UNIT_H_  // guard

#include "verilated.h"


class VMux__Syms;

class alignas(VL_CACHE_LINE_BYTES) VMux___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VMux__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMux___024unit(VMux__Syms* symsp, const char* v__name);
    ~VMux___024unit();
    VL_UNCOPYABLE(VMux___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
