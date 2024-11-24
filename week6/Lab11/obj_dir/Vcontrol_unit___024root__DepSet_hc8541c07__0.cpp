// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontrol_unit.h for the primary calling header

#include "Vcontrol_unit__pch.h"
#include "Vcontrol_unit___024root.h"

void Vcontrol_unit___024root___eval_act(Vcontrol_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vcontrol_unit___024root___nba_sequent__TOP__0(Vcontrol_unit___024root* vlSelf);

void Vcontrol_unit___024root___eval_nba(Vcontrol_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcontrol_unit___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcontrol_unit___024root___nba_sequent__TOP__0(Vcontrol_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__ContUnit__DOT__state;
    __Vdly__ContUnit__DOT__state = 0;
    // Body
    __Vdly__ContUnit__DOT__state = vlSelfRef.ContUnit__DOT__state;
    if (vlSelfRef.reset) {
        __Vdly__ContUnit__DOT__state = 0U;
        vlSelfRef.done = 0U;
    } else if ((0U == (IData)(vlSelfRef.ContUnit__DOT__state))) {
        vlSelfRef.mux_sel = (0xfU & ((IData)(vlSelfRef.instruction) 
                                     >> 0xcU));
        vlSelfRef.alu_sel = (0xfU & ((IData)(vlSelfRef.instruction) 
                                     >> 4U));
        vlSelfRef.alu_mode = (1U & ((IData)(vlSelfRef.instruction) 
                                    >> 3U));
        vlSelfRef.reg_enables = 1U;
        __Vdly__ContUnit__DOT__state = 1U;
    } else if ((1U == (IData)(vlSelfRef.ContUnit__DOT__state))) {
        vlSelfRef.reg_enables = 2U;
        __Vdly__ContUnit__DOT__state = 2U;
    } else if ((2U == (IData)(vlSelfRef.ContUnit__DOT__state))) {
        vlSelfRef.done = 1U;
        __Vdly__ContUnit__DOT__state = 0U;
    } else {
        __Vdly__ContUnit__DOT__state = 0U;
        vlSelfRef.done = 0U;
    }
    vlSelfRef.ContUnit__DOT__state = __Vdly__ContUnit__DOT__state;
}

void Vcontrol_unit___024root___eval_triggers__act(Vcontrol_unit___024root* vlSelf);

bool Vcontrol_unit___024root___eval_phase__act(Vcontrol_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcontrol_unit___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcontrol_unit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcontrol_unit___024root___eval_phase__nba(Vcontrol_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcontrol_unit___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_unit___024root___dump_triggers__nba(Vcontrol_unit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontrol_unit___024root___dump_triggers__act(Vcontrol_unit___024root* vlSelf);
#endif  // VL_DEBUG

void Vcontrol_unit___024root___eval(Vcontrol_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vcontrol_unit___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/control_unit.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vcontrol_unit___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/control_unit.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcontrol_unit___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcontrol_unit___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcontrol_unit___024root___eval_debug_assertions(Vcontrol_unit___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontrol_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontrol_unit___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
