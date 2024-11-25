// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux.h for the primary calling header

#include "Vmux__pch.h"
#include "Vmux___024root.h"

void Vmux___024root___ico_sequent__TOP__0(Vmux___024root* vlSelf);

void Vmux___024root___eval_ico(Vmux___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vmux___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vmux___024root___ico_sequent__TOP__0(Vmux___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out = 0U;
    vlSelfRef.out = ((4U & (IData)(vlSelfRef.mux_sel))
                      ? ((2U & (IData)(vlSelfRef.mux_sel))
                          ? ((1U & (IData)(vlSelfRef.mux_sel))
                              ? (IData)(vlSelfRef.in7)
                              : (IData)(vlSelfRef.in6))
                          : ((1U & (IData)(vlSelfRef.mux_sel))
                              ? (IData)(vlSelfRef.in5)
                              : (IData)(vlSelfRef.in4)))
                      : ((2U & (IData)(vlSelfRef.mux_sel))
                          ? ((1U & (IData)(vlSelfRef.mux_sel))
                              ? (IData)(vlSelfRef.in3)
                              : (IData)(vlSelfRef.in2))
                          : ((1U & (IData)(vlSelfRef.mux_sel))
                              ? (IData)(vlSelfRef.in1)
                              : (IData)(vlSelfRef.in0))));
}

void Vmux___024root___eval_triggers__ico(Vmux___024root* vlSelf);

bool Vmux___024root___eval_phase__ico(Vmux___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vmux___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vmux___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vmux___024root___eval_act(Vmux___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vmux___024root___eval_nba(Vmux___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vmux___024root___eval_triggers__act(Vmux___024root* vlSelf);

bool Vmux___024root___eval_phase__act(Vmux___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmux___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vmux___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmux___024root___eval_phase__nba(Vmux___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmux___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux___024root___dump_triggers__ico(Vmux___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux___024root___dump_triggers__nba(Vmux___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux___024root___dump_triggers__act(Vmux___024root* vlSelf);
#endif  // VL_DEBUG

void Vmux___024root___eval(Vmux___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vmux___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/mux.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vmux___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vmux___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/mux.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vmux___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/mux.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vmux___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vmux___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmux___024root___eval_debug_assertions(Vmux___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.mux_sel & 0xf8U))) {
        Verilated::overWidthError("mux_sel");}
}
#endif  // VL_DEBUG
