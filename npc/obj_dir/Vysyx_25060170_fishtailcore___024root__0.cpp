// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25060170_fishtailcore.h for the primary calling header

#include "Vysyx_25060170_fishtailcore__pch.h"

extern "C" void pc_inst_end(int thepc_data, int the_inst);

void Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pc_inst_end_TOP(IData/*31:0*/ thepc_data, IData/*31:0*/ the_inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pc_inst_end_TOP\n"); );
    // Body
    int thepc_data__Vcvt;
    thepc_data__Vcvt = thepc_data;
    int the_inst__Vcvt;
    the_inst__Vcvt = the_inst;
    pc_inst_end(thepc_data__Vcvt, the_inst__Vcvt);
}

extern "C" void pmem_read(int raddr, int* rdata, char rlen, int mode);

void Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata, CData/*7:0*/ rlen, IData/*31:0*/ mode) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read_TOP\n"); );
    // Body
    int raddr__Vcvt;
    raddr__Vcvt = raddr;
    int rdata__Vcvt;
    char rlen__Vcvt;
    rlen__Vcvt = rlen;
    int mode__Vcvt;
    mode__Vcvt = mode;
    pmem_read(raddr__Vcvt, &rdata__Vcvt, rlen__Vcvt, mode__Vcvt);
    rdata = (rdata__Vcvt);
}

extern "C" void pmem_write(int waddr, int wdata, char wlen);

void Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wlen) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_write_TOP\n"); );
    // Body
    int waddr__Vcvt;
    waddr__Vcvt = waddr;
    int wdata__Vcvt;
    wdata__Vcvt = wdata;
    char wlen__Vcvt;
    wlen__Vcvt = wlen;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wlen__Vcvt);
}

extern "C" void set_npc_exit(int pc, int halt_ret);

void Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__set_npc_exit_TOP(IData/*31:0*/ pc, IData/*31:0*/ halt_ret) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__set_npc_exit_TOP\n"); );
    // Body
    int pc__Vcvt;
    pc__Vcvt = pc;
    int halt_ret__Vcvt;
    halt_ret__Vcvt = halt_ret;
    set_npc_exit(pc__Vcvt, halt_ret__Vcvt);
}

extern "C" void magic_instruction();

void Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__magic_instruction_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__magic_instruction_TOP\n"); );
    // Body
    magic_instruction();
}

extern "C" void difftest_dut_csr(int csr_mstatus, int csr_mtvec, int csr_mepc, int csr_mcause);

void Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_csr_TOP(IData/*31:0*/ csr_mstatus, IData/*31:0*/ csr_mtvec, IData/*31:0*/ csr_mepc, IData/*31:0*/ csr_mcause) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_csr_TOP\n"); );
    // Body
    int csr_mstatus__Vcvt;
    csr_mstatus__Vcvt = csr_mstatus;
    int csr_mtvec__Vcvt;
    csr_mtvec__Vcvt = csr_mtvec;
    int csr_mepc__Vcvt;
    csr_mepc__Vcvt = csr_mepc;
    int csr_mcause__Vcvt;
    csr_mcause__Vcvt = csr_mcause;
    difftest_dut_csr(csr_mstatus__Vcvt, csr_mtvec__Vcvt, csr_mepc__Vcvt, csr_mcause__Vcvt);
}

extern "C" void difftest_dut_regs(int regs0, int regs1, int regs2, int regs3, int regs4, int regs5, int regs6, int regs7, int regs8, int regs9, int regs10, int regs11, int regs12, int regs13, int regs14, int regs15, int regs16, int regs17, int regs18, int regs19, int regs20, int regs21, int regs22, int regs23, int regs24, int regs25, int regs26, int regs27, int regs28, int regs29, int regs30, int regs31);

void Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_regs_TOP(IData/*31:0*/ regs0, IData/*31:0*/ regs1, IData/*31:0*/ regs2, IData/*31:0*/ regs3, IData/*31:0*/ regs4, IData/*31:0*/ regs5, IData/*31:0*/ regs6, IData/*31:0*/ regs7, IData/*31:0*/ regs8, IData/*31:0*/ regs9, IData/*31:0*/ regs10, IData/*31:0*/ regs11, IData/*31:0*/ regs12, IData/*31:0*/ regs13, IData/*31:0*/ regs14, IData/*31:0*/ regs15, IData/*31:0*/ regs16, IData/*31:0*/ regs17, IData/*31:0*/ regs18, IData/*31:0*/ regs19, IData/*31:0*/ regs20, IData/*31:0*/ regs21, IData/*31:0*/ regs22, IData/*31:0*/ regs23, IData/*31:0*/ regs24, IData/*31:0*/ regs25, IData/*31:0*/ regs26, IData/*31:0*/ regs27, IData/*31:0*/ regs28, IData/*31:0*/ regs29, IData/*31:0*/ regs30, IData/*31:0*/ regs31) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_regs_TOP\n"); );
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

void Vysyx_25060170_fishtailcore___024root____Vdpiexp_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__IDU_SEND_CALL_FLAG_TOP(Vysyx_25060170_fishtailcore__Syms* __restrict vlSymsp, IData/*31:0*/ &call_flag, IData/*31:0*/ &pc, IData/*31:0*/ &dnpc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root____Vdpiexp_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__IDU_SEND_CALL_FLAG_TOP\n"); );
    // Body
    call_flag = (((IData)(((0x00000080U == (0x00000f80U 
                                            & vlSymsp->TOP.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)) 
                           & ((0x6fU == (0x0000007fU 
                                         & vlSymsp->TOP.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst)) 
                              | (0x67U == (0x0000007fU 
                                           & vlSymsp->TOP.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst))))) 
                  | (IData)((((0U == (0x00000f80U & vlSymsp->TOP.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)) 
                              & (0U == vlSymsp->TOP.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__imm)) 
                             & (0x00000067U == (0x0000007fU 
                                                & vlSymsp->TOP.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst)))))
                  ? 1U : 0U);
    dnpc = (vlSymsp->TOP.ysyx_25060170_fishtailcore__DOT__if_id_reg_pc 
            + vlSymsp->TOP.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__imm);
}

void Vysyx_25060170_fishtailcore___024root____Vdpiexp_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__IDU_SEND_RET_FLAG_TOP(Vysyx_25060170_fishtailcore__Syms* __restrict vlSymsp, IData/*31:0*/ &ret_flag, IData/*31:0*/ &pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root____Vdpiexp_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__IDU_SEND_RET_FLAG_TOP\n"); );
    // Body
    ret_flag = ((0x00008067U == vlSymsp->TOP.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst)
                 ? 1U : 0U);
    pc = ((0x67U == (0x0000007fU & vlSymsp->TOP.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst))
           ? (0xfffffffeU & vlSymsp->TOP.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__pc_i)
           : vlSymsp->TOP.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__pc_i);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vysyx_25060170_fishtailcore___024root___eval_triggers__ico(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___eval_triggers__ico\n"); );
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25060170_fishtailcore___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vysyx_25060170_fishtailcore___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<CData/*3:0*/, 8> Vysyx_25060170_fishtailcore__ConstPool__TABLE_hb316e23d_0;
extern const VlUnpacked<CData/*3:0*/, 256> Vysyx_25060170_fishtailcore__ConstPool__TABLE_hb90e203a_0;

void Vysyx_25060170_fishtailcore___024root___ico_sequent__TOP__0(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___ico_sequent__TOP__0\n"); );
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtableidx2 = ((6U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res 
                                     << 1U)) | (IData)(vlSelfRef.rst));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask 
        = Vysyx_25060170_fishtailcore__ConstPool__TABLE_hb316e23d_0
        [vlSelfRef.__Vtableidx2];
    if (vlSelfRef.rst) {
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__raddr = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_dpic_data = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen = 0U;
    } else {
        if ((0x2aU != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
            if (((0xa8U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                 || (0x94U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))) {
                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena = 1U;
                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena = 1U;
                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena 
                    = (0U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr));
            } else {
                if ((1U & (~ ((0x25U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                              || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                    if ((1U & (~ ((0x4aU == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                  || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                        if ((0x54U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
                            vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena = 0U;
                        }
                    }
                }
                if (((0x25U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                     || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))) {
                    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena 
                        = (0U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr));
                    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena = 1U;
                } else if (((0x4aU == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                            || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))) {
                    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena 
                        = (0U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr));
                    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena = 1U;
                } else if ((0x54U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
                    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena = 0U;
                    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena = 0U;
                }
            }
            if ((1U & (~ ((0xa8U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                          || (0x94U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                if (((0x25U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                     || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))) {
                    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena = 1U;
                } else if ((1U & (~ ((0x4aU == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                     || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                    if ((0x54U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
                        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena = 0U;
                    }
                }
                if ((1U & (~ ((0x25U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                              || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                    if (((0x4aU == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                         || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))) {
                        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena = 1U;
                    } else if ((0x54U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
                        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena = 0U;
                    }
                    if ((1U & (~ ((0x4aU == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                  || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena 
                            = (0x54U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc));
                    }
                }
            }
        }
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__raddr 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res;
        if ((1U & (~ ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl) 
                      >> 3U)))) {
            if ((1U == (7U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))) {
                vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_dpic_data 
                    = ((vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data))));
                vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen 
                    = vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask;
            } else if ((2U == (7U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))) {
                vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_dpic_data 
                    = ((vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                        << 0x00000010U) | (0x0000ffffU 
                                           & vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data));
                vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen 
                    = ((IData)(vlSelfRef.rst) ? 0U : 
                       ((0U == (3U & vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                         ? 3U : ((2U == (3U & vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                  ? 0x0cU : 0U)));
            } else if ((4U == (7U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))) {
                vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_dpic_data 
                    = vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data;
                vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen = 0x0fU;
            } else {
                vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_dpic_data = 0U;
                vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen = 0U;
            }
        }
        if ((0x2aU == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena = 1U;
        } else if ((1U & (~ ((0xa8U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                             || (0x94U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
            if ((1U & (~ ((0x25U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                          || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                if ((1U & (~ ((0x4aU == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                              || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                    if ((0x54U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
                        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena = 0U;
                    }
                }
            }
        }
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res 
            = ((0x00000080U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                ? ((0x00000040U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                    ? ((0x00000020U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                        ? 0U : ((0x00000010U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                 ? 0U : ((8U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                          ? 0U : ((4U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 0U
                                                    : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)))))
                    : ((0x00000020U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                        ? ((0x00000010U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                            ? ((8U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                ? 0U : ((4U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                         ? 0U : ((2U 
                                                  & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 0U
                                                   : (IData)(
                                                             (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul 
                                                              >> 0x00000020U))))))
                            : ((8U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                ? 0U : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))
                        : ((0x00000010U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                            ? ((8U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                ? ((4U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                    ? 0U : ((2U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                              ? 0U : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div)))
                                : 0U) : ((8U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                          ? 0U : ((4U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 0U
                                                     : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__rem)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 0U
                                                     : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3
                                                     : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h9b10c8f5__0)))))))
                : ((0x00000040U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                    ? ((0x00000020U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                        ? ((0x00000010U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                            ? 0U : ((8U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                     ? ((4U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                         ? 0U : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)
                                     : ((4U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                         ? 0U : ((2U 
                                                  & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 0U
                                                   : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hd489bb00__0)))))
                        : ((0x00000010U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                            ? ((8U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                ? ((4U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                    ? 0U : ((2U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                              ? 0U : (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul))))
                                : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)
                            : ((8U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                ? 0U : ((4U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                         ? 0U : ((2U 
                                                  & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__rem
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3
                                                   : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h9b084978__0))))))
                    : ((0x00000020U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                        ? ((0x00000010U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                            ? ((8U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                ? 0U : ((4U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                         ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5
                                         : ((2U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                              ? 0U : 
                                             (1U & 
                                              (((~ 
                                                 (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                  >> 0x0000001fU)) 
                                                & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                   >> 0x0000001fU)) 
                                               | (((~ 
                                                    (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                     >> 0x0000001fU)) 
                                                   & ((~ 
                                                       (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                        >> 0x0000001fU)) 
                                                      & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2 
                                                         >> 0x0000001fU))) 
                                                  | ((vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                      & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                         & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2)) 
                                                     >> 0x0000001fU))))))))
                            : ((8U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                ? ((4U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                    ? 0U : ((2U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                              ? 0U : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h02e4b201__0)))
                                : ((4U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                    ? 0U : ((2U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                 ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div
                                                 : 0U)
                                             : ((1U 
                                                 & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                 ? 
                                                ((IData)(4U) 
                                                 + vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc)
                                                 : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h02e4b201__0)))))
                        : ((0x00000010U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                            ? ((8U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                ? ((4U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                    ? 0U : ((2U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                             ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4
                                             : ((1U 
                                                 & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                 ? 0U
                                                 : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h9b084978__0)))
                                : ((4U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                    ? ((2U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                        ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4
                                        : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)
                                    : ((2U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                        ? 0U : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))
                            : ((8U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                ? ((4U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                    ? ((2U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                        ? 0U : ((1U 
                                                 & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                 ? 0U
                                                 : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2))
                                    : ((2U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                        ? ((1U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                            ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3
                                            : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2)
                                        : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                : ((4U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                    ? ((2U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                        ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                                        : ((1U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                            ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h9b10c8f5__0
                                            : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hd489bb00__0))
                                    : ((2U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                        ? ((1U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                            ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2
                                            : (1U & 
                                               (((~ 
                                                  (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                   >> 0x0000001fU)) 
                                                 & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                    >> 0x0000001fU)) 
                                                | (((~ 
                                                     (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                      >> 0x0000001fU)) 
                                                    & ((~ 
                                                        (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                         >> 0x0000001fU)) 
                                                       & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2 
                                                          >> 0x0000001fU))) 
                                                   | ((vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                       & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                          & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2)) 
                                                      >> 0x0000001fU)))))
                                        : ((1U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                            ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2
                                            : 0U))))))));
    }
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__branch_o 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000060U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal 
        = ((~ (IData)(vlSelfRef.rst)) & (0x0000006fU 
                                         == (0x0000007fU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h2fce64a5_0_1 
        = (1U & (~ ((IData)(vlSelfRef.rst) | (0U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000067U 
                                         == (0x0000007fU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal 
        = ((~ (IData)(vlSelfRef.rst)) & (0x0000006cU 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000034U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000014U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__5__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000018U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000064U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000010U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_load_flag 
        = ((~ (IData)(vlSelfRef.rst)) & (3U == (0x0000007fU 
                                                & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__6__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000038U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000020U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__branch 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000060U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__3__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000030U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000070U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__re 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h2fce64a5_0_1) 
           & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl) 
              >> 3U));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__we 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h2fce64a5_0_1) 
           & (~ ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl) 
                 >> 3U)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jal_jalr_temp 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal) 
           | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o));
    if (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o) {
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_addr_o 
            = (0x0000001fU & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                              >> 0x0000000fU));
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgRegularize_hf5181b73_0_2 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wbu_forward_en;
    } else {
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_addr_o = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgRegularize_hf5181b73_0_2 = 0U;
    }
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_27 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui) 
           | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgRegularize_ha169a72f_0_2 
        = ((((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena) 
             << 3U) | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena) 
                       << 2U)) | (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena) 
                                   << 1U) | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_87 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000eU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__4__KET__));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_18 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__4__KET__) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000eU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_25 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
           | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__4__KET__));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_5 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000eU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_101 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000eU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_load_flag));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_103 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000eU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_98 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__branch) 
           & (0U == (0x00006000U & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_6 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__branch) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000eU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_96 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000eU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__3__KET__));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_13 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__3__KET__) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000eU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_ena 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__6__KET__) 
           | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__3__KET__) 
              | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__branch) 
                 | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_wbctl 
        = ((2U & ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__))) 
                  | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__6__KET__))) 
                     | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__5__KET__))) 
                        | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__4__KET__))) 
                           | (- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__3__KET__)))))))) 
           | ((1U & (- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_load_flag)))) 
              | (2U & ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui))) 
                       | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc))) 
                          | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                             | (- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr)))))))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_22 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000eU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_84 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000eU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h2fce64a5_0_0 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__data_ok) 
           & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__re) 
              | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__we)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__ex_ls_forward_data 
        = (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res 
           | (((- (IData)((0U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgRegularize_ha169a72f_0_2)))) 
               & vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1) 
              | ((- (IData)(((0x94U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                             | ((0xc8U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                | (0xa4U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) 
                 & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_86 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000dU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_87));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_17 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_87) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000dU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_19 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_18) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000dU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_85 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000dU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_18));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__imm 
        = (((- (IData)(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_25) 
                        | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__5__KET__) 
                           | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__) 
                              | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr)))))) 
            & (((- (IData)((vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                            >> 0x0000001fU))) << 0x0000000cU) 
               | (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                  >> 0x00000014U))) | ((0xfffff000U 
                                        & ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_27))) 
                                           & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)) 
                                       | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                                           & (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__j_imm 
                                                              >> 0x00000013U)))) 
                                               << 0x00000015U) 
                                              | (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__j_imm 
                                                 << 1U))) 
                                          | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__))) 
                                              & (((- (IData)(
                                                             (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                              >> 0x0000001fU))) 
                                                  << 0x0000000cU) 
                                                 | ((0x00000fe0U 
                                                     & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                        >> 0x00000014U)) 
                                                    | (0x0000001fU 
                                                       & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                          >> 7U))))) 
                                             | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__branch))) 
                                                & (((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__b_imm) 
                                                                   >> 0x0000000bU)))) 
                                                    << 0x0000000dU) 
                                                   | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__b_imm) 
                                                      << 1U)))))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lwu 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_5) 
           & (0x00002000U == (0x00003000U & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_99 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000dU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_5));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_100 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000dU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_101));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_4 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_101) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000dU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_102 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000dU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_103));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_3 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_103) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000dU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_beq 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_98));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bne 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_98) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_97 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000dU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_6));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_7 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_6) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000dU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_11 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_96) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000dU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_95 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000dU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_96));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_15 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_13) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000dU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_92 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000dU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_13));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_addr 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_ena)
            ? (0x0000001fU & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                              >> 0x00000014U)) : 0U);
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rd_ena 
        = ((0U != (0x0000001fU & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                  >> 7U))) & (0U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_wbctl)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_22) 
           & (0x00001000U == (0x00003000U & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_23 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_22) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000dU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_21 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_84) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000dU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_83 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000dU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_84));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ls_mem_reg__DOT__stall 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_valid) 
           | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h2fce64a5_0_0));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc 
        = ((((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o) 
             & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_addr_o) 
                == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr)))
             ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
             : (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o) 
                 & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_addr_o) 
                    == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))
                 ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__ex_ls_forward_data
                 : ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgRegularize_hf5181b73_0_2)
                     ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wb_rd_data_forward
                     : ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o)
                         ? (((~ (IData)(vlSelfRef.rst)) 
                             & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o))
                             ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                            [vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_addr_o]
                             : 0U) : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__pc_i)))) 
           + ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal)
               ? ((((0x00000ffeU & ((- (IData)((vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                >> 0x0000001fU))) 
                                    << 1U)) | (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                               >> 0x0000001fU)) 
                   << 0x00000014U) | ((((0x000001feU 
                                         & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                            >> 0x0000000bU)) 
                                        | (1U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                 >> 0x00000014U))) 
                                       << 0x0000000bU) 
                                      | (0x000007feU 
                                         & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                            >> 0x00000014U))))
               : ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__branch_o)
                   ? (((- (IData)((vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                   >> 0x0000001fU))) 
                       << 0x0000000dU) | ((((2U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                   >> 0x0000001eU)) 
                                            | (1U & 
                                               (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                >> 7U))) 
                                           << 0x0000000bU) 
                                          | ((0x000007e0U 
                                              & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                 >> 0x00000014U)) 
                                             | (0x0000001eU 
                                                & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                   >> 7U)))))
                   : ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgRegularize_hf5181b73_0_2)
                       ? 0U : ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o)
                                ? (((- (IData)((vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                >> 0x0000001fU))) 
                                    << 0x0000000cU) 
                                   | (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                      >> 0x00000014U))
                                : 4U)))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_20 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_85) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lbu 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_99));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lhu 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_99) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lb 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_100));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lh 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_100) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lw 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_4));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ld 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_4) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sb 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_102));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sh 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_102) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sw 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_3));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sd 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_3) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_blt 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_97));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bge 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_97) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bltu 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_7));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bgeu 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_7) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_93 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_11));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_12 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_11) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_10 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_95) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_94 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_95));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_88 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_15));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_16 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_15) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_91 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_92));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_14 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_92) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h569c3980_0_4 
        = (1U & ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_ena)) 
                 | (0U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_addr))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_23) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_23));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_21));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_21) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_83) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_82 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_83));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srai 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_20) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000001eU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_slt 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x00000019U)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_93));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhsu 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_93) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x00000019U));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sltu 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x00000019U)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_12));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhu 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_12) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x00000019U));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sll 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x00000019U)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_10));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulh 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_10) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x00000019U));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_add 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_94) 
           & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_90));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sub 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_94) 
           & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_89));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mul 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_94) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x00000019U));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_or 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x00000019U)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_88));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_rem 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_88) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x00000019U));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_and 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x00000019U)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_16));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_remu 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_16) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x00000019U));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_xor 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x00000019U)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_91));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_div 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_91) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x00000019U));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srl 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_14) 
           & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_90));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sra 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_14) 
           & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_89));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_divu 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_14) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x00000019U));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward 
        = ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h569c3980_0_4)) 
           & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr) 
              == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward 
        = ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h569c3980_0_4)) 
           & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr) 
              == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward 
        = ((~ ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag) 
               | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h569c3980_0_4))) 
           & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr) 
              == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi) 
                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi) 
                                                   | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9 = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc) 
                                                | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_24 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw) 
           | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mret 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_82) 
           & (0x30000000U == (0x30000000U & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ebreak 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_82) 
           & (1U == (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                     >> 0x00000014U)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_82) 
           & (0U == (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                     >> 0x00000014U)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op2_forward_ena 
        = (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward) 
            | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward) 
               | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward))) 
           & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_ena));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc 
        = (((((((~ (IData)(vlSelfRef.rst)) & (((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                   >> 0x0000001eU)) 
                                               & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_20)) 
                                              | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_xor) 
                                                 | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc) 
                                                    | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ebreak) 
                                                       | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sh) 
                                                          | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sw) 
                                                             | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bltu) 
                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ld) 
                                                                   | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulh) 
                                                                      | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_div) 
                                                                         | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_remu) 
                                                                            | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw) 
                                                                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)))))))))))))) 
               << 3U) | (((~ (IData)(vlSelfRef.rst)) 
                          & (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_86) 
                              & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x0000000cU)) | 
                             ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sltu) 
                              | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_xor) 
                                 | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui) 
                                    | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr) 
                                       | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sb) 
                                          | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bge) 
                                             | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bltu) 
                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lw) 
                                                   | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ld) 
                                                      | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mul) 
                                                         | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_rem) 
                                                            | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mret) 
                                                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9))))))))))))))) 
                         << 2U)) | ((((~ (IData)(vlSelfRef.rst)) 
                                      & (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_19) 
                                          & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                             >> 0x0000000cU)) 
                                         | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_slt) 
                                            | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sltu) 
                                               | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_and) 
                                                  | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc) 
                                                     | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal) 
                                                        | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_blt) 
                                                           | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bge) 
                                                              | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bltu) 
                                                                 | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lh) 
                                                                    | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lw) 
                                                                       | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lwu) 
                                                                          | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulh) 
                                                                             | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_divu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs) 
                                                                                | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci)))))))))))))))))))) 
                                     << 1U) | ((~ (IData)(vlSelfRef.rst)) 
                                               & (((~ 
                                                    (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                     >> 0x0000000cU)) 
                                                   & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_19)) 
                                                  | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sll) 
                                                     | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_slt) 
                                                        | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_or) 
                                                           | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui) 
                                                              | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bne) 
                                                                 | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_blt) 
                                                                    | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bge) 
                                                                       | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lb) 
                                                                          | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lh) 
                                                                             | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ld) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lhu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mul) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulh) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_div) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mret) 
                                                                                | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi))))))))))))))))))))) 
            << 4U) | (((((~ (IData)(vlSelfRef.rst)) 
                         & (((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_85)) 
                            | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sub) 
                               | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sll) 
                                  | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sra) 
                                     | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_and) 
                                        | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_beq) 
                                           | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bne) 
                                              | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_blt) 
                                                 | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bgeu) 
                                                    | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lb) 
                                                       | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lw) 
                                                          | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lbu) 
                                                             | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lwu) 
                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mul) 
                                                                   | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_div) 
                                                                      | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall) 
                                                                         | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw) 
                                                                            | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9))))))))))))))))))) 
                        << 3U) | (((~ (IData)(vlSelfRef.rst)) 
                                   & (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_17) 
                                       & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                          >> 0x0000000cU)) 
                                      | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_add) 
                                         | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sub) 
                                            | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srl) 
                                               | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_or) 
                                                  | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ebreak) 
                                                     | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sd) 
                                                        | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_beq) 
                                                           | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bne) 
                                                              | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bgeu) 
                                                                 | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lh) 
                                                                    | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lhu) 
                                                                       | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lwu) 
                                                                          | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhu) 
                                                                             | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_remu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mret) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi) 
                                                                                | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci)))))))))))))))))))) 
                                  << 2U)) | ((((~ (IData)(vlSelfRef.rst)) 
                                               & (((~ 
                                                    (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                     >> 0x0000000cU)) 
                                                   & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_17)) 
                                                  | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srai) 
                                                     | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_add) 
                                                        | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sra) 
                                                           | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr) 
                                                              | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sh) 
                                                                 | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sd) 
                                                                    | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_beq) 
                                                                       | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lb) 
                                                                          | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lbu) 
                                                                             | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lhu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhsu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_divu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_rem) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_remu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall) 
                                                                                | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc))))))))))))))))))) 
                                              << 1U) 
                                             | ((~ (IData)(vlSelfRef.rst)) 
                                                & (((~ 
                                                     (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                      >> 0x0000000cU)) 
                                                    & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_86)) 
                                                   | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srai) 
                                                      | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srl) 
                                                         | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal) 
                                                            | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sb) 
                                                               | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sw) 
                                                                  | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sd) 
                                                                     | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bgeu) 
                                                                        | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lbu) 
                                                                           | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhsu) 
                                                                              | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_divu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_rem) 
                                                                                | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs)))))))))))))))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_ena 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__6__KET__) 
           | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__5__KET__) 
              | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__4__KET__) 
                 | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__3__KET__) 
                    | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__branch) 
                       | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                          | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__) 
                             | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr) 
                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_24) 
                                   | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc) 
                                      | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall)))))))))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op2 
        = (((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op2_forward_ena))) 
            & (((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward))) 
                & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__ex_ls_forward_data) 
               | (((- (IData)(((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward)) 
                               & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward)))) 
                   & vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res) 
                  | ((- (IData)(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward) 
                                 & ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward)) 
                                    & (~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward)))))) 
                     & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wb_rd_data_forward)))) 
           | ((- (IData)(((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op2_forward_ena)) 
                          & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_ena)))) 
              & (((~ (IData)(vlSelfRef.rst)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_ena))
                  ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                 [vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_addr]
                  : 0U)));
    vlSelfRef.__Vtableidx3 = vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc;
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_lsctl 
        = Vysyx_25060170_fishtailcore__ConstPool__TABLE_hb90e203a_0
        [vlSelfRef.__Vtableidx3];
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_addr 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_ena)
            ? (0x0000001fU & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                              >> 0x0000000fU)) : 0U);
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h569c3980_0_2 
        = (1U & ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_ena)) 
                 | (0U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_addr))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward 
        = ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h569c3980_0_2)) 
           & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr) 
              == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward 
        = ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h569c3980_0_2)) 
           & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr) 
              == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward 
        = ((~ ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag) 
               | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h569c3980_0_2))) 
           & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr) 
              == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_stall 
        = ((~ (IData)(vlSelfRef.rst)) & (((~ ((IData)(vlSelfRef.rst) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)))) 
                                          & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_ena) 
                                             & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag) 
                                                & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_addr) 
                                                   == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr))))) 
                                         | (((~ ((IData)(vlSelfRef.rst) 
                                                 & (0U 
                                                    == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)))) 
                                             & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_ena) 
                                                & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag) 
                                                   & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_addr) 
                                                      == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr))))) 
                                            | ((((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward) 
                                                 & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena)) 
                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward) 
                                                   & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_csr_ena))) 
                                               | (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward) 
                                                   & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena)) 
                                                  | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward) 
                                                     & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_csr_ena)))))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_forward_ena 
        = (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward) 
            | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward) 
               | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward))) 
           & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_ena));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_valid 
        = (1U & (~ ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__ls_ready_i) 
                    | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_stall))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op1 
        = (((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_forward_ena))) 
            & (((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward))) 
                & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__ex_ls_forward_data) 
               | (((- (IData)(((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward)) 
                               & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward)))) 
                   & vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res) 
                  | ((- (IData)(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward) 
                                 & ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward)) 
                                    & (~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward)))))) 
                     & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wb_rd_data_forward)))) 
           | ((- (IData)(((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_forward_ena)) 
                          & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_ena)))) 
              & (((~ (IData)(vlSelfRef.rst)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_ena))
                  ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                 [vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_addr]
                  : 0U)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2 
        = (vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op1 
           < vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op2);
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2 
        = (1U & (((vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op1 
                   ^ vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op2) 
                  >> 0x0000001fU) ? (vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op1 
                                     >> 0x0000001fU)
                  : (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__branch_success 
        = ((IData)(vlSelfRef.rst) | (((0x0eU == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                                      & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op1 
                                         == vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op2)) 
                                     | (((0x1cU == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                                         & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op1 
                                            != vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op2)) 
                                        | (((0xe0U 
                                             == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                                            & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2)) 
                                           | (((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2)) 
                                               & (0x0dU 
                                                  == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc))) 
                                              | (((0x38U 
                                                   == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                                                  & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2)) 
                                                 | ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2)) 
                                                    & (0x70U 
                                                       == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc)))))))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_if_pc_jump 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__branch_success) 
           ^ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_jump));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if_id_reg__DOT__flush 
        = ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_stall)) 
           & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_if_pc_jump));
}

void Vysyx_25060170_fishtailcore___024root___eval_ico(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___eval_ico\n"); );
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vysyx_25060170_fishtailcore___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

bool Vysyx_25060170_fishtailcore___024root___eval_phase__ico(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___eval_phase__ico\n"); );
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vysyx_25060170_fishtailcore___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vysyx_25060170_fishtailcore___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vysyx_25060170_fishtailcore___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vysyx_25060170_fishtailcore___024root___eval_triggers__act(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___eval_triggers__act\n"); );
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25060170_fishtailcore___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vysyx_25060170_fishtailcore___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<CData/*3:0*/, 128> Vysyx_25060170_fishtailcore__ConstPool__TABLE_hfadd892a_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_25060170_fishtailcore__ConstPool__TABLE_h66887680_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_25060170_fishtailcore__ConstPool__TABLE_hce0d71de_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_25060170_fishtailcore__ConstPool__TABLE_h266529c6_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_25060170_fishtailcore__ConstPool__TABLE_hc9de4dc1_0;

void Vysyx_25060170_fishtailcore___024root___nba_sequent__TOP__0(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___nba_sequent__TOP__0\n"); );
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__0__rdata;
    __Vtask_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__0__rdata = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state;
    __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state;
    __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_pc;
    __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_pc = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc;
    __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__id_jump;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_jump = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc = 0;
    CData/*3:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl = 0;
    CData/*6:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl;
    __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl = 0;
    CData/*0:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena;
    __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena = 0;
    CData/*4:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr;
    __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr = 0;
    SData/*11:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr;
    __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr = 0;
    IData/*31:0*/ __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus;
    __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus = 0;
    CData/*0:0*/ __VdlySet__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v0;
    __VdlySet__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v0 = 0;
    IData/*31:0*/ __VdlyVal__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32;
    __VdlyVal__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32 = 0;
    CData/*4:0*/ __VdlyDim0__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32;
    __VdlyDim0__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32 = 0;
    CData/*0:0*/ __VdlySet__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32;
    __VdlySet__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32 = 0;
    // Body
    __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena 
        = vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl 
        = vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl;
    __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state 
        = vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state;
    __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state 
        = vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state;
    __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc 
        = vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc;
    __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_pc 
        = vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_pc;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_jump 
        = vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_jump;
    __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus 
        = vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus;
    __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr 
        = vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr;
    __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr 
        = vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr;
    __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl 
        = vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl;
    __VdlySet__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v0 = 0U;
    __VdlySet__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32 = 0U;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm 
        = vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm;
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc 
        = vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc;
    if ((1U & (~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_valid_o)))) {
        Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pc_inst_end_TOP(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc, vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_inst);
    }
    if ((0x00100073U == vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_inst)) {
        Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__set_npc_exit_TOP(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_pc, 0U);
    }
    if ((0x40000033U == vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)) {
        Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__magic_instruction_TOP();
    }
    if (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__re) {
        Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read_TOP(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__raddr, __Vtask_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__0__rdata, 4U, 2U);
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__DPIC_MEM_data 
            = __Vtask_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__0__rdata;
    }
    if (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__we) {
        Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_write_TOP(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__raddr, vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_dpic_data, (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen));
    }
    __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ls_mem_reg__DOT__stall)
                                                  ? (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_ena)
                                                  : (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall)
                                                  ? (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_ena)
                                                  : (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ls_mem_reg__DOT__stall)
                                                  ? (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_re)
                                                  : (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__re)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena 
        = ((1U & (~ ((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_if_pc_jump)))) 
           && ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_id_ex_reg__DOT__stall)
                ? (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_ena)
                : (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rd_ena)));
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl 
        = (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_if_pc_jump))
            ? 0U : ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_id_ex_reg__DOT__stall)
                     ? (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl)
                     : (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_lsctl)));
    if (vlSelfRef.rst) {
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_inst = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl = 0U;
    } else {
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_inst 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_inst;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_next_pc;
        if (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ls_mem_reg__DOT__stall) {
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr;
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl;
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl;
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc;
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc;
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst;
        } else {
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_addr 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr;
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_csr_ctl 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl;
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_wb_ctl 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl;
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_next_pc 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc;
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_pc 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc;
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_inst 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst;
        }
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl 
            = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall)
                ? (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_wb_ctl)
                : (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl));
    }
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl 
        = (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_if_pc_jump))
            ? 0U : ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_id_ex_reg__DOT__stall)
                     ? (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_wbctl)
                     : (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_wbctl)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc 
        = ((IData)(vlSelfRef.rst) ? 0U : ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall)
                                           ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_next_pc
                                           : vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc));
    if (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_if_pc_jump))) {
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc = 0U;
    } else if (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_id_ex_reg__DOT__stall) {
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc;
    } else {
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_next_pc 
            = (((0x21U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_if_pc_jump))
                ? (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__imm 
                   + vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_pc)
                : ((0x42U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                    ? (0xfffffffeU & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op1 
                                      + vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__imm))
                    : vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc));
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc;
    }
    if (vlSelfRef.rst) {
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_pc = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mtvec_base = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mepc = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mcause = 0U;
        __VdlySet__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v0 = 1U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data = 0U;
    } else {
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_pc 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_pc;
        if (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ls_mem_reg__DOT__stall) {
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl;
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res;
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr;
        } else {
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_ls_ctl 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl;
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_alu_res 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res;
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_reg_rd_addr 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr;
        }
        if (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall) {
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst;
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl;
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl;
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res;
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr;
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data;
        } else {
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_inst 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst;
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl;
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_ctl 
                = (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena) 
                    << 6U) | (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena) 
                               << 5U) | (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena) 
                                          << 4U) | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgRegularize_ha169a72f_0_2))));
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__ex_ls_forward_data;
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr;
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2;
        }
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data;
        if ((1U & (~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena)))) {
            __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus;
        }
        __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr;
        __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr;
        __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
            = (0x3fffffffU & (((0x0305U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                               & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                  >> 3U)) ? (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__write_csr_data 
                                             >> 2U)
                               : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mtvec_base));
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mepc 
            = ((1U & (((0x0341U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                       & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                          >> 3U)) | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                     >> 1U))) ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__write_csr_data
                : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mepc);
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mcause 
            = (((0x0342U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                   >> 3U)) ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__write_csr_data
                : ((2U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                    ? 0x0000000bU : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mcause));
        if (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena) 
             & (0U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr)))) {
            __VdlyVal__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wb_rd_data_forward;
            __VdlyDim0__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr;
            __VdlySet__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32 = 1U;
        }
    }
    if (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_if_pc_jump))) {
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2 = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1 = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr = 0U;
    } else if (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_id_ex_reg__DOT__stall) {
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2;
        __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm;
        __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr 
            = (0x0000001fU & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr));
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr 
            = (0x0000001fU & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr));
    } else {
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op2;
        __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__imm;
        __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_pc;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op1;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel 
            = ((2U & ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                      | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr))) 
                         | (- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc)))))) 
               | (1U & (- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_ena)))));
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel 
            = ((2U & ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                      | (- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr))))) 
               | ((4U & (- (IData)(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__) 
                                    | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_25) 
                                       | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__5__KET__) 
                                          | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__) 
                                             | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_27)))))))) 
                  | (1U & (- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_ena))))));
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_inst 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr 
            = (0x0000001fU & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                              >> 0x0000000fU));
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr 
            = (0x0000001fU & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rd_ena)
                               ? (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                  >> 7U) : 0U));
    }
    __Vtableidx1 = ((((((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__branch_success) 
                        << 3U) | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_jump) 
                                  << 2U)) | (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state))) 
                     << 3U) | (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_not_taken_state) 
                                << 2U) | (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_not_taken_state) 
                                           << 1U) | (IData)(vlSelfRef.rst))));
    if ((1U & Vysyx_25060170_fishtailcore__ConstPool__TABLE_hfadd892a_0
         [__Vtableidx1])) {
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_not_taken_state 
            = Vysyx_25060170_fishtailcore__ConstPool__TABLE_h66887680_0
            [__Vtableidx1];
    }
    if ((2U & Vysyx_25060170_fishtailcore__ConstPool__TABLE_hfadd892a_0
         [__Vtableidx1])) {
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_not_taken_state 
            = Vysyx_25060170_fishtailcore__ConstPool__TABLE_hce0d71de_0
            [__Vtableidx1];
    }
    if ((4U & Vysyx_25060170_fishtailcore__ConstPool__TABLE_hfadd892a_0
         [__Vtableidx1])) {
        __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state 
            = Vysyx_25060170_fishtailcore__ConstPool__TABLE_h266529c6_0
            [__Vtableidx1];
    }
    if ((8U & Vysyx_25060170_fishtailcore__ConstPool__TABLE_hfadd892a_0
         [__Vtableidx1])) {
        __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state 
            = Vysyx_25060170_fishtailcore__ConstPool__TABLE_hc9de4dc1_0
            [__Vtableidx1];
    }
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_csr_ena 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall)
                                                  ? (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_csr_ena)
                                                  : (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena)));
    if (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if_id_reg__DOT__flush))) {
        __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc = 0U;
        __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_pc = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst = 0U;
    } else if ((1U & (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_valid) 
                       | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_stall)) 
                      | (~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__ls_ready_i))))) {
        __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc;
        __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_pc 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_pc;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst;
    } else {
        __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc 
            = ((IData)(4U) + vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__pc_i);
        __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_pc 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__pc_i;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst;
    }
    __Vdly__ysyx_25060170_fishtailcore__DOT__id_jump 
        = ((1U & (~ ((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if_id_reg__DOT__flush)))) 
           && ((1U & (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_valid) 
                       | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_stall)) 
                      | (~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__ls_ready_i))))
                ? (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_jump)
                : (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__bp_predict)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag 
        = ((1U & (~ ((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_if_pc_jump)))) 
           && ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_id_ex_reg__DOT__stall)
                ? (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag)
                : (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_load_flag)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena 
        = ((1U & (~ ((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_if_pc_jump)))) 
           && ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_id_ex_reg__DOT__stall)
                ? (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena)
                : ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_24) 
                   | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc) 
                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_mem__DOT__data_ok = 0U;
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_mem_valid 
        = ((IData)(vlSelfRef.rst) || (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ls_mem_reg__DOT__stall));
    if ((1U & (~ (IData)(vlSelfRef.rst)))) {
        if (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena) {
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mpp_set;
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mie_set;
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mpie_set;
        }
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__bp_if_jal_jalr 
            = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal)
                ? (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jal_jalr_temp)
                : ((1U & (~ ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__branch_o) 
                             & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state) 
                                | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state))))) 
                   && (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o) 
                        & (~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wbu_forward_en)))
                        ? (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jal_jalr_temp)
                        : ((1U & (~ ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_jump) 
                                     & (~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__branch_success))))) 
                           && ((1U & (~ ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_jump)) 
                                         & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__branch_success)))) 
                               && (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o) 
                                    & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wbu_forward_en)) 
                                   && (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jal_jalr_temp)))))));
    }
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_valid 
        = (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if_id_reg__DOT__flush)) 
           || (1U & (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_valid) 
                      | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_stall)) 
                     | (~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__ls_ready_i)))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_valid 
        = (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_if_pc_jump)) 
           || (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_id_ex_reg__DOT__stall));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__data_ok 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && (1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__ls_ready_i) 
                                                     | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_valid)))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl 
        = __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_lsctl;
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc 
        = __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_next_pc;
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus 
        = __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus;
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr 
        = __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr;
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl 
        = __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl;
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena 
        = __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_rd_ena;
    if (__VdlySet__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v0) {
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0U] = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[1U] = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[2U] = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[3U] = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[4U] = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[5U] = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[6U] = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[7U] = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[8U] = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[9U] = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x0aU] = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x0bU] = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x0cU] = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x0dU] = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x0eU] = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x0fU] = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x10U] = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x11U] = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x12U] = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x13U] = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x14U] = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x15U] = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x16U] = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x17U] = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x18U] = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x19U] = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x1aU] = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x1bU] = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x1cU] = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x1dU] = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x1eU] = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[0x1fU] = 0U;
    }
    if (__VdlySet__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32) {
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs[__VdlyDim0__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32] 
            = __VdlyVal__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs__v32;
    }
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr 
        = __Vdly__ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr;
    if (vlSelfRef.rst) {
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ifu__DOT__pc = 0x80000000U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_pc 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_pc;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_valid_o = 1U;
    } else {
        if (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall) {
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr 
                = (0x00000fffU & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr));
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc;
        } else {
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_csr_addr 
                = (0x00000fffU & ((0U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgRegularize_ha169a72f_0_2))
                                   ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm
                                   : 0U));
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_pc 
                = vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc;
        }
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ifu__DOT__pc 
            = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_stall)
                ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ifu__DOT__pc
                : ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__bp_predict)
                    ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__bp_if_pc
                    : ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_if_pc_jump)
                        ? (((0x42U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc))
                             ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op1
                             : vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_pc) 
                           + ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_jump)
                               ? 4U : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__imm))
                        : (((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_stall)) 
                            & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_valid))
                            ? 0x80000000U : ((IData)(4U) 
                                             + vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__pc_i)))));
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_pc 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__if_id_reg_pc;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_valid_o = 0U;
    }
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h2fce64a5_0_1 
        = (1U & (~ ((IData)(vlSelfRef.rst) | (0U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))));
    vlSelfRef.__Vtableidx2 = ((6U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res 
                                     << 1U)) | (IData)(vlSelfRef.rst));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask 
        = Vysyx_25060170_fishtailcore__ConstPool__TABLE_hb316e23d_0
        [vlSelfRef.__Vtableidx2];
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__raddr 
        = ((IData)(vlSelfRef.rst) ? 0U : vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res);
    Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_csr_TOP(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus, 
                                                                                (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
                                                                                << 2U), vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mepc, vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mcause);
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr 
        = ((0x0300U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
           & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
              >> 3U));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__read_csr_data 
        = (((0x0300U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
            & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
               >> 2U)) ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus
            : ((1U & (((0x0341U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                       & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                          >> 2U)) | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl)))
                ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mepc
                : ((1U & (((0x0305U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                           & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                              >> 2U)) | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                         >> 1U))) ? 
                   (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mtvec_base 
                    << 2U) : (((0x0342U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_addr)) 
                               & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                  >> 2U)) ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mcause
                               : 0U))));
    Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__difftest_dut_regs_TOP(
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [1U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [2U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [3U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [4U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [5U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [6U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [7U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [8U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [9U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x0aU], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x0bU], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x0cU], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x0dU], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x0eU], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x0fU], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x10U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x11U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x12U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x13U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x14U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x15U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x16U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x17U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x18U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x19U], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x1aU], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x1bU], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x1cU], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x1dU], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x1eU], 
                                                                                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                                                                                [0x1fU]);
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__bp_predict 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && ((1U 
                                                  & (~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal))) 
                                                 && (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__branch_o) 
                                                      & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state) 
                                                         | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state))) 
                                                     || ((1U 
                                                          & (~ 
                                                             ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o) 
                                                              & (~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wbu_forward_en))))) 
                                                         && ((1U 
                                                              & (~ 
                                                                 ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_jump) 
                                                                  & (~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__branch_success))))) 
                                                             && ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_jump)) 
                                                                 & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__branch_success)))))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__j_imm 
        = ((0x0007ffffU & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__j_imm) 
           | (0x00080000U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                             >> 0x0000000cU)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__j_imm 
        = ((0x00080000U & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__j_imm) 
           | ((0x0007f800U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                              >> 1U)) | ((0x00000400U 
                                          & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                             >> 0x0000000aU)) 
                                         | (0x000003ffU 
                                            & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                               >> 0x00000015U)))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__b_imm 
        = ((0x07ffU & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__b_imm)) 
           | (0x00000800U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                             >> 0x00000014U)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__b_imm 
        = ((0x0800U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__b_imm)) 
           | ((0x00000400U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                              << 3U)) | ((0x000003f0U 
                                          & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                             >> 0x00000015U)) 
                                         | (0x0000000fU 
                                            & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                               >> 8U)))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal 
        = ((~ (IData)(vlSelfRef.rst)) & (0x0000006cU 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000034U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000014U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_90 
        = (IData)((0U == (0x42000000U & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_89 
        = (IData)((0x40000000U == (0x42000000U & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__5__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000018U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000064U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000010U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_load_flag 
        = ((~ (IData)(vlSelfRef.rst)) & (3U == (0x0000007fU 
                                                & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__6__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000038U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000020U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__branch 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000060U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__3__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000030U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__ 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000070U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_id_ex_reg__DOT__stall 
        = (1U & ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__ls_ready_i)) 
                 | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_valid)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_valid 
        = ((IData)(vlSelfRef.rst) || (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__re 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h2fce64a5_0_1) 
           & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl) 
              >> 3U));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__we 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h2fce64a5_0_1) 
           & (~ ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl) 
                 >> 3U)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_ie_ena 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr) 
           | (0U != (3U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__write_csr_data 
        = (((- (IData)((1U & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                              >> 6U)))) & vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data) 
           | (((- (IData)((1U & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                 >> 5U)))) & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data 
                                              | vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__read_csr_data)) 
              | (((- (IData)((1U & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                    >> 4U)))) & ((~ vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data) 
                                                 & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__read_csr_data)) 
                 | ((- (IData)((1U & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                                      >> 1U)))) & vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_pc))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wb_rd_data_forward 
        = (((- (IData)((1U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl)))) 
            & vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_lsu_res) 
           | (((- (IData)((1U & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_wb_ctl) 
                                 >> 1U)))) & vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_alures_data) 
              | ((- (IData)((0U != (0x0000000fU & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))))) 
                 & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__read_csr_data)));
    if (vlSelfRef.rst) {
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_dpic_data = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__bp_if_pc = 0x80000000U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_jump 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__id_jump;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl) 
                      >> 3U)))) {
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_dpic_data 
                = ((1U == (7U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))
                    ? ((vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data))))
                    : ((2U == (7U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))
                        ? ((vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data 
                            << 0x00000010U) | (0x0000ffffU 
                                               & vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data))
                        : ((4U == (7U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))
                            ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_store_data
                            : 0U)));
        }
        if ((0x2aU != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
            if (((0xa8U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                 || (0x94U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))) {
                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena = 1U;
                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena = 1U;
                vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena 
                    = (0U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr));
            } else {
                if ((1U & (~ ((0x25U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                              || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                    if ((1U & (~ ((0x4aU == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                  || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                        if ((0x54U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
                            vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrw_ena = 0U;
                        }
                    }
                }
                if (((0x25U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                     || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))) {
                    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena 
                        = (0U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr));
                    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena = 1U;
                } else if (((0x4aU == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                            || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))) {
                    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena 
                        = (0U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr));
                    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena = 1U;
                } else if ((0x54U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
                    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena = 0U;
                    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena = 0U;
                }
            }
            if ((1U & (~ ((0xa8U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                          || (0x94U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                if (((0x25U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                     || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))) {
                    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena = 1U;
                } else if ((1U & (~ ((0x4aU == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                     || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                    if ((0x54U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
                        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrs_ena = 0U;
                    }
                }
                if ((1U & (~ ((0x25U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                              || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                    if (((0x4aU == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                         || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))) {
                        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena = 1U;
                    } else if ((0x54U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
                        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csrrc_ena = 0U;
                    }
                    if ((1U & (~ ((0x4aU == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                  || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena 
                            = (0x54U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc));
                    }
                }
            }
        }
        if ((0x2aU == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
            vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena = 1U;
        } else if ((1U & (~ ((0xa8U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                             || (0x94U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
            if ((1U & (~ ((0x25U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                          || (0xc8U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                if ((1U & (~ ((0x4aU == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                              || (0xa4U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) {
                    if ((0x54U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
                        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena = 0U;
                    }
                }
            }
        }
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__bp_if_pc 
            = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal)
                ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc
                : (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__branch_o) 
                    & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state) 
                       | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state)))
                    ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc
                    : (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o) 
                        & (~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wbu_forward_en)))
                        ? (0xfffffffeU & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc)
                        : (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_jump) 
                            & (~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__branch_success)))
                            ? ((IData)(4U) + vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc)
                            : (((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_jump)) 
                                & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__branch_success))
                                ? (vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc 
                                   + vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm)
                                : (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o) 
                                    & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wbu_forward_en))
                                    ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc
                                    : ((IData)(4U) 
                                       + vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__pc_i)))))));
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__weakly_taken_state;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__strongly_taken_state;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_jump 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__id_jump;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc 
            = __Vdly__ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc;
    }
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgRegularize_ha169a72f_0_2 
        = ((((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_wr_ena) 
             << 3U) | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__csr_rd_ena) 
                       << 2U)) | (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__ecall_ena) 
                                   << 1U) | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mret_ena)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_27 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui) 
           | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_87 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000eU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__4__KET__));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_18 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__4__KET__) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000eU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_25 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
           | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__4__KET__));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_5 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000eU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_101 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000eU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_load_flag));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_103 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000eU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_98 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__branch) 
           & (0U == (0x00006000U & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_6 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__branch) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000eU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_96 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000eU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__3__KET__));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_13 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__3__KET__) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000eU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_ena 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__6__KET__) 
           | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__3__KET__) 
              | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__branch) 
                 | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_wbctl 
        = ((2U & ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__))) 
                  | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__6__KET__))) 
                     | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__5__KET__))) 
                        | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__4__KET__))) 
                           | (- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__3__KET__)))))))) 
           | ((1U & (- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_load_flag)))) 
              | (2U & ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui))) 
                       | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc))) 
                          | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                             | (- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr)))))))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_22 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000eU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_84 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000eU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__stall 
        = (1U & ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__ls_ready_i)) 
                 | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_valid)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h2fce64a5_0_0 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__data_ok) 
           & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__re) 
              | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__we)));
    if ((2U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))) {
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mpp_set = 3U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mpie_set 
            = (1U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie));
    } else {
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mpp_set 
            = ((1U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                ? 0U : (3U & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                               ? (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__write_csr_data 
                                  >> 0x0000000dU) : (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpp))));
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mpie_set 
            = (1U & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                     | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                         ? (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__write_csr_data 
                            >> 7U) : (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie))));
    }
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mie_set 
        = (1U & ((~ ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl) 
                     >> 1U)) & ((1U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_csr_ctl))
                                 ? (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mpie)
                                 : ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_wr)
                                     ? (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__write_csr_data 
                                        >> 3U) : (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_wbu__DOT__u_ysyx_25060170_csr__DOT__mstatus_mie)))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__pc_i 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__bp_if_jal_jalr)
            ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__bp_if_pc
            : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ifu__DOT__pc);
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
        = (((- (IData)((1U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel)))) 
            & vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2) 
           | ((4U & (- (IData)((2U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel))))) 
              | ((- (IData)((4U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op2_sel)))) 
                 & vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
        = (((- (IData)((1U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel)))) 
            & vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1) 
           | ((- (IData)((2U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1_sel)))) 
              & vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_86 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000dU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_87));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_17 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_87) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000dU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_19 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_18) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000dU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_85 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000dU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_18));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__imm 
        = (((- (IData)(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_25) 
                        | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__5__KET__) 
                           | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__7__KET__) 
                              | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr)))))) 
            & (((- (IData)((vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                            >> 0x0000001fU))) << 0x0000000cU) 
               | (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                  >> 0x00000014U))) | ((0xfffff000U 
                                        & ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_27))) 
                                           & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)) 
                                       | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal))) 
                                           & (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__j_imm 
                                                              >> 0x00000013U)))) 
                                               << 0x00000015U) 
                                              | (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__j_imm 
                                                 << 1U))) 
                                          | (((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__))) 
                                              & (((- (IData)(
                                                             (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                              >> 0x0000001fU))) 
                                                  << 0x0000000cU) 
                                                 | ((0x00000fe0U 
                                                     & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                        >> 0x00000014U)) 
                                                    | (0x0000001fU 
                                                       & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                          >> 7U))))) 
                                             | ((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__branch))) 
                                                & (((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__b_imm) 
                                                                   >> 0x0000000bU)))) 
                                                    << 0x0000000dU) 
                                                   | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__b_imm) 
                                                      << 1U)))))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lwu 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_5) 
           & (0x00002000U == (0x00003000U & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_99 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000dU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_5));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_100 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000dU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_101));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_4 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_101) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000dU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_102 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000dU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_103));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_3 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_103) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000dU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_beq 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_98));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bne 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_98) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_97 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000dU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_6));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_7 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_6) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000dU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_11 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_96) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000dU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_95 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000dU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_96));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_15 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_13) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000dU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_92 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000dU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_13));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_addr 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_ena)
            ? (0x0000001fU & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                              >> 0x00000014U)) : 0U);
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rd_ena 
        = ((0U != (0x0000001fU & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                  >> 7U))) & (0U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_wbctl)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_22) 
           & (0x00001000U == (0x00003000U & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_23 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_22) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000dU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_21 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_84) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000dU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_83 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000dU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_84));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ls_mem_reg__DOT__stall 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_valid) 
           | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT____VdfgRegularize_h2fce64a5_0_0));
    if (vlSelfRef.rst) {
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen = 0U;
    } else if ((1U & (~ ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl) 
                         >> 3U)))) {
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_dpic_wlen 
            = ((1U == (7U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))
                ? (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_lsu__DOT__sb_mask)
                : ((2U == (7U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))
                    ? ((IData)(vlSelfRef.rst) ? 0U : 
                       ((0U == (3U & vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                         ? 3U : ((2U == (3U & vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res))
                                  ? 0x0cU : 0U))) : 
                   ((4U == (7U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_ctl)))
                     ? 0x0fU : 0U)));
    }
    Vysyx_25060170_fishtailcore___024root____Vdpiimwrap_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read_TOP(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__pc_i, vlSelfRef.__Vtask_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__2__rdata, 4U, 1U);
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
        = vlSelfRef.__Vtask_ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_DPIC__DOT__pmem_read__2__rdata;
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h02e4b201__0 
        = (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
           & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h9b084978__0 
        = (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
           << (0x0000001fU & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h9b10c8f5__0 
        = (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
           >> (0x0000001fU & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hd489bb00__0 
        = (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
           < vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div 
        = VL_DIVS_III(32, vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1, vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2 
        = VL_SHIFTRS_III(32,32,5, vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1, 
                         (0x0000001fU & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2 
        = (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
           - vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__rem 
        = VL_MODDIVS_III(32, vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1, vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1), 
                      VL_EXTENDS_QI(64,32, vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2 
        = (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
           + vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                + vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_imm);
    if ((1U & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = 0U;
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = 
            (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
             ^ vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = 
            (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
             | vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2);
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3;
    }
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_20 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_85) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lbu 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_99));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lhu 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_99) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lb 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_100));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lh 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_100) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lw 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_4));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ld 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_4) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sb 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_102));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sh 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_102) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sw 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_3));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sd 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_3) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_blt 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_97));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bge 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_97) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bltu 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_7));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bgeu 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_7) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_93 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_11));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_12 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_11) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_10 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_95) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_94 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_95));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_88 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_15));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_16 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_15) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_91 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_92));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_14 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_92) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h569c3980_0_4 
        = (1U & ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_ena)) 
                 | (0U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_addr))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_23) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_23));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_21));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_21) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_83) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000000cU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_82 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_83));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__branch_o 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000060U 
                                         == (0x0000007cU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal 
        = ((~ (IData)(vlSelfRef.rst)) & (0x0000006fU 
                                         == (0x0000007fU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wbu_forward_en 
        = ((0x0000001fU & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                           >> 7U)) == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o 
        = ((~ (IData)(vlSelfRef.rst)) & (0x00000067U 
                                         == (0x0000007fU 
                                             & vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srai 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_20) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x0000001eU));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_slt 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x00000019U)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_93));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhsu 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_93) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x00000019U));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sltu 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x00000019U)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_12));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhu 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_12) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x00000019U));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sll 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x00000019U)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_10));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulh 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_10) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x00000019U));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_add 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_94) 
           & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_90));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sub 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_94) 
           & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_89));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mul 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_94) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x00000019U));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_or 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x00000019U)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_88));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_rem 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_88) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x00000019U));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_and 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x00000019U)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_16));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_remu 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_16) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x00000019U));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_xor 
        = ((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
               >> 0x00000019U)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_91));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_div 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_91) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x00000019U));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srl 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_14) 
           & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_90));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sra 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_14) 
           & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_89));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_divu 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_14) 
           & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
              >> 0x00000019U));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward 
        = ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h569c3980_0_4)) 
           & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr) 
              == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward 
        = ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h569c3980_0_4)) 
           & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr) 
              == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward 
        = ((~ ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag) 
               | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h569c3980_0_4))) 
           & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr) 
              == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi) 
                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi) 
                                                   | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9 = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc) 
                                                | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrsi));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_24 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw) 
           | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mret 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_82) 
           & (0x30000000U == (0x30000000U & vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ebreak 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_82) 
           & (1U == (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                     >> 0x00000014U)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_82) 
           & (0U == (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                     >> 0x00000014U)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jal_jalr_temp 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal) 
           | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o));
    if (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o) {
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_addr_o 
            = (0x0000001fU & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                              >> 0x0000000fU));
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgRegularize_hf5181b73_0_2 
            = vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wbu_forward_en;
    } else {
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_addr_o = 0U;
        vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgRegularize_hf5181b73_0_2 = 0U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = ((4U 
                                                 & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                 ? 0U
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                  ? 0U
                                                  : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 = ((2U 
                                                 & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                 ? 0U
                                                 : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4);
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res 
        = ((IData)(vlSelfRef.rst) ? 0U : ((0x00000080U 
                                           & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                           ? ((0x00000040U 
                                               & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                               ? ((0x00000020U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 0U
                                                   : 
                                                  ((0x00000010U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 0U
                                                       : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)))))
                                               : ((0x00000020U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 
                                                  ((0x00000010U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? 0U
                                                        : (IData)(
                                                                  (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul 
                                                                   >> 0x00000020U))))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 0U
                                                     : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))
                                                   : 
                                                  ((0x00000010U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div)))
                                                     : 0U)
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__rem)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3
                                                        : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h9b10c8f5__0)))))))
                                           : ((0x00000040U 
                                               & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                               ? ((0x00000020U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 
                                                  ((0x00000010U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hd489bb00__0)))))
                                                   : 
                                                  ((0x00000010U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? 0U
                                                        : (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__mul))))
                                                     : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__rem
                                                        : 
                                                       ((IData)(4U) 
                                                        + vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3
                                                        : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h9b084978__0))))))
                                               : ((0x00000020U 
                                                   & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                   ? 
                                                  ((0x00000010U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? 0U
                                                        : 
                                                       (1U 
                                                        & (((~ 
                                                             (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                              >> 0x0000001fU)) 
                                                            & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                               >> 0x0000001fU)) 
                                                           | (((~ 
                                                                (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                                 >> 0x0000001fU)) 
                                                               & ((~ 
                                                                   (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                                    >> 0x0000001fU)) 
                                                                  & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2 
                                                                     >> 0x0000001fU))) 
                                                              | ((vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                                  & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                                     & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2)) 
                                                                 >> 0x0000001fU))))))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h02e4b201__0)))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__div
                                                        : 0U)
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? 
                                                       ((IData)(4U) 
                                                        + vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_pc)
                                                        : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h02e4b201__0)))))
                                                   : 
                                                  ((0x00000010U 
                                                    & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h9b084978__0)))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4
                                                       : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 0U
                                                       : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                     ? 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? 0U
                                                        : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3
                                                        : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2)
                                                       : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_h9b10c8f5__0
                                                        : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgExtracted_hd489bb00__0))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sra_op2
                                                        : 
                                                       (1U 
                                                        & (((~ 
                                                             (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                              >> 0x0000001fU)) 
                                                            & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                               >> 0x0000001fU)) 
                                                           | (((~ 
                                                                (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                                 >> 0x0000001fU)) 
                                                               & ((~ 
                                                                   (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                                    >> 0x0000001fU)) 
                                                                  & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2 
                                                                     >> 0x0000001fU))) 
                                                              | ((vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1 
                                                                  & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op2 
                                                                     & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_sub_op2)) 
                                                                 >> 0x0000001fU)))))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc))
                                                        ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__op1_add_op2
                                                        : 0U)))))))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op2_forward_ena 
        = (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward) 
            | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward) 
               | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward))) 
           & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_ena));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc 
        = (((((((~ (IData)(vlSelfRef.rst)) & (((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                   >> 0x0000001eU)) 
                                               & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_20)) 
                                              | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_xor) 
                                                 | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc) 
                                                    | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ebreak) 
                                                       | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sh) 
                                                          | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sw) 
                                                             | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bltu) 
                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ld) 
                                                                   | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulh) 
                                                                      | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_div) 
                                                                         | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_remu) 
                                                                            | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw) 
                                                                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)))))))))))))) 
               << 3U) | (((~ (IData)(vlSelfRef.rst)) 
                          & (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_86) 
                              & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x0000000cU)) | 
                             ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sltu) 
                              | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_xor) 
                                 | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui) 
                                    | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr) 
                                       | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sb) 
                                          | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bge) 
                                             | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bltu) 
                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lw) 
                                                   | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ld) 
                                                      | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mul) 
                                                         | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_rem) 
                                                            | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mret) 
                                                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9))))))))))))))) 
                         << 2U)) | ((((~ (IData)(vlSelfRef.rst)) 
                                      & (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_19) 
                                          & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                             >> 0x0000000cU)) 
                                         | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_slt) 
                                            | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sltu) 
                                               | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_and) 
                                                  | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_auipc) 
                                                     | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal) 
                                                        | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_blt) 
                                                           | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bge) 
                                                              | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bltu) 
                                                                 | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lh) 
                                                                    | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lw) 
                                                                       | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lwu) 
                                                                          | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulh) 
                                                                             | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_divu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs) 
                                                                                | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci)))))))))))))))))))) 
                                     << 1U) | ((~ (IData)(vlSelfRef.rst)) 
                                               & (((~ 
                                                    (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                     >> 0x0000000cU)) 
                                                   & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_19)) 
                                                  | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sll) 
                                                     | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_slt) 
                                                        | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_or) 
                                                           | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lui) 
                                                              | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bne) 
                                                                 | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_blt) 
                                                                    | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bge) 
                                                                       | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lb) 
                                                                          | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lh) 
                                                                             | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ld) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lhu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mul) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulh) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_div) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mret) 
                                                                                | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi))))))))))))))))))))) 
            << 4U) | (((((~ (IData)(vlSelfRef.rst)) 
                         & (((~ (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                 >> 0x0000000cU)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_85)) 
                            | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sub) 
                               | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sll) 
                                  | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sra) 
                                     | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_and) 
                                        | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_beq) 
                                           | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bne) 
                                              | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_blt) 
                                                 | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bgeu) 
                                                    | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lb) 
                                                       | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lw) 
                                                          | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lbu) 
                                                             | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lwu) 
                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mul) 
                                                                   | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_div) 
                                                                      | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall) 
                                                                         | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrw) 
                                                                            | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9))))))))))))))))))) 
                        << 3U) | (((~ (IData)(vlSelfRef.rst)) 
                                   & (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_17) 
                                       & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                          >> 0x0000000cU)) 
                                      | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_add) 
                                         | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sub) 
                                            | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srl) 
                                               | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_or) 
                                                  | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ebreak) 
                                                     | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sd) 
                                                        | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_beq) 
                                                           | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bne) 
                                                              | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bgeu) 
                                                                 | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lh) 
                                                                    | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lhu) 
                                                                       | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lwu) 
                                                                          | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhu) 
                                                                             | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_remu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mret) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrwi) 
                                                                                | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrci)))))))))))))))))))) 
                                  << 2U)) | ((((~ (IData)(vlSelfRef.rst)) 
                                               & (((~ 
                                                    (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                     >> 0x0000000cU)) 
                                                   & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_17)) 
                                                  | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srai) 
                                                     | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_add) 
                                                        | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sra) 
                                                           | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr) 
                                                              | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sh) 
                                                                 | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sd) 
                                                                    | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_beq) 
                                                                       | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lb) 
                                                                          | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lbu) 
                                                                             | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lhu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhsu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_divu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_rem) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_remu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall) 
                                                                                | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc))))))))))))))))))) 
                                              << 1U) 
                                             | ((~ (IData)(vlSelfRef.rst)) 
                                                & (((~ 
                                                     (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                                                      >> 0x0000000cU)) 
                                                    & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_86)) 
                                                   | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srai) 
                                                      | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_srl) 
                                                         | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jal) 
                                                            | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sb) 
                                                               | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sw) 
                                                                  | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_sd) 
                                                                     | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_bgeu) 
                                                                        | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_lbu) 
                                                                           | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_mulhsu) 
                                                                              | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_divu) 
                                                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_rem) 
                                                                                | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrs)))))))))))))))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_ena 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__6__KET__) 
           | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__5__KET__) 
              | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__4__KET__) 
                 | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__3__KET__) 
                    | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__branch) 
                       | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_load_flag) 
                          | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_type__BRA__0__KET__) 
                             | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_jalr) 
                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT____VdfgRegularize_hd23f4efd_0_24) 
                                   | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_csrrc) 
                                      | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__decoder__DOT__inst_ecall)))))))))));
    vlSelfRef.__Vtableidx3 = vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc;
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_lsctl 
        = Vysyx_25060170_fishtailcore__ConstPool__TABLE_hb90e203a_0
        [vlSelfRef.__Vtableidx3];
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_addr 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_ena)
            ? (0x0000001fU & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_id_reg_inst 
                              >> 0x0000000fU)) : 0U);
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__ex_ls_forward_data 
        = (vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT__alu_res 
           | (((- (IData)((0U != (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_exu__DOT____VdfgRegularize_ha169a72f_0_2)))) 
               & vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_op1) 
              | ((- (IData)(((0x94U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                             | ((0xc8U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)) 
                                | (0xa4U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_alusrc)))))) 
                 & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rs1_addr))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h569c3980_0_2 
        = (1U & ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_ena)) 
                 | (0U == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_addr))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__jump_pc 
        = ((((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o) 
             & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_addr_o) 
                == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr)))
             ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res
             : (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o) 
                 & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_addr_o) 
                    == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr)))
                 ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__ex_ls_forward_data
                 : ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgRegularize_hf5181b73_0_2)
                     ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wb_rd_data_forward
                     : ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o)
                         ? (((~ (IData)(vlSelfRef.rst)) 
                             & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o))
                             ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                            [vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_addr_o]
                             : 0U) : vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__pc_i)))) 
           + ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__inst_jal)
               ? ((((0x00000ffeU & ((- (IData)((vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                >> 0x0000001fU))) 
                                    << 1U)) | (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                               >> 0x0000001fU)) 
                   << 0x00000014U) | ((((0x000001feU 
                                         & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                            >> 0x0000000bU)) 
                                        | (1U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                 >> 0x00000014U))) 
                                       << 0x0000000bU) 
                                      | (0x000007feU 
                                         & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                            >> 0x00000014U))))
               : ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__branch_o)
                   ? (((- (IData)((vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                   >> 0x0000001fU))) 
                       << 0x0000000dU) | ((((2U & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                   >> 0x0000001eU)) 
                                            | (1U & 
                                               (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                >> 7U))) 
                                           << 0x0000000bU) 
                                          | ((0x000007e0U 
                                              & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                 >> 0x00000014U)) 
                                             | (0x0000001eU 
                                                & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                   >> 7U)))))
                   : ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT____VdfgRegularize_hf5181b73_0_2)
                       ? 0U : ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__bp_rs1_ena_o)
                                ? (((- (IData)((vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                                >> 0x0000001fU))) 
                                    << 0x0000000cU) 
                                   | (vlSelfRef.ysyx_25060170_fishtailcore__DOT__dpic_ifu_inst 
                                      >> 0x00000014U))
                                : 4U)))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op2 
        = (((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op2_forward_ena))) 
            & (((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward))) 
                & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__ex_ls_forward_data) 
               | (((- (IData)(((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward)) 
                               & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward)))) 
                   & vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res) 
                  | ((- (IData)(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op2_forward) 
                                 & ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward)) 
                                    & (~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward)))))) 
                     & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wb_rd_data_forward)))) 
           | ((- (IData)(((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op2_forward_ena)) 
                          & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_ena)))) 
              & (((~ (IData)(vlSelfRef.rst)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_ena))
                  ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                 [vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_addr]
                  : 0U)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward 
        = ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h569c3980_0_2)) 
           & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__mem_wb_rd_addr) 
              == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward 
        = ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h569c3980_0_2)) 
           & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_rd_addr) 
              == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward 
        = ((~ ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag) 
               | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT____VdfgRegularize_h569c3980_0_2))) 
           & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr) 
              == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_stall 
        = ((~ (IData)(vlSelfRef.rst)) & (((~ ((IData)(vlSelfRef.rst) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_addr)))) 
                                          & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_ena) 
                                             & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag) 
                                                & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_addr) 
                                                   == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr))))) 
                                         | (((~ ((IData)(vlSelfRef.rst) 
                                                 & (0U 
                                                    == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_addr)))) 
                                             & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_ena) 
                                                & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_load_flag) 
                                                   & ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs2_addr) 
                                                      == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_ex_reg_rd_addr))))) 
                                            | ((((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward) 
                                                 & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena)) 
                                                | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward) 
                                                   & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_csr_ena))) 
                                               | (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op2_forward) 
                                                   & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_ls_csr_ena)) 
                                                  | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op2_forward) 
                                                     & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__ls_csr_ena)))))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_forward_ena 
        = (((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward) 
            | ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward) 
               | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward))) 
           & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_ena));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__if_valid 
        = (1U & (~ ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_ex_ls_reg__DOT__ls_ready_i) 
                    | (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_stall))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op1 
        = (((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_forward_ena))) 
            & (((- (IData)((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward))) 
                & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__ex_ls_forward_data) 
               | (((- (IData)(((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward)) 
                               & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward)))) 
                   & vlSelfRef.ysyx_25060170_fishtailcore__DOT__ex_ls_reg_exu_res) 
                  | ((- (IData)(((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__wb_op1_forward) 
                                 & ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ex_op1_forward)) 
                                    & (~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__ls_op1_forward)))))) 
                     & vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__wb_rd_data_forward)))) 
           | ((- (IData)(((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_forward_ena)) 
                          & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_ena)))) 
              & (((~ (IData)(vlSelfRef.rst)) & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_ena))
                  ? vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_regfile__DOT__regs
                 [vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_rs1_addr]
                  : 0U)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2 
        = (vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op1 
           < vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op2);
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2 
        = (1U & (((vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op1 
                   ^ vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op2) 
                  >> 0x0000001fU) ? (vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op1 
                                     >> 0x0000001fU)
                  : (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2)));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__branch_success 
        = ((IData)(vlSelfRef.rst) | (((0x0eU == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                                      & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op1 
                                         == vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op2)) 
                                     | (((0x1cU == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                                         & (vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op1 
                                            != vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_op2)) 
                                        | (((0xe0U 
                                             == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                                            & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2)) 
                                           | (((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op_ltu_op2)) 
                                               & (0x0dU 
                                                  == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc))) 
                                              | (((0x38U 
                                                   == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc)) 
                                                  & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2)) 
                                                 | ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_idu__DOT__op1_lt_op2)) 
                                                    & (0x70U 
                                                       == (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__idu_alusrc)))))))));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_if_pc_jump 
        = ((IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_bpu__DOT__branch_success) 
           ^ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_jump));
    vlSelfRef.ysyx_25060170_fishtailcore__DOT__u_ysyx_25060170_if_id_reg__DOT__flush 
        = ((~ (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_stall)) 
           & (IData)(vlSelfRef.ysyx_25060170_fishtailcore__DOT__id_if_pc_jump));
}

void Vysyx_25060170_fishtailcore___024root___eval_nba(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___eval_nba\n"); );
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vysyx_25060170_fishtailcore___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

void Vysyx_25060170_fishtailcore___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vysyx_25060170_fishtailcore___024root___eval_phase__act(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___eval_phase__act\n"); );
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_25060170_fishtailcore___024root___eval_triggers__act(vlSelf);
    Vysyx_25060170_fishtailcore___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vysyx_25060170_fishtailcore___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vysyx_25060170_fishtailcore___024root___eval_phase__nba(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___eval_phase__nba\n"); );
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vysyx_25060170_fishtailcore___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vysyx_25060170_fishtailcore___024root___eval_nba(vlSelf);
        Vysyx_25060170_fishtailcore___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vysyx_25060170_fishtailcore___024root___eval(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___eval\n"); );
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vysyx_25060170_fishtailcore___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("vsrc/core/ysyx_25060170_fishtailcore.v", 5, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vysyx_25060170_fishtailcore___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vysyx_25060170_fishtailcore___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("vsrc/core/ysyx_25060170_fishtailcore.v", 5, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vysyx_25060170_fishtailcore___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("vsrc/core/ysyx_25060170_fishtailcore.v", 5, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vysyx_25060170_fishtailcore___024root___eval_phase__act(vlSelf));
    } while (Vysyx_25060170_fishtailcore___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vysyx_25060170_fishtailcore___024root___eval_debug_assertions(Vysyx_25060170_fishtailcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25060170_fishtailcore___024root___eval_debug_assertions\n"); );
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");
    }
}
#endif  // VL_DEBUG
