// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlock.h for the primary calling header

#include "Vlock__pch.h"
#include "Vlock__Syms.h"
#include "Vlock___024root.h"

void Vlock___024root___ctor_var_reset(Vlock___024root* vlSelf);

Vlock___024root::Vlock___024root(Vlock__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vlock___024root___ctor_var_reset(this);
}

void Vlock___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vlock___024root::~Vlock___024root() {
}
