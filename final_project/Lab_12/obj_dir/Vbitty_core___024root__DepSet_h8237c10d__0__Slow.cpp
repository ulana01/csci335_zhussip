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

VL_ATTR_COLD void Vbitty_core___024root___eval_initial__TOP(Vbitty_core___024root* vlSelf);

VL_ATTR_COLD void Vbitty_core___024root___eval_initial(Vbitty_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vbitty_core___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
}

VL_ATTR_COLD void Vbitty_core___024root___eval_initial__TOP(Vbitty_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.reg_s = 0U;
    vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__0__KET____DOT__reg_inst__data_out = 0U;
    vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__1__KET____DOT__reg_inst__data_out = 0U;
    vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__2__KET____DOT__reg_inst__data_out = 0U;
    vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__3__KET____DOT__reg_inst__data_out = 0U;
    vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__4__KET____DOT__reg_inst__data_out = 0U;
    vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__5__KET____DOT__reg_inst__data_out = 0U;
    vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__6__KET____DOT__reg_inst__data_out = 0U;
    vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__7__KET____DOT__reg_inst__data_out = 0U;
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
    CData/*2:0*/ bitty_core__DOT__alu_sel;
    bitty_core__DOT__alu_sel = 0;
    SData/*15:0*/ bitty_core__DOT____Vcellinp__alu_inst__B;
    bitty_core__DOT____Vcellinp__alu_inst__B = 0;
    // Body
    vlSelfRef.bitty_core__DOT__en_S = 0U;
    vlSelfRef.bitty_core__DOT__en_5 = 0U;
    vlSelfRef.done = 0U;
    vlSelfRef.reg_c = vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__7__KET____DOT__reg_inst__data_out;
    bitty_core__DOT__alu_sel = 0U;
    if ((0U != (IData)(vlSelfRef.bitty_core__DOT__cu__DOT__state))) {
        if ((1U != (IData)(vlSelfRef.bitty_core__DOT__cu__DOT__state))) {
            if ((2U == (IData)(vlSelfRef.bitty_core__DOT__cu__DOT__state))) {
                vlSelfRef.bitty_core__DOT__en_5 = 1U;
                vlSelfRef.done = 1U;
            }
        }
        if ((1U == (IData)(vlSelfRef.bitty_core__DOT__cu__DOT__state))) {
            bitty_core__DOT__alu_sel = (7U & ((IData)(vlSelfRef.instruction) 
                                              >> 4U));
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
    vlSelfRef.bitty_core__DOT__reg_data[0U] = vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__0__KET____DOT__reg_inst__data_out;
    vlSelfRef.bitty_core__DOT__reg_data[1U] = vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__1__KET____DOT__reg_inst__data_out;
    vlSelfRef.bitty_core__DOT__reg_data[2U] = vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__2__KET____DOT__reg_inst__data_out;
    vlSelfRef.bitty_core__DOT__reg_data[3U] = vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__3__KET____DOT__reg_inst__data_out;
    vlSelfRef.bitty_core__DOT__reg_data[4U] = vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__4__KET____DOT__reg_inst__data_out;
    vlSelfRef.bitty_core__DOT__reg_data[5U] = vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__5__KET____DOT__reg_inst__data_out;
    vlSelfRef.bitty_core__DOT__reg_data[6U] = vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__6__KET____DOT__reg_inst__data_out;
    vlSelfRef.bitty_core__DOT__reg_data[7U] = vlSelfRef.bitty_core__DOT____Vcellout__gen_registers__BRA__7__KET____DOT__reg_inst__data_out;
    bitty_core__DOT____Vcellinp__alu_inst__B = vlSelfRef.bitty_core__DOT__reg_data
        [vlSelfRef.bitty_core__DOT__mux_sel];
    vlSelfRef.alu_result = (0xffffU & ((4U & (IData)(bitty_core__DOT__alu_sel))
                                        ? ((2U & (IData)(bitty_core__DOT__alu_sel))
                                            ? ((1U 
                                                & (IData)(bitty_core__DOT__alu_sel))
                                                ? (
                                                   ((IData)(vlSelfRef.reg_s) 
                                                    == (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))
                                                    ? 0U
                                                    : 
                                                   (((IData)(vlSelfRef.reg_s) 
                                                     > (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))
                                                     ? 1U
                                                     : 2U))
                                                : VL_SHIFTR_III(16,16,16, (IData)(vlSelfRef.reg_s), (IData)(bitty_core__DOT____Vcellinp__alu_inst__B)))
                                            : ((1U 
                                                & (IData)(bitty_core__DOT__alu_sel))
                                                ? VL_SHIFTL_III(16,16,16, (IData)(vlSelfRef.reg_s), (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))
                                                : ((IData)(vlSelfRef.reg_s) 
                                                   ^ (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))))
                                        : ((2U & (IData)(bitty_core__DOT__alu_sel))
                                            ? ((1U 
                                                & (IData)(bitty_core__DOT__alu_sel))
                                                ? ((IData)(vlSelfRef.reg_s) 
                                                   | (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))
                                                : ((IData)(vlSelfRef.reg_s) 
                                                   & (IData)(bitty_core__DOT____Vcellinp__alu_inst__B)))
                                            : ((1U 
                                                & (IData)(bitty_core__DOT__alu_sel))
                                                ? ((IData)(vlSelfRef.reg_s) 
                                                   - (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))
                                                : ((IData)(vlSelfRef.reg_s) 
                                                   + (IData)(bitty_core__DOT____Vcellinp__alu_inst__B))))));
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
VL_ATTR_COLD void Vbitty_core___024root___dump_triggers__ico(Vbitty_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbitty_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbitty_core___024root___dump_triggers__ico\n"); );
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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge reset)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge reset)\n");
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
    vlSelf->run = VL_RAND_RESET_I(1);
    vlSelf->instruction = VL_RAND_RESET_I(16);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->reg_s = VL_RAND_RESET_I(16);
    vlSelf->reg_c = VL_RAND_RESET_I(16);
    vlSelf->alu_result = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->bitty_core__DOT__reg_data[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->bitty_core__DOT__mux_sel = VL_RAND_RESET_I(3);
    vlSelf->bitty_core__DOT__en_S = VL_RAND_RESET_I(1);
    vlSelf->bitty_core__DOT__en_5 = VL_RAND_RESET_I(1);
    vlSelf->bitty_core__DOT____Vcellout__gen_registers__BRA__0__KET____DOT__reg_inst__data_out = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT____Vcellout__gen_registers__BRA__1__KET____DOT__reg_inst__data_out = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT____Vcellout__gen_registers__BRA__2__KET____DOT__reg_inst__data_out = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT____Vcellout__gen_registers__BRA__3__KET____DOT__reg_inst__data_out = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT____Vcellout__gen_registers__BRA__4__KET____DOT__reg_inst__data_out = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT____Vcellout__gen_registers__BRA__5__KET____DOT__reg_inst__data_out = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT____Vcellout__gen_registers__BRA__6__KET____DOT__reg_inst__data_out = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT____Vcellout__gen_registers__BRA__7__KET____DOT__reg_inst__data_out = VL_RAND_RESET_I(16);
    vlSelf->bitty_core__DOT__cu__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->bitty_core__DOT__cu__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
}
