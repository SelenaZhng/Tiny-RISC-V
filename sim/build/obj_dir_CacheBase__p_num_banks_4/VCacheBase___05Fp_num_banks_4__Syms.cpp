// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VCacheBase___05Fp_num_banks_4__pch.h"
#include "VCacheBase___05Fp_num_banks_4.h"
#include "VCacheBase___05Fp_num_banks_4___024root.h"
#include "VCacheBase___05Fp_num_banks_4___024unit.h"

void VCacheBase___05Fp_num_banks_4___024root____Vdpiexp_CacheBase___05Fp_num_banks_4__DOT__v__DOT__line_trace_TOP(VCacheBase___05Fp_num_banks_4__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VCacheBase___05Fp_num_banks_4___024root____Vdpiexp_CacheBase___05Fp_num_banks_4__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__line_trace_TOP(VCacheBase___05Fp_num_banks_4__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VCacheBase___05Fp_num_banks_4___024root____Vdpiexp_CacheBase___05Fp_num_banks_4__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__line_trace_TOP(VCacheBase___05Fp_num_banks_4__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VCacheBase___05Fp_num_banks_4___024root____Vdpiexp_CacheBase___05Fp_num_banks_4__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__line_trace_TOP(VCacheBase___05Fp_num_banks_4__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VCacheBase___05Fp_num_banks_4___024root____Vdpiexp_CacheBase___05Fp_num_banks_4__DOT__v__DOT__proc2cache_respstream_trace__DOT__line_trace_TOP(VCacheBase___05Fp_num_banks_4__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);

// FUNCTIONS
VCacheBase___05Fp_num_banks_4__Syms::~VCacheBase___05Fp_num_banks_4__Syms()
{
}

VCacheBase___05Fp_num_banks_4__Syms::VCacheBase___05Fp_num_banks_4__Syms(VerilatedContext* contextp, const char* namep, VCacheBase___05Fp_num_banks_4* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(59137);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_CacheBase___05Fp_num_banks_4__v.configure(this, name(), "CacheBase__p_num_banks_4.v", "v", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_CacheBase___05Fp_num_banks_4__v__cache2mem_reqstream_msg_trace.configure(this, name(), "CacheBase__p_num_banks_4.v.cache2mem_reqstream_msg_trace", "cache2mem_reqstream_msg_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_CacheBase___05Fp_num_banks_4__v__cache2mem_respstream_msg_trace.configure(this, name(), "CacheBase__p_num_banks_4.v.cache2mem_respstream_msg_trace", "cache2mem_respstream_msg_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_CacheBase___05Fp_num_banks_4__v__proc2cache_reqstream_msg_trace.configure(this, name(), "CacheBase__p_num_banks_4.v.proc2cache_reqstream_msg_trace", "proc2cache_reqstream_msg_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_CacheBase___05Fp_num_banks_4__v__proc2cache_respstream_trace.configure(this, name(), "CacheBase__p_num_banks_4.v.proc2cache_respstream_trace", "proc2cache_respstream_trace", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_CacheBase___05Fp_num_banks_4__v.exportInsert(__Vfinal, "line_trace", (void*)(&VCacheBase___05Fp_num_banks_4___024root____Vdpiexp_CacheBase___05Fp_num_banks_4__DOT__v__DOT__line_trace_TOP));
        __Vscope_CacheBase___05Fp_num_banks_4__v__cache2mem_reqstream_msg_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VCacheBase___05Fp_num_banks_4___024root____Vdpiexp_CacheBase___05Fp_num_banks_4__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__line_trace_TOP));
        __Vscope_CacheBase___05Fp_num_banks_4__v__cache2mem_respstream_msg_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VCacheBase___05Fp_num_banks_4___024root____Vdpiexp_CacheBase___05Fp_num_banks_4__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__line_trace_TOP));
        __Vscope_CacheBase___05Fp_num_banks_4__v__proc2cache_reqstream_msg_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VCacheBase___05Fp_num_banks_4___024root____Vdpiexp_CacheBase___05Fp_num_banks_4__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__line_trace_TOP));
        __Vscope_CacheBase___05Fp_num_banks_4__v__proc2cache_respstream_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VCacheBase___05Fp_num_banks_4___024root____Vdpiexp_CacheBase___05Fp_num_banks_4__DOT__v__DOT__proc2cache_respstream_trace__DOT__line_trace_TOP));
    }
}
