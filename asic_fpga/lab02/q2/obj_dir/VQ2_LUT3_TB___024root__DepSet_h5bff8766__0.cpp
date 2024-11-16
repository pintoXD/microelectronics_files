// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQ2_LUT3_TB.h for the primary calling header

#include "VQ2_LUT3_TB__pch.h"
#include "VQ2_LUT3_TB__Syms.h"
#include "VQ2_LUT3_TB___024root.h"

VL_INLINE_OPT VlCoroutine VQ2_LUT3_TB___024root___eval_initial__TOP__Vtiming__0(VQ2_LUT3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQ2_LUT3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQ2_LUT3_TB___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSelf->Q2_LUT3_TB__DOT__A0 = 0U;
    vlSelf->Q2_LUT3_TB__DOT__A1 = 0U;
    vlSelf->Q2_LUT3_TB__DOT__A2 = 0U;
    vlSelf->Q2_LUT3_TB__DOT__A3 = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "Q2_LUT3_TB.sv", 
                                       14);
    vlSelf->Q2_LUT3_TB__DOT__A0 = 0U;
    vlSelf->Q2_LUT3_TB__DOT__A1 = 0U;
    vlSelf->Q2_LUT3_TB__DOT__A2 = 0U;
    vlSelf->Q2_LUT3_TB__DOT__A3 = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "Q2_LUT3_TB.sv", 
                                       17);
    vlSelf->Q2_LUT3_TB__DOT__A0 = 0U;
    vlSelf->Q2_LUT3_TB__DOT__A1 = 0U;
    vlSelf->Q2_LUT3_TB__DOT__A2 = 1U;
    vlSelf->Q2_LUT3_TB__DOT__A3 = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "Q2_LUT3_TB.sv", 
                                       20);
    vlSelf->Q2_LUT3_TB__DOT__A0 = 0U;
    vlSelf->Q2_LUT3_TB__DOT__A1 = 0U;
    vlSelf->Q2_LUT3_TB__DOT__A2 = 1U;
    vlSelf->Q2_LUT3_TB__DOT__A3 = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "Q2_LUT3_TB.sv", 
                                       23);
    vlSelf->Q2_LUT3_TB__DOT__A0 = 0U;
    vlSelf->Q2_LUT3_TB__DOT__A1 = 1U;
    vlSelf->Q2_LUT3_TB__DOT__A2 = 0U;
    vlSelf->Q2_LUT3_TB__DOT__A3 = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "Q2_LUT3_TB.sv", 
                                       26);
    vlSelf->Q2_LUT3_TB__DOT__A0 = 0U;
    vlSelf->Q2_LUT3_TB__DOT__A1 = 1U;
    vlSelf->Q2_LUT3_TB__DOT__A2 = 0U;
    vlSelf->Q2_LUT3_TB__DOT__A3 = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "Q2_LUT3_TB.sv", 
                                       29);
    vlSelf->Q2_LUT3_TB__DOT__A0 = 0U;
    vlSelf->Q2_LUT3_TB__DOT__A1 = 1U;
    vlSelf->Q2_LUT3_TB__DOT__A2 = 1U;
    vlSelf->Q2_LUT3_TB__DOT__A3 = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "Q2_LUT3_TB.sv", 
                                       32);
    vlSelf->Q2_LUT3_TB__DOT__A0 = 0U;
    vlSelf->Q2_LUT3_TB__DOT__A1 = 1U;
    vlSelf->Q2_LUT3_TB__DOT__A2 = 1U;
    vlSelf->Q2_LUT3_TB__DOT__A3 = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "Q2_LUT3_TB.sv", 
                                       35);
    vlSelf->Q2_LUT3_TB__DOT__A0 = 1U;
    vlSelf->Q2_LUT3_TB__DOT__A1 = 0U;
    vlSelf->Q2_LUT3_TB__DOT__A2 = 0U;
    vlSelf->Q2_LUT3_TB__DOT__A3 = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "Q2_LUT3_TB.sv", 
                                       38);
    vlSelf->Q2_LUT3_TB__DOT__A0 = 1U;
    vlSelf->Q2_LUT3_TB__DOT__A1 = 0U;
    vlSelf->Q2_LUT3_TB__DOT__A2 = 0U;
    vlSelf->Q2_LUT3_TB__DOT__A3 = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "Q2_LUT3_TB.sv", 
                                       41);
    vlSelf->Q2_LUT3_TB__DOT__A0 = 1U;
    vlSelf->Q2_LUT3_TB__DOT__A1 = 0U;
    vlSelf->Q2_LUT3_TB__DOT__A2 = 1U;
    vlSelf->Q2_LUT3_TB__DOT__A3 = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "Q2_LUT3_TB.sv", 
                                       44);
    vlSelf->Q2_LUT3_TB__DOT__A0 = 1U;
    vlSelf->Q2_LUT3_TB__DOT__A1 = 0U;
    vlSelf->Q2_LUT3_TB__DOT__A2 = 1U;
    vlSelf->Q2_LUT3_TB__DOT__A3 = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "Q2_LUT3_TB.sv", 
                                       47);
    vlSelf->Q2_LUT3_TB__DOT__A0 = 1U;
    vlSelf->Q2_LUT3_TB__DOT__A1 = 1U;
    vlSelf->Q2_LUT3_TB__DOT__A2 = 0U;
    vlSelf->Q2_LUT3_TB__DOT__A3 = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "Q2_LUT3_TB.sv", 
                                       50);
    vlSelf->Q2_LUT3_TB__DOT__A0 = 1U;
    vlSelf->Q2_LUT3_TB__DOT__A1 = 1U;
    vlSelf->Q2_LUT3_TB__DOT__A2 = 0U;
    vlSelf->Q2_LUT3_TB__DOT__A3 = 1U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "Q2_LUT3_TB.sv", 
                                       53);
    vlSelf->Q2_LUT3_TB__DOT__A0 = 1U;
    vlSelf->Q2_LUT3_TB__DOT__A1 = 1U;
    vlSelf->Q2_LUT3_TB__DOT__A2 = 1U;
    vlSelf->Q2_LUT3_TB__DOT__A3 = 0U;
    co_await vlSelf->__VdlySched.delay(0x2710ULL, nullptr, 
                                       "Q2_LUT3_TB.sv", 
                                       56);
    vlSelf->Q2_LUT3_TB__DOT__A0 = 1U;
    vlSelf->Q2_LUT3_TB__DOT__A1 = 1U;
    vlSelf->Q2_LUT3_TB__DOT__A2 = 1U;
    vlSelf->Q2_LUT3_TB__DOT__A3 = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VQ2_LUT3_TB___024root___dump_triggers__act(VQ2_LUT3_TB___024root* vlSelf);
#endif  // VL_DEBUG

void VQ2_LUT3_TB___024root___eval_triggers__act(VQ2_LUT3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQ2_LUT3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQ2_LUT3_TB___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((((IData)(vlSelf->Q2_LUT3_TB__DOT__A1) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__A1__0)) 
                                      | ((IData)(vlSelf->Q2_LUT3_TB__DOT__A2) 
                                         != (IData)(vlSelf->__Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__A2__0))) 
                                     | ((IData)(vlSelf->Q2_LUT3_TB__DOT__A3) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__A3__0))));
    vlSelf->__VactTriggered.set(1U, ((((IData)(vlSelf->Q2_LUT3_TB__DOT__A0) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__A0__0)) 
                                      | ((IData)(vlSelf->Q2_LUT3_TB__DOT__A2) 
                                         != (IData)(vlSelf->__Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__A2__0))) 
                                     | ((IData)(vlSelf->Q2_LUT3_TB__DOT__A3) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__A3__0))));
    vlSelf->__VactTriggered.set(2U, ((((IData)(vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__and_0_out) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__UUT__DOT__and_0_out__0)) 
                                      | ((IData)(vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__nor_0_out) 
                                         != (IData)(vlSelf->__Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__UUT__DOT__nor_0_out__0))) 
                                     | ((IData)(vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__nor_1_out) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__UUT__DOT__nor_1_out__0))));
    vlSelf->__VactTriggered.set(3U, (((IData)(vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__and_1_out) 
                                      != (IData)(vlSelf->__Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__UUT__DOT__and_1_out__0)) 
                                     | ((IData)(vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__or_0_out) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__UUT__DOT__or_0_out__0))));
    vlSelf->__VactTriggered.set(4U, vlSelf->__VdlySched.awaitingCurrentTime());
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
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
        vlSelf->__VactTriggered.set(1U, 1U);
        vlSelf->__VactTriggered.set(2U, 1U);
        vlSelf->__VactTriggered.set(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VQ2_LUT3_TB___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VQ2_LUT3_TB___024root___act_sequent__TOP__0(VQ2_LUT3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQ2_LUT3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQ2_LUT3_TB___024root___act_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("%20#     %b  %b  %b  %b               %b\n",
                  64,VL_TIME_UNITED_Q(1000),1,(IData)(vlSelf->Q2_LUT3_TB__DOT__A0),
                  1,vlSelf->Q2_LUT3_TB__DOT__A1,1,(IData)(vlSelf->Q2_LUT3_TB__DOT__A2),
                  1,vlSelf->Q2_LUT3_TB__DOT__A3,1,(IData)(vlSelf->Q2_LUT3_TB__DOT__OUT));
    }
}
