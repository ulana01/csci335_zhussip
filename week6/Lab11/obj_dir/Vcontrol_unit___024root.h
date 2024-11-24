// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcontrol_unit.h for the primary calling header

#ifndef VERILATED_VCONTROL_UNIT___024ROOT_H_
#define VERILATED_VCONTROL_UNIT___024ROOT_H_  // guard

#include "verilated.h"


class Vcontrol_unit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcontrol_unit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(alu_sel,3,0);
    VL_OUT8(alu_mode,0,0);
    VL_OUT8(reg_enables,7,0);
    VL_OUT8(mux_sel,3,0);
    VL_OUT8(done,0,0);
    CData/*1:0*/ ContUnit__DOT__state;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(instruction,15,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcontrol_unit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcontrol_unit___024root(Vcontrol_unit__Syms* symsp, const char* v__name);
    ~Vcontrol_unit___024root();
    VL_UNCOPYABLE(Vcontrol_unit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
