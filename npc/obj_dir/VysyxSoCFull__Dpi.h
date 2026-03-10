// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYXSOCFULL__DPI_H_
#define VERILATED_VYSYXSOCFULL__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at vsrc/sim/ysyx_25060170_DPIC.v:277:6
    extern void IDU_SEND_CALL_FLAG(int* call_flag, int* pc, int* dnpc);
    // DPI export at vsrc/sim/ysyx_25060170_DPIC.v:296:6
    extern void IDU_SEND_RET_FLAG(int* ret_flag, int* pc);

    // DPI IMPORTS
    // DPI import at vsrc/sim/ysyx_25060170_DPIC.v:91:30
    extern void difftest_dut_csr(int csr_mstatus, int csr_mtvec, int csr_mepc, int csr_mcause, int csr_mhartid, int csr_mscratch);
    // DPI import at vsrc/sim/ysyx_25060170_DPIC.v:100:30
    extern void difftest_dut_regs(int regs0, int regs1, int regs2, int regs3, int regs4, int regs5, int regs6, int regs7, int regs8, int regs9, int regs10, int regs11, int regs12, int regs13, int regs14, int regs15, int regs16, int regs17, int regs18, int regs19, int regs20, int regs21, int regs22, int regs23, int regs24, int regs25, int regs26, int regs27, int regs28, int regs29, int regs30, int regs31);
    // DPI import at /home/yuweijie/ysyx-workbench/ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at vsrc/sim/ysyx_25060170_DPIC.v:89:30
    extern void magic_instruction();
    // DPI import at /home/yuweijie/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v:5402:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at vsrc/sim/ysyx_25060170_DPIC.v:85:30
    extern void pc_inst_end(int thepc_data, int the_inst, int diff_skip_flag);
    // DPI import at vsrc/sim/ysyx_25060170_DPIC.v:87:30
    extern void set_npc_exit(int pc, int halt_ret);

#ifdef __cplusplus
}
#endif

#endif  // guard
