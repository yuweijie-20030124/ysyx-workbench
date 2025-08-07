// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYX_25060170_TOP__DPI_H_
#define VERILATED_VYSYX_25060170_TOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at vsrc/ysyx_25060170_GPR.v:75:6
    extern void GPR_SEND_VALUE(int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9, int* r10, int* r11, int* r12, int* r13, int* r14, int* r15, int* r16, int* r17, int* r18, int* r19, int* r20, int* r21, int* r22, int* r23, int* r24, int* r25, int* r26, int* r27, int* r28, int* r29, int* r30, int* r31);
    // DPI export at vsrc/ysyx_25060170_IDU.v:523:6
    extern void IDU_SEND_CALL_FLAG(int* call_flag, int* pc, int* dnpc);
    // DPI export at vsrc/ysyx_25060170_IDU.v:511:6
    extern void IDU_SEND_INST(int* c_inst);
    // DPI export at vsrc/ysyx_25060170_IFU.v:42:6
    extern void IDU_SEND_PC(int* c_pc);
    // DPI export at vsrc/ysyx_25060170_IDU.v:542:6
    extern void IDU_SEND_RET_FLAG(int* ret_flag, int* pc);

    // DPI IMPORTS
    // DPI import at vsrc/ysyx_25060170_WBU.v:53:33
    extern int paddr_read(int addr, int len);
    // DPI import at vsrc/ysyx_25060170_WBU.v:52:34
    extern void paddr_write(int addr, int len, int data);
    // DPI import at vsrc/ysyx_25060170_MEM.v:9:30
    extern void pmem_read(int raddr, int* rdata, char rlen);
    // DPI import at vsrc/ysyx_25060170_IDU.v:53:30
    extern void set_npc_exit(int pc, int halt_ret);

#ifdef __cplusplus
}
#endif

#endif  // guard
