// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQ2_LUT3_TB.h for the primary calling header

#include "VQ2_LUT3_TB__pch.h"
#include "VQ2_LUT3_TB___024root.h"

VL_ATTR_COLD void VQ2_LUT3_TB___024root___eval_initial__TOP(VQ2_LUT3_TB___024root* vlSelf);
VlCoroutine VQ2_LUT3_TB___024root___eval_initial__TOP__Vtiming__0(VQ2_LUT3_TB___024root* vlSelf);

void VQ2_LUT3_TB___024root___eval_initial(VQ2_LUT3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQ2_LUT3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQ2_LUT3_TB___024root___eval_initial\n"); );
    // Body
    VQ2_LUT3_TB___024root___eval_initial__TOP(vlSelf);
    VQ2_LUT3_TB___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__A1__0 
        = vlSelf->Q2_LUT3_TB__DOT__A1;
    vlSelf->__Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__A2__0 
        = vlSelf->Q2_LUT3_TB__DOT__A2;
    vlSelf->__Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__A3__0 
        = vlSelf->Q2_LUT3_TB__DOT__A3;
    vlSelf->__Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__A0__0 
        = vlSelf->Q2_LUT3_TB__DOT__A0;
    vlSelf->__Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__UUT__DOT__and_0_out__0 
        = vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__and_0_out;
    vlSelf->__Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__UUT__DOT__nor_0_out__0 
        = vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__nor_0_out;
    vlSelf->__Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__UUT__DOT__nor_1_out__0 
        = vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__nor_1_out;
    vlSelf->__Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__UUT__DOT__and_1_out__0 
        = vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__and_1_out;
    vlSelf->__Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__UUT__DOT__or_0_out__0 
        = vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__or_0_out;
}

VL_INLINE_OPT void VQ2_LUT3_TB___024root___act_sequent__TOP__1(VQ2_LUT3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQ2_LUT3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQ2_LUT3_TB___024root___act_sequent__TOP__1\n"); );
    // Body
    vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__OR_0_INST__DOT__OR_0_INST__DOT__tmp 
        = (((IData)(vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__nor_0_out) 
            ^ (IData)(vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__and_0_out)) 
           ^ (IData)(vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__nor_1_out));
    vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__or_0_out = (1U 
                                                   & (0xfeU 
                                                      >> 
                                                      (((IData)(vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__nor_1_out) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__and_0_out) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__nor_0_out)))));
}

VL_INLINE_OPT void VQ2_LUT3_TB___024root___act_sequent__TOP__2(VQ2_LUT3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQ2_LUT3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQ2_LUT3_TB___024root___act_sequent__TOP__2\n"); );
    // Body
    vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__NOR_0_INST__DOT__OR_0_INST__DOT__tmp 
        = (((IData)(vlSelf->Q2_LUT3_TB__DOT__A1) ^ (IData)(vlSelf->Q2_LUT3_TB__DOT__A2)) 
           ^ (IData)(vlSelf->Q2_LUT3_TB__DOT__A3));
    vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__nor_0_out = 
        (1U & (1U >> (((IData)(vlSelf->Q2_LUT3_TB__DOT__A3) 
                       << 2U) | (((IData)(vlSelf->Q2_LUT3_TB__DOT__A2) 
                                  << 1U) | (IData)(vlSelf->Q2_LUT3_TB__DOT__A1)))));
    vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__AND_0_INST__DOT__AND_0_INST__DOT__tmp 
        = (((IData)(vlSelf->Q2_LUT3_TB__DOT__A1) ^ (IData)(vlSelf->Q2_LUT3_TB__DOT__A2)) 
           ^ (IData)(vlSelf->Q2_LUT3_TB__DOT__A3));
    vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__and_0_out = 
        (1U & (0x80U >> (((IData)(vlSelf->Q2_LUT3_TB__DOT__A3) 
                          << 2U) | (((IData)(vlSelf->Q2_LUT3_TB__DOT__A2) 
                                     << 1U) | (IData)(vlSelf->Q2_LUT3_TB__DOT__A1)))));
}

VL_INLINE_OPT void VQ2_LUT3_TB___024root___act_sequent__TOP__3(VQ2_LUT3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQ2_LUT3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQ2_LUT3_TB___024root___act_sequent__TOP__3\n"); );
    // Body
    vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__NOR_1_INST__DOT__OR_0_INST__DOT__tmp 
        = (((IData)(vlSelf->Q2_LUT3_TB__DOT__A0) ^ (IData)(vlSelf->Q2_LUT3_TB__DOT__A2)) 
           ^ (IData)(vlSelf->Q2_LUT3_TB__DOT__A3));
    vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__nor_1_out = 
        (1U & (1U >> (((IData)(vlSelf->Q2_LUT3_TB__DOT__A3) 
                       << 2U) | (((IData)(vlSelf->Q2_LUT3_TB__DOT__A2) 
                                  << 1U) | (IData)(vlSelf->Q2_LUT3_TB__DOT__A0)))));
    vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__AND_1_INST__DOT__AND_0_INST__DOT__tmp 
        = (((IData)(vlSelf->Q2_LUT3_TB__DOT__A0) ^ (IData)(vlSelf->Q2_LUT3_TB__DOT__A2)) 
           ^ (IData)(vlSelf->Q2_LUT3_TB__DOT__A3));
    vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__and_1_out = 
        (1U & (0x80U >> (((IData)(vlSelf->Q2_LUT3_TB__DOT__A3) 
                          << 2U) | (((IData)(vlSelf->Q2_LUT3_TB__DOT__A2) 
                                     << 1U) | (IData)(vlSelf->Q2_LUT3_TB__DOT__A0)))));
}

void VQ2_LUT3_TB___024root___act_sequent__TOP__0(VQ2_LUT3_TB___024root* vlSelf);

void VQ2_LUT3_TB___024root___eval_act(VQ2_LUT3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQ2_LUT3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQ2_LUT3_TB___024root___eval_act\n"); );
    // Body
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VQ2_LUT3_TB___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VQ2_LUT3_TB___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VQ2_LUT3_TB___024root___act_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VQ2_LUT3_TB___024root___act_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void VQ2_LUT3_TB___024root___nba_sequent__TOP__0(VQ2_LUT3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQ2_LUT3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQ2_LUT3_TB___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__OR_1_INST__DOT__OR_0_INST__DOT__tmp 
        = ((IData)(vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__or_0_out) 
           ^ (IData)(vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__and_1_out));
    vlSelf->Q2_LUT3_TB__DOT__OUT = (1U & (0xfeU >> 
                                          (((IData)(vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__and_1_out) 
                                            << 1U) 
                                           | (IData)(vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__or_0_out))));
}

void VQ2_LUT3_TB___024root___eval_nba(VQ2_LUT3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQ2_LUT3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQ2_LUT3_TB___024root___eval_nba\n"); );
    // Body
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VQ2_LUT3_TB___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x18ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VQ2_LUT3_TB___024root___act_sequent__TOP__0(vlSelf);
    }
}

void VQ2_LUT3_TB___024root___timing_resume(VQ2_LUT3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQ2_LUT3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQ2_LUT3_TB___024root___timing_resume\n"); );
    // Body
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VQ2_LUT3_TB___024root___eval_triggers__act(VQ2_LUT3_TB___024root* vlSelf);

bool VQ2_LUT3_TB___024root___eval_phase__act(VQ2_LUT3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQ2_LUT3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQ2_LUT3_TB___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VQ2_LUT3_TB___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VQ2_LUT3_TB___024root___timing_resume(vlSelf);
        VQ2_LUT3_TB___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VQ2_LUT3_TB___024root___eval_phase__nba(VQ2_LUT3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQ2_LUT3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQ2_LUT3_TB___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VQ2_LUT3_TB___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VQ2_LUT3_TB___024root___dump_triggers__nba(VQ2_LUT3_TB___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VQ2_LUT3_TB___024root___dump_triggers__act(VQ2_LUT3_TB___024root* vlSelf);
#endif  // VL_DEBUG

void VQ2_LUT3_TB___024root___eval(VQ2_LUT3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQ2_LUT3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQ2_LUT3_TB___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VQ2_LUT3_TB___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("Q2_LUT3_TB.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VQ2_LUT3_TB___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("Q2_LUT3_TB.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VQ2_LUT3_TB___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VQ2_LUT3_TB___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VQ2_LUT3_TB___024root___eval_debug_assertions(VQ2_LUT3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQ2_LUT3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQ2_LUT3_TB___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
