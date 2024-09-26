// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vlock__pch.h"

//============================================================
// Constructors

Vlock::Vlock(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vlock__Syms(contextp(), _vcname__, this)}
    , code_in{vlSymsp->TOP.code_in}
    , index{vlSymsp->TOP.index}
    , locked{vlSymsp->TOP.locked}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vlock::Vlock(const char* _vcname__)
    : Vlock(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vlock::~Vlock() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vlock___024root___eval_debug_assertions(Vlock___024root* vlSelf);
#endif  // VL_DEBUG
void Vlock___024root___eval_static(Vlock___024root* vlSelf);
void Vlock___024root___eval_initial(Vlock___024root* vlSelf);
void Vlock___024root___eval_settle(Vlock___024root* vlSelf);
void Vlock___024root___eval(Vlock___024root* vlSelf);

void Vlock::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vlock::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vlock___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vlock___024root___eval_static(&(vlSymsp->TOP));
        Vlock___024root___eval_initial(&(vlSymsp->TOP));
        Vlock___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vlock___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vlock::eventsPending() { return false; }

uint64_t Vlock::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vlock::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vlock___024root___eval_final(Vlock___024root* vlSelf);

VL_ATTR_COLD void Vlock::final() {
    Vlock___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vlock::hierName() const { return vlSymsp->name(); }
const char* Vlock::modelName() const { return "Vlock"; }
unsigned Vlock::threads() const { return 1; }
void Vlock::prepareClone() const { contextp()->prepareClone(); }
void Vlock::atClone() const {
    contextp()->threadPoolpOnClone();
}
