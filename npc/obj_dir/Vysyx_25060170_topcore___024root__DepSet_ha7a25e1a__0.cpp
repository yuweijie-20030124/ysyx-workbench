// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25060170_topcore.h for the primary calling header

#include "Vysyx_25060170_topcore__pch.h"
#include "Vysyx_25060170_topcore__Syms.h"
#include "Vysyx_25060170_topcore___024root.h"

extern "C" void pc_inst_end(int thepc_data, int the_inst, int diff_skip_flag);

VL_INLINE_OPT void Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pc_inst_end_TOP(IData/*31:0*/ thepc_data, IData/*31:0*/ the_inst, IData/*31:0*/ diff_skip_flag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pc_inst_end_TOP\n"); );
    // Body
    int thepc_data__Vcvt;
    thepc_data__Vcvt = thepc_data;
    int the_inst__Vcvt;
    the_inst__Vcvt = the_inst;
    int diff_skip_flag__Vcvt;
    diff_skip_flag__Vcvt = diff_skip_flag;
    pc_inst_end(thepc_data__Vcvt, the_inst__Vcvt, diff_skip_flag__Vcvt);
}

extern "C" void pmem_read(int raddr, int* rdata, char rlen, int mode, int* dpic_difftest_skip_flag);

VL_INLINE_OPT void Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata, CData/*7:0*/ rlen, IData/*31:0*/ mode, IData/*31:0*/ &dpic_difftest_skip_flag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read_TOP\n"); );
    // Body
    int raddr__Vcvt;
    raddr__Vcvt = raddr;
    int rdata__Vcvt;
    char rlen__Vcvt;
    rlen__Vcvt = rlen;
    int mode__Vcvt;
    mode__Vcvt = mode;
    int dpic_difftest_skip_flag__Vcvt;
    pmem_read(raddr__Vcvt, &rdata__Vcvt, rlen__Vcvt, mode__Vcvt, &dpic_difftest_skip_flag__Vcvt);
    rdata = rdata__Vcvt;
    dpic_difftest_skip_flag = dpic_difftest_skip_flag__Vcvt;
}

extern "C" void pmem_write(int waddr, int wdata, char wlen, int* dpic_difftest_skip_flag);

VL_INLINE_OPT void Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wlen, IData/*31:0*/ &dpic_difftest_skip_flag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_write_TOP\n"); );
    // Body
    int waddr__Vcvt;
    waddr__Vcvt = waddr;
    int wdata__Vcvt;
    wdata__Vcvt = wdata;
    char wlen__Vcvt;
    wlen__Vcvt = wlen;
    int dpic_difftest_skip_flag__Vcvt;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wlen__Vcvt, &dpic_difftest_skip_flag__Vcvt);
    dpic_difftest_skip_flag = dpic_difftest_skip_flag__Vcvt;
}

extern "C" void set_npc_exit(int pc, int halt_ret);

VL_INLINE_OPT void Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__set_npc_exit_TOP(IData/*31:0*/ pc, IData/*31:0*/ halt_ret) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__set_npc_exit_TOP\n"); );
    // Body
    int pc__Vcvt;
    pc__Vcvt = pc;
    int halt_ret__Vcvt;
    halt_ret__Vcvt = halt_ret;
    set_npc_exit(pc__Vcvt, halt_ret__Vcvt);
}

extern "C" void magic_instruction();

VL_INLINE_OPT void Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__magic_instruction_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__magic_instruction_TOP\n"); );
    // Body
    magic_instruction();
}

extern "C" void difftest_dut_csr(int csr_mstatus, int csr_mtvec, int csr_mepc, int csr_mcause, int csr_mhartid, int csr_mscratch);

VL_INLINE_OPT void Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_csr_TOP(IData/*31:0*/ csr_mstatus, IData/*31:0*/ csr_mtvec, IData/*31:0*/ csr_mepc, IData/*31:0*/ csr_mcause, IData/*31:0*/ csr_mhartid, IData/*31:0*/ csr_mscratch) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_csr_TOP\n"); );
    // Body
    int csr_mstatus__Vcvt;
    csr_mstatus__Vcvt = csr_mstatus;
    int csr_mtvec__Vcvt;
    csr_mtvec__Vcvt = csr_mtvec;
    int csr_mepc__Vcvt;
    csr_mepc__Vcvt = csr_mepc;
    int csr_mcause__Vcvt;
    csr_mcause__Vcvt = csr_mcause;
    int csr_mhartid__Vcvt;
    csr_mhartid__Vcvt = csr_mhartid;
    int csr_mscratch__Vcvt;
    csr_mscratch__Vcvt = csr_mscratch;
    difftest_dut_csr(csr_mstatus__Vcvt, csr_mtvec__Vcvt, csr_mepc__Vcvt, csr_mcause__Vcvt, csr_mhartid__Vcvt, csr_mscratch__Vcvt);
}

extern "C" void difftest_dut_regs(int regs0, int regs1, int regs2, int regs3, int regs4, int regs5, int regs6, int regs7, int regs8, int regs9, int regs10, int regs11, int regs12, int regs13, int regs14, int regs15, int regs16, int regs17, int regs18, int regs19, int regs20, int regs21, int regs22, int regs23, int regs24, int regs25, int regs26, int regs27, int regs28, int regs29, int regs30, int regs31);

VL_INLINE_OPT void Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_regs_TOP(IData/*31:0*/ regs0, IData/*31:0*/ regs1, IData/*31:0*/ regs2, IData/*31:0*/ regs3, IData/*31:0*/ regs4, IData/*31:0*/ regs5, IData/*31:0*/ regs6, IData/*31:0*/ regs7, IData/*31:0*/ regs8, IData/*31:0*/ regs9, IData/*31:0*/ regs10, IData/*31:0*/ regs11, IData/*31:0*/ regs12, IData/*31:0*/ regs13, IData/*31:0*/ regs14, IData/*31:0*/ regs15, IData/*31:0*/ regs16, IData/*31:0*/ regs17, IData/*31:0*/ regs18, IData/*31:0*/ regs19, IData/*31:0*/ regs20, IData/*31:0*/ regs21, IData/*31:0*/ regs22, IData/*31:0*/ regs23, IData/*31:0*/ regs24, IData/*31:0*/ regs25, IData/*31:0*/ regs26, IData/*31:0*/ regs27, IData/*31:0*/ regs28, IData/*31:0*/ regs29, IData/*31:0*/ regs30, IData/*31:0*/ regs31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root____Vdpiimwrap_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_regs_TOP\n"); );
    // Body
    int regs0__Vcvt;
    regs0__Vcvt = regs0;
    int regs1__Vcvt;
    regs1__Vcvt = regs1;
    int regs2__Vcvt;
    regs2__Vcvt = regs2;
    int regs3__Vcvt;
    regs3__Vcvt = regs3;
    int regs4__Vcvt;
    regs4__Vcvt = regs4;
    int regs5__Vcvt;
    regs5__Vcvt = regs5;
    int regs6__Vcvt;
    regs6__Vcvt = regs6;
    int regs7__Vcvt;
    regs7__Vcvt = regs7;
    int regs8__Vcvt;
    regs8__Vcvt = regs8;
    int regs9__Vcvt;
    regs9__Vcvt = regs9;
    int regs10__Vcvt;
    regs10__Vcvt = regs10;
    int regs11__Vcvt;
    regs11__Vcvt = regs11;
    int regs12__Vcvt;
    regs12__Vcvt = regs12;
    int regs13__Vcvt;
    regs13__Vcvt = regs13;
    int regs14__Vcvt;
    regs14__Vcvt = regs14;
    int regs15__Vcvt;
    regs15__Vcvt = regs15;
    int regs16__Vcvt;
    regs16__Vcvt = regs16;
    int regs17__Vcvt;
    regs17__Vcvt = regs17;
    int regs18__Vcvt;
    regs18__Vcvt = regs18;
    int regs19__Vcvt;
    regs19__Vcvt = regs19;
    int regs20__Vcvt;
    regs20__Vcvt = regs20;
    int regs21__Vcvt;
    regs21__Vcvt = regs21;
    int regs22__Vcvt;
    regs22__Vcvt = regs22;
    int regs23__Vcvt;
    regs23__Vcvt = regs23;
    int regs24__Vcvt;
    regs24__Vcvt = regs24;
    int regs25__Vcvt;
    regs25__Vcvt = regs25;
    int regs26__Vcvt;
    regs26__Vcvt = regs26;
    int regs27__Vcvt;
    regs27__Vcvt = regs27;
    int regs28__Vcvt;
    regs28__Vcvt = regs28;
    int regs29__Vcvt;
    regs29__Vcvt = regs29;
    int regs30__Vcvt;
    regs30__Vcvt = regs30;
    int regs31__Vcvt;
    regs31__Vcvt = regs31;
    difftest_dut_regs(regs0__Vcvt, regs1__Vcvt, regs2__Vcvt, regs3__Vcvt, regs4__Vcvt, regs5__Vcvt, regs6__Vcvt, regs7__Vcvt, regs8__Vcvt, regs9__Vcvt, regs10__Vcvt, regs11__Vcvt, regs12__Vcvt, regs13__Vcvt, regs14__Vcvt, regs15__Vcvt, regs16__Vcvt, regs17__Vcvt, regs18__Vcvt, regs19__Vcvt, regs20__Vcvt, regs21__Vcvt, regs22__Vcvt, regs23__Vcvt, regs24__Vcvt, regs25__Vcvt, regs26__Vcvt, regs27__Vcvt, regs28__Vcvt, regs29__Vcvt, regs30__Vcvt, regs31__Vcvt);
}

void Vysyx_25060170_topcore___024root____Vdpiexp_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__IDU_SEND_CALL_FLAG_TOP(Vysyx_25060170_topcore__Syms* __restrict vlSymsp, IData/*31:0*/ &call_flag, IData/*31:0*/ &pc, IData/*31:0*/ &dnpc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root____Vdpiexp_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__IDU_SEND_CALL_FLAG_TOP\n"); );
    // Init
    // Body
    call_flag = (((IData)(((0x80U == (0xf80U & vlSymsp->TOP.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst)) 
                           & ((0x6fU == (0x7fU & vlSymsp->TOP.ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst)) 
                              | (0x67U == (0x7fU & vlSymsp->TOP.ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst))))) 
                  | ((IData)(((0U == (0xf80U & vlSymsp->TOP.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if2idureg_idu_inst)) 
                              & (0U == vlSymsp->TOP.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_imm))) 
                     & (0x67U == (0x7fU & vlSymsp->TOP.ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst))))
                  ? 1U : 0U);
    dnpc = (vlSymsp->TOP.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__if1if2reg_ifu2_currentpc 
            + vlSymsp->TOP.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__idu_imm);
}

void Vysyx_25060170_topcore___024root____Vdpiexp_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__IDU_SEND_RET_FLAG_TOP(Vysyx_25060170_topcore__Syms* __restrict vlSymsp, IData/*31:0*/ &ret_flag, IData/*31:0*/ &pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root____Vdpiexp_ysyx_25060170_topcore__DOT__u_ysyx_25060170_DPIC__DOT__IDU_SEND_RET_FLAG_TOP\n"); );
    // Init
    // Body
    ret_flag = ((0x8067U == vlSymsp->TOP.ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst)
                 ? 1U : 0U);
    pc = ((0x67U == (0x7fU & vlSymsp->TOP.ysyx_25060170_topcore__DOT__DPIC_dpic_ifu_inst))
           ? (0xfffffffeU & vlSymsp->TOP.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc)
           : vlSymsp->TOP.ysyx_25060170_topcore__DOT__u_ysyx_25060170_fishtailcore__DOT__ifu1_ifu2_current_pc);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_topcore___024root___dump_triggers__ico(Vysyx_25060170_topcore___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25060170_topcore___024root___eval_triggers__ico(Vysyx_25060170_topcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root___eval_triggers__ico\n"); );
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25060170_topcore___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_topcore___024root___dump_triggers__act(Vysyx_25060170_topcore___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25060170_topcore___024root___eval_triggers__act(Vysyx_25060170_topcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_topcore___024root___eval_triggers__act\n"); );
    Vysyx_25060170_topcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25060170_topcore___024root___dump_triggers__act(vlSelf);
    }
#endif
}
