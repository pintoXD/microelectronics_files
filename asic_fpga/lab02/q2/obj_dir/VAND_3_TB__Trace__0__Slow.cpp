// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAND_3_TB__Syms.h"


VL_ATTR_COLD void VAND_3_TB___024root__trace_init_sub__TOP__0(VAND_3_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAND_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAND_3_TB___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("AND_3_TB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"A0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"A1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"A2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"OUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("UUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"C",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"OUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("AND_0_INST", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1,0,"I0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"I1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"I2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VAND_3_TB___024root__trace_init_top(VAND_3_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAND_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAND_3_TB___024root__trace_init_top\n"); );
    // Body
    VAND_3_TB___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VAND_3_TB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VAND_3_TB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VAND_3_TB___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VAND_3_TB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VAND_3_TB___024root__trace_register(VAND_3_TB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VAND_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAND_3_TB___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VAND_3_TB___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VAND_3_TB___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VAND_3_TB___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VAND_3_TB___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VAND_3_TB___024root__trace_const_0_sub_0(VAND_3_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VAND_3_TB___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAND_3_TB___024root__trace_const_0\n"); );
    // Init
    VAND_3_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAND_3_TB___024root*>(voidSelf);
    VAND_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VAND_3_TB___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VAND_3_TB___024root__trace_const_0_sub_0(VAND_3_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VAND_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAND_3_TB___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+6,(0x80U),8);
}

VL_ATTR_COLD void VAND_3_TB___024root__trace_full_0_sub_0(VAND_3_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VAND_3_TB___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAND_3_TB___024root__trace_full_0\n"); );
    // Init
    VAND_3_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VAND_3_TB___024root*>(voidSelf);
    VAND_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VAND_3_TB___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VAND_3_TB___024root__trace_full_0_sub_0(VAND_3_TB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VAND_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAND_3_TB___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->AND_3_TB__DOT__A0));
    bufp->fullBit(oldp+2,(vlSelf->AND_3_TB__DOT__A1));
    bufp->fullBit(oldp+3,(vlSelf->AND_3_TB__DOT__A2));
    bufp->fullBit(oldp+4,(vlSelf->AND_3_TB__DOT__OUT));
    bufp->fullBit(oldp+5,(vlSelf->AND_3_TB__DOT__UUT__DOT__AND_0_INST__DOT__tmp));
}