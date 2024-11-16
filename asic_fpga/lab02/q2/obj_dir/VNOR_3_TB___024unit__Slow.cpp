// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNOR_3_TB.h for the primary calling header

#include "VNOR_3_TB__pch.h"
#include "VNOR_3_TB__Syms.h"
#include "VNOR_3_TB___024unit.h"

void VNOR_3_TB___024unit___ctor_var_reset(VNOR_3_TB___024unit* vlSelf);

VNOR_3_TB___024unit::VNOR_3_TB___024unit(VNOR_3_TB__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VNOR_3_TB___024unit___ctor_var_reset(this);
}

void VNOR_3_TB___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VNOR_3_TB___024unit::~VNOR_3_TB___024unit() {
}
