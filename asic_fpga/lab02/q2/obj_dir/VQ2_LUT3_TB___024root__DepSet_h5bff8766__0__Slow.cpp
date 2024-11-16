// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQ2_LUT3_TB.h for the primary calling header

#include "VQ2_LUT3_TB__pch.h"
#include "VQ2_LUT3_TB__Syms.h"
#include "VQ2_LUT3_TB___024root.h"

VL_ATTR_COLD void VQ2_LUT3_TB___024root___eval_initial__TOP(VQ2_LUT3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQ2_LUT3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQ2_LUT3_TB___024root___eval_initial__TOP\n"); );
    // Body
    VL_WRITEF("                Tempo     Entradas LUT        Sa\303\255das\n                         A0  A1  A2  A3         OUT\n                ====   ================       =======\n");
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VQ2_LUT3_TB___024root___dump_triggers__stl(VQ2_LUT3_TB___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VQ2_LUT3_TB___024root___eval_triggers__stl(VQ2_LUT3_TB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQ2_LUT3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQ2_LUT3_TB___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VQ2_LUT3_TB___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
