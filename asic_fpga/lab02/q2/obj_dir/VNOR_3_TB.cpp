// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VNOR_3_TB__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VNOR_3_TB::VNOR_3_TB(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VNOR_3_TB__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VNOR_3_TB::VNOR_3_TB(const char* _vcname__)
    : VNOR_3_TB(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VNOR_3_TB::~VNOR_3_TB() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VNOR_3_TB___024root___eval_debug_assertions(VNOR_3_TB___024root* vlSelf);
#endif  // VL_DEBUG
void VNOR_3_TB___024root___eval_static(VNOR_3_TB___024root* vlSelf);
void VNOR_3_TB___024root___eval_initial(VNOR_3_TB___024root* vlSelf);
void VNOR_3_TB___024root___eval_settle(VNOR_3_TB___024root* vlSelf);
void VNOR_3_TB___024root___eval(VNOR_3_TB___024root* vlSelf);

void VNOR_3_TB::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VNOR_3_TB::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VNOR_3_TB___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VNOR_3_TB___024root___eval_static(&(vlSymsp->TOP));
        VNOR_3_TB___024root___eval_initial(&(vlSymsp->TOP));
        VNOR_3_TB___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VNOR_3_TB___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VNOR_3_TB::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VNOR_3_TB::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VNOR_3_TB::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VNOR_3_TB___024root___eval_final(VNOR_3_TB___024root* vlSelf);

VL_ATTR_COLD void VNOR_3_TB::final() {
    VNOR_3_TB___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VNOR_3_TB::hierName() const { return vlSymsp->name(); }
const char* VNOR_3_TB::modelName() const { return "VNOR_3_TB"; }
unsigned VNOR_3_TB::threads() const { return 1; }
void VNOR_3_TB::prepareClone() const { contextp()->prepareClone(); }
void VNOR_3_TB::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VNOR_3_TB::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VNOR_3_TB___024root__trace_decl_types(VerilatedVcd* tracep);

void VNOR_3_TB___024root__trace_init_top(VNOR_3_TB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VNOR_3_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VNOR_3_TB___024root*>(voidSelf);
    VNOR_3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VNOR_3_TB___024root__trace_decl_types(tracep);
    VNOR_3_TB___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VNOR_3_TB___024root__trace_register(VNOR_3_TB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VNOR_3_TB::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VNOR_3_TB::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VNOR_3_TB___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
