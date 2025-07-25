// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25060170_MEM.h for the primary calling header

#include "Vysyx_25060170_MEM__pch.h"
#include "Vysyx_25060170_MEM__Syms.h"
#include "Vysyx_25060170_MEM___024unit.h"

extern "C" void npc_trap();

VL_INLINE_OPT void Vysyx_25060170_MEM___024unit____Vdpiimwrap_npc_trap_TOP____024unit() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_25060170_MEM___024unit____Vdpiimwrap_npc_trap_TOP____024unit\n"); );
    // Body
    npc_trap();
}

extern "C" int addr_to_instruction(int addr);

VL_INLINE_OPT void Vysyx_25060170_MEM___024unit____Vdpiimwrap_addr_to_instruction_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &addr_to_instruction__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_25060170_MEM___024unit____Vdpiimwrap_addr_to_instruction_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int addr_to_instruction__Vfuncrtn__Vcvt;
    addr_to_instruction__Vfuncrtn__Vcvt = addr_to_instruction(addr__Vcvt);
    addr_to_instruction__Vfuncrtn = addr_to_instruction__Vfuncrtn__Vcvt;
}
