// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCACHEALT___05FP_NUM_BANKS_4__SYMS_H_
#define VERILATED_VCACHEALT___05FP_NUM_BANKS_4__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VCacheAlt___05Fp_num_banks_4.h"

// INCLUDE MODULE CLASSES
#include "VCacheAlt___05Fp_num_banks_4___024root.h"
#include "VCacheAlt___05Fp_num_banks_4___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using VCacheAlt___05Fp_num_banks_4__Vcb_line_trace_t = void (*) (VCacheAlt___05Fp_num_banks_4__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VCacheAlt___05Fp_num_banks_4__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VCacheAlt___05Fp_num_banks_4* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VCacheAlt___05Fp_num_banks_4___024root TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_CacheAlt___05Fp_num_banks_4__v;
    VerilatedScope __Vscope_CacheAlt___05Fp_num_banks_4__v__cache2mem_reqstream_msg_trace;
    VerilatedScope __Vscope_CacheAlt___05Fp_num_banks_4__v__cache2mem_respstream_msg_trace;
    VerilatedScope __Vscope_CacheAlt___05Fp_num_banks_4__v__proc2cache_reqstream_msg_trace;
    VerilatedScope __Vscope_CacheAlt___05Fp_num_banks_4__v__proc2cache_respstream_trace;

    // CONSTRUCTORS
    VCacheAlt___05Fp_num_banks_4__Syms(VerilatedContext* contextp, const char* namep, VCacheAlt___05Fp_num_banks_4* modelp);
    ~VCacheAlt___05Fp_num_banks_4__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
