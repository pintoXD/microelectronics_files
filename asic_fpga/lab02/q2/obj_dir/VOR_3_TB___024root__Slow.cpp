// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VOR_3_TB.h for the primary calling header

#include "VOR_3_TB__pch.h"
#include "VOR_3_TB__Syms.h"
#include "VOR_3_TB___024root.h"

void VOR_3_TB___024root___ctor_var_reset(VOR_3_TB___024root* vlSelf);

VOR_3_TB___024root::VOR_3_TB___024root(VOR_3_TB__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VOR_3_TB___024root___ctor_var_reset(this);
}

void VOR_3_TB___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VOR_3_TB___024root::~VOR_3_TB___024root() {
}
