// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAND_3_TB.h for the primary calling header

#include "VAND_3_TB__pch.h"
#include "VAND_3_TB___024root.h"

VL_ATTR_COLD void VAND_3_TB___024root___eval_initial__TOP(VAND_3_TB___024root* vlSelf);
VlCoroutine VAND_3_TB___024root___eval_initial__TOP__Vtiming__0(VAND_3_TB___024root* vlSelf);

void VAND_3_TB___024root___eval_initial(VAND_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAND_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAND_3_TB___024root___eval_initial\n"); );
    // Body
    VAND_3_TB___024root___eval_initial__TOP(vlSelf);
    VAND_3_TB___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__AND_3_TB__DOT__A0__0 
        = vlSelf->AND_3_TB__DOT__A0;
    vlSelf->__Vtrigprevexpr___TOP__AND_3_TB__DOT__A1__0 
        = vlSelf->AND_3_TB__DOT__A1;
    vlSelf->__Vtrigprevexpr___TOP__AND_3_TB__DOT__A2__0 
        = vlSelf->AND_3_TB__DOT__A2;
}

VL_INLINE_OPT VlCoroutine VAND_3_TB___024root___eval_initial__TOP__Vtiming__0(VAND_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAND_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAND_3_TB___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->AND_3_TB__DOT__A2 = 0U;
    vlSelf->AND_3_TB__DOT__A1 = 0U;
    vlSelf->AND_3_TB__DOT__A0 = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "AND_3_TB.sv", 
                                       12);
    vlSelf->AND_3_TB__DOT__A2 = 0U;
    vlSelf->AND_3_TB__DOT__A1 = 0U;
    vlSelf->AND_3_TB__DOT__A0 = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "AND_3_TB.sv", 
                                       15);
    vlSelf->AND_3_TB__DOT__A2 = 0U;
    vlSelf->AND_3_TB__DOT__A1 = 1U;
    vlSelf->AND_3_TB__DOT__A0 = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "AND_3_TB.sv", 
                                       18);
    vlSelf->AND_3_TB__DOT__A2 = 0U;
    vlSelf->AND_3_TB__DOT__A1 = 1U;
    vlSelf->AND_3_TB__DOT__A0 = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "AND_3_TB.sv", 
                                       21);
    vlSelf->AND_3_TB__DOT__A2 = 1U;
    vlSelf->AND_3_TB__DOT__A1 = 0U;
    vlSelf->AND_3_TB__DOT__A0 = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "AND_3_TB.sv", 
                                       24);
    vlSelf->AND_3_TB__DOT__A2 = 1U;
    vlSelf->AND_3_TB__DOT__A1 = 0U;
    vlSelf->AND_3_TB__DOT__A0 = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "AND_3_TB.sv", 
                                       27);
    vlSelf->AND_3_TB__DOT__A2 = 1U;
    vlSelf->AND_3_TB__DOT__A1 = 1U;
    vlSelf->AND_3_TB__DOT__A0 = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "AND_3_TB.sv", 
                                       30);
    vlSelf->AND_3_TB__DOT__A2 = 1U;
    vlSelf->AND_3_TB__DOT__A1 = 1U;
    vlSelf->AND_3_TB__DOT__A0 = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "AND_3_TB.sv", 
                                       33);
    VL_FINISH_MT("AND_3_TB.sv", 35, "");
}

void VAND_3_TB___024root___act_sequent__TOP__0(VAND_3_TB___024root* vlSelf);

void VAND_3_TB___024root___eval_act(VAND_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAND_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAND_3_TB___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VAND_3_TB___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VAND_3_TB___024root___nba_sequent__TOP__0(VAND_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAND_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAND_3_TB___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->AND_3_TB__DOT__OUT = (1U & (0x80U >> (((IData)(vlSelf->AND_3_TB__DOT__A2) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->AND_3_TB__DOT__A1) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->AND_3_TB__DOT__A0)))));
    vlSelf->AND_3_TB__DOT__UUT__DOT__AND_0_INST__DOT__tmp 
        = (((IData)(vlSelf->AND_3_TB__DOT__A0) ^ (IData)(vlSelf->AND_3_TB__DOT__A1)) 
           ^ (IData)(vlSelf->AND_3_TB__DOT__A2));
}

void VAND_3_TB___024root___eval_nba(VAND_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAND_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAND_3_TB___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VAND_3_TB___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VAND_3_TB___024root___act_sequent__TOP__0(vlSelf);
    }
}

void VAND_3_TB___024root___timing_resume(VAND_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAND_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAND_3_TB___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VAND_3_TB___024root___eval_triggers__act(VAND_3_TB___024root* vlSelf);

bool VAND_3_TB___024root___eval_phase__act(VAND_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAND_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAND_3_TB___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VAND_3_TB___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VAND_3_TB___024root___timing_resume(vlSelf);
        VAND_3_TB___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VAND_3_TB___024root___eval_phase__nba(VAND_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAND_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAND_3_TB___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VAND_3_TB___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VAND_3_TB___024root___dump_triggers__nba(VAND_3_TB___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VAND_3_TB___024root___dump_triggers__act(VAND_3_TB___024root* vlSelf);
#endif  // VL_DEBUG

void VAND_3_TB___024root___eval(VAND_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAND_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAND_3_TB___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VAND_3_TB___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("AND_3_TB.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VAND_3_TB___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("AND_3_TB.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VAND_3_TB___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VAND_3_TB___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VAND_3_TB___024root___eval_debug_assertions(VAND_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VAND_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAND_3_TB___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
