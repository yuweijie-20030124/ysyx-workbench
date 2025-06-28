// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_25060170_top.h for the primary calling header

#ifndef VERILATED_VYSYX_25060170_TOP___024ROOT_H_
#define VERILATED_VYSYX_25060170_TOP___024ROOT_H_  // guard

#include "verilated.h"
class Vysyx_25060170_top___024unit;


class Vysyx_25060170_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_25060170_top___024root final : public VerilatedModule {
  public:
    // CELLS
    Vysyx_25060170_top___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(ready_i,0,0);
    VL_OUT8(ready_o,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ ysyx_25060170_top__DOT__pc;
    IData/*31:0*/ ysyx_25060170_top__DOT__u_ifu__DOT__pc_plus_4;
    IData/*31:0*/ __Vfunc_addr_to_instruction__0__Vfuncout;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_25060170_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_25060170_top___024root(Vysyx_25060170_top__Syms* symsp, const char* v__name);
    ~Vysyx_25060170_top___024root();
    VL_UNCOPYABLE(Vysyx_25060170_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
