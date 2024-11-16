// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNOR_3_TB.h for the primary calling header

#include "VNOR_3_TB__pch.h"
#include "VNOR_3_TB___024root.h"

VL_ATTR_COLD void VNOR_3_TB___024root___eval_initial__TOP(VNOR_3_TB___024root* vlSelf);
VlCoroutine VNOR_3_TB___024root___eval_initial__TOP__Vtiming__0(VNOR_3_TB___024root* vlSelf);

void VNOR_3_TB___024root___eval_initial(VNOR_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNOR_3_TB___024root___eval_initial\n"); );
    // Body
    VNOR_3_TB___024root___eval_initial__TOP(vlSelf);
    VNOR_3_TB___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__NOR_3_TB__DOT__A0__0 
        = vlSelf->NOR_3_TB__DOT__A0;
    vlSelf->__Vtrigprevexpr___TOP__NOR_3_TB__DOT__A1__0 
        = vlSelf->NOR_3_TB__DOT__A1;
    vlSelf->__Vtrigprevexpr___TOP__NOR_3_TB__DOT__A2__0 
        = vlSelf->NOR_3_TB__DOT__A2;
}

VL_INLINE_OPT VlCoroutine VNOR_3_TB___024root___eval_initial__TOP__Vtiming__0(VNOR_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNOR_3_TB___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->NOR_3_TB__DOT__A2 = 0U;
    vlSelf->NOR_3_TB__DOT__A1 = 0U;
    vlSelf->NOR_3_TB__DOT__A0 = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "NOR_3_TB.sv", 
                                       12);
    vlSelf->NOR_3_TB__DOT__A2 = 0U;
    vlSelf->NOR_3_TB__DOT__A1 = 0U;
    vlSelf->NOR_3_TB__DOT__A0 = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "NOR_3_TB.sv", 
                                       15);
    vlSelf->NOR_3_TB__DOT__A2 = 0U;
    vlSelf->NOR_3_TB__DOT__A1 = 1U;
    vlSelf->NOR_3_TB__DOT__A0 = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "NOR_3_TB.sv", 
                                       18);
    vlSelf->NOR_3_TB__DOT__A2 = 0U;
    vlSelf->NOR_3_TB__DOT__A1 = 1U;
    vlSelf->NOR_3_TB__DOT__A0 = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "NOR_3_TB.sv", 
                                       21);
    vlSelf->NOR_3_TB__DOT__A2 = 1U;
    vlSelf->NOR_3_TB__DOT__A1 = 0U;
    vlSelf->NOR_3_TB__DOT__A0 = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "NOR_3_TB.sv", 
                                       24);
    vlSelf->NOR_3_TB__DOT__A2 = 1U;
    vlSelf->NOR_3_TB__DOT__A1 = 0U;
    vlSelf->NOR_3_TB__DOT__A0 = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "NOR_3_TB.sv", 
                                       27);
    vlSelf->NOR_3_TB__DOT__A2 = 1U;
    vlSelf->NOR_3_TB__DOT__A1 = 1U;
    vlSelf->NOR_3_TB__DOT__A0 = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "NOR_3_TB.sv", 
                                       30);
    vlSelf->NOR_3_TB__DOT__A2 = 1U;
    vlSelf->NOR_3_TB__DOT__A1 = 1U;
    vlSelf->NOR_3_TB__DOT__A0 = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "NOR_3_TB.sv", 
                                       33);
    VL_FINISH_MT("NOR_3_TB.sv", 35, "");
}

void VNOR_3_TB___024root___act_sequent__TOP__0(VNOR_3_TB___024root* vlSelf);

void VNOR_3_TB___024root___eval_act(VNOR_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNOR_3_TB___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VNOR_3_TB___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VNOR_3_TB___024root___nba_sequent__TOP__0(VNOR_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNOR_3_TB___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->NOR_3_TB__DOT__OUT = (1U & (1U >> (((IData)(vlSelf->NOR_3_TB__DOT__A2) 
                                                << 2U) 
                                               | (((IData)(vlSelf->NOR_3_TB__DOT__A1) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->NOR_3_TB__DOT__A0)))));
    vlSelf->NOR_3_TB__DOT__UUT__DOT__OR_0_INST__DOT__tmp 
        = (((IData)(vlSelf->NOR_3_TB__DOT__A0) ^ (IData)(vlSelf->NOR_3_TB__DOT__A1)) 
           ^ (IData)(vlSelf->NOR_3_TB__DOT__A2));
}

void VNOR_3_TB___024root___eval_nba(VNOR_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNOR_3_TB___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VNOR_3_TB___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VNOR_3_TB___024root___act_sequent__TOP__0(vlSelf);
    }
}

void VNOR_3_TB___024root___timing_resume(VNOR_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNOR_3_TB___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VNOR_3_TB___024root___eval_triggers__act(VNOR_3_TB___024root* vlSelf);

bool VNOR_3_TB___024root___eval_phase__act(VNOR_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNOR_3_TB___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VNOR_3_TB___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VNOR_3_TB___024root___timing_resume(vlSelf);
        VNOR_3_TB___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VNOR_3_TB___024root___eval_phase__nba(VNOR_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNOR_3_TB___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VNOR_3_TB___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VNOR_3_TB___024root___dump_triggers__nba(VNOR_3_TB___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VNOR_3_TB___024root___dump_triggers__act(VNOR_3_TB___024root* vlSelf);
#endif  // VL_DEBUG

void VNOR_3_TB___024root___eval(VNOR_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNOR_3_TB___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VNOR_3_TB___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("NOR_3_TB.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VNOR_3_TB___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("NOR_3_TB.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VNOR_3_TB___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VNOR_3_TB___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VNOR_3_TB___024root___eval_debug_assertions(VNOR_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNOR_3_TB___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
