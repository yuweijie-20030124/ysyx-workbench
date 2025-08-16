// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vysyx_25060170_top.h"
#include "Vysyx_25060170_top__Syms.h"
#include "verilated_dpi.h"


void Vysyx_25060170_top::IDU_SEND_INST(int* c_inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root::IDU_SEND_INST\n"); );
    // Init
    IData/*31:0*/ c_inst__Vcvt;
    c_inst__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("IDU_SEND_INST");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vysyx_25060170_top__Vcb_IDU_SEND_INST_t __Vcb = (Vysyx_25060170_top__Vcb_IDU_SEND_INST_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vysyx_25060170_top__Syms*)(__Vscopep->symsp()), c_inst__Vcvt);
    for (size_t c_inst__Vidx = 0; c_inst__Vidx < 1; ++c_inst__Vidx) *c_inst = c_inst__Vcvt;
}

void Vysyx_25060170_top::IDU_SEND_CALL_FLAG(int* call_flag, int* pc, int* dnpc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root::IDU_SEND_CALL_FLAG\n"); );
    // Init
    IData/*31:0*/ call_flag__Vcvt;
    call_flag__Vcvt = 0;
    IData/*31:0*/ pc__Vcvt;
    pc__Vcvt = 0;
    IData/*31:0*/ dnpc__Vcvt;
    dnpc__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("IDU_SEND_CALL_FLAG");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vysyx_25060170_top__Vcb_IDU_SEND_CALL_FLAG_t __Vcb = (Vysyx_25060170_top__Vcb_IDU_SEND_CALL_FLAG_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vysyx_25060170_top__Syms*)(__Vscopep->symsp()), call_flag__Vcvt, pc__Vcvt, dnpc__Vcvt);
    for (size_t call_flag__Vidx = 0; call_flag__Vidx < 1; ++call_flag__Vidx) *call_flag = call_flag__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) *pc = pc__Vcvt;
    for (size_t dnpc__Vidx = 0; dnpc__Vidx < 1; ++dnpc__Vidx) *dnpc = dnpc__Vcvt;
}

void Vysyx_25060170_top::IDU_SEND_RET_FLAG(int* ret_flag, int* pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root::IDU_SEND_RET_FLAG\n"); );
    // Init
    IData/*31:0*/ ret_flag__Vcvt;
    ret_flag__Vcvt = 0;
    IData/*31:0*/ pc__Vcvt;
    pc__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("IDU_SEND_RET_FLAG");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vysyx_25060170_top__Vcb_IDU_SEND_RET_FLAG_t __Vcb = (Vysyx_25060170_top__Vcb_IDU_SEND_RET_FLAG_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vysyx_25060170_top__Syms*)(__Vscopep->symsp()), ret_flag__Vcvt, pc__Vcvt);
    for (size_t ret_flag__Vidx = 0; ret_flag__Vidx < 1; ++ret_flag__Vidx) *ret_flag = ret_flag__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) *pc = pc__Vcvt;
}

void Vysyx_25060170_top::GPR_SEND_VALUE(int* r1, int* r2, int* r3, int* r4, int* r5, int* r6, int* r7, int* r8, int* r9, int* r10, int* r11, int* r12, int* r13, int* r14, int* r15, int* r16, int* r17, int* r18, int* r19, int* r20, int* r21, int* r22, int* r23, int* r24, int* r25, int* r26, int* r27, int* r28, int* r29, int* r30, int* r31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_top___024root::GPR_SEND_VALUE\n"); );
    // Init
    IData/*31:0*/ r1__Vcvt;
    r1__Vcvt = 0;
    IData/*31:0*/ r2__Vcvt;
    r2__Vcvt = 0;
    IData/*31:0*/ r3__Vcvt;
    r3__Vcvt = 0;
    IData/*31:0*/ r4__Vcvt;
    r4__Vcvt = 0;
    IData/*31:0*/ r5__Vcvt;
    r5__Vcvt = 0;
    IData/*31:0*/ r6__Vcvt;
    r6__Vcvt = 0;
    IData/*31:0*/ r7__Vcvt;
    r7__Vcvt = 0;
    IData/*31:0*/ r8__Vcvt;
    r8__Vcvt = 0;
    IData/*31:0*/ r9__Vcvt;
    r9__Vcvt = 0;
    IData/*31:0*/ r10__Vcvt;
    r10__Vcvt = 0;
    IData/*31:0*/ r11__Vcvt;
    r11__Vcvt = 0;
    IData/*31:0*/ r12__Vcvt;
    r12__Vcvt = 0;
    IData/*31:0*/ r13__Vcvt;
    r13__Vcvt = 0;
    IData/*31:0*/ r14__Vcvt;
    r14__Vcvt = 0;
    IData/*31:0*/ r15__Vcvt;
    r15__Vcvt = 0;
    IData/*31:0*/ r16__Vcvt;
    r16__Vcvt = 0;
    IData/*31:0*/ r17__Vcvt;
    r17__Vcvt = 0;
    IData/*31:0*/ r18__Vcvt;
    r18__Vcvt = 0;
    IData/*31:0*/ r19__Vcvt;
    r19__Vcvt = 0;
    IData/*31:0*/ r20__Vcvt;
    r20__Vcvt = 0;
    IData/*31:0*/ r21__Vcvt;
    r21__Vcvt = 0;
    IData/*31:0*/ r22__Vcvt;
    r22__Vcvt = 0;
    IData/*31:0*/ r23__Vcvt;
    r23__Vcvt = 0;
    IData/*31:0*/ r24__Vcvt;
    r24__Vcvt = 0;
    IData/*31:0*/ r25__Vcvt;
    r25__Vcvt = 0;
    IData/*31:0*/ r26__Vcvt;
    r26__Vcvt = 0;
    IData/*31:0*/ r27__Vcvt;
    r27__Vcvt = 0;
    IData/*31:0*/ r28__Vcvt;
    r28__Vcvt = 0;
    IData/*31:0*/ r29__Vcvt;
    r29__Vcvt = 0;
    IData/*31:0*/ r30__Vcvt;
    r30__Vcvt = 0;
    IData/*31:0*/ r31__Vcvt;
    r31__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("GPR_SEND_VALUE");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vysyx_25060170_top__Vcb_GPR_SEND_VALUE_t __Vcb = (Vysyx_25060170_top__Vcb_GPR_SEND_VALUE_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vysyx_25060170_top__Syms*)(__Vscopep->symsp()), r1__Vcvt, r2__Vcvt, r3__Vcvt, r4__Vcvt, r5__Vcvt, r6__Vcvt, r7__Vcvt, r8__Vcvt, r9__Vcvt, r10__Vcvt, r11__Vcvt, r12__Vcvt, r13__Vcvt, r14__Vcvt, r15__Vcvt, r16__Vcvt, r17__Vcvt, r18__Vcvt, r19__Vcvt, r20__Vcvt, r21__Vcvt, r22__Vcvt, r23__Vcvt, r24__Vcvt, r25__Vcvt, r26__Vcvt, r27__Vcvt, r28__Vcvt, r29__Vcvt, r30__Vcvt, r31__Vcvt);
    for (size_t r1__Vidx = 0; r1__Vidx < 1; ++r1__Vidx) *r1 = r1__Vcvt;
    for (size_t r2__Vidx = 0; r2__Vidx < 1; ++r2__Vidx) *r2 = r2__Vcvt;
    for (size_t r3__Vidx = 0; r3__Vidx < 1; ++r3__Vidx) *r3 = r3__Vcvt;
    for (size_t r4__Vidx = 0; r4__Vidx < 1; ++r4__Vidx) *r4 = r4__Vcvt;
    for (size_t r5__Vidx = 0; r5__Vidx < 1; ++r5__Vidx) *r5 = r5__Vcvt;
    for (size_t r6__Vidx = 0; r6__Vidx < 1; ++r6__Vidx) *r6 = r6__Vcvt;
    for (size_t r7__Vidx = 0; r7__Vidx < 1; ++r7__Vidx) *r7 = r7__Vcvt;
    for (size_t r8__Vidx = 0; r8__Vidx < 1; ++r8__Vidx) *r8 = r8__Vcvt;
    for (size_t r9__Vidx = 0; r9__Vidx < 1; ++r9__Vidx) *r9 = r9__Vcvt;
    for (size_t r10__Vidx = 0; r10__Vidx < 1; ++r10__Vidx) *r10 = r10__Vcvt;
    for (size_t r11__Vidx = 0; r11__Vidx < 1; ++r11__Vidx) *r11 = r11__Vcvt;
    for (size_t r12__Vidx = 0; r12__Vidx < 1; ++r12__Vidx) *r12 = r12__Vcvt;
    for (size_t r13__Vidx = 0; r13__Vidx < 1; ++r13__Vidx) *r13 = r13__Vcvt;
    for (size_t r14__Vidx = 0; r14__Vidx < 1; ++r14__Vidx) *r14 = r14__Vcvt;
    for (size_t r15__Vidx = 0; r15__Vidx < 1; ++r15__Vidx) *r15 = r15__Vcvt;
    for (size_t r16__Vidx = 0; r16__Vidx < 1; ++r16__Vidx) *r16 = r16__Vcvt;
    for (size_t r17__Vidx = 0; r17__Vidx < 1; ++r17__Vidx) *r17 = r17__Vcvt;
    for (size_t r18__Vidx = 0; r18__Vidx < 1; ++r18__Vidx) *r18 = r18__Vcvt;
    for (size_t r19__Vidx = 0; r19__Vidx < 1; ++r19__Vidx) *r19 = r19__Vcvt;
    for (size_t r20__Vidx = 0; r20__Vidx < 1; ++r20__Vidx) *r20 = r20__Vcvt;
    for (size_t r21__Vidx = 0; r21__Vidx < 1; ++r21__Vidx) *r21 = r21__Vcvt;
    for (size_t r22__Vidx = 0; r22__Vidx < 1; ++r22__Vidx) *r22 = r22__Vcvt;
    for (size_t r23__Vidx = 0; r23__Vidx < 1; ++r23__Vidx) *r23 = r23__Vcvt;
    for (size_t r24__Vidx = 0; r24__Vidx < 1; ++r24__Vidx) *r24 = r24__Vcvt;
    for (size_t r25__Vidx = 0; r25__Vidx < 1; ++r25__Vidx) *r25 = r25__Vcvt;
    for (size_t r26__Vidx = 0; r26__Vidx < 1; ++r26__Vidx) *r26 = r26__Vcvt;
    for (size_t r27__Vidx = 0; r27__Vidx < 1; ++r27__Vidx) *r27 = r27__Vcvt;
    for (size_t r28__Vidx = 0; r28__Vidx < 1; ++r28__Vidx) *r28 = r28__Vcvt;
    for (size_t r29__Vidx = 0; r29__Vidx < 1; ++r29__Vidx) *r29 = r29__Vcvt;
    for (size_t r30__Vidx = 0; r30__Vidx < 1; ++r30__Vidx) *r30 = r30__Vcvt;
    for (size_t r31__Vidx = 0; r31__Vidx < 1; ++r31__Vidx) *r31 = r31__Vcvt;
}
