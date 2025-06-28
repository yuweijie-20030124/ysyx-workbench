// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMUX__SYMS_H_
#define VERILATED_VMUX__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VMux.h"

// INCLUDE MODULE CLASSES
#include "VMux___024root.h"
#include "VMux___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VMux__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VMux* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VMux___024root                 TOP;
    VMux___024unit                 TOP____024unit;

    // CONSTRUCTORS
    VMux__Syms(VerilatedContext* contextp, const char* namep, VMux* modelp);
    ~VMux__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
