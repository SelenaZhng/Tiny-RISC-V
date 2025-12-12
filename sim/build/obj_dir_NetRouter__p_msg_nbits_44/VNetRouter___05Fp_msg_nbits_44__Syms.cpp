// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VNetRouter___05Fp_msg_nbits_44__pch.h"
#include "VNetRouter___05Fp_msg_nbits_44.h"
#include "VNetRouter___05Fp_msg_nbits_44___024root.h"
#include "VNetRouter___05Fp_msg_nbits_44___024unit.h"

void VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__line_trace_TOP(VNetRouter___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__line_trace_TOP(VNetRouter___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__line_trace_TOP(VNetRouter___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__line_trace_TOP(VNetRouter___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__line_trace_TOP(VNetRouter___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__line_trace_TOP(VNetRouter___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__line_trace_TOP(VNetRouter___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__line_trace_TOP(VNetRouter___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__line_trace_TOP(VNetRouter___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);
void VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__line_trace_TOP(VNetRouter___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);

// FUNCTIONS
VNetRouter___05Fp_msg_nbits_44__Syms::~VNetRouter___05Fp_msg_nbits_44__Syms()
{
}

VNetRouter___05Fp_msg_nbits_44__Syms::VNetRouter___05Fp_msg_nbits_44__Syms(VerilatedContext* contextp, const char* namep, VNetRouter___05Fp_msg_nbits_44* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(76505);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_NetRouter___05Fp_msg_nbits_44__v.configure(this, name(), "NetRouter__p_msg_nbits_44.v", "v", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NetRouter___05Fp_msg_nbits_44__v__ostream0_trace.configure(this, name(), "NetRouter__p_msg_nbits_44.v.ostream0_trace", "ostream0_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NetRouter___05Fp_msg_nbits_44__v__ostream1_trace.configure(this, name(), "NetRouter__p_msg_nbits_44.v.ostream1_trace", "ostream1_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NetRouter___05Fp_msg_nbits_44__v__ostream2_trace.configure(this, name(), "NetRouter__p_msg_nbits_44.v.ostream2_trace", "ostream2_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NetRouter___05Fp_msg_nbits_44__v__runit0.configure(this, name(), "NetRouter__p_msg_nbits_44.v.runit0", "runit0", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NetRouter___05Fp_msg_nbits_44__v__runit1.configure(this, name(), "NetRouter__p_msg_nbits_44.v.runit1", "runit1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NetRouter___05Fp_msg_nbits_44__v__runit2.configure(this, name(), "NetRouter__p_msg_nbits_44.v.runit2", "runit2", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NetRouter___05Fp_msg_nbits_44__v__sunit0.configure(this, name(), "NetRouter__p_msg_nbits_44.v.sunit0", "sunit0", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NetRouter___05Fp_msg_nbits_44__v__sunit1.configure(this, name(), "NetRouter__p_msg_nbits_44.v.sunit1", "sunit1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NetRouter___05Fp_msg_nbits_44__v__sunit2.configure(this, name(), "NetRouter__p_msg_nbits_44.v.sunit2", "sunit2", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_NetRouter___05Fp_msg_nbits_44__v.exportInsert(__Vfinal, "line_trace", (void*)(&VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__line_trace_TOP));
        __Vscope_NetRouter___05Fp_msg_nbits_44__v__ostream0_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__line_trace_TOP));
        __Vscope_NetRouter___05Fp_msg_nbits_44__v__ostream1_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__line_trace_TOP));
        __Vscope_NetRouter___05Fp_msg_nbits_44__v__ostream2_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__line_trace_TOP));
        __Vscope_NetRouter___05Fp_msg_nbits_44__v__runit0.exportInsert(__Vfinal, "line_trace", (void*)(&VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__line_trace_TOP));
        __Vscope_NetRouter___05Fp_msg_nbits_44__v__runit1.exportInsert(__Vfinal, "line_trace", (void*)(&VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__line_trace_TOP));
        __Vscope_NetRouter___05Fp_msg_nbits_44__v__runit2.exportInsert(__Vfinal, "line_trace", (void*)(&VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__line_trace_TOP));
        __Vscope_NetRouter___05Fp_msg_nbits_44__v__sunit0.exportInsert(__Vfinal, "line_trace", (void*)(&VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__line_trace_TOP));
        __Vscope_NetRouter___05Fp_msg_nbits_44__v__sunit1.exportInsert(__Vfinal, "line_trace", (void*)(&VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__line_trace_TOP));
        __Vscope_NetRouter___05Fp_msg_nbits_44__v__sunit2.exportInsert(__Vfinal, "line_trace", (void*)(&VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__line_trace_TOP));
    }
}
