// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VNETMSG2CACHEREQ_NOPARAM__SYMS_H_
#define VERILATED_VNETMSG2CACHEREQ_NOPARAM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VNetMsg2CacheReq_noparam.h"

// INCLUDE MODULE CLASSES
#include "VNetMsg2CacheReq_noparam___024root.h"
#include "VNetMsg2CacheReq_noparam___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VNetMsg2CacheReq_noparam__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VNetMsg2CacheReq_noparam* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VNetMsg2CacheReq_noparam___024root TOP;

    // CONSTRUCTORS
    VNetMsg2CacheReq_noparam__Syms(VerilatedContext* contextp, const char* namep, VNetMsg2CacheReq_noparam* modelp);
    ~VNetMsg2CacheReq_noparam__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
