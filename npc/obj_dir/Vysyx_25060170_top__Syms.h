// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VYSYX_25060170_TOP__SYMS_H_
#define VERILATED_VYSYX_25060170_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vysyx_25060170_top.h"

// INCLUDE MODULE CLASSES
#include "Vysyx_25060170_top___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using Vysyx_25060170_top__Vcb_GPR_SEND_VALUE_t = void (*) (Vysyx_25060170_top__Syms* __restrict vlSymsp, IData/*31:0*/ &r1, IData/*31:0*/ &r2, IData/*31:0*/ &r3, IData/*31:0*/ &r4, IData/*31:0*/ &r5, IData/*31:0*/ &r6, IData/*31:0*/ &r7, IData/*31:0*/ &r8, IData/*31:0*/ &r9, IData/*31:0*/ &r10, IData/*31:0*/ &r11, IData/*31:0*/ &r12, IData/*31:0*/ &r13, IData/*31:0*/ &r14, IData/*31:0*/ &r15, IData/*31:0*/ &r16, IData/*31:0*/ &r17, IData/*31:0*/ &r18, IData/*31:0*/ &r19, IData/*31:0*/ &r20, IData/*31:0*/ &r21, IData/*31:0*/ &r22, IData/*31:0*/ &r23, IData/*31:0*/ &r24, IData/*31:0*/ &r25, IData/*31:0*/ &r26, IData/*31:0*/ &r27, IData/*31:0*/ &r28, IData/*31:0*/ &r29, IData/*31:0*/ &r30, IData/*31:0*/ &r31);
using Vysyx_25060170_top__Vcb_IDU_SEND_CALL_FLAG_t = void (*) (Vysyx_25060170_top__Syms* __restrict vlSymsp, IData/*31:0*/ &call_flag, IData/*31:0*/ &pc, IData/*31:0*/ &dnpc);
using Vysyx_25060170_top__Vcb_IDU_SEND_INST_t = void (*) (Vysyx_25060170_top__Syms* __restrict vlSymsp, IData/*31:0*/ &c_inst);
using Vysyx_25060170_top__Vcb_IDU_SEND_PC_t = void (*) (Vysyx_25060170_top__Syms* __restrict vlSymsp, IData/*31:0*/ &c_pc);
using Vysyx_25060170_top__Vcb_IDU_SEND_RET_FLAG_t = void (*) (Vysyx_25060170_top__Syms* __restrict vlSymsp, IData/*31:0*/ &ret_flag, IData/*31:0*/ &pc);

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vysyx_25060170_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vysyx_25060170_top* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vysyx_25060170_top___024root   TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_ysyx_25060170_top__u_ysyx_25060170_GPR;
    VerilatedScope __Vscope_ysyx_25060170_top__u_ysyx_25060170_IDU;

    // CONSTRUCTORS
    Vysyx_25060170_top__Syms(VerilatedContext* contextp, const char* namep, Vysyx_25060170_top* modelp);
    ~Vysyx_25060170_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
