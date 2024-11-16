// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VOR_3_TB.h for the primary calling header

#include "VOR_3_TB__pch.h"
#include "VOR_3_TB__Syms.h"
#include "VOR_3_TB___024unit.h"

void VOR_3_TB___024unit___ctor_var_reset(VOR_3_TB___024unit* vlSelf);

VOR_3_TB___024unit::VOR_3_TB___024unit(VOR_3_TB__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VOR_3_TB___024unit___ctor_var_reset(this);
}

void VOR_3_TB___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VOR_3_TB___024unit::~VOR_3_TB___024unit() {
}
