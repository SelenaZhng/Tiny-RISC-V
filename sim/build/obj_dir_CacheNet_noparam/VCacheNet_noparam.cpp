// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCacheNet_noparam__pch.h"

//============================================================
// Constructors

VCacheNet_noparam::VCacheNet_noparam(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VCacheNet_noparam__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , net2cache_reqstream_msg{vlSymsp->TOP.net2cache_reqstream_msg}
    , net2cache_reqstream_rdy{vlSymsp->TOP.net2cache_reqstream_rdy}
    , net2cache_reqstream_val{vlSymsp->TOP.net2cache_reqstream_val}
    , net2cache_respstream_msg{vlSymsp->TOP.net2cache_respstream_msg}
    , net2cache_respstream_rdy{vlSymsp->TOP.net2cache_respstream_rdy}
    , net2cache_respstream_val{vlSymsp->TOP.net2cache_respstream_val}
    , proc2net_reqstream_msg{vlSymsp->TOP.proc2net_reqstream_msg}
    , proc2net_reqstream_rdy{vlSymsp->TOP.proc2net_reqstream_rdy}
    , proc2net_reqstream_val{vlSymsp->TOP.proc2net_reqstream_val}
    , proc2net_respstream_msg{vlSymsp->TOP.proc2net_respstream_msg}
    , proc2net_respstream_rdy{vlSymsp->TOP.proc2net_respstream_rdy}
    , proc2net_respstream_val{vlSymsp->TOP.proc2net_respstream_val}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VCacheNet_noparam::VCacheNet_noparam(const char* _vcname__)
    : VCacheNet_noparam(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VCacheNet_noparam::~VCacheNet_noparam() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VCacheNet_noparam___024root___eval_debug_assertions(VCacheNet_noparam___024root* vlSelf);
#endif  // VL_DEBUG
void VCacheNet_noparam___024root___eval_static(VCacheNet_noparam___024root* vlSelf);
void VCacheNet_noparam___024root___eval_initial(VCacheNet_noparam___024root* vlSelf);
void VCacheNet_noparam___024root___eval_settle(VCacheNet_noparam___024root* vlSelf);
void VCacheNet_noparam___024root___eval(VCacheNet_noparam___024root* vlSelf);

void VCacheNet_noparam::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCacheNet_noparam::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCacheNet_noparam___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VCacheNet_noparam___024root___eval_static(&(vlSymsp->TOP));
        VCacheNet_noparam___024root___eval_initial(&(vlSymsp->TOP));
        VCacheNet_noparam___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VCacheNet_noparam___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VCacheNet_noparam::eventsPending() { return false; }

uint64_t VCacheNet_noparam::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VCacheNet_noparam::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VCacheNet_noparam___024root___eval_final(VCacheNet_noparam___024root* vlSelf);

VL_ATTR_COLD void VCacheNet_noparam::final() {
    VCacheNet_noparam___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VCacheNet_noparam::hierName() const { return vlSymsp->name(); }
const char* VCacheNet_noparam::modelName() const { return "VCacheNet_noparam"; }
unsigned VCacheNet_noparam::threads() const { return 1; }
void VCacheNet_noparam::prepareClone() const { contextp()->prepareClone(); }
void VCacheNet_noparam::atClone() const {
    contextp()->threadPoolpOnClone();
}
