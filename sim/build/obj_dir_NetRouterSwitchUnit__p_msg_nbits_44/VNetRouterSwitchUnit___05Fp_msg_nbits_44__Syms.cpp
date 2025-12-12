// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VNetRouterSwitchUnit___05Fp_msg_nbits_44__pch.h"
#include "VNetRouterSwitchUnit___05Fp_msg_nbits_44.h"
#include "VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root.h"
#include "VNetRouterSwitchUnit___05Fp_msg_nbits_44___024unit.h"

void VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__line_trace_TOP(VNetRouterSwitchUnit___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);

// FUNCTIONS
VNetRouterSwitchUnit___05Fp_msg_nbits_44__Syms::~VNetRouterSwitchUnit___05Fp_msg_nbits_44__Syms()
{
}

VNetRouterSwitchUnit___05Fp_msg_nbits_44__Syms::VNetRouterSwitchUnit___05Fp_msg_nbits_44__Syms(VerilatedContext* contextp, const char* namep, VNetRouterSwitchUnit___05Fp_msg_nbits_44* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(5665);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_NetRouterSwitchUnit___05Fp_msg_nbits_44__v.configure(this, name(), "NetRouterSwitchUnit__p_msg_nbits_44.v", "v", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_NetRouterSwitchUnit___05Fp_msg_nbits_44__v.exportInsert(__Vfinal, "line_trace", (void*)(&VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__line_trace_TOP));
    }
}
