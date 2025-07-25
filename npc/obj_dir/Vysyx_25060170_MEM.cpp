// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vysyx_25060170_MEM__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vysyx_25060170_MEM::Vysyx_25060170_MEM(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vysyx_25060170_MEM__Syms(contextp(), _vcname__, this)}
    , ready_i{vlSymsp->TOP.ready_i}
    , ready_o{vlSymsp->TOP.ready_o}
    , addr_i{vlSymsp->TOP.addr_i}
    , inst_o{vlSymsp->TOP.inst_o}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vysyx_25060170_MEM::Vysyx_25060170_MEM(const char* _vcname__)
    : Vysyx_25060170_MEM(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vysyx_25060170_MEM::~Vysyx_25060170_MEM() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vysyx_25060170_MEM___024root___eval_debug_assertions(Vysyx_25060170_MEM___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_25060170_MEM___024root___eval_static(Vysyx_25060170_MEM___024root* vlSelf);
void Vysyx_25060170_MEM___024root___eval_initial(Vysyx_25060170_MEM___024root* vlSelf);
void Vysyx_25060170_MEM___024root___eval_settle(Vysyx_25060170_MEM___024root* vlSelf);
void Vysyx_25060170_MEM___024root___eval(Vysyx_25060170_MEM___024root* vlSelf);

void Vysyx_25060170_MEM::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vysyx_25060170_MEM::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vysyx_25060170_MEM___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vysyx_25060170_MEM___024root___eval_static(&(vlSymsp->TOP));
        Vysyx_25060170_MEM___024root___eval_initial(&(vlSymsp->TOP));
        Vysyx_25060170_MEM___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vysyx_25060170_MEM___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vysyx_25060170_MEM::eventsPending() { return false; }

uint64_t Vysyx_25060170_MEM::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vysyx_25060170_MEM::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vysyx_25060170_MEM___024root___eval_final(Vysyx_25060170_MEM___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25060170_MEM::final() {
    Vysyx_25060170_MEM___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vysyx_25060170_MEM::hierName() const { return vlSymsp->name(); }
const char* Vysyx_25060170_MEM::modelName() const { return "Vysyx_25060170_MEM"; }
unsigned Vysyx_25060170_MEM::threads() const { return 1; }
void Vysyx_25060170_MEM::prepareClone() const { contextp()->prepareClone(); }
void Vysyx_25060170_MEM::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vysyx_25060170_MEM::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vysyx_25060170_MEM___024root__trace_decl_types(VerilatedVcd* tracep);

void Vysyx_25060170_MEM___024root__trace_init_top(Vysyx_25060170_MEM___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vysyx_25060170_MEM___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25060170_MEM___024root*>(voidSelf);
    Vysyx_25060170_MEM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vysyx_25060170_MEM___024root__trace_decl_types(tracep);
    Vysyx_25060170_MEM___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vysyx_25060170_MEM___024root__trace_register(Vysyx_25060170_MEM___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vysyx_25060170_MEM::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vysyx_25060170_MEM::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vysyx_25060170_MEM___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
