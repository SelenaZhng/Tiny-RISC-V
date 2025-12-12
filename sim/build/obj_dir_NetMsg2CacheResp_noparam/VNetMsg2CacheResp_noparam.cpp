// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VNetMsg2CacheResp_noparam__pch.h"

//============================================================
// Constructors

VNetMsg2CacheResp_noparam::VNetMsg2CacheResp_noparam(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VNetMsg2CacheResp_noparam__Syms(contextp(), _vcname__, this)}
    , reset{vlSymsp->TOP.reset}
    , clk{vlSymsp->TOP.clk}
    , istream_rdy{vlSymsp->TOP.istream_rdy}
    , istream_val{vlSymsp->TOP.istream_val}
    , ostream_rdy{vlSymsp->TOP.ostream_rdy}
    , ostream_val{vlSymsp->TOP.ostream_val}
    , istream_msg{vlSymsp->TOP.istream_msg}
    , ostream_msg{vlSymsp->TOP.ostream_msg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VNetMsg2CacheResp_noparam::VNetMsg2CacheResp_noparam(const char* _vcname__)
    : VNetMsg2CacheResp_noparam(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VNetMsg2CacheResp_noparam::~VNetMsg2CacheResp_noparam() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VNetMsg2CacheResp_noparam___024root___eval_debug_assertions(VNetMsg2CacheResp_noparam___024root* vlSelf);
#endif  // VL_DEBUG
void VNetMsg2CacheResp_noparam___024root___eval_static(VNetMsg2CacheResp_noparam___024root* vlSelf);
void VNetMsg2CacheResp_noparam___024root___eval_initial(VNetMsg2CacheResp_noparam___024root* vlSelf);
void VNetMsg2CacheResp_noparam___024root___eval_settle(VNetMsg2CacheResp_noparam___024root* vlSelf);
void VNetMsg2CacheResp_noparam___024root___eval(VNetMsg2CacheResp_noparam___024root* vlSelf);

void VNetMsg2CacheResp_noparam::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VNetMsg2CacheResp_noparam::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VNetMsg2CacheResp_noparam___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VNetMsg2CacheResp_noparam___024root___eval_static(&(vlSymsp->TOP));
        VNetMsg2CacheResp_noparam___024root___eval_initial(&(vlSymsp->TOP));
        VNetMsg2CacheResp_noparam___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VNetMsg2CacheResp_noparam___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VNetMsg2CacheResp_noparam::eventsPending() { return false; }

uint64_t VNetMsg2CacheResp_noparam::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VNetMsg2CacheResp_noparam::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VNetMsg2CacheResp_noparam___024root___eval_final(VNetMsg2CacheResp_noparam___024root* vlSelf);

VL_ATTR_COLD void VNetMsg2CacheResp_noparam::final() {
    VNetMsg2CacheResp_noparam___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VNetMsg2CacheResp_noparam::hierName() const { return vlSymsp->name(); }
const char* VNetMsg2CacheResp_noparam::modelName() const { return "VNetMsg2CacheResp_noparam"; }
unsigned VNetMsg2CacheResp_noparam::threads() const { return 1; }
void VNetMsg2CacheResp_noparam::prepareClone() const { contextp()->prepareClone(); }
void VNetMsg2CacheResp_noparam::atClone() const {
    contextp()->threadPoolpOnClone();
}
