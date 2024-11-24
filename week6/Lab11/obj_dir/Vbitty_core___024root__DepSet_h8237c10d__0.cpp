// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbitty_core.h for the primary calling header

#include "Vbitty_core__pch.h"
#include "Vbitty_core___024root.h"

void Vbitty_core___024root___eval_act(Vbitty_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vbitty_core___024root___nba_sequent__TOP__0(Vbitty_core___024root* vlSelf);

void Vbitty_core___024root___eval_nba(Vbitty_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbitty_core___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vbitty_core___024root___nba_sequent__TOP__0(Vbitty_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ BittyCore__DOT__mux_out;
    BittyCore__DOT__mux_out = 0;
    CData/*1:0*/ __Vdly__BittyCore__DOT__CU__DOT__state;
    __Vdly__BittyCore__DOT__CU__DOT__state = 0;
    // Body
    __Vdly__BittyCore__DOT__CU__DOT__state = vlSelfRef.BittyCore__DOT__CU__DOT__state;
    if (vlSelfRef.reset) {
        vlSelfRef.BittyCore__DOT____Vcellout__regs__BRA__7__KET____DOT__reg_inst__d_out = 0U;
        vlSelfRef.BittyCore__DOT____Vcellout__regs__BRA__6__KET____DOT__reg_inst__d_out = 0U;
        vlSelfRef.BittyCore__DOT____Vcellout__regs__BRA__5__KET____DOT__reg_inst__d_out = 0U;
        vlSelfRef.BittyCore__DOT____Vcellout__regs__BRA__4__KET____DOT__reg_inst__d_out = 0U;
        vlSelfRef.BittyCore__DOT____Vcellout__regs__BRA__3__KET____DOT__reg_inst__d_out = 0U;
        vlSelfRef.BittyCore__DOT____Vcellout__regs__BRA__2__KET____DOT__reg_inst__d_out = 0U;
        vlSelfRef.BittyCore__DOT____Vcellout__regs__BRA__0__KET____DOT__reg_inst__d_out = 0U;
        vlSelfRef.BittyCore__DOT____Vcellout__regs__BRA__1__KET____DOT__reg_inst__d_out = 0U;
        __Vdly__BittyCore__DOT__CU__DOT__state = 0U;
        vlSelfRef.done = 0U;
    } else {
        if ((0x80U & (IData)(vlSelfRef.BittyCore__DOT__reg_enables))) {
            vlSelfRef.BittyCore__DOT____Vcellout__regs__BRA__7__KET____DOT__reg_inst__d_out 
                = vlSelfRef.BittyCore__DOT__alu_out;
        }
        if ((0x40U & (IData)(vlSelfRef.BittyCore__DOT__reg_enables))) {
            vlSelfRef.BittyCore__DOT____Vcellout__regs__BRA__6__KET____DOT__reg_inst__d_out 
                = vlSelfRef.BittyCore__DOT__alu_out;
        }
        if ((0x20U & (IData)(vlSelfRef.BittyCore__DOT__reg_enables))) {
            vlSelfRef.BittyCore__DOT____Vcellout__regs__BRA__5__KET____DOT__reg_inst__d_out 
                = vlSelfRef.BittyCore__DOT__alu_out;
        }
        if ((0x10U & (IData)(vlSelfRef.BittyCore__DOT__reg_enables))) {
            vlSelfRef.BittyCore__DOT____Vcellout__regs__BRA__4__KET____DOT__reg_inst__d_out 
                = vlSelfRef.BittyCore__DOT__alu_out;
        }
        if ((8U & (IData)(vlSelfRef.BittyCore__DOT__reg_enables))) {
            vlSelfRef.BittyCore__DOT____Vcellout__regs__BRA__3__KET____DOT__reg_inst__d_out 
                = vlSelfRef.BittyCore__DOT__alu_out;
        }
        if ((4U & (IData)(vlSelfRef.BittyCore__DOT__reg_enables))) {
            vlSelfRef.BittyCore__DOT____Vcellout__regs__BRA__2__KET____DOT__reg_inst__d_out 
                = vlSelfRef.BittyCore__DOT__alu_out;
        }
        if ((1U & (IData)(vlSelfRef.BittyCore__DOT__reg_enables))) {
            vlSelfRef.BittyCore__DOT____Vcellout__regs__BRA__0__KET____DOT__reg_inst__d_out 
                = vlSelfRef.BittyCore__DOT__alu_out;
        }
        if ((2U & (IData)(vlSelfRef.BittyCore__DOT__reg_enables))) {
            vlSelfRef.BittyCore__DOT____Vcellout__regs__BRA__1__KET____DOT__reg_inst__d_out 
                = vlSelfRef.BittyCore__DOT__alu_out;
        }
        if ((0U == (IData)(vlSelfRef.BittyCore__DOT__CU__DOT__state))) {
            vlSelfRef.BittyCore__DOT__mux_sel = (0xfU 
                                                 & ((IData)(vlSelfRef.instruction) 
                                                    >> 0xcU));
            vlSelfRef.BittyCore__DOT__alu_sel = (0xfU 
                                                 & ((IData)(vlSelfRef.instruction) 
                                                    >> 4U));
            vlSelfRef.BittyCore__DOT__alu_mode = (1U 
                                                  & ((IData)(vlSelfRef.instruction) 
                                                     >> 3U));
            vlSelfRef.BittyCore__DOT__reg_enables = 1U;
            __Vdly__BittyCore__DOT__CU__DOT__state = 1U;
        } else if ((1U == (IData)(vlSelfRef.BittyCore__DOT__CU__DOT__state))) {
            vlSelfRef.BittyCore__DOT__reg_enables = 2U;
            __Vdly__BittyCore__DOT__CU__DOT__state = 2U;
        } else if ((2U == (IData)(vlSelfRef.BittyCore__DOT__CU__DOT__state))) {
            vlSelfRef.done = 1U;
            __Vdly__BittyCore__DOT__CU__DOT__state = 0U;
        }
    }
    vlSelfRef.BittyCore__DOT__CU__DOT__state = __Vdly__BittyCore__DOT__CU__DOT__state;
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

void Vbitty_core___024root___eval_triggers__act(Vbitty_core___024root* vlSelf);

bool Vbitty_core___024root___eval_phase__act(Vbitty_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vbitty_core___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vbitty_core___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vbitty_core___024root___eval_phase__nba(Vbitty_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vbitty_core___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbitty_core___024root___dump_triggers__nba(Vbitty_core___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbitty_core___024root___dump_triggers__act(Vbitty_core___024root* vlSelf);
#endif  // VL_DEBUG

void Vbitty_core___024root___eval(Vbitty_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval\n"); );
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
            Vbitty_core___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/bitty_core.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vbitty_core___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/bitty_core.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vbitty_core___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vbitty_core___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vbitty_core___024root___eval_debug_assertions(Vbitty_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
