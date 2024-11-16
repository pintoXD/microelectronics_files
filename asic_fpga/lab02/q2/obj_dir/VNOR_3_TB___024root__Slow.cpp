// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNOR_3_TB.h for the primary calling header

#include "VNOR_3_TB__pch.h"
#include "VNOR_3_TB__Syms.h"
#include "VNOR_3_TB___024root.h"

void VNOR_3_TB___024root___ctor_var_reset(VNOR_3_TB___024root* vlSelf);

VNOR_3_TB___024root::VNOR_3_TB___024root(VNOR_3_TB__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VNOR_3_TB___024root___ctor_var_reset(this);
}

void VNOR_3_TB___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VNOR_3_TB___024root::~VNOR_3_TB___024root() {
}
