// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call Vysyx_25060170_top::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "Vysyx_25060170_top__Dpi.h"
#include "Vysyx_25060170_top.h"

#ifndef VL_DPIDECL_GPR_SEND_VALUE_
#define VL_DPIDECL_GPR_SEND_VALUE_
void GPR_SEND_VALUE(int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9, int* r10, int* r11, int* r12, int* r13, int* r14, int* r15, int* r16, int* r17, int* r18, int* r19, int* r20, int* r21, int* r22, int* r23, int* r24, int* r25, int* r26, int* r27, int* r28, int* r29, int* r30, int* r31) {
    // DPI export at vsrc/ysyx_25060170_GPR.v:75:6
    return Vysyx_25060170_top::GPR_SEND_VALUE(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r25, r26, r27, r28, r29, r30, r31);
}
#endif

#ifndef VL_DPIDECL_IDU_SEND_CALL_FLAG_
#define VL_DPIDECL_IDU_SEND_CALL_FLAG_
void IDU_SEND_CALL_FLAG(int* call_flag, int* pc, int* dnpc) {
    // DPI export at vsrc/ysyx_25060170_IDU.v:520:6
    return Vysyx_25060170_top::IDU_SEND_CALL_FLAG(call_flag, pc, dnpc);
}
#endif

#ifndef VL_DPIDECL_IDU_SEND_INST_
#define VL_DPIDECL_IDU_SEND_INST_
void IDU_SEND_INST(int* c_inst) {
    // DPI export at vsrc/ysyx_25060170_IDU.v:508:6
    return Vysyx_25060170_top::IDU_SEND_INST(c_inst);
}
#endif

#ifndef VL_DPIDECL_IDU_SEND_PC_
#define VL_DPIDECL_IDU_SEND_PC_
void IDU_SEND_PC(int* c_pc) {
    // DPI export at vsrc/ysyx_25060170_IFU.v:42:6
    return Vysyx_25060170_top::IDU_SEND_PC(c_pc);
}
#endif

#ifndef VL_DPIDECL_IDU_SEND_RET_FLAG_
#define VL_DPIDECL_IDU_SEND_RET_FLAG_
void IDU_SEND_RET_FLAG(int* ret_flag, int* pc) {
    // DPI export at vsrc/ysyx_25060170_IDU.v:539:6
    return Vysyx_25060170_top::IDU_SEND_RET_FLAG(ret_flag, pc);
}
#endif

