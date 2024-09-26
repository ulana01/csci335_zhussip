// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlock.h for the primary calling header

#include "Vlock__pch.h"
#include "Vlock___024root.h"

VL_ATTR_COLD void Vlock___024root___eval_static(Vlock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlock___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vlock___024root___eval_initial__TOP(Vlock___024root* vlSelf);

VL_ATTR_COLD void Vlock___024root___eval_initial(Vlock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlock___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vlock___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vlock___024root___eval_initial__TOP(Vlock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlock___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Lock__DOT__correct_code[0U] = 3U;
    vlSelfRef.Lock__DOT__correct_code[1U] = 3U;
    vlSelfRef.Lock__DOT__correct_code[2U] = 5U;
    vlSelfRef.Lock__DOT__correct_code[3U] = 2U;
    vlSelfRef.Lock__DOT__correct_code[4U] = 5U;
    vlSelfRef.Lock__DOT__correct_code[5U] = 6U;
}

VL_ATTR_COLD void Vlock___024root___eval_final(Vlock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlock___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlock___024root___dump_triggers__stl(Vlock___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vlock___024root___eval_phase__stl(Vlock___024root* vlSelf);

VL_ATTR_COLD void Vlock___024root___eval_settle(Vlock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlock___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vlock___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/lock.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vlock___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlock___024root___dump_triggers__stl(Vlock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlock___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vlock___024root___ico_sequent__TOP__0(Vlock___024root* vlSelf);

VL_ATTR_COLD void Vlock___024root___eval_stl(Vlock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlock___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vlock___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vlock___024root___eval_triggers__stl(Vlock___024root* vlSelf);

VL_ATTR_COLD bool Vlock___024root___eval_phase__stl(Vlock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlock___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vlock___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vlock___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlock___024root___dump_triggers__ico(Vlock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlock___024root___dump_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlock___024root___dump_triggers__act(Vlock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlock___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlock___024root___dump_triggers__nba(Vlock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlock___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vlock___024root___ctor_var_reset(Vlock___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vlock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlock___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->code_in = VL_RAND_RESET_I(4);
    vlSelf->index = VL_RAND_RESET_I(3);
    vlSelf->locked = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->Lock__DOT__correct_code[__Vi0] = VL_RAND_RESET_I(4);
    }
}
