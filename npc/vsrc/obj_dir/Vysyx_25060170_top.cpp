// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vysyx_25060170_top__pch.h"

//============================================================
// Constructors

Vysyx_25060170_top::Vysyx_25060170_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vysyx_25060170_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , ready_i{vlSymsp->TOP.ready_i}
    , ready_o{vlSymsp->TOP.ready_o}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vysyx_25060170_top::Vysyx_25060170_top(const char* _vcname__)
    : Vysyx_25060170_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vysyx_25060170_top::~Vysyx_25060170_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vysyx_25060170_top___024root___eval_debug_assertions(Vysyx_25060170_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_25060170_top___024root___eval_static(Vysyx_25060170_top___024root* vlSelf);
void Vysyx_25060170_top___024root___eval_initial(Vysyx_25060170_top___024root* vlSelf);
void Vysyx_25060170_top___024root___eval_settle(Vysyx_25060170_top___024root* vlSelf);
void Vysyx_25060170_top___024root___eval(Vysyx_25060170_top___024root* vlSelf);

void Vysyx_25060170_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vysyx_25060170_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vysyx_25060170_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vysyx_25060170_top___024root___eval_static(&(vlSymsp->TOP));
        Vysyx_25060170_top___024root___eval_initial(&(vlSymsp->TOP));
        Vysyx_25060170_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vysyx_25060170_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vysyx_25060170_top::eventsPending() { return false; }

uint64_t Vysyx_25060170_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vysyx_25060170_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vysyx_25060170_top___024root___eval_final(Vysyx_25060170_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25060170_top::final() {
    Vysyx_25060170_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vysyx_25060170_top::hierName() const { return vlSymsp->name(); }
const char* Vysyx_25060170_top::modelName() const { return "Vysyx_25060170_top"; }
unsigned Vysyx_25060170_top::threads() const { return 1; }
void Vysyx_25060170_top::prepareClone() const { contextp()->prepareClone(); }
void Vysyx_25060170_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
