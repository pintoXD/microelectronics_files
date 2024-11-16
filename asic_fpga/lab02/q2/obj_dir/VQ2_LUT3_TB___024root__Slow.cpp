// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VQ2_LUT3_TB.h for the primary calling header

#include "VQ2_LUT3_TB__pch.h"
#include "VQ2_LUT3_TB__Syms.h"
#include "VQ2_LUT3_TB___024root.h"

void VQ2_LUT3_TB___024root___ctor_var_reset(VQ2_LUT3_TB___024root* vlSelf);

VQ2_LUT3_TB___024root::VQ2_LUT3_TB___024root(VQ2_LUT3_TB__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VQ2_LUT3_TB___024root___ctor_var_reset(this);
}

void VQ2_LUT3_TB___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VQ2_LUT3_TB___024root::~VQ2_LUT3_TB___024root() {
}
