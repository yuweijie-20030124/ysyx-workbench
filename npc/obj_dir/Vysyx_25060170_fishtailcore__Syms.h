// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VYSYX_25060170_FISHTAILCORE__SYMS_H_
#define VERILATED_VYSYX_25060170_FISHTAILCORE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vysyx_25060170_fishtailcore.h"

// INCLUDE MODULE CLASSES
#include "Vysyx_25060170_fishtailcore___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using Vysyx_25060170_fishtailcore__Vcb_IDU_SEND_CALL_FLAG_t = void (*) (Vysyx_25060170_fishtailcore__Syms* __restrict vlSymsp, IData/*31:0*/ &call_flag, IData/*31:0*/ &pc, IData/*31:0*/ &dnpc);
using Vysyx_25060170_fishtailcore__Vcb_IDU_SEND_RET_FLAG_t = void (*) (Vysyx_25060170_fishtailcore__Syms* __restrict vlSymsp, IData/*31:0*/ &ret_flag, IData/*31:0*/ &pc);

// SYMS CLASS (contains all model state)
class Vysyx_25060170_fishtailcore__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vysyx_25060170_fishtailcore* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vysyx_25060170_fishtailcore___024root TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_ysyx_25060170_fishtailcore__u_ysyx_25060170_DPIC;

    // CONSTRUCTORS
    Vysyx_25060170_fishtailcore__Syms(VerilatedContext* contextp, const char* namep, Vysyx_25060170_fishtailcore* modelp);
    ~Vysyx_25060170_fishtailcore__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
