// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNOR_3_TB.h for the primary calling header

#include "VNOR_3_TB__pch.h"
#include "VNOR_3_TB__Syms.h"
#include "VNOR_3_TB___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VNOR_3_TB___024root___dump_triggers__act(VNOR_3_TB___024root* vlSelf);
#endif  // VL_DEBUG

void VNOR_3_TB___024root___eval_triggers__act(VNOR_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNOR_3_TB___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((((IData)(vlSelf->NOR_3_TB__DOT__A0) 
                                       != (IData)(vlSelf->__Vtrigprevexpr___TOP__NOR_3_TB__DOT__A0__0)) 
                                      | ((IData)(vlSelf->NOR_3_TB__DOT__A1) 
                                         != (IData)(vlSelf->__Vtrigprevexpr___TOP__NOR_3_TB__DOT__A1__0))) 
                                     | ((IData)(vlSelf->NOR_3_TB__DOT__A2) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__NOR_3_TB__DOT__A2__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__NOR_3_TB__DOT__A0__0 
        = vlSelf->NOR_3_TB__DOT__A0;
    vlSelf->__Vtrigprevexpr___TOP__NOR_3_TB__DOT__A1__0 
        = vlSelf->NOR_3_TB__DOT__A1;
    vlSelf->__Vtrigprevexpr___TOP__NOR_3_TB__DOT__A2__0 
        = vlSelf->NOR_3_TB__DOT__A2;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VNOR_3_TB___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VNOR_3_TB___024root___act_sequent__TOP__0(VNOR_3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNOR_3_TB___024root___act_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("%20#     %b   %b   %b               %b\n",
                  64,VL_TIME_UNITED_Q(1000),1,(IData)(vlSelf->NOR_3_TB__DOT__A2),
                  1,vlSelf->NOR_3_TB__DOT__A1,1,(IData)(vlSelf->NOR_3_TB__DOT__A0),
                  1,vlSelf->NOR_3_TB__DOT__OUT);
    }
}
