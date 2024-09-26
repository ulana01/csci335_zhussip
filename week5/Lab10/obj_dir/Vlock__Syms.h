// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VLOCK__SYMS_H_
#define VERILATED_VLOCK__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vlock.h"

// INCLUDE MODULE CLASSES
#include "Vlock___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vlock__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vlock* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vlock___024root                TOP;

    // CONSTRUCTORS
    Vlock__Syms(VerilatedContext* contextp, const char* namep, Vlock* modelp);
    ~Vlock__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
