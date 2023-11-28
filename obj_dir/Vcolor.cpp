// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcolor.h"
#include "Vcolor__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcolor::Vcolor(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcolor__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcolor::Vcolor(const char* _vcname__)
    : Vcolor(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcolor::~Vcolor() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcolor___024root___eval_debug_assertions(Vcolor___024root* vlSelf);
#endif  // VL_DEBUG
void Vcolor___024root___eval_static(Vcolor___024root* vlSelf);
void Vcolor___024root___eval_initial(Vcolor___024root* vlSelf);
void Vcolor___024root___eval_settle(Vcolor___024root* vlSelf);
void Vcolor___024root___eval(Vcolor___024root* vlSelf);

void Vcolor::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcolor::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcolor___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcolor___024root___eval_static(&(vlSymsp->TOP));
        Vcolor___024root___eval_initial(&(vlSymsp->TOP));
        Vcolor___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcolor___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcolor::eventsPending() { return false; }

uint64_t Vcolor::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcolor::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcolor___024root___eval_final(Vcolor___024root* vlSelf);

VL_ATTR_COLD void Vcolor::final() {
    Vcolor___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcolor::hierName() const { return vlSymsp->name(); }
const char* Vcolor::modelName() const { return "Vcolor"; }
unsigned Vcolor::threads() const { return 1; }
void Vcolor::prepareClone() const { contextp()->prepareClone(); }
void Vcolor::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vcolor::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcolor___024root__trace_init_top(Vcolor___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcolor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcolor___024root*>(voidSelf);
    Vcolor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vcolor___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vcolor___024root__trace_register(Vcolor___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcolor::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcolor::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcolor___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
