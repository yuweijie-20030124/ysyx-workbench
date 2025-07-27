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


    // DPI IMPORTS
    // DPI import at vsrc/ysyx_25060170_MEM.v:9:30
    extern void pmem_read(int raddr, int* rdata, char rlen);

#ifdef __cplusplus
}
#endif

#endif  // guard
