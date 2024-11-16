// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VOR_3_TB.h for the primary calling header

#include "VOR_3_TB__pch.h"
#include "VOR_3_TB___024root.h"

VL_ATTR_COLD void VOR_3_TB___024root___eval_initial__TOP(VOR_3_TB___024root* vlSelf);
VlCoroutine VOR_3_TB___024root___eval_initial__TOP__Vtiming__0(VOR_3_TB___024root* vlSelf);

void VOR_3_TB___024root___eval_initial(VOR_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOR_3_TB___024root___eval_initial\n"); );
    // Body
    VOR_3_TB___024root___eval_initial__TOP(vlSelf);
    VOR_3_TB___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__OR_3_TB__DOT__A0__0 
        = vlSelf->OR_3_TB__DOT__A0;
    vlSelf->__Vtrigprevexpr___TOP__OR_3_TB__DOT__A1__0 
        = vlSelf->OR_3_TB__DOT__A1;
    vlSelf->__Vtrigprevexpr___TOP__OR_3_TB__DOT__A2__0 
        = vlSelf->OR_3_TB__DOT__A2;
}

VL_INLINE_OPT VlCoroutine VOR_3_TB___024root___eval_initial__TOP__Vtiming__0(VOR_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOR_3_TB___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->OR_3_TB__DOT__A2 = 0U;
    vlSelf->OR_3_TB__DOT__A1 = 0U;
    vlSelf->OR_3_TB__DOT__A0 = 0U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "OR_3_TB.sv", 
                                       11);
    vlSelf->OR_3_TB__DOT__A2 = 0U;
    vlSelf->OR_3_TB__DOT__A1 = 0U;
    vlSelf->OR_3_TB__DOT__A0 = 1U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "OR_3_TB.sv", 
                                       14);
    vlSelf->OR_3_TB__DOT__A2 = 0U;
    vlSelf->OR_3_TB__DOT__A1 = 1U;
    vlSelf->OR_3_TB__DOT__A0 = 0U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "OR_3_TB.sv", 
                                       17);
    vlSelf->OR_3_TB__DOT__A2 = 0U;
    vlSelf->OR_3_TB__DOT__A1 = 1U;
    vlSelf->OR_3_TB__DOT__A0 = 1U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "OR_3_TB.sv", 
                                       20);
    vlSelf->OR_3_TB__DOT__A2 = 1U;
    vlSelf->OR_3_TB__DOT__A1 = 0U;
    vlSelf->OR_3_TB__DOT__A0 = 0U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "OR_3_TB.sv", 
                                       23);
    vlSelf->OR_3_TB__DOT__A2 = 1U;
    vlSelf->OR_3_TB__DOT__A1 = 0U;
    vlSelf->OR_3_TB__DOT__A0 = 1U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "OR_3_TB.sv", 
                                       26);
    vlSelf->OR_3_TB__DOT__A2 = 1U;
    vlSelf->OR_3_TB__DOT__A1 = 1U;
    vlSelf->OR_3_TB__DOT__A0 = 0U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "OR_3_TB.sv", 
                                       29);
    vlSelf->OR_3_TB__DOT__A2 = 1U;
    vlSelf->OR_3_TB__DOT__A1 = 1U;
    vlSelf->OR_3_TB__DOT__A0 = 1U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "OR_3_TB.sv", 
                                       32);
}

void VOR_3_TB___024root___act_sequent__TOP__0(VOR_3_TB___024root* vlSelf);

void VOR_3_TB___024root___eval_act(VOR_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOR_3_TB___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VOR_3_TB___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VOR_3_TB___024root___nba_sequent__TOP__0(VOR_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOR_3_TB___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->OR_3_TB__DOT__UUT__DOT__OR_0_INST__DOT__tmp 
        = (((IData)(vlSelf->OR_3_TB__DOT__A0) ^ (IData)(vlSelf->OR_3_TB__DOT__A1)) 
           ^ (IData)(vlSelf->OR_3_TB__DOT__A2));
    vlSelf->OR_3_TB__DOT__OUT = (1U & (0xfeU >> (((IData)(vlSelf->OR_3_TB__DOT__A2) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->OR_3_TB__DOT__A1) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->OR_3_TB__DOT__A0)))));
}

void VOR_3_TB___024root___eval_nba(VOR_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOR_3_TB___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VOR_3_TB___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VOR_3_TB___024root___act_sequent__TOP__0(vlSelf);
    }
}

void VOR_3_TB___024root___timing_resume(VOR_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOR_3_TB___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VOR_3_TB___024root___eval_triggers__act(VOR_3_TB___024root* vlSelf);

bool VOR_3_TB___024root___eval_phase__act(VOR_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOR_3_TB___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VOR_3_TB___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VOR_3_TB___024root___timing_resume(vlSelf);
        VOR_3_TB___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VOR_3_TB___024root___eval_phase__nba(VOR_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOR_3_TB___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VOR_3_TB___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VOR_3_TB___024root___dump_triggers__nba(VOR_3_TB___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VOR_3_TB___024root___dump_triggers__act(VOR_3_TB___024root* vlSelf);
#endif  // VL_DEBUG

void VOR_3_TB___024root___eval(VOR_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOR_3_TB___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VOR_3_TB___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("OR_3_TB.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VOR_3_TB___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("OR_3_TB.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VOR_3_TB___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VOR_3_TB___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VOR_3_TB___024root___eval_debug_assertions(VOR_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VOR_3_TB___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
