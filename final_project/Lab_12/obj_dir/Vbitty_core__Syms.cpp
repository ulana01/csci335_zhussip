// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vbitty_core__pch.h"
#include "Vbitty_core.h"
#include "Vbitty_core___024root.h"

// FUNCTIONS
Vbitty_core__Syms::~Vbitty_core__Syms()
{
}

Vbitty_core__Syms::Vbitty_core__Syms(VerilatedContext* contextp, const char* namep, Vbitty_core* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(43);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
