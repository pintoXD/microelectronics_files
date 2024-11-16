// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VAND_3_TB__pch.h"
#include "VAND_3_TB.h"
#include "VAND_3_TB___024root.h"
#include "VAND_3_TB___024unit.h"

// FUNCTIONS
VAND_3_TB__Syms::~VAND_3_TB__Syms()
{
}

VAND_3_TB__Syms::VAND_3_TB__Syms(VerilatedContext* contextp, const char* namep, VAND_3_TB* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    __Vscope_AND_3_TB.configure(this, name(), "AND_3_TB", "AND_3_TB", -12, VerilatedScope::SCOPE_OTHER);
}
