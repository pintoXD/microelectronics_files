// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VOR_3_TB__pch.h"
#include "VOR_3_TB.h"
#include "VOR_3_TB___024root.h"
#include "VOR_3_TB___024unit.h"

// FUNCTIONS
VOR_3_TB__Syms::~VOR_3_TB__Syms()
{
}

VOR_3_TB__Syms::VOR_3_TB__Syms(VerilatedContext* contextp, const char* namep, VOR_3_TB* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    __Vscope_OR_3_TB.configure(this, name(), "OR_3_TB", "OR_3_TB", -9, VerilatedScope::SCOPE_OTHER);
}
