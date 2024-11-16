// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VQ2_LUT3_TB__Syms.h"


void VQ2_LUT3_TB___024root__trace_chg_0_sub_0(VQ2_LUT3_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VQ2_LUT3_TB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQ2_LUT3_TB___024root__trace_chg_0\n"); );
    // Init
    VQ2_LUT3_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VQ2_LUT3_TB___024root*>(voidSelf);
    VQ2_LUT3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VQ2_LUT3_TB___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VQ2_LUT3_TB___024root__trace_chg_0_sub_0(VQ2_LUT3_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VQ2_LUT3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQ2_LUT3_TB___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__nor_0_out));
        bufp->chgBit(oldp+1,(vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__and_0_out));
        bufp->chgBit(oldp+2,(vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__AND_0_INST__DOT__AND_0_INST__DOT__tmp));
        bufp->chgBit(oldp+3,(vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__NOR_0_INST__DOT__OR_0_INST__DOT__tmp));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+4,(vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__nor_1_out));
        bufp->chgBit(oldp+5,(vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__and_1_out));
        bufp->chgBit(oldp+6,(vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__AND_1_INST__DOT__AND_0_INST__DOT__tmp));
        bufp->chgBit(oldp+7,(vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__NOR_1_INST__DOT__OR_0_INST__DOT__tmp));
    }
    bufp->chgBit(oldp+8,(vlSelf->Q2_LUT3_TB__DOT__A0));
    bufp->chgBit(oldp+9,(vlSelf->Q2_LUT3_TB__DOT__A1));
    bufp->chgBit(oldp+10,(vlSelf->Q2_LUT3_TB__DOT__A2));
    bufp->chgBit(oldp+11,(vlSelf->Q2_LUT3_TB__DOT__A3));
    bufp->chgBit(oldp+12,(vlSelf->Q2_LUT3_TB__DOT__OUT));
    bufp->chgBit(oldp+13,(vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__or_0_out));
    bufp->chgBit(oldp+14,(vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__OR_0_INST__DOT__OR_0_INST__DOT__tmp));
    bufp->chgBit(oldp+15,(vlSelf->Q2_LUT3_TB__DOT__UUT__DOT__OR_1_INST__DOT__OR_0_INST__DOT__tmp));
}

void VQ2_LUT3_TB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VQ2_LUT3_TB___024root__trace_cleanup\n"); );
    // Init
    VQ2_LUT3_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VQ2_LUT3_TB___024root*>(voidSelf);
    VQ2_LUT3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
