// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAND_3_TB.h for the primary calling header

#include "VAND_3_TB__pch.h"
#include "VAND_3_TB__Syms.h"
#include "VAND_3_TB___024root.h"

void VAND_3_TB___024root___ctor_var_reset(VAND_3_TB___024root* vlSelf);

VAND_3_TB___024root::VAND_3_TB___024root(VAND_3_TB__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VAND_3_TB___024root___ctor_var_reset(this);
}

void VAND_3_TB___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VAND_3_TB___024root::~VAND_3_TB___024root() {
}
