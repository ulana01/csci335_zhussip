// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmux.h for the primary calling header

#ifndef VERILATED_VMUX___024ROOT_H_
#define VERILATED_VMUX___024ROOT_H_  // guard

#include "verilated.h"


class Vmux__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmux___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(sel,3,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_IN16(data0,15,0);
    VL_IN16(data1,15,0);
    VL_IN16(data2,15,0);
    VL_IN16(data3,15,0);
    VL_IN16(data4,15,0);
    VL_IN16(data5,15,0);
    VL_IN16(data6,15,0);
    VL_IN16(data7,15,0);
    VL_IN16(data8,15,0);
    VL_IN16(data9,15,0);
    VL_OUT16(out,15,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmux__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmux___024root(Vmux__Syms* symsp, const char* v__name);
    ~Vmux___024root();
    VL_UNCOPYABLE(Vmux___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
