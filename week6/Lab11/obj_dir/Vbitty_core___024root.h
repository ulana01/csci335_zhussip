// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vbitty_core.h for the primary calling header

#ifndef VERILATED_VBITTY_CORE___024ROOT_H_
#define VERILATED_VBITTY_CORE___024ROOT_H_  // guard

#include "verilated.h"


class Vbitty_core__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vbitty_core___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(done,0,0);
    CData/*3:0*/ BittyCore__DOT__alu_sel;
    CData/*0:0*/ BittyCore__DOT__alu_mode;
    CData/*3:0*/ BittyCore__DOT__mux_sel;
    CData/*7:0*/ BittyCore__DOT__reg_enables;
    CData/*1:0*/ BittyCore__DOT__CU__DOT__state;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(instruction,15,0);
    VL_OUT16(result,15,0);
    SData/*15:0*/ BittyCore__DOT__alu_out;
    SData/*15:0*/ BittyCore__DOT____Vcellout__regs__BRA__0__KET____DOT__reg_inst__d_out;
    SData/*15:0*/ BittyCore__DOT____Vcellout__regs__BRA__1__KET____DOT__reg_inst__d_out;
    SData/*15:0*/ BittyCore__DOT____Vcellout__regs__BRA__2__KET____DOT__reg_inst__d_out;
    SData/*15:0*/ BittyCore__DOT____Vcellout__regs__BRA__3__KET____DOT__reg_inst__d_out;
    SData/*15:0*/ BittyCore__DOT____Vcellout__regs__BRA__4__KET____DOT__reg_inst__d_out;
    SData/*15:0*/ BittyCore__DOT____Vcellout__regs__BRA__5__KET____DOT__reg_inst__d_out;
    SData/*15:0*/ BittyCore__DOT____Vcellout__regs__BRA__6__KET____DOT__reg_inst__d_out;
    SData/*15:0*/ BittyCore__DOT____Vcellout__regs__BRA__7__KET____DOT__reg_inst__d_out;
    SData/*15:0*/ BittyCore__DOT__myMux__DOT__data8;
    SData/*15:0*/ BittyCore__DOT__myMux__DOT__data9;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vbitty_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vbitty_core___024root(Vbitty_core__Syms* symsp, const char* v__name);
    ~Vbitty_core___024root();
    VL_UNCOPYABLE(Vbitty_core___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
