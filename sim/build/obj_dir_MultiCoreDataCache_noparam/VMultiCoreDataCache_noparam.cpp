// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMultiCoreDataCache_noparam__pch.h"

//============================================================
// Constructors

VMultiCoreDataCache_noparam::VMultiCoreDataCache_noparam(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VMultiCoreDataCache_noparam__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , cache2mem_reqstream_rdy{vlSymsp->TOP.cache2mem_reqstream_rdy}
    , cache2mem_reqstream_val{vlSymsp->TOP.cache2mem_reqstream_val}
    , cache2mem_respstream_rdy{vlSymsp->TOP.cache2mem_respstream_rdy}
    , cache2mem_respstream_val{vlSymsp->TOP.cache2mem_respstream_val}
    , cache2mem_reqstream_msg{vlSymsp->TOP.cache2mem_reqstream_msg}
    , cache2mem_respstream_msg{vlSymsp->TOP.cache2mem_respstream_msg}
    , proc2cache_reqstream_msg{vlSymsp->TOP.proc2cache_reqstream_msg}
    , proc2cache_reqstream_rdy{vlSymsp->TOP.proc2cache_reqstream_rdy}
    , proc2cache_reqstream_val{vlSymsp->TOP.proc2cache_reqstream_val}
    , proc2cache_respstream_msg{vlSymsp->TOP.proc2cache_respstream_msg}
    , proc2cache_respstream_rdy{vlSymsp->TOP.proc2cache_respstream_rdy}
    , proc2cache_respstream_val{vlSymsp->TOP.proc2cache_respstream_val}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VMultiCoreDataCache_noparam::VMultiCoreDataCache_noparam(const char* _vcname__)
    : VMultiCoreDataCache_noparam(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VMultiCoreDataCache_noparam::~VMultiCoreDataCache_noparam() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VMultiCoreDataCache_noparam___024root___eval_debug_assertions(VMultiCoreDataCache_noparam___024root* vlSelf);
#endif  // VL_DEBUG
void VMultiCoreDataCache_noparam___024root___eval_static(VMultiCoreDataCache_noparam___024root* vlSelf);
void VMultiCoreDataCache_noparam___024root___eval_initial(VMultiCoreDataCache_noparam___024root* vlSelf);
void VMultiCoreDataCache_noparam___024root___eval_settle(VMultiCoreDataCache_noparam___024root* vlSelf);
void VMultiCoreDataCache_noparam___024root___eval(VMultiCoreDataCache_noparam___024root* vlSelf);

void VMultiCoreDataCache_noparam::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMultiCoreDataCache_noparam::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMultiCoreDataCache_noparam___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VMultiCoreDataCache_noparam___024root___eval_static(&(vlSymsp->TOP));
        VMultiCoreDataCache_noparam___024root___eval_initial(&(vlSymsp->TOP));
        VMultiCoreDataCache_noparam___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VMultiCoreDataCache_noparam___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VMultiCoreDataCache_noparam::eventsPending() { return false; }

uint64_t VMultiCoreDataCache_noparam::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VMultiCoreDataCache_noparam::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VMultiCoreDataCache_noparam___024root___eval_final(VMultiCoreDataCache_noparam___024root* vlSelf);

VL_ATTR_COLD void VMultiCoreDataCache_noparam::final() {
    VMultiCoreDataCache_noparam___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VMultiCoreDataCache_noparam::hierName() const { return vlSymsp->name(); }
const char* VMultiCoreDataCache_noparam::modelName() const { return "VMultiCoreDataCache_noparam"; }
unsigned VMultiCoreDataCache_noparam::threads() const { return 1; }
void VMultiCoreDataCache_noparam::prepareClone() const { contextp()->prepareClone(); }
void VMultiCoreDataCache_noparam::atClone() const {
    contextp()->threadPoolpOnClone();
}
