// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQ2_LUT3_TB.h for the primary calling header

#include "VQ2_LUT3_TB__pch.h"
#include "VQ2_LUT3_TB___024unit.h"

VL_ATTR_COLD void VQ2_LUT3_TB___024unit___ctor_var_reset(VQ2_LUT3_TB___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VQ2_LUT3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  VQ2_LUT3_TB___024unit___ctor_var_reset\n"); );
    // Body
    vlSelf->__VmonitorNum = VL_RAND_RESET_Q(64);
    vlSelf->__VmonitorOff = VL_RAND_RESET_I(1);
}
