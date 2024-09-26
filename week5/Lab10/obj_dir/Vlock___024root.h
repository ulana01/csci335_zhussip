// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vlock.h for the primary calling header

#ifndef VERILATED_VLOCK___024ROOT_H_
#define VERILATED_VLOCK___024ROOT_H_  // guard

#include "verilated.h"


class Vlock__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vlock___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(code_in,3,0);
    VL_IN8(index,2,0);
    VL_OUT8(locked,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*3:0*/, 6> Lock__DOT__correct_code;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vlock__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vlock___024root(Vlock__Syms* symsp, const char* v__name);
    ~Vlock___024root();
    VL_UNCOPYABLE(Vlock___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
