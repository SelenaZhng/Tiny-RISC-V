// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VNETROUTER___05FP_MSG_NBITS_44__SYMS_H_
#define VERILATED_VNETROUTER___05FP_MSG_NBITS_44__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VNetRouter___05Fp_msg_nbits_44.h"

// INCLUDE MODULE CLASSES
#include "VNetRouter___05Fp_msg_nbits_44___024root.h"
#include "VNetRouter___05Fp_msg_nbits_44___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using VNetRouter___05Fp_msg_nbits_44__Vcb_line_trace_t = void (*) (VNetRouter___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VNetRouter___05Fp_msg_nbits_44__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VNetRouter___05Fp_msg_nbits_44* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VNetRouter___05Fp_msg_nbits_44___024root TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_NetRouter___05Fp_msg_nbits_44__v;
    VerilatedScope __Vscope_NetRouter___05Fp_msg_nbits_44__v__ostream0_trace;
    VerilatedScope __Vscope_NetRouter___05Fp_msg_nbits_44__v__ostream1_trace;
    VerilatedScope __Vscope_NetRouter___05Fp_msg_nbits_44__v__ostream2_trace;
    VerilatedScope __Vscope_NetRouter___05Fp_msg_nbits_44__v__runit0;
    VerilatedScope __Vscope_NetRouter___05Fp_msg_nbits_44__v__runit1;
    VerilatedScope __Vscope_NetRouter___05Fp_msg_nbits_44__v__runit2;
    VerilatedScope __Vscope_NetRouter___05Fp_msg_nbits_44__v__sunit0;
    VerilatedScope __Vscope_NetRouter___05Fp_msg_nbits_44__v__sunit1;
    VerilatedScope __Vscope_NetRouter___05Fp_msg_nbits_44__v__sunit2;

    // CONSTRUCTORS
    VNetRouter___05Fp_msg_nbits_44__Syms(VerilatedContext* contextp, const char* namep, VNetRouter___05Fp_msg_nbits_44* modelp);
    ~VNetRouter___05Fp_msg_nbits_44__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
