// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMux__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VMux::VMux(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VMux__Syms(contextp(), _vcname__, this)}
    , ysyx_25060170_IDU__02Eclk{vlSymsp->TOP.ysyx_25060170_IDU__02Eclk}
    , ysyx_25060170_top__02Eclk{vlSymsp->TOP.ysyx_25060170_top__02Eclk}
    , MuxKey__02Eout{vlSymsp->TOP.MuxKey__02Eout}
    , MuxKey__02Ekey{vlSymsp->TOP.MuxKey__02Ekey}
    , MuxKey__02Elut{vlSymsp->TOP.MuxKey__02Elut}
    , MuxKeyWithDefault__02Eout{vlSymsp->TOP.MuxKeyWithDefault__02Eout}
    , MuxKeyWithDefault__02Ekey{vlSymsp->TOP.MuxKeyWithDefault__02Ekey}
    , default_out{vlSymsp->TOP.default_out}
    , MuxKeyWithDefault__02Elut{vlSymsp->TOP.MuxKeyWithDefault__02Elut}
    , ysyx_25060170_IDU__02Erst{vlSymsp->TOP.ysyx_25060170_IDU__02Erst}
    , reg_write_en_i{vlSymsp->TOP.reg_write_en_i}
    , reg_write_addr_i{vlSymsp->TOP.reg_write_addr_i}
    , opcode_o{vlSymsp->TOP.opcode_o}
    , funct3_o{vlSymsp->TOP.funct3_o}
    , funct7_o{vlSymsp->TOP.funct7_o}
    , rd_o{vlSymsp->TOP.rd_o}
    , ysyx_25060170_top__02Erst{vlSymsp->TOP.ysyx_25060170_top__02Erst}
    , ready_i{vlSymsp->TOP.ready_i}
    , ready_o{vlSymsp->TOP.ready_o}
    , inst_i{vlSymsp->TOP.inst_i}
    , reg_write_data_i{vlSymsp->TOP.reg_write_data_i}
    , rs1_data_o{vlSymsp->TOP.rs1_data_o}
    , rs2_data_o{vlSymsp->TOP.rs2_data_o}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VMux::VMux(const char* _vcname__)
    : VMux(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VMux::~VMux() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VMux___024root___eval_debug_assertions(VMux___024root* vlSelf);
#endif  // VL_DEBUG
void VMux___024root___eval_static(VMux___024root* vlSelf);
void VMux___024root___eval_initial(VMux___024root* vlSelf);
void VMux___024root___eval_settle(VMux___024root* vlSelf);
void VMux___024root___eval(VMux___024root* vlSelf);

void VMux::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMux::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMux___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VMux___024root___eval_static(&(vlSymsp->TOP));
        VMux___024root___eval_initial(&(vlSymsp->TOP));
        VMux___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VMux___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VMux::eventsPending() { return false; }

uint64_t VMux::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VMux::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VMux___024root___eval_final(VMux___024root* vlSelf);

VL_ATTR_COLD void VMux::final() {
    VMux___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VMux::hierName() const { return vlSymsp->name(); }
const char* VMux::modelName() const { return "VMux"; }
unsigned VMux::threads() const { return 1; }
void VMux::prepareClone() const { contextp()->prepareClone(); }
void VMux::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VMux::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VMux___024root__trace_decl_types(VerilatedVcd* tracep);

void VMux___024root__trace_init_top(VMux___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMux___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMux___024root*>(voidSelf);
    VMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VMux___024root__trace_decl_types(tracep);
    VMux___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VMux___024root__trace_register(VMux___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMux::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VMux::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VMux___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
