// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPROCDPATHIMMGEN_NOPARAM__SYMS_H_
#define VERILATED_VPROCDPATHIMMGEN_NOPARAM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VProcDpathImmGen_noparam.h"

// INCLUDE MODULE CLASSES
#include "VProcDpathImmGen_noparam___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VProcDpathImmGen_noparam__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VProcDpathImmGen_noparam* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VProcDpathImmGen_noparam___024root TOP;

    // CONSTRUCTORS
    VProcDpathImmGen_noparam__Syms(VerilatedContext* contextp, const char* namep, VProcDpathImmGen_noparam* modelp);
    ~VProcDpathImmGen_noparam__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
