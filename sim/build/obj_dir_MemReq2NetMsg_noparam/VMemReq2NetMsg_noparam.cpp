// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMemReq2NetMsg_noparam__pch.h"

//============================================================
// Constructors

VMemReq2NetMsg_noparam::VMemReq2NetMsg_noparam(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VMemReq2NetMsg_noparam__Syms(contextp(), _vcname__, this)}
    , reset{vlSymsp->TOP.reset}
    , clk{vlSymsp->TOP.clk}
    , src_id{vlSymsp->TOP.src_id}
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

VMemReq2NetMsg_noparam::VMemReq2NetMsg_noparam(const char* _vcname__)
    : VMemReq2NetMsg_noparam(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VMemReq2NetMsg_noparam::~VMemReq2NetMsg_noparam() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VMemReq2NetMsg_noparam___024root___eval_debug_assertions(VMemReq2NetMsg_noparam___024root* vlSelf);
#endif  // VL_DEBUG
void VMemReq2NetMsg_noparam___024root___eval_static(VMemReq2NetMsg_noparam___024root* vlSelf);
void VMemReq2NetMsg_noparam___024root___eval_initial(VMemReq2NetMsg_noparam___024root* vlSelf);
void VMemReq2NetMsg_noparam___024root___eval_settle(VMemReq2NetMsg_noparam___024root* vlSelf);
void VMemReq2NetMsg_noparam___024root___eval(VMemReq2NetMsg_noparam___024root* vlSelf);

void VMemReq2NetMsg_noparam::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMemReq2NetMsg_noparam::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMemReq2NetMsg_noparam___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VMemReq2NetMsg_noparam___024root___eval_static(&(vlSymsp->TOP));
        VMemReq2NetMsg_noparam___024root___eval_initial(&(vlSymsp->TOP));
        VMemReq2NetMsg_noparam___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VMemReq2NetMsg_noparam___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VMemReq2NetMsg_noparam::eventsPending() { return false; }

uint64_t VMemReq2NetMsg_noparam::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VMemReq2NetMsg_noparam::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VMemReq2NetMsg_noparam___024root___eval_final(VMemReq2NetMsg_noparam___024root* vlSelf);

VL_ATTR_COLD void VMemReq2NetMsg_noparam::final() {
    VMemReq2NetMsg_noparam___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VMemReq2NetMsg_noparam::hierName() const { return vlSymsp->name(); }
const char* VMemReq2NetMsg_noparam::modelName() const { return "VMemReq2NetMsg_noparam"; }
unsigned VMemReq2NetMsg_noparam::threads() const { return 1; }
void VMemReq2NetMsg_noparam::prepareClone() const { contextp()->prepareClone(); }
void VMemReq2NetMsg_noparam::atClone() const {
    contextp()->threadPoolpOnClone();
}
