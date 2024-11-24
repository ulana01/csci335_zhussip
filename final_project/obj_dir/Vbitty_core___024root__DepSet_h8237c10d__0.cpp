// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbitty_core.h for the primary calling header

#include "Vbitty_core__pch.h"
#include "Vbitty_core___024root.h"

void Vbitty_core___024root___ico_sequent__TOP__0(Vbitty_core___024root* vlSelf);

void Vbitty_core___024root___eval_ico(Vbitty_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vbitty_core___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vbitty_core___024root___ico_sequent__TOP__0(Vbitty_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ bitty_core__DOT__alu_sel;
    bitty_core__DOT__alu_sel = 0;
    CData/*0:0*/ bitty_core__DOT__alu_mode;
    bitty_core__DOT__alu_mode = 0;
    SData/*15:0*/ bitty_core__DOT____Vcellinp__alu_inst__B;
    bitty_core__DOT____Vcellinp__alu_inst__B = 0;
    // Body
    bitty_core__DOT__alu_sel = 0U;
    bitty_core__DOT__alu_mode = 0U;
    if ((0U != (IData)(vlSelfRef.bitty_core__DOT__cu__DOT__state))) {
        if ((1U == (IData)(vlSelfRef.bitty_core__DOT__cu__DOT__state))) {
            bitty_core__DOT__alu_sel = (0xfU & ((IData)(vlSelfRef.instruction) 
                                                >> 3U));
            bitty_core__DOT__alu_mode = (1U & ((IData)(vlSelfRef.instruction) 
                                               >> 2U));
        }
    }
    vlSelfRef.bitty_core__DOT__mux_sel = 0U;
    if ((0U == (IData)(vlSelfRef.bitty_core__DOT__cu__DOT__state))) {
        vlSelfRef.bitty_core__DOT__mux_sel = (7U & 
                                              ((IData)(vlSelfRef.instruction) 
                                               >> 0xdU));
    } else if ((1U == (IData)(vlSelfRef.bitty_core__DOT__cu__DOT__state))) {
        vlSelfRef.bitty_core__DOT__mux_sel = (7U & 
                                              ((IData)(vlSelfRef.instruction) 
                                               >> 0xaU));
    }
    bitty_core__DOT____Vcellinp__alu_inst__B = vlSelfRef.bitty_core__DOT__reg_data
        [vlSelfRef.bitty_core__DOT__mux_sel];
    vlSelfRef.alu_result = (0xffffU & ((IData)(bitty_core__DOT__alu_mode)
                                        ? ((8U & (IData)(bitty_core__DOT__alu_sel))
                                            ? ((4U 
                                                & (IData)(bitty_core__DOT__alu_sel))
                                                ? (
                                                   (2U 
                                                    & (IData)(bitty_core__DOT__alu_sel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(bitty_core__DOT__alu_sel))
                                                     ? 0xffffU
                                                     : 
                                                    ((IData)(vlSelfRef.reg_s) 
                                                     | (~ (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(bitty_core__DOT__alu_sel))
                                                     ? 
                                                    ((IData)(vlSelfRef.reg_s) 
                                                     & (~ (IData)(bitty_core__DOT____Vcellinp__alu_inst__B)))
                                                     : 
                                                    (((IData)(vlSelfRef.reg_s) 
                                                      == (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))
                                                      ? 0xffffU
                                                      : 0U)))
                                                : (
                                                   (2U 
                                                    & (IData)(bitty_core__DOT__alu_sel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(bitty_core__DOT__alu_sel))
                                                     ? 
                                                    ((0xff00U 
                                                      & ((IData)(vlSelfRef.reg_s) 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & ((IData)(vlSelfRef.reg_s) 
                                                           >> 8U)))
                                                     : 
                                                    (~ 
                                                     ((IData)(vlSelfRef.reg_s) 
                                                      ^ (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(bitty_core__DOT__alu_sel))
                                                     ? 
                                                    (~ 
                                                     ((IData)(vlSelfRef.reg_s) 
                                                      | (IData)(bitty_core__DOT____Vcellinp__alu_inst__B)))
                                                     : 
                                                    (~ 
                                                     ((IData)(vlSelfRef.reg_s) 
                                                      & (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))))))
                                            : ((4U 
                                                & (IData)(bitty_core__DOT__alu_sel))
                                                ? (
                                                   (2U 
                                                    & (IData)(bitty_core__DOT__alu_sel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(bitty_core__DOT__alu_sel))
                                                     ? 
                                                    VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.reg_s), (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))
                                                     : 
                                                    VL_SHIFTL_III(16,16,16, (IData)(vlSelfRef.reg_s), (IData)(bitty_core__DOT____Vcellinp__alu_inst__B)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(bitty_core__DOT__alu_sel))
                                                     ? 
                                                    VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.reg_s), 1U)
                                                     : 
                                                    VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.reg_s), 1U)))
                                                : (
                                                   (2U 
                                                    & (IData)(bitty_core__DOT__alu_sel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(bitty_core__DOT__alu_sel))
                                                     ? 
                                                    (~ (IData)(vlSelfRef.reg_s))
                                                     : 
                                                    ((IData)(vlSelfRef.reg_s) 
                                                     ^ (IData)(bitty_core__DOT____Vcellinp__alu_inst__B)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(bitty_core__DOT__alu_sel))
                                                     ? 
                                                    ((IData)(vlSelfRef.reg_s) 
                                                     | (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))
                                                     : 
                                                    ((IData)(vlSelfRef.reg_s) 
                                                     & (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))))))
                                        : ((8U & (IData)(bitty_core__DOT__alu_sel))
                                            ? ((4U 
                                                & (IData)(bitty_core__DOT__alu_sel))
                                                ? (
                                                   (2U 
                                                    & (IData)(bitty_core__DOT__alu_sel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(bitty_core__DOT__alu_sel))
                                                     ? 0U
                                                     : 
                                                    ((IData)(bitty_core__DOT____Vcellinp__alu_inst__B) 
                                                     - (IData)(vlSelfRef.reg_s)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(bitty_core__DOT__alu_sel))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + 
                                                     ((IData)(vlSelfRef.reg_s) 
                                                      + (IData)(bitty_core__DOT____Vcellinp__alu_inst__B)))
                                                     : 
                                                    (- (IData)(vlSelfRef.reg_s))))
                                                : (
                                                   (2U 
                                                    & (IData)(bitty_core__DOT__alu_sel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(bitty_core__DOT__alu_sel))
                                                     ? 
                                                    (((IData)(vlSelfRef.reg_s) 
                                                      <= (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    (((IData)(vlSelfRef.reg_s) 
                                                      >= (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))
                                                      ? 1U
                                                      : 0U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(bitty_core__DOT__alu_sel))
                                                     ? 
                                                    (((IData)(vlSelfRef.reg_s) 
                                                      < (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    (((IData)(vlSelfRef.reg_s) 
                                                      == (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))
                                                      ? 1U
                                                      : 0U))))
                                            : ((4U 
                                                & (IData)(bitty_core__DOT__alu_sel))
                                                ? (
                                                   (2U 
                                                    & (IData)(bitty_core__DOT__alu_sel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(bitty_core__DOT__alu_sel))
                                                     ? 
                                                    (((IData)(vlSelfRef.reg_s) 
                                                      > (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    ((IData)(vlSelfRef.reg_s) 
                                                     - (IData)(1U)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(bitty_core__DOT__alu_sel))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelfRef.reg_s))
                                                     : 
                                                    VL_MODDIV_III(16, (IData)(vlSelfRef.reg_s), (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))))
                                                : (
                                                   (2U 
                                                    & (IData)(bitty_core__DOT__alu_sel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(bitty_core__DOT__alu_sel))
                                                     ? 
                                                    ((0U 
                                                      != (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))
                                                      ? 
                                                     VL_DIV_III(16, (IData)(vlSelfRef.reg_s), (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))
                                                      : 0xffffU)
                                                     : 
                                                    ((IData)(vlSelfRef.reg_s) 
                                                     * (IData)(bitty_core__DOT____Vcellinp__alu_inst__B)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(bitty_core__DOT__alu_sel))
                                                     ? 
                                                    ((IData)(vlSelfRef.reg_s) 
                                                     - (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))
                                                     : 
                                                    ((IData)(vlSelfRef.reg_s) 
                                                     + (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))))))));
}

void Vbitty_core___024root___eval_triggers__ico(Vbitty_core___024root* vlSelf);

bool Vbitty_core___024root___eval_phase__ico(Vbitty_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vbitty_core___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vbitty_core___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

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
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vbitty_core___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vbitty_core___024root___nba_sequent__TOP__0(Vbitty_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ bitty_core__DOT__alu_sel;
    bitty_core__DOT__alu_sel = 0;
    CData/*0:0*/ bitty_core__DOT__alu_mode;
    bitty_core__DOT__alu_mode = 0;
    SData/*15:0*/ bitty_core__DOT____Vcellinp__alu_inst__B;
    bitty_core__DOT____Vcellinp__alu_inst__B = 0;
    // Body
    if (vlSelfRef.reset) {
        vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__0__KET____DOT__reg_inst__data_out = 0U;
        vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__1__KET____DOT__reg_inst__data_out = 0U;
        vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__2__KET____DOT__reg_inst__data_out = 0U;
        vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__3__KET____DOT__reg_inst__data_out = 0U;
        vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__4__KET____DOT__reg_inst__data_out = 0U;
        vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__6__KET____DOT__reg_inst__data_out = 0U;
        vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__7__KET____DOT__reg_inst__data_out = 0U;
        vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__5__KET____DOT__reg_inst__data_out = 0U;
        vlSelfRef.bitty_core__DOT__cu__DOT__state = 0U;
        vlSelfRef.reg_s = 0U;
    } else {
        if (vlSelfRef.bitty_core__DOT__en_5) {
            vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__5__KET____DOT__reg_inst__data_out 
                = vlSelfRef.alu_result;
        }
        if (vlSelfRef.run) {
            vlSelfRef.bitty_core__DOT__cu__DOT__state 
                = vlSelfRef.bitty_core__DOT__cu__DOT__next_state;
        }
        if (vlSelfRef.bitty_core__DOT__en_S) {
            vlSelfRef.reg_s = vlSelfRef.bitty_core__DOT__reg_data
                [vlSelfRef.bitty_core__DOT__mux_sel];
        }
    }
    vlSelfRef.bitty_core__DOT__reg_data[0U] = vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__0__KET____DOT__reg_inst__data_out;
    vlSelfRef.bitty_core__DOT__reg_data[1U] = vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__1__KET____DOT__reg_inst__data_out;
    vlSelfRef.bitty_core__DOT__reg_data[2U] = vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__2__KET____DOT__reg_inst__data_out;
    vlSelfRef.bitty_core__DOT__reg_data[3U] = vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__3__KET____DOT__reg_inst__data_out;
    vlSelfRef.bitty_core__DOT__reg_data[4U] = vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__4__KET____DOT__reg_inst__data_out;
    vlSelfRef.bitty_core__DOT__reg_data[6U] = vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__6__KET____DOT__reg_inst__data_out;
    vlSelfRef.bitty_core__DOT__reg_data[7U] = vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__7__KET____DOT__reg_inst__data_out;
    vlSelfRef.bitty_core__DOT__reg_data[5U] = vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__5__KET____DOT__reg_inst__data_out;
    vlSelfRef.bitty_core__DOT__en_S = 0U;
    vlSelfRef.bitty_core__DOT__en_5 = 0U;
    vlSelfRef.done = 0U;
    bitty_core__DOT__alu_sel = 0U;
    bitty_core__DOT__alu_mode = 0U;
    if ((0U != (IData)(vlSelfRef.bitty_core__DOT__cu__DOT__state))) {
        if ((1U != (IData)(vlSelfRef.bitty_core__DOT__cu__DOT__state))) {
            if ((2U == (IData)(vlSelfRef.bitty_core__DOT__cu__DOT__state))) {
                vlSelfRef.bitty_core__DOT__en_5 = 1U;
                vlSelfRef.done = 1U;
            }
        }
        if ((1U == (IData)(vlSelfRef.bitty_core__DOT__cu__DOT__state))) {
            bitty_core__DOT__alu_sel = (0xfU & ((IData)(vlSelfRef.instruction) 
                                                >> 3U));
            bitty_core__DOT__alu_mode = (1U & ((IData)(vlSelfRef.instruction) 
                                               >> 2U));
        }
    }
    vlSelfRef.bitty_core__DOT__mux_sel = 0U;
    if ((0U == (IData)(vlSelfRef.bitty_core__DOT__cu__DOT__state))) {
        vlSelfRef.bitty_core__DOT__cu__DOT__next_state = 1U;
        vlSelfRef.bitty_core__DOT__en_S = 1U;
        vlSelfRef.bitty_core__DOT__mux_sel = (7U & 
                                              ((IData)(vlSelfRef.instruction) 
                                               >> 0xdU));
    } else if ((1U == (IData)(vlSelfRef.bitty_core__DOT__cu__DOT__state))) {
        vlSelfRef.bitty_core__DOT__cu__DOT__next_state = 2U;
        vlSelfRef.bitty_core__DOT__mux_sel = (7U & 
                                              ((IData)(vlSelfRef.instruction) 
                                               >> 0xaU));
    } else {
        vlSelfRef.bitty_core__DOT__cu__DOT__next_state = 0U;
    }
    bitty_core__DOT____Vcellinp__alu_inst__B = vlSelfRef.bitty_core__DOT__reg_data
        [vlSelfRef.bitty_core__DOT__mux_sel];
    vlSelfRef.alu_result = (0xffffU & ((IData)(bitty_core__DOT__alu_mode)
                                        ? ((8U & (IData)(bitty_core__DOT__alu_sel))
                                            ? ((4U 
                                                & (IData)(bitty_core__DOT__alu_sel))
                                                ? (
                                                   (2U 
                                                    & (IData)(bitty_core__DOT__alu_sel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(bitty_core__DOT__alu_sel))
                                                     ? 0xffffU
                                                     : 
                                                    ((IData)(vlSelfRef.reg_s) 
                                                     | (~ (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(bitty_core__DOT__alu_sel))
                                                     ? 
                                                    ((IData)(vlSelfRef.reg_s) 
                                                     & (~ (IData)(bitty_core__DOT____Vcellinp__alu_inst__B)))
                                                     : 
                                                    (((IData)(vlSelfRef.reg_s) 
                                                      == (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))
                                                      ? 0xffffU
                                                      : 0U)))
                                                : (
                                                   (2U 
                                                    & (IData)(bitty_core__DOT__alu_sel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(bitty_core__DOT__alu_sel))
                                                     ? 
                                                    ((0xff00U 
                                                      & ((IData)(vlSelfRef.reg_s) 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & ((IData)(vlSelfRef.reg_s) 
                                                           >> 8U)))
                                                     : 
                                                    (~ 
                                                     ((IData)(vlSelfRef.reg_s) 
                                                      ^ (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(bitty_core__DOT__alu_sel))
                                                     ? 
                                                    (~ 
                                                     ((IData)(vlSelfRef.reg_s) 
                                                      | (IData)(bitty_core__DOT____Vcellinp__alu_inst__B)))
                                                     : 
                                                    (~ 
                                                     ((IData)(vlSelfRef.reg_s) 
                                                      & (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))))))
                                            : ((4U 
                                                & (IData)(bitty_core__DOT__alu_sel))
                                                ? (
                                                   (2U 
                                                    & (IData)(bitty_core__DOT__alu_sel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(bitty_core__DOT__alu_sel))
                                                     ? 
                                                    VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.reg_s), (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))
                                                     : 
                                                    VL_SHIFTL_III(16,16,16, (IData)(vlSelfRef.reg_s), (IData)(bitty_core__DOT____Vcellinp__alu_inst__B)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(bitty_core__DOT__alu_sel))
                                                     ? 
                                                    VL_SHIFTR_III(16,16,32, (IData)(vlSelfRef.reg_s), 1U)
                                                     : 
                                                    VL_SHIFTL_III(16,16,32, (IData)(vlSelfRef.reg_s), 1U)))
                                                : (
                                                   (2U 
                                                    & (IData)(bitty_core__DOT__alu_sel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(bitty_core__DOT__alu_sel))
                                                     ? 
                                                    (~ (IData)(vlSelfRef.reg_s))
                                                     : 
                                                    ((IData)(vlSelfRef.reg_s) 
                                                     ^ (IData)(bitty_core__DOT____Vcellinp__alu_inst__B)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(bitty_core__DOT__alu_sel))
                                                     ? 
                                                    ((IData)(vlSelfRef.reg_s) 
                                                     | (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))
                                                     : 
                                                    ((IData)(vlSelfRef.reg_s) 
                                                     & (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))))))
                                        : ((8U & (IData)(bitty_core__DOT__alu_sel))
                                            ? ((4U 
                                                & (IData)(bitty_core__DOT__alu_sel))
                                                ? (
                                                   (2U 
                                                    & (IData)(bitty_core__DOT__alu_sel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(bitty_core__DOT__alu_sel))
                                                     ? 0U
                                                     : 
                                                    ((IData)(bitty_core__DOT____Vcellinp__alu_inst__B) 
                                                     - (IData)(vlSelfRef.reg_s)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(bitty_core__DOT__alu_sel))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + 
                                                     ((IData)(vlSelfRef.reg_s) 
                                                      + (IData)(bitty_core__DOT____Vcellinp__alu_inst__B)))
                                                     : 
                                                    (- (IData)(vlSelfRef.reg_s))))
                                                : (
                                                   (2U 
                                                    & (IData)(bitty_core__DOT__alu_sel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(bitty_core__DOT__alu_sel))
                                                     ? 
                                                    (((IData)(vlSelfRef.reg_s) 
                                                      <= (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    (((IData)(vlSelfRef.reg_s) 
                                                      >= (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))
                                                      ? 1U
                                                      : 0U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(bitty_core__DOT__alu_sel))
                                                     ? 
                                                    (((IData)(vlSelfRef.reg_s) 
                                                      < (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    (((IData)(vlSelfRef.reg_s) 
                                                      == (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))
                                                      ? 1U
                                                      : 0U))))
                                            : ((4U 
                                                & (IData)(bitty_core__DOT__alu_sel))
                                                ? (
                                                   (2U 
                                                    & (IData)(bitty_core__DOT__alu_sel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(bitty_core__DOT__alu_sel))
                                                     ? 
                                                    (((IData)(vlSelfRef.reg_s) 
                                                      > (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    ((IData)(vlSelfRef.reg_s) 
                                                     - (IData)(1U)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(bitty_core__DOT__alu_sel))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelfRef.reg_s))
                                                     : 
                                                    VL_MODDIV_III(16, (IData)(vlSelfRef.reg_s), (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))))
                                                : (
                                                   (2U 
                                                    & (IData)(bitty_core__DOT__alu_sel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(bitty_core__DOT__alu_sel))
                                                     ? 
                                                    ((0U 
                                                      != (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))
                                                      ? 
                                                     VL_DIV_III(16, (IData)(vlSelfRef.reg_s), (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))
                                                      : 0xffffU)
                                                     : 
                                                    ((IData)(vlSelfRef.reg_s) 
                                                     * (IData)(bitty_core__DOT____Vcellinp__alu_inst__B)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(bitty_core__DOT__alu_sel))
                                                     ? 
                                                    ((IData)(vlSelfRef.reg_s) 
                                                     - (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))
                                                     : 
                                                    ((IData)(vlSelfRef.reg_s) 
                                                     + (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))))))));
}

void Vbitty_core___024root___eval_triggers__act(Vbitty_core___024root* vlSelf);

bool Vbitty_core___024root___eval_phase__act(Vbitty_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
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
VL_ATTR_COLD void Vbitty_core___024root___dump_triggers__ico(Vbitty_core___024root* vlSelf);
#endif  // VL_DEBUG
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
            Vbitty_core___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/bitty_core.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vbitty_core___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
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
    if (VL_UNLIKELY((vlSelfRef.run & 0xfeU))) {
        Verilated::overWidthError("run");}
}
#endif  // VL_DEBUG
