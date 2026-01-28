// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vysyx_25060170_fishtailcore.h"
#include "Vysyx_25060170_fishtailcore__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vysyx_25060170_fishtailcore::Vysyx_25060170_fishtailcore(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vysyx_25060170_fishtailcore__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , DPIC_idu_dpic_rd_addr{vlSymsp->TOP.DPIC_idu_dpic_rd_addr}
    , DPIC_ls_mem_re{vlSymsp->TOP.DPIC_ls_mem_re}
    , DPIC_ls_dpic_we{vlSymsp->TOP.DPIC_ls_dpic_we}
    , DPIC_ls_dpic_wlen{vlSymsp->TOP.DPIC_ls_dpic_wlen}
    , DPIC_ls_dpic_rlen{vlSymsp->TOP.DPIC_ls_dpic_rlen}
    , DPIC_wbu_dpic_valid{vlSymsp->TOP.DPIC_wbu_dpic_valid}
    , DPIC_magic_flag{vlSymsp->TOP.DPIC_magic_flag}
    , DPIC_if_id_pc{vlSymsp->TOP.DPIC_if_id_pc}
    , DPIC_dpic_ifu_inst{vlSymsp->TOP.DPIC_dpic_ifu_inst}
    , DPIC_if_id_reg_pc{vlSymsp->TOP.DPIC_if_id_reg_pc}
    , DPIC_idu_imm{vlSymsp->TOP.DPIC_idu_imm}
    , DPIC_regs0{vlSymsp->TOP.DPIC_regs0}
    , DPIC_regs1{vlSymsp->TOP.DPIC_regs1}
    , DPIC_regs2{vlSymsp->TOP.DPIC_regs2}
    , DPIC_regs3{vlSymsp->TOP.DPIC_regs3}
    , DPIC_regs4{vlSymsp->TOP.DPIC_regs4}
    , DPIC_regs5{vlSymsp->TOP.DPIC_regs5}
    , DPIC_regs6{vlSymsp->TOP.DPIC_regs6}
    , DPIC_regs7{vlSymsp->TOP.DPIC_regs7}
    , DPIC_regs8{vlSymsp->TOP.DPIC_regs8}
    , DPIC_regs9{vlSymsp->TOP.DPIC_regs9}
    , DPIC_regs10{vlSymsp->TOP.DPIC_regs10}
    , DPIC_regs11{vlSymsp->TOP.DPIC_regs11}
    , DPIC_regs12{vlSymsp->TOP.DPIC_regs12}
    , DPIC_regs13{vlSymsp->TOP.DPIC_regs13}
    , DPIC_regs14{vlSymsp->TOP.DPIC_regs14}
    , DPIC_regs15{vlSymsp->TOP.DPIC_regs15}
    , DPIC_regs16{vlSymsp->TOP.DPIC_regs16}
    , DPIC_regs17{vlSymsp->TOP.DPIC_regs17}
    , DPIC_regs18{vlSymsp->TOP.DPIC_regs18}
    , DPIC_regs19{vlSymsp->TOP.DPIC_regs19}
    , DPIC_regs20{vlSymsp->TOP.DPIC_regs20}
    , DPIC_regs21{vlSymsp->TOP.DPIC_regs21}
    , DPIC_regs22{vlSymsp->TOP.DPIC_regs22}
    , DPIC_regs23{vlSymsp->TOP.DPIC_regs23}
    , DPIC_regs24{vlSymsp->TOP.DPIC_regs24}
    , DPIC_regs25{vlSymsp->TOP.DPIC_regs25}
    , DPIC_regs26{vlSymsp->TOP.DPIC_regs26}
    , DPIC_regs27{vlSymsp->TOP.DPIC_regs27}
    , DPIC_regs28{vlSymsp->TOP.DPIC_regs28}
    , DPIC_regs29{vlSymsp->TOP.DPIC_regs29}
    , DPIC_regs30{vlSymsp->TOP.DPIC_regs30}
    , DPIC_regs31{vlSymsp->TOP.DPIC_regs31}
    , DPIC_dpic_mhartid{vlSymsp->TOP.DPIC_dpic_mhartid}
    , DPIC_dpic_mstatus{vlSymsp->TOP.DPIC_dpic_mstatus}
    , DPIC_dpic_mepc{vlSymsp->TOP.DPIC_dpic_mepc}
    , DPIC_dpic_mtvec{vlSymsp->TOP.DPIC_dpic_mtvec}
    , DPIC_dpic_mcause{vlSymsp->TOP.DPIC_dpic_mcause}
    , DPIC_dpic_mscratch{vlSymsp->TOP.DPIC_dpic_mscratch}
    , DPIC_ls_dpic_data{vlSymsp->TOP.DPIC_ls_dpic_data}
    , DPIC_dpi_ls_mem_skip_flag{vlSymsp->TOP.DPIC_dpi_ls_mem_skip_flag}
    , DPIC_mem_wb_skip_flag{vlSymsp->TOP.DPIC_mem_wb_skip_flag}
    , DPIC_wbu_dpic_inst{vlSymsp->TOP.DPIC_wbu_dpic_inst}
    , DPIC_wbu_dpic_pc{vlSymsp->TOP.DPIC_wbu_dpic_pc}
    , DPIC_wbu_dpic_next_pc{vlSymsp->TOP.DPIC_wbu_dpic_next_pc}
    , DPIC_DPIC_MEM_data{vlSymsp->TOP.DPIC_DPIC_MEM_data}
    , DPIC_ls_dpic_raddr{vlSymsp->TOP.DPIC_ls_dpic_raddr}
    , DPIC_ls_dpic_waddr{vlSymsp->TOP.DPIC_ls_dpic_waddr}
    , DPIC_ex_ls_reg_pc{vlSymsp->TOP.DPIC_ex_ls_reg_pc}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vysyx_25060170_fishtailcore::Vysyx_25060170_fishtailcore(const char* _vcname__)
    : Vysyx_25060170_fishtailcore(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vysyx_25060170_fishtailcore::~Vysyx_25060170_fishtailcore() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vysyx_25060170_fishtailcore___024root___eval_debug_assertions(Vysyx_25060170_fishtailcore___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_25060170_fishtailcore___024root___eval_static(Vysyx_25060170_fishtailcore___024root* vlSelf);
void Vysyx_25060170_fishtailcore___024root___eval_initial(Vysyx_25060170_fishtailcore___024root* vlSelf);
void Vysyx_25060170_fishtailcore___024root___eval_settle(Vysyx_25060170_fishtailcore___024root* vlSelf);
void Vysyx_25060170_fishtailcore___024root___eval(Vysyx_25060170_fishtailcore___024root* vlSelf);

void Vysyx_25060170_fishtailcore::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vysyx_25060170_fishtailcore::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vysyx_25060170_fishtailcore___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vysyx_25060170_fishtailcore___024root___eval_static(&(vlSymsp->TOP));
        Vysyx_25060170_fishtailcore___024root___eval_initial(&(vlSymsp->TOP));
        Vysyx_25060170_fishtailcore___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vysyx_25060170_fishtailcore___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vysyx_25060170_fishtailcore::eventsPending() { return false; }

uint64_t Vysyx_25060170_fishtailcore::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vysyx_25060170_fishtailcore::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vysyx_25060170_fishtailcore___024root___eval_final(Vysyx_25060170_fishtailcore___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25060170_fishtailcore::final() {
    Vysyx_25060170_fishtailcore___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vysyx_25060170_fishtailcore::hierName() const { return vlSymsp->name(); }
const char* Vysyx_25060170_fishtailcore::modelName() const { return "Vysyx_25060170_fishtailcore"; }
unsigned Vysyx_25060170_fishtailcore::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vysyx_25060170_fishtailcore::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vysyx_25060170_fishtailcore___024root__trace_init_top(Vysyx_25060170_fishtailcore___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vysyx_25060170_fishtailcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25060170_fishtailcore___024root*>(voidSelf);
    Vysyx_25060170_fishtailcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vysyx_25060170_fishtailcore___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vysyx_25060170_fishtailcore___024root__trace_register(Vysyx_25060170_fishtailcore___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vysyx_25060170_fishtailcore::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vysyx_25060170_fishtailcore::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vysyx_25060170_fishtailcore___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
