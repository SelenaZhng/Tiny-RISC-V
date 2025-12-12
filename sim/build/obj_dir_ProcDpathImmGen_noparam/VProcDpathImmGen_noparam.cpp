// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VProcDpathImmGen_noparam__pch.h"

//============================================================
// Constructors

VProcDpathImmGen_noparam::VProcDpathImmGen_noparam(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VProcDpathImmGen_noparam__Syms(contextp(), _vcname__, this)}
    , reset{vlSymsp->TOP.reset}
    , clk{vlSymsp->TOP.clk}
    , imm_type{vlSymsp->TOP.imm_type}
    , imm{vlSymsp->TOP.imm}
    , inst{vlSymsp->TOP.inst}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VProcDpathImmGen_noparam::VProcDpathImmGen_noparam(const char* _vcname__)
    : VProcDpathImmGen_noparam(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VProcDpathImmGen_noparam::~VProcDpathImmGen_noparam() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VProcDpathImmGen_noparam___024root___eval_debug_assertions(VProcDpathImmGen_noparam___024root* vlSelf);
#endif  // VL_DEBUG
void VProcDpathImmGen_noparam___024root___eval_static(VProcDpathImmGen_noparam___024root* vlSelf);
void VProcDpathImmGen_noparam___024root___eval_initial(VProcDpathImmGen_noparam___024root* vlSelf);
void VProcDpathImmGen_noparam___024root___eval_settle(VProcDpathImmGen_noparam___024root* vlSelf);
void VProcDpathImmGen_noparam___024root___eval(VProcDpathImmGen_noparam___024root* vlSelf);

void VProcDpathImmGen_noparam::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VProcDpathImmGen_noparam::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VProcDpathImmGen_noparam___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VProcDpathImmGen_noparam___024root___eval_static(&(vlSymsp->TOP));
        VProcDpathImmGen_noparam___024root___eval_initial(&(vlSymsp->TOP));
        VProcDpathImmGen_noparam___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VProcDpathImmGen_noparam___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VProcDpathImmGen_noparam::eventsPending() { return false; }

uint64_t VProcDpathImmGen_noparam::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VProcDpathImmGen_noparam::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VProcDpathImmGen_noparam___024root___eval_final(VProcDpathImmGen_noparam___024root* vlSelf);

VL_ATTR_COLD void VProcDpathImmGen_noparam::final() {
    VProcDpathImmGen_noparam___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VProcDpathImmGen_noparam::hierName() const { return vlSymsp->name(); }
const char* VProcDpathImmGen_noparam::modelName() const { return "VProcDpathImmGen_noparam"; }
unsigned VProcDpathImmGen_noparam::threads() const { return 1; }
void VProcDpathImmGen_noparam::prepareClone() const { contextp()->prepareClone(); }
void VProcDpathImmGen_noparam::atClone() const {
    contextp()->threadPoolpOnClone();
}
