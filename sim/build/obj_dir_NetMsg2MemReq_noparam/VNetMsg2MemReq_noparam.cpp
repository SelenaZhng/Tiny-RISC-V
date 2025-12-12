// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VNetMsg2MemReq_noparam__pch.h"

//============================================================
// Constructors

VNetMsg2MemReq_noparam::VNetMsg2MemReq_noparam(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VNetMsg2MemReq_noparam__Syms(contextp(), _vcname__, this)}
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

VNetMsg2MemReq_noparam::VNetMsg2MemReq_noparam(const char* _vcname__)
    : VNetMsg2MemReq_noparam(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VNetMsg2MemReq_noparam::~VNetMsg2MemReq_noparam() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VNetMsg2MemReq_noparam___024root___eval_debug_assertions(VNetMsg2MemReq_noparam___024root* vlSelf);
#endif  // VL_DEBUG
void VNetMsg2MemReq_noparam___024root___eval_static(VNetMsg2MemReq_noparam___024root* vlSelf);
void VNetMsg2MemReq_noparam___024root___eval_initial(VNetMsg2MemReq_noparam___024root* vlSelf);
void VNetMsg2MemReq_noparam___024root___eval_settle(VNetMsg2MemReq_noparam___024root* vlSelf);
void VNetMsg2MemReq_noparam___024root___eval(VNetMsg2MemReq_noparam___024root* vlSelf);

void VNetMsg2MemReq_noparam::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VNetMsg2MemReq_noparam::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VNetMsg2MemReq_noparam___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VNetMsg2MemReq_noparam___024root___eval_static(&(vlSymsp->TOP));
        VNetMsg2MemReq_noparam___024root___eval_initial(&(vlSymsp->TOP));
        VNetMsg2MemReq_noparam___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VNetMsg2MemReq_noparam___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VNetMsg2MemReq_noparam::eventsPending() { return false; }

uint64_t VNetMsg2MemReq_noparam::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VNetMsg2MemReq_noparam::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VNetMsg2MemReq_noparam___024root___eval_final(VNetMsg2MemReq_noparam___024root* vlSelf);

VL_ATTR_COLD void VNetMsg2MemReq_noparam::final() {
    VNetMsg2MemReq_noparam___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VNetMsg2MemReq_noparam::hierName() const { return vlSymsp->name(); }
const char* VNetMsg2MemReq_noparam::modelName() const { return "VNetMsg2MemReq_noparam"; }
unsigned VNetMsg2MemReq_noparam::threads() const { return 1; }
void VNetMsg2MemReq_noparam::prepareClone() const { contextp()->prepareClone(); }
void VNetMsg2MemReq_noparam::atClone() const {
    contextp()->threadPoolpOnClone();
}
