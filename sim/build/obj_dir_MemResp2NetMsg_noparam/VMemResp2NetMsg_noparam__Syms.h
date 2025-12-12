// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMEMRESP2NETMSG_NOPARAM__SYMS_H_
#define VERILATED_VMEMRESP2NETMSG_NOPARAM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VMemResp2NetMsg_noparam.h"

// INCLUDE MODULE CLASSES
#include "VMemResp2NetMsg_noparam___024root.h"
#include "VMemResp2NetMsg_noparam___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VMemResp2NetMsg_noparam__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VMemResp2NetMsg_noparam* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VMemResp2NetMsg_noparam___024root TOP;

    // CONSTRUCTORS
    VMemResp2NetMsg_noparam__Syms(VerilatedContext* contextp, const char* namep, VMemResp2NetMsg_noparam* modelp);
    ~VMemResp2NetMsg_noparam__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
