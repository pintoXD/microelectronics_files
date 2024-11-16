// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VQ2_LUT3_TB.h for the primary calling header

#ifndef VERILATED_VQ2_LUT3_TB___024ROOT_H_
#define VERILATED_VQ2_LUT3_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class VQ2_LUT3_TB___024unit;


class VQ2_LUT3_TB__Syms;

class alignas(VL_CACHE_LINE_BYTES) VQ2_LUT3_TB___024root final : public VerilatedModule {
  public:
    // CELLS
    VQ2_LUT3_TB___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ Q2_LUT3_TB__DOT__A0;
    CData/*0:0*/ Q2_LUT3_TB__DOT__A1;
    CData/*0:0*/ Q2_LUT3_TB__DOT__A2;
    CData/*0:0*/ Q2_LUT3_TB__DOT__A3;
    CData/*0:0*/ Q2_LUT3_TB__DOT__UUT__DOT__nor_0_out;
    CData/*0:0*/ Q2_LUT3_TB__DOT__UUT__DOT__nor_1_out;
    CData/*0:0*/ Q2_LUT3_TB__DOT__UUT__DOT__and_0_out;
    CData/*0:0*/ Q2_LUT3_TB__DOT__UUT__DOT__and_1_out;
    CData/*0:0*/ Q2_LUT3_TB__DOT__UUT__DOT__or_0_out;
    CData/*0:0*/ Q2_LUT3_TB__DOT__OUT;
    CData/*0:0*/ Q2_LUT3_TB__DOT__UUT__DOT__NOR_0_INST__DOT__OR_0_INST__DOT__tmp;
    CData/*0:0*/ Q2_LUT3_TB__DOT__UUT__DOT__AND_0_INST__DOT__AND_0_INST__DOT__tmp;
    CData/*0:0*/ Q2_LUT3_TB__DOT__UUT__DOT__NOR_1_INST__DOT__OR_0_INST__DOT__tmp;
    CData/*0:0*/ Q2_LUT3_TB__DOT__UUT__DOT__AND_1_INST__DOT__AND_0_INST__DOT__tmp;
    CData/*0:0*/ Q2_LUT3_TB__DOT__UUT__DOT__OR_0_INST__DOT__OR_0_INST__DOT__tmp;
    CData/*0:0*/ Q2_LUT3_TB__DOT__UUT__DOT__OR_1_INST__DOT__OR_0_INST__DOT__tmp;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__A1__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__A2__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__A3__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__A0__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__UUT__DOT__and_0_out__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__UUT__DOT__nor_0_out__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__UUT__DOT__nor_1_out__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__UUT__DOT__and_1_out__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__Q2_LUT3_TB__DOT__UUT__DOT__or_0_out__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    VQ2_LUT3_TB__Syms* const vlSymsp;

    // CONSTRUCTORS
    VQ2_LUT3_TB___024root(VQ2_LUT3_TB__Syms* symsp, const char* v__name);
    ~VQ2_LUT3_TB___024root();
    VL_UNCOPYABLE(VQ2_LUT3_TB___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
