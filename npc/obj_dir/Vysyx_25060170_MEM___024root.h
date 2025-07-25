// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_25060170_MEM.h for the primary calling header

#ifndef VERILATED_VYSYX_25060170_MEM___024ROOT_H_
#define VERILATED_VYSYX_25060170_MEM___024ROOT_H_  // guard

#include "verilated.h"
class Vysyx_25060170_MEM___024unit;


class Vysyx_25060170_MEM__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_25060170_MEM___024root final : public VerilatedModule {
  public:
    // CELLS
    Vysyx_25060170_MEM___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(ready_i,0,0);
    VL_OUT8(ready_o,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN(addr_i,31,0);
    VL_OUT(inst_o,31,0);
    IData/*31:0*/ __Vfunc_addr_to_instruction__0__Vfuncout;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_25060170_MEM__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_25060170_MEM___024root(Vysyx_25060170_MEM__Syms* symsp, const char* v__name);
    ~Vysyx_25060170_MEM___024root();
    VL_UNCOPYABLE(Vysyx_25060170_MEM___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
