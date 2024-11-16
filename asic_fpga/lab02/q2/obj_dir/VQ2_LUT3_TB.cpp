// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VQ2_LUT3_TB__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VQ2_LUT3_TB::VQ2_LUT3_TB(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VQ2_LUT3_TB__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VQ2_LUT3_TB::VQ2_LUT3_TB(const char* _vcname__)
    : VQ2_LUT3_TB(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VQ2_LUT3_TB::~VQ2_LUT3_TB() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VQ2_LUT3_TB___024root___eval_debug_assertions(VQ2_LUT3_TB___024root* vlSelf);
#endif  // VL_DEBUG
void VQ2_LUT3_TB___024root___eval_static(VQ2_LUT3_TB___024root* vlSelf);
void VQ2_LUT3_TB___024root___eval_initial(VQ2_LUT3_TB___024root* vlSelf);
void VQ2_LUT3_TB___024root___eval_settle(VQ2_LUT3_TB___024root* vlSelf);
void VQ2_LUT3_TB___024root___eval(VQ2_LUT3_TB___024root* vlSelf);

void VQ2_LUT3_TB::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VQ2_LUT3_TB::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VQ2_LUT3_TB___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VQ2_LUT3_TB___024root___eval_static(&(vlSymsp->TOP));
        VQ2_LUT3_TB___024root___eval_initial(&(vlSymsp->TOP));
        VQ2_LUT3_TB___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VQ2_LUT3_TB___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VQ2_LUT3_TB::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VQ2_LUT3_TB::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool VQ2_LUT3_TB::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VQ2_LUT3_TB::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VQ2_LUT3_TB::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VQ2_LUT3_TB___024root___eval_final(VQ2_LUT3_TB___024root* vlSelf);

VL_ATTR_COLD void VQ2_LUT3_TB::final() {
    VQ2_LUT3_TB___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VQ2_LUT3_TB::hierName() const { return vlSymsp->name(); }
const char* VQ2_LUT3_TB::modelName() const { return "VQ2_LUT3_TB"; }
unsigned VQ2_LUT3_TB::threads() const { return 1; }
void VQ2_LUT3_TB::prepareClone() const { contextp()->prepareClone(); }
void VQ2_LUT3_TB::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VQ2_LUT3_TB::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VQ2_LUT3_TB___024root__trace_decl_types(VerilatedVcd* tracep);

void VQ2_LUT3_TB___024root__trace_init_top(VQ2_LUT3_TB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VQ2_LUT3_TB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VQ2_LUT3_TB___024root*>(voidSelf);
    VQ2_LUT3_TB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VQ2_LUT3_TB___024root__trace_decl_types(tracep);
    VQ2_LUT3_TB___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VQ2_LUT3_TB___024root__trace_register(VQ2_LUT3_TB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VQ2_LUT3_TB::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VQ2_LUT3_TB::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VQ2_LUT3_TB___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
