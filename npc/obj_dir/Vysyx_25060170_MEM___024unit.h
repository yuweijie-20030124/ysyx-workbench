// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_25060170_MEM.h for the primary calling header

#ifndef VERILATED_VYSYX_25060170_MEM___024UNIT_H_
#define VERILATED_VYSYX_25060170_MEM___024UNIT_H_  // guard

#include "verilated.h"


class Vysyx_25060170_MEM__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_25060170_MEM___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vysyx_25060170_MEM__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_25060170_MEM___024unit(Vysyx_25060170_MEM__Syms* symsp, const char* v__name);
    ~Vysyx_25060170_MEM___024unit();
    VL_UNCOPYABLE(Vysyx_25060170_MEM___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
