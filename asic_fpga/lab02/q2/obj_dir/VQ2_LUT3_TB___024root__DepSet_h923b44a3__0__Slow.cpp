// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQ2_LUT3_TB.h for the primary calling header

#include "VQ2_LUT3_TB__pch.h"
#include "VQ2_LUT3_TB___024root.h"

VL_ATTR_COLD void VQ2_LUT3_TB___024root___eval_static(VQ2_LUT3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQ2_LUT3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQ2_LUT3_TB___024root___eval_static\n"); );
}

VL_ATTR_COLD void VQ2_LUT3_TB___024root___eval_final(VQ2_LUT3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQ2_LUT3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQ2_LUT3_TB___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VQ2_LUT3_TB___024root___dump_triggers__stl(VQ2_LUT3_TB___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VQ2_LUT3_TB___024root___eval_phase__stl(VQ2_LUT3_TB___024root* vlSelf);

VL_ATTR_COLD void VQ2_LUT3_TB___024root___eval_settle(VQ2_LUT3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQ2_LUT3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQ2_LUT3_TB___024root___eval_settle\n"); );
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
            VQ2_LUT3_TB___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("Q2_LUT3_TB.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VQ2_LUT3_TB___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VQ2_LUT3_TB___024root___dump_triggers__stl(VQ2_LUT3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQ2_LUT3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQ2_LUT3_TB___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VQ2_LUT3_TB___024root___act_sequent__TOP__0(VQ2_LUT3_TB___024root* vlSelf);

VL_ATTR_COLD void VQ2_LUT3_TB___024root___eval_stl(VQ2_LUT3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQ2_LUT3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQ2_LUT3_TB___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VQ2_LUT3_TB___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VQ2_LUT3_TB___024root___eval_triggers__stl(VQ2_LUT3_TB___024root* vlSelf);

VL_ATTR_COLD bool VQ2_LUT3_TB___024root___eval_phase__stl(VQ2_LUT3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQ2_LUT3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQ2_LUT3_TB___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VQ2_LUT3_TB___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VQ2_LUT3_TB___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VQ2_LUT3_TB___024root___dump_triggers__act(VQ2_LUT3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQ2_LUT3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQ2_LUT3_TB___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([changed] Q2_LUT3_TB.A1 or [changed] Q2_LUT3_TB.A2 or [changed] Q2_LUT3_TB.A3)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] Q2_LUT3_TB.A0 or [changed] Q2_LUT3_TB.A2 or [changed] Q2_LUT3_TB.A3)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] Q2_LUT3_TB.UUT.and_0_out or [changed] Q2_LUT3_TB.UUT.nor_0_out or [changed] Q2_LUT3_TB.UUT.nor_1_out)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] Q2_LUT3_TB.UUT.and_1_out or [changed] Q2_LUT3_TB.UUT.or_0_out)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VQ2_LUT3_TB___024root___dump_triggers__nba(VQ2_LUT3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQ2_LUT3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQ2_LUT3_TB___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([changed] Q2_LUT3_TB.A1 or [changed] Q2_LUT3_TB.A2 or [changed] Q2_LUT3_TB.A3)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] Q2_LUT3_TB.A0 or [changed] Q2_LUT3_TB.A2 or [changed] Q2_LUT3_TB.A3)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] Q2_LUT3_TB.UUT.and_0_out or [changed] Q2_LUT3_TB.UUT.nor_0_out or [changed] Q2_LUT3_TB.UUT.nor_1_out)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] Q2_LUT3_TB.UUT.and_1_out or [changed] Q2_LUT3_TB.UUT.or_0_out)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VQ2_LUT3_TB___024root___ctor_var_reset(VQ2_LUT3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQ2_LUT3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQ2_LUT3_TB___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->Q2_LUT3_TB__DOT__A0 = VL_RAND_RESET_I(1);
    vlSelf->Q2_LUT3_TB__DOT__A1 = VL_RAND_RESET_I(1);
    vlSelf->Q2_LUT3_TB__DOT__A2 = VL_RAND_RESET_I(1);
    vlSelf->Q2_LUT3_TB__DOT__A3 = VL_RAND_RESET_I(1);
    vlSelf->Q2_LUT3_TB__DOT__OUT = VL_RAND_RESET_I(1);
    vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__nor_0_out = VL_RAND_RESET_I(1);
    vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__nor_1_out = VL_RAND_RESET_I(1);
    vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__and_0_out = VL_RAND_RESET_I(1);
    vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__and_1_out = VL_RAND_RESET_I(1);
    vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__or_0_out = VL_RAND_RESET_I(1);
    vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__NOR_0_INST__DOT__OR_0_INST__DOT__tmp = VL_RAND_RESET_I(1);
    vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__AND_0_INST__DOT__AND_0_INST__DOT__tmp = VL_RAND_RESET_I(1);
    vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__NOR_1_INST__DOT__OR_0_INST__DOT__tmp = VL_RAND_RESET_I(1);
    vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__AND_1_INST__DOT__AND_0_INST__DOT__tmp = VL_RAND_RESET_I(1);
    vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__OR_0_INST__DOT__OR_0_INST__DOT__tmp = VL_RAND_RESET_I(1);
    vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__OR_1_INST__DOT__OR_0_INST__DOT__tmp = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__A1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__A2__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__A3__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__A0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__UUT__DOT__and_0_out__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__UUT__DOT__nor_0_out__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__UUT__DOT__nor_1_out__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__UUT__DOT__and_1_out__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__UUT__DOT__or_0_out__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
