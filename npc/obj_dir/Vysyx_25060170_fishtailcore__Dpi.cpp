// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call Vysyx_25060170_fishtailcore::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "Vysyx_25060170_fishtailcore__Dpi.h"
#include "Vysyx_25060170_fishtailcore.h"

#ifndef VL_DPIDECL_IDU_SEND_CALL_FLAG_
#define VL_DPIDECL_IDU_SEND_CALL_FLAG_
void IDU_SEND_CALL_FLAG(int* call_flag, int* pc, int* dnpc) {
    // DPI export at vsrc/core/ysyx_25060170_DPIC.v:225:6
    return Vysyx_25060170_fishtailcore::IDU_SEND_CALL_FLAG(call_flag, pc, dnpc);
}
#endif

#ifndef VL_DPIDECL_IDU_SEND_RET_FLAG_
#define VL_DPIDECL_IDU_SEND_RET_FLAG_
void IDU_SEND_RET_FLAG(int* ret_flag, int* pc) {
    // DPI export at vsrc/core/ysyx_25060170_DPIC.v:244:6
    return Vysyx_25060170_fishtailcore::IDU_SEND_RET_FLAG(ret_flag, pc);
}
#endif

