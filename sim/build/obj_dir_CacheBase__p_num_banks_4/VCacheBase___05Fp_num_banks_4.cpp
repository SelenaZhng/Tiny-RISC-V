// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCacheBase___05Fp_num_banks_4__pch.h"

//============================================================
// Constructors

VCacheBase___05Fp_num_banks_4::VCacheBase___05Fp_num_banks_4(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VCacheBase___05Fp_num_banks_4__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , cache2mem_reqstream_rdy{vlSymsp->TOP.cache2mem_reqstream_rdy}
    , cache2mem_reqstream_val{vlSymsp->TOP.cache2mem_reqstream_val}
    , cache2mem_respstream_rdy{vlSymsp->TOP.cache2mem_respstream_rdy}
    , cache2mem_respstream_val{vlSymsp->TOP.cache2mem_respstream_val}
    , proc2cache_reqstream_rdy{vlSymsp->TOP.proc2cache_reqstream_rdy}
    , proc2cache_reqstream_val{vlSymsp->TOP.proc2cache_reqstream_val}
    , proc2cache_respstream_rdy{vlSymsp->TOP.proc2cache_respstream_rdy}
    , proc2cache_respstream_val{vlSymsp->TOP.proc2cache_respstream_val}
    , cache2mem_reqstream_msg{vlSymsp->TOP.cache2mem_reqstream_msg}
    , cache2mem_respstream_msg{vlSymsp->TOP.cache2mem_respstream_msg}
    , proc2cache_reqstream_msg{vlSymsp->TOP.proc2cache_reqstream_msg}
    , proc2cache_respstream_msg{vlSymsp->TOP.proc2cache_respstream_msg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VCacheBase___05Fp_num_banks_4::VCacheBase___05Fp_num_banks_4(const char* _vcname__)
    : VCacheBase___05Fp_num_banks_4(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VCacheBase___05Fp_num_banks_4::~VCacheBase___05Fp_num_banks_4() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VCacheBase___05Fp_num_banks_4___024root___eval_debug_assertions(VCacheBase___05Fp_num_banks_4___024root* vlSelf);
#endif  // VL_DEBUG
void VCacheBase___05Fp_num_banks_4___024root___eval_static(VCacheBase___05Fp_num_banks_4___024root* vlSelf);
void VCacheBase___05Fp_num_banks_4___024root___eval_initial(VCacheBase___05Fp_num_banks_4___024root* vlSelf);
void VCacheBase___05Fp_num_banks_4___024root___eval_settle(VCacheBase___05Fp_num_banks_4___024root* vlSelf);
void VCacheBase___05Fp_num_banks_4___024root___eval(VCacheBase___05Fp_num_banks_4___024root* vlSelf);

void VCacheBase___05Fp_num_banks_4::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCacheBase___05Fp_num_banks_4::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCacheBase___05Fp_num_banks_4___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VCacheBase___05Fp_num_banks_4___024root___eval_static(&(vlSymsp->TOP));
        VCacheBase___05Fp_num_banks_4___024root___eval_initial(&(vlSymsp->TOP));
        VCacheBase___05Fp_num_banks_4___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VCacheBase___05Fp_num_banks_4___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VCacheBase___05Fp_num_banks_4::eventsPending() { return false; }

uint64_t VCacheBase___05Fp_num_banks_4::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VCacheBase___05Fp_num_banks_4::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VCacheBase___05Fp_num_banks_4___024root___eval_final(VCacheBase___05Fp_num_banks_4___024root* vlSelf);

VL_ATTR_COLD void VCacheBase___05Fp_num_banks_4::final() {
    VCacheBase___05Fp_num_banks_4___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VCacheBase___05Fp_num_banks_4::hierName() const { return vlSymsp->name(); }
const char* VCacheBase___05Fp_num_banks_4::modelName() const { return "VCacheBase___05Fp_num_banks_4"; }
unsigned VCacheBase___05Fp_num_banks_4::threads() const { return 1; }
void VCacheBase___05Fp_num_banks_4::prepareClone() const { contextp()->prepareClone(); }
void VCacheBase___05Fp_num_banks_4::atClone() const {
    contextp()->threadPoolpOnClone();
}
