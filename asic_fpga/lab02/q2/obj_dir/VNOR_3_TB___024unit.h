// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNOR_3_TB.h for the primary calling header

#ifndef VERILATED_VNOR_3_TB___024UNIT_H_
#define VERILATED_VNOR_3_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VNOR_3_TB__Syms;

class alignas(VL_CACHE_LINE_BYTES) VNOR_3_TB___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    VNOR_3_TB__Syms* const vlSymsp;

    // CONSTRUCTORS
    VNOR_3_TB___024unit(VNOR_3_TB__Syms* symsp, const char* v__name);
    ~VNOR_3_TB___024unit();
    VL_UNCOPYABLE(VNOR_3_TB___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
