// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VNOR_3_TB__Syms.h"


void VNOR_3_TB___024root__trace_chg_0_sub_0(VNOR_3_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VNOR_3_TB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNOR_3_TB___024root__trace_chg_0\n"); );
    // Init
    VNOR_3_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VNOR_3_TB___024root*>(voidSelf);
    VNOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VNOR_3_TB___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VNOR_3_TB___024root__trace_chg_0_sub_0(VNOR_3_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VNOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNOR_3_TB___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->NOR_3_TB__DOT__A0));
    bufp->chgBit(oldp+1,(vlSelf->NOR_3_TB__DOT__A1));
    bufp->chgBit(oldp+2,(vlSelf->NOR_3_TB__DOT__A2));
    bufp->chgBit(oldp+3,(vlSelf->NOR_3_TB__DOT__OUT));
    bufp->chgBit(oldp+4,(vlSelf->NOR_3_TB__DOT__UUT__DOT__OR_0_INST__DOT__tmp));
}

void VNOR_3_TB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNOR_3_TB___024root__trace_cleanup\n"); );
    // Init
    VNOR_3_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VNOR_3_TB___024root*>(voidSelf);
    VNOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
