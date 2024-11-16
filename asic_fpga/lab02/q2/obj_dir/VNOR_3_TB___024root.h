// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNOR_3_TB.h for the primary calling header

#ifndef VERILATED_VNOR_3_TB___024ROOT_H_
#define VERILATED_VNOR_3_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class VNOR_3_TB___024unit;


class VNOR_3_TB__Syms;

class alignas(VL_CACHE_LINE_BYTES) VNOR_3_TB___024root final : public VerilatedModule {
  public:
    // CELLS
    VNOR_3_TB___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ NOR_3_TB__DOT__A0;
    CData/*0:0*/ NOR_3_TB__DOT__A1;
    CData/*0:0*/ NOR_3_TB__DOT__A2;
    CData/*0:0*/ NOR_3_TB__DOT__OUT;
    CData/*0:0*/ NOR_3_TB__DOT__UUT__DOT__OR_0_INST__DOT__tmp;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__NOR_3_TB__DOT__A0__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__NOR_3_TB__DOT__A1__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__NOR_3_TB__DOT__A2__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VNOR_3_TB__Syms* const vlSymsp;

    // CONSTRUCTORS
    VNOR_3_TB___024root(VNOR_3_TB__Syms* symsp, const char* v__name);
    ~VNOR_3_TB___024root();
    VL_UNCOPYABLE(VNOR_3_TB___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
