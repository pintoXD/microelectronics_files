// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VNOR_3_TB__SYMS_H_
#define VERILATED_VNOR_3_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VNOR_3_TB.h"

// INCLUDE MODULE CLASSES
#include "VNOR_3_TB___024root.h"
#include "VNOR_3_TB___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VNOR_3_TB__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VNOR_3_TB* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VNOR_3_TB___024root            TOP;
    VNOR_3_TB___024unit            TOP____024unit;

    // SCOPE NAMES
    VerilatedScope __Vscope_NOR_3_TB;

    // CONSTRUCTORS
    VNOR_3_TB__Syms(VerilatedContext* contextp, const char* namep, VNOR_3_TB* modelp);
    ~VNOR_3_TB__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
