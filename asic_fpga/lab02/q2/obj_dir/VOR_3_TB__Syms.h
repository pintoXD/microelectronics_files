// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VOR_3_TB__SYMS_H_
#define VERILATED_VOR_3_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VOR_3_TB.h"

// INCLUDE MODULE CLASSES
#include "VOR_3_TB___024root.h"
#include "VOR_3_TB___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VOR_3_TB__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VOR_3_TB* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VOR_3_TB___024root             TOP;
    VOR_3_TB___024unit             TOP____024unit;

    // SCOPE NAMES
    VerilatedScope __Vscope_OR_3_TB;

    // CONSTRUCTORS
    VOR_3_TB__Syms(VerilatedContext* contextp, const char* namep, VOR_3_TB* modelp);
    ~VOR_3_TB__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
