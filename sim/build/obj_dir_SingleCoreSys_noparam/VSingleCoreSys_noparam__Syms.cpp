// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VSingleCoreSys_noparam__pch.h"
#include "VSingleCoreSys_noparam.h"
#include "VSingleCoreSys_noparam___024root.h"
#include "VSingleCoreSys_noparam___024unit.h"

void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__line_trace_TOP(VSingleCoreSys_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);

// FUNCTIONS
VSingleCoreSys_noparam__Syms::~VSingleCoreSys_noparam__Syms()
{
}

VSingleCoreSys_noparam__Syms::VSingleCoreSys_noparam__Syms(VerilatedContext* contextp, const char* namep, VSingleCoreSys_noparam* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(226901);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_SingleCoreSys_noparam__v.configure(this, name(), "SingleCoreSys_noparam.v", "v", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SingleCoreSys_noparam__v__dcache.configure(this, name(), "SingleCoreSys_noparam.v.dcache", "dcache", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SingleCoreSys_noparam__v__dcache__cache2mem_reqstream_msg_trace.configure(this, name(), "SingleCoreSys_noparam.v.dcache.cache2mem_reqstream_msg_trace", "cache2mem_reqstream_msg_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SingleCoreSys_noparam__v__dcache__cache2mem_respstream_msg_trace.configure(this, name(), "SingleCoreSys_noparam.v.dcache.cache2mem_respstream_msg_trace", "cache2mem_respstream_msg_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SingleCoreSys_noparam__v__dcache__proc2cache_reqstream_msg_trace.configure(this, name(), "SingleCoreSys_noparam.v.dcache.proc2cache_reqstream_msg_trace", "proc2cache_reqstream_msg_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SingleCoreSys_noparam__v__dcache__proc2cache_respstream_trace.configure(this, name(), "SingleCoreSys_noparam.v.dcache.proc2cache_respstream_trace", "proc2cache_respstream_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SingleCoreSys_noparam__v__icache.configure(this, name(), "SingleCoreSys_noparam.v.icache", "icache", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SingleCoreSys_noparam__v__icache__cache2mem_reqstream_msg_trace.configure(this, name(), "SingleCoreSys_noparam.v.icache.cache2mem_reqstream_msg_trace", "cache2mem_reqstream_msg_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SingleCoreSys_noparam__v__icache__cache2mem_respstream_msg_trace.configure(this, name(), "SingleCoreSys_noparam.v.icache.cache2mem_respstream_msg_trace", "cache2mem_respstream_msg_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SingleCoreSys_noparam__v__icache__proc2cache_reqstream_msg_trace.configure(this, name(), "SingleCoreSys_noparam.v.icache.proc2cache_reqstream_msg_trace", "proc2cache_reqstream_msg_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SingleCoreSys_noparam__v__icache__proc2cache_respstream_trace.configure(this, name(), "SingleCoreSys_noparam.v.icache.proc2cache_respstream_trace", "proc2cache_respstream_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SingleCoreSys_noparam__v__proc.configure(this, name(), "SingleCoreSys_noparam.v.proc", "proc", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SingleCoreSys_noparam__v__proc__dmem_reqstream_trace.configure(this, name(), "SingleCoreSys_noparam.v.proc.dmem_reqstream_trace", "dmem_reqstream_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SingleCoreSys_noparam__v__proc__dmem_respstream_trace.configure(this, name(), "SingleCoreSys_noparam.v.proc.dmem_respstream_trace", "dmem_respstream_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SingleCoreSys_noparam__v__proc__dpath__imul.configure(this, name(), "SingleCoreSys_noparam.v.proc.dpath.imul", "imul", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SingleCoreSys_noparam__v__proc__dpath__imul__ctrl.configure(this, name(), "SingleCoreSys_noparam.v.proc.dpath.imul.ctrl", "ctrl", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SingleCoreSys_noparam__v__proc__imem_reqstream_trace.configure(this, name(), "SingleCoreSys_noparam.v.proc.imem_reqstream_trace", "imem_reqstream_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SingleCoreSys_noparam__v__proc__imem_respstream_trace.configure(this, name(), "SingleCoreSys_noparam.v.proc.imem_respstream_trace", "imem_respstream_trace", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_SingleCoreSys_noparam__v.exportInsert(__Vfinal, "line_trace", (void*)(&VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__line_trace_TOP));
        __Vscope_SingleCoreSys_noparam__v__dcache.exportInsert(__Vfinal, "line_trace", (void*)(&VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__line_trace_TOP));
        __Vscope_SingleCoreSys_noparam__v__dcache__cache2mem_reqstream_msg_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_reqstream_msg_trace__DOT__line_trace_TOP));
        __Vscope_SingleCoreSys_noparam__v__dcache__cache2mem_respstream_msg_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__cache2mem_respstream_msg_trace__DOT__line_trace_TOP));
        __Vscope_SingleCoreSys_noparam__v__dcache__proc2cache_reqstream_msg_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_reqstream_msg_trace__DOT__line_trace_TOP));
        __Vscope_SingleCoreSys_noparam__v__dcache__proc2cache_respstream_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__dcache__DOT__proc2cache_respstream_trace__DOT__line_trace_TOP));
        __Vscope_SingleCoreSys_noparam__v__icache.exportInsert(__Vfinal, "line_trace", (void*)(&VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__line_trace_TOP));
        __Vscope_SingleCoreSys_noparam__v__icache__cache2mem_reqstream_msg_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_reqstream_msg_trace__DOT__line_trace_TOP));
        __Vscope_SingleCoreSys_noparam__v__icache__cache2mem_respstream_msg_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__cache2mem_respstream_msg_trace__DOT__line_trace_TOP));
        __Vscope_SingleCoreSys_noparam__v__icache__proc2cache_reqstream_msg_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_reqstream_msg_trace__DOT__line_trace_TOP));
        __Vscope_SingleCoreSys_noparam__v__icache__proc2cache_respstream_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__icache__DOT__proc2cache_respstream_trace__DOT__line_trace_TOP));
        __Vscope_SingleCoreSys_noparam__v__proc.exportInsert(__Vfinal, "line_trace", (void*)(&VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__line_trace_TOP));
        __Vscope_SingleCoreSys_noparam__v__proc__dmem_reqstream_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_reqstream_trace__DOT__line_trace_TOP));
        __Vscope_SingleCoreSys_noparam__v__proc__dmem_respstream_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dmem_respstream_trace__DOT__line_trace_TOP));
        __Vscope_SingleCoreSys_noparam__v__proc__dpath__imul.exportInsert(__Vfinal, "line_trace", (void*)(&VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__dpath__DOT__imul__DOT__line_trace_TOP));
        __Vscope_SingleCoreSys_noparam__v__proc__imem_reqstream_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_reqstream_trace__DOT__line_trace_TOP));
        __Vscope_SingleCoreSys_noparam__v__proc__imem_respstream_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VSingleCoreSys_noparam___024root____Vdpiexp_SingleCoreSys_noparam__DOT__v__DOT__proc__DOT__imem_respstream_trace__DOT__line_trace_TOP));
    }
}
