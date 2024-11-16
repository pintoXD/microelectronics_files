// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAND_3_TB.h for the primary calling header

#include "VAND_3_TB__pch.h"
#include "VAND_3_TB__Syms.h"
#include "VAND_3_TB___024unit.h"

void VAND_3_TB___024unit___ctor_var_reset(VAND_3_TB___024unit* vlSelf);

VAND_3_TB___024unit::VAND_3_TB___024unit(VAND_3_TB__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VAND_3_TB___024unit___ctor_var_reset(this);
}

void VAND_3_TB___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VAND_3_TB___024unit::~VAND_3_TB___024unit() {
}
