// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSingleCoreSys_noparam__pch.h"

//============================================================
// Constructors

VSingleCoreSys_noparam::VSingleCoreSys_noparam(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VSingleCoreSys_noparam__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , commit_inst{vlSymsp->TOP.commit_inst}
    , dcache_access{vlSymsp->TOP.dcache_access}
    , dcache_miss{vlSymsp->TOP.dcache_miss}
    , icache_access{vlSymsp->TOP.icache_access}
    , icache_miss{vlSymsp->TOP.icache_miss}
    , stats_en{vlSymsp->TOP.stats_en}
    , dmem_reqstream_rdy{vlSymsp->TOP.dmem_reqstream_rdy}
    , dmem_reqstream_val{vlSymsp->TOP.dmem_reqstream_val}
    , dmem_respstream_rdy{vlSymsp->TOP.dmem_respstream_rdy}
    , dmem_respstream_val{vlSymsp->TOP.dmem_respstream_val}
    , imem_reqstream_rdy{vlSymsp->TOP.imem_reqstream_rdy}
    , imem_reqstream_val{vlSymsp->TOP.imem_reqstream_val}
    , imem_respstream_rdy{vlSymsp->TOP.imem_respstream_rdy}
    , imem_respstream_val{vlSymsp->TOP.imem_respstream_val}
    , mngr2proc_rdy{vlSymsp->TOP.mngr2proc_rdy}
    , mngr2proc_val{vlSymsp->TOP.mngr2proc_val}
    , proc2mngr_rdy{vlSymsp->TOP.proc2mngr_rdy}
    , proc2mngr_val{vlSymsp->TOP.proc2mngr_val}
    , dmem_reqstream_msg{vlSymsp->TOP.dmem_reqstream_msg}
    , dmem_respstream_msg{vlSymsp->TOP.dmem_respstream_msg}
    , imem_reqstream_msg{vlSymsp->TOP.imem_reqstream_msg}
    , imem_respstream_msg{vlSymsp->TOP.imem_respstream_msg}
    , mngr2proc_msg{vlSymsp->TOP.mngr2proc_msg}
    , proc2mngr_msg{vlSymsp->TOP.proc2mngr_msg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VSingleCoreSys_noparam::VSingleCoreSys_noparam(const char* _vcname__)
    : VSingleCoreSys_noparam(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VSingleCoreSys_noparam::~VSingleCoreSys_noparam() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VSingleCoreSys_noparam___024root___eval_debug_assertions(VSingleCoreSys_noparam___024root* vlSelf);
#endif  // VL_DEBUG
void VSingleCoreSys_noparam___024root___eval_static(VSingleCoreSys_noparam___024root* vlSelf);
void VSingleCoreSys_noparam___024root___eval_initial(VSingleCoreSys_noparam___024root* vlSelf);
void VSingleCoreSys_noparam___024root___eval_settle(VSingleCoreSys_noparam___024root* vlSelf);
void VSingleCoreSys_noparam___024root___eval(VSingleCoreSys_noparam___024root* vlSelf);

void VSingleCoreSys_noparam::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSingleCoreSys_noparam::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSingleCoreSys_noparam___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VSingleCoreSys_noparam___024root___eval_static(&(vlSymsp->TOP));
        VSingleCoreSys_noparam___024root___eval_initial(&(vlSymsp->TOP));
        VSingleCoreSys_noparam___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VSingleCoreSys_noparam___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VSingleCoreSys_noparam::eventsPending() { return false; }

uint64_t VSingleCoreSys_noparam::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VSingleCoreSys_noparam::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VSingleCoreSys_noparam___024root___eval_final(VSingleCoreSys_noparam___024root* vlSelf);

VL_ATTR_COLD void VSingleCoreSys_noparam::final() {
    VSingleCoreSys_noparam___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VSingleCoreSys_noparam::hierName() const { return vlSymsp->name(); }
const char* VSingleCoreSys_noparam::modelName() const { return "VSingleCoreSys_noparam"; }
unsigned VSingleCoreSys_noparam::threads() const { return 1; }
void VSingleCoreSys_noparam::prepareClone() const { contextp()->prepareClone(); }
void VSingleCoreSys_noparam::atClone() const {
    contextp()->threadPoolpOnClone();
}
