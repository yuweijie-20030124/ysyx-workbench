// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.

#include "Vysyx_25060170_fishtailcore.h"
#include "Vysyx_25060170_fishtailcore__Syms.h"
#include "verilated_dpi.h"


void Vysyx_25060170_fishtailcore::IDU_SEND_CALL_FLAG(int* call_flag, int* pc, int* dnpc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root::IDU_SEND_CALL_FLAG\n"); );
    // Locals
    IData/*31:0*/ call_flag__Vcvt;
    call_flag__Vcvt = 0;
    IData/*31:0*/ pc__Vcvt;
    pc__Vcvt = 0;
    IData/*31:0*/ dnpc__Vcvt;
    dnpc__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("IDU_SEND_CALL_FLAG");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vysyx_25060170_fishtailcore__Vcb_IDU_SEND_CALL_FLAG_t __Vcb = reinterpret_cast<Vysyx_25060170_fishtailcore__Vcb_IDU_SEND_CALL_FLAG_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vysyx_25060170_fishtailcore__Syms*)(__Vscopep->symsp()), call_flag__Vcvt, pc__Vcvt, dnpc__Vcvt);
    *call_flag = call_flag__Vcvt;
    *pc = pc__Vcvt;
    *dnpc = dnpc__Vcvt;
}

void Vysyx_25060170_fishtailcore::IDU_SEND_RET_FLAG(int* ret_flag, int* pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root::IDU_SEND_RET_FLAG\n"); );
    // Locals
    IData/*31:0*/ ret_flag__Vcvt;
    ret_flag__Vcvt = 0;
    IData/*31:0*/ pc__Vcvt;
    pc__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) {
        __Vfuncnum = Verilated::exportFuncNum("IDU_SEND_RET_FLAG");
    }
    const VerilatedScope* const __Vscopep = Verilated::dpiScope();
    Vysyx_25060170_fishtailcore__Vcb_IDU_SEND_RET_FLAG_t __Vcb = reinterpret_cast<Vysyx_25060170_fishtailcore__Vcb_IDU_SEND_RET_FLAG_t>(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vysyx_25060170_fishtailcore__Syms*)(__Vscopep->symsp()), ret_flag__Vcvt, pc__Vcvt);
    *ret_flag = ret_flag__Vcvt;
    *pc = pc__Vcvt;
}
