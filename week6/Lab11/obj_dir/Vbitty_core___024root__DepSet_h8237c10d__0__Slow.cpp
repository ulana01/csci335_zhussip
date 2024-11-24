// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbitty_core.h for the primary calling header

#include "Vbitty_core__pch.h"
#include "Vbitty_core___024root.h"

VL_ATTR_COLD void Vbitty_core___024root___eval_static(Vbitty_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vbitty_core___024root___eval_initial(Vbitty_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
}

VL_ATTR_COLD void Vbitty_core___024root___eval_final(Vbitty_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbitty_core___024root___dump_triggers__stl(Vbitty_core___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vbitty_core___024root___eval_phase__stl(Vbitty_core___024root* vlSelf);

VL_ATTR_COLD void Vbitty_core___024root___eval_settle(Vbitty_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_settle\n"); );
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
            Vbitty_core___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/bitty_core.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vbitty_core___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbitty_core___024root___dump_triggers__stl(Vbitty_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void Vbitty_core___024root___stl_sequent__TOP__0(Vbitty_core___024root* vlSelf);

VL_ATTR_COLD void Vbitty_core___024root___eval_stl(Vbitty_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vbitty_core___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vbitty_core___024root___stl_sequent__TOP__0(Vbitty_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ BittyCore__DOT__mux_out;
    BittyCore__DOT__mux_out = 0;
    // Body
    BittyCore__DOT__mux_out = ((8U & (IData)(vlSelfRef.BittyCore__DOT__mux_sel))
                                ? ((4U & (IData)(vlSelfRef.BittyCore__DOT__mux_sel))
                                    ? 0U : ((2U & (IData)(vlSelfRef.BittyCore__DOT__mux_sel))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelfRef.BittyCore__DOT__mux_sel))
                                              ? (IData)(vlSelfRef.BittyCore__DOT__myMux__DOT__data9)
                                              : (IData)(vlSelfRef.BittyCore__DOT__myMux__DOT__data8))))
                                : ((4U & (IData)(vlSelfRef.BittyCore__DOT__mux_sel))
                                    ? ((2U & (IData)(vlSelfRef.BittyCore__DOT__mux_sel))
                                        ? ((1U & (IData)(vlSelfRef.BittyCore__DOT__mux_sel))
                                            ? (IData)(vlSelfRef.BittyCore__DOT____Vcellout__regs__BRA__7__KET____DOT__reg_inst__d_out)
                                            : (IData)(vlSelfRef.BittyCore__DOT____Vcellout__regs__BRA__6__KET____DOT__reg_inst__d_out))
                                        : ((1U & (IData)(vlSelfRef.BittyCore__DOT__mux_sel))
                                            ? (IData)(vlSelfRef.BittyCore__DOT____Vcellout__regs__BRA__5__KET____DOT__reg_inst__d_out)
                                            : (IData)(vlSelfRef.BittyCore__DOT____Vcellout__regs__BRA__4__KET____DOT__reg_inst__d_out)))
                                    : ((2U & (IData)(vlSelfRef.BittyCore__DOT__mux_sel))
                                        ? ((1U & (IData)(vlSelfRef.BittyCore__DOT__mux_sel))
                                            ? (IData)(vlSelfRef.BittyCore__DOT____Vcellout__regs__BRA__3__KET____DOT__reg_inst__d_out)
                                            : (IData)(vlSelfRef.BittyCore__DOT____Vcellout__regs__BRA__2__KET____DOT__reg_inst__d_out))
                                        : ((1U & (IData)(vlSelfRef.BittyCore__DOT__mux_sel))
                                            ? (IData)(vlSelfRef.BittyCore__DOT____Vcellout__regs__BRA__1__KET____DOT__reg_inst__d_out)
                                            : (IData)(vlSelfRef.BittyCore__DOT____Vcellout__regs__BRA__0__KET____DOT__reg_inst__d_out)))));
    vlSelfRef.BittyCore__DOT__alu_out = ((8U & (IData)(vlSelfRef.BittyCore__DOT__alu_sel))
                                          ? 0U : (0xffffU 
                                                  & ((4U 
                                                      & (IData)(vlSelfRef.BittyCore__DOT__alu_sel))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.BittyCore__DOT__alu_sel))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.BittyCore__DOT__alu_sel))
                                                        ? 
                                                       VL_SHIFTR_III(16,16,32, (IData)(BittyCore__DOT__mux_out), 1U)
                                                        : 
                                                       VL_SHIFTL_III(16,16,32, (IData)(BittyCore__DOT__mux_out), 1U)))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.BittyCore__DOT__alu_sel))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.BittyCore__DOT__alu_sel))
                                                        ? 
                                                       (~ (IData)(BittyCore__DOT__mux_out))
                                                        : 
                                                       ((IData)(BittyCore__DOT__mux_out) 
                                                        ^ (IData)(vlSelfRef.BittyCore__DOT____Vcellout__regs__BRA__1__KET____DOT__reg_inst__d_out)))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.BittyCore__DOT__alu_sel))
                                                        ? 
                                                       ((IData)(vlSelfRef.BittyCore__DOT__alu_mode)
                                                         ? 
                                                        ((IData)(BittyCore__DOT__mux_out) 
                                                         | (IData)(vlSelfRef.BittyCore__DOT____Vcellout__regs__BRA__1__KET____DOT__reg_inst__d_out))
                                                         : 
                                                        ((IData)(BittyCore__DOT__mux_out) 
                                                         - (IData)(vlSelfRef.BittyCore__DOT____Vcellout__regs__BRA__1__KET____DOT__reg_inst__d_out)))
                                                        : 
                                                       ((IData)(vlSelfRef.BittyCore__DOT__alu_mode)
                                                         ? 
                                                        ((IData)(BittyCore__DOT__mux_out) 
                                                         & (IData)(vlSelfRef.BittyCore__DOT____Vcellout__regs__BRA__1__KET____DOT__reg_inst__d_out))
                                                         : 
                                                        ((IData)(BittyCore__DOT__mux_out) 
                                                         + (IData)(vlSelfRef.BittyCore__DOT____Vcellout__regs__BRA__1__KET____DOT__reg_inst__d_out))))))));
    vlSelfRef.result = vlSelfRef.BittyCore__DOT__alu_out;
}

VL_ATTR_COLD void Vbitty_core___024root___eval_triggers__stl(Vbitty_core___024root* vlSelf);

VL_ATTR_COLD bool Vbitty_core___024root___eval_phase__stl(Vbitty_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vbitty_core___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vbitty_core___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbitty_core___024root___dump_triggers__act(Vbitty_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbitty_core___024root___dump_triggers__nba(Vbitty_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbitty_core___024root___ctor_var_reset(Vbitty_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->instruction = VL_RAND_RESET_I(16);
    vlSelf->result = VL_RAND_RESET_I(16);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->BittyCore__DOT__alu_out = VL_RAND_RESET_I(16);
    vlSelf->BittyCore__DOT__alu_sel = VL_RAND_RESET_I(4);
    vlSelf->BittyCore__DOT__alu_mode = VL_RAND_RESET_I(1);
    vlSelf->BittyCore__DOT__mux_sel = VL_RAND_RESET_I(4);
    vlSelf->BittyCore__DOT__reg_enables = VL_RAND_RESET_I(8);
    vlSelf->BittyCore__DOT____Vcellout__regs__BRA__0__KET____DOT__reg_inst__d_out = VL_RAND_RESET_I(16);
    vlSelf->BittyCore__DOT____Vcellout__regs__BRA__1__KET____DOT__reg_inst__d_out = VL_RAND_RESET_I(16);
    vlSelf->BittyCore__DOT____Vcellout__regs__BRA__2__KET____DOT__reg_inst__d_out = VL_RAND_RESET_I(16);
    vlSelf->BittyCore__DOT____Vcellout__regs__BRA__3__KET____DOT__reg_inst__d_out = VL_RAND_RESET_I(16);
    vlSelf->BittyCore__DOT____Vcellout__regs__BRA__4__KET____DOT__reg_inst__d_out = VL_RAND_RESET_I(16);
    vlSelf->BittyCore__DOT____Vcellout__regs__BRA__5__KET____DOT__reg_inst__d_out = VL_RAND_RESET_I(16);
    vlSelf->BittyCore__DOT____Vcellout__regs__BRA__6__KET____DOT__reg_inst__d_out = VL_RAND_RESET_I(16);
    vlSelf->BittyCore__DOT____Vcellout__regs__BRA__7__KET____DOT__reg_inst__d_out = VL_RAND_RESET_I(16);
    vlSelf->BittyCore__DOT__CU__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->BittyCore__DOT__myMux__DOT__data8 = VL_RAND_RESET_I(16);
    vlSelf->BittyCore__DOT__myMux__DOT__data9 = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
}