// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNOR_3_TB.h for the primary calling header

#include "VNOR_3_TB__pch.h"
#include "VNOR_3_TB___024root.h"

VL_ATTR_COLD void VNOR_3_TB___024root___eval_static(VNOR_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNOR_3_TB___024root___eval_static\n"); );
}

VL_ATTR_COLD void VNOR_3_TB___024root___eval_final(VNOR_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNOR_3_TB___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VNOR_3_TB___024root___dump_triggers__stl(VNOR_3_TB___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VNOR_3_TB___024root___eval_phase__stl(VNOR_3_TB___024root* vlSelf);

VL_ATTR_COLD void VNOR_3_TB___024root___eval_settle(VNOR_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNOR_3_TB___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VNOR_3_TB___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("NOR_3_TB.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VNOR_3_TB___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VNOR_3_TB___024root___dump_triggers__stl(VNOR_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNOR_3_TB___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VNOR_3_TB___024root___act_sequent__TOP__0(VNOR_3_TB___024root* vlSelf);

VL_ATTR_COLD void VNOR_3_TB___024root___eval_stl(VNOR_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNOR_3_TB___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VNOR_3_TB___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VNOR_3_TB___024root___eval_triggers__stl(VNOR_3_TB___024root* vlSelf);

VL_ATTR_COLD bool VNOR_3_TB___024root___eval_phase__stl(VNOR_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNOR_3_TB___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VNOR_3_TB___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VNOR_3_TB___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VNOR_3_TB___024root___dump_triggers__act(VNOR_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNOR_3_TB___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([changed] NOR_3_TB.A0 or [changed] NOR_3_TB.A1 or [changed] NOR_3_TB.A2)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VNOR_3_TB___024root___dump_triggers__nba(VNOR_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNOR_3_TB___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([changed] NOR_3_TB.A0 or [changed] NOR_3_TB.A1 or [changed] NOR_3_TB.A2)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VNOR_3_TB___024root___ctor_var_reset(VNOR_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNOR_3_TB___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->NOR_3_TB__DOT__A0 = VL_RAND_RESET_I(1);
    vlSelf->NOR_3_TB__DOT__A1 = VL_RAND_RESET_I(1);
    vlSelf->NOR_3_TB__DOT__A2 = VL_RAND_RESET_I(1);
    vlSelf->NOR_3_TB__DOT__OUT = VL_RAND_RESET_I(1);
    vlSelf->NOR_3_TB__DOT__UUT__DOT__OR_0_INST__DOT__tmp = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__NOR_3_TB__DOT__A0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__NOR_3_TB__DOT__A1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__NOR_3_TB__DOT__A2__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
