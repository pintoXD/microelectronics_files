// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VAND_3_TB__SYMS_H_
#define VERILATED_VAND_3_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VAND_3_TB.h"

// INCLUDE MODULE CLASSES
#include "VAND_3_TB___024root.h"
#include "VAND_3_TB___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VAND_3_TB__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VAND_3_TB* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VAND_3_TB___024root            TOP;
    VAND_3_TB___024unit            TOP____024unit;

    // SCOPE NAMES
    VerilatedScope __Vscope_AND_3_TB;

    // CONSTRUCTORS
    VAND_3_TB__Syms(VerilatedContext* contextp, const char* namep, VAND_3_TB* modelp);
    ~VAND_3_TB__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
