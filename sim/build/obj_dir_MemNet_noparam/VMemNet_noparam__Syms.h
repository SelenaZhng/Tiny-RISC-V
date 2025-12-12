// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMEMNET_NOPARAM__SYMS_H_
#define VERILATED_VMEMNET_NOPARAM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VMemNet_noparam.h"

// INCLUDE MODULE CLASSES
#include "VMemNet_noparam___024root.h"
#include "VMemNet_noparam___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using VMemNet_noparam__Vcb_line_trace_t = void (*) (VMemNet_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str);

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VMemNet_noparam__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VMemNet_noparam* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VMemNet_noparam___024root      TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_MemNet_noparam__v;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__CHANNEL_TRACE__BRA__0__KET____ccw_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__CHANNEL_TRACE__BRA__0__KET____cw_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__CHANNEL_TRACE__BRA__1__KET____ccw_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__CHANNEL_TRACE__BRA__1__KET____cw_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__CHANNEL_TRACE__BRA__2__KET____ccw_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__CHANNEL_TRACE__BRA__2__KET____cw_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__CHANNEL_TRACE__BRA__3__KET____ccw_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__CHANNEL_TRACE__BRA__3__KET____cw_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router0;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router0__ostream0_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router0__ostream1_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router0__ostream2_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router0__runit0;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router0__runit1;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router0__runit2;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router0__sunit0;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router0__sunit1;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router0__sunit2;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router1;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router1__ostream0_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router1__ostream1_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router1__ostream2_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router1__runit0;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router1__runit1;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router1__runit2;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router1__sunit0;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router1__sunit1;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router1__sunit2;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router2;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router2__ostream0_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router2__ostream1_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router2__ostream2_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router2__runit0;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router2__runit1;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router2__runit2;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router2__sunit0;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router2__sunit1;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router2__sunit2;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router3;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router3__ostream0_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router3__ostream1_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router3__ostream2_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router3__runit0;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router3__runit1;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router3__runit2;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router3__sunit0;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router3__sunit1;
    VerilatedScope __Vscope_MemNet_noparam__v__memreqnet__router3__sunit2;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__CHANNEL_TRACE__BRA__0__KET____ccw_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__CHANNEL_TRACE__BRA__0__KET____cw_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__CHANNEL_TRACE__BRA__1__KET____ccw_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__CHANNEL_TRACE__BRA__1__KET____cw_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__CHANNEL_TRACE__BRA__2__KET____ccw_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__CHANNEL_TRACE__BRA__2__KET____cw_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__CHANNEL_TRACE__BRA__3__KET____ccw_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__CHANNEL_TRACE__BRA__3__KET____cw_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router0;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router0__ostream0_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router0__ostream1_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router0__ostream2_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router0__runit0;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router0__runit1;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router0__runit2;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router0__sunit0;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router0__sunit1;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router0__sunit2;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router1;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router1__ostream0_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router1__ostream1_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router1__ostream2_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router1__runit0;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router1__runit1;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router1__runit2;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router1__sunit0;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router1__sunit1;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router1__sunit2;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router2;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router2__ostream0_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router2__ostream1_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router2__ostream2_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router2__runit0;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router2__runit1;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router2__runit2;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router2__sunit0;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router2__sunit1;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router2__sunit2;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router3;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router3__ostream0_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router3__ostream1_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router3__ostream2_trace;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router3__runit0;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router3__runit1;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router3__runit2;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router3__sunit0;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router3__sunit1;
    VerilatedScope __Vscope_MemNet_noparam__v__memrespnet__router3__sunit2;

    // CONSTRUCTORS
    VMemNet_noparam__Syms(VerilatedContext* contextp, const char* namep, VMemNet_noparam* modelp);
    ~VMemNet_noparam__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
