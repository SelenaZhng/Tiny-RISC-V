// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VNet___05Fp_msg_nbits_44__pch.h"

//============================================================
// Constructors

VNet___05Fp_msg_nbits_44::VNet___05Fp_msg_nbits_44(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VNet___05Fp_msg_nbits_44__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , istream_msg{vlSymsp->TOP.istream_msg}
    , istream_rdy{vlSymsp->TOP.istream_rdy}
    , istream_val{vlSymsp->TOP.istream_val}
    , ostream_msg{vlSymsp->TOP.ostream_msg}
    , ostream_rdy{vlSymsp->TOP.ostream_rdy}
    , ostream_val{vlSymsp->TOP.ostream_val}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VNet___05Fp_msg_nbits_44::VNet___05Fp_msg_nbits_44(const char* _vcname__)
    : VNet___05Fp_msg_nbits_44(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VNet___05Fp_msg_nbits_44::~VNet___05Fp_msg_nbits_44() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VNet___05Fp_msg_nbits_44___024root___eval_debug_assertions(VNet___05Fp_msg_nbits_44___024root* vlSelf);
#endif  // VL_DEBUG
void VNet___05Fp_msg_nbits_44___024root___eval_static(VNet___05Fp_msg_nbits_44___024root* vlSelf);
void VNet___05Fp_msg_nbits_44___024root___eval_initial(VNet___05Fp_msg_nbits_44___024root* vlSelf);
void VNet___05Fp_msg_nbits_44___024root___eval_settle(VNet___05Fp_msg_nbits_44___024root* vlSelf);
void VNet___05Fp_msg_nbits_44___024root___eval(VNet___05Fp_msg_nbits_44___024root* vlSelf);

void VNet___05Fp_msg_nbits_44::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VNet___05Fp_msg_nbits_44::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VNet___05Fp_msg_nbits_44___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VNet___05Fp_msg_nbits_44___024root___eval_static(&(vlSymsp->TOP));
        VNet___05Fp_msg_nbits_44___024root___eval_initial(&(vlSymsp->TOP));
        VNet___05Fp_msg_nbits_44___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VNet___05Fp_msg_nbits_44___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VNet___05Fp_msg_nbits_44::eventsPending() { return false; }

uint64_t VNet___05Fp_msg_nbits_44::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VNet___05Fp_msg_nbits_44::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VNet___05Fp_msg_nbits_44___024root___eval_final(VNet___05Fp_msg_nbits_44___024root* vlSelf);

VL_ATTR_COLD void VNet___05Fp_msg_nbits_44::final() {
    VNet___05Fp_msg_nbits_44___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VNet___05Fp_msg_nbits_44::hierName() const { return vlSymsp->name(); }
const char* VNet___05Fp_msg_nbits_44::modelName() const { return "VNet___05Fp_msg_nbits_44"; }
unsigned VNet___05Fp_msg_nbits_44::threads() const { return 1; }
void VNet___05Fp_msg_nbits_44::prepareClone() const { contextp()->prepareClone(); }
void VNet___05Fp_msg_nbits_44::atClone() const {
    contextp()->threadPoolpOnClone();
}
