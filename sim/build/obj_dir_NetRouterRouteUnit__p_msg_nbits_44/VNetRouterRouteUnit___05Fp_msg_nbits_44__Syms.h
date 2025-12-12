// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VNETROUTERROUTEUNIT___05FP_MSG_NBITS_44__SYMS_H_
#define VERILATED_VNETROUTERROUTEUNIT___05FP_MSG_NBITS_44__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VNetRouterRouteUnit___05Fp_msg_nbits_44.h"

// INCLUDE MODULE CLASSES
#include "VNetRouterRouteUnit___05Fp_msg_nbits_44___024root.h"
#include "VNetRouterRouteUnit___05Fp_msg_nbits_44___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using VNetRouterRouteUnit___05Fp_msg_nbits_44__Vcb_line_trace_t = void (*) (VNetRouterRouteUnit___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VNetRouterRouteUnit___05Fp_msg_nbits_44__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VNetRouterRouteUnit___05Fp_msg_nbits_44* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VNetRouterRouteUnit___05Fp_msg_nbits_44___024root TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_NetRouterRouteUnit___05Fp_msg_nbits_44__v;

    // CONSTRUCTORS
    VNetRouterRouteUnit___05Fp_msg_nbits_44__Syms(VerilatedContext* contextp, const char* namep, VNetRouterRouteUnit___05Fp_msg_nbits_44* modelp);
    ~VNetRouterRouteUnit___05Fp_msg_nbits_44__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
