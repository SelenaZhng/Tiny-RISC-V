// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNetMsg2MemReq_noparam.h for the primary calling header

#ifndef VERILATED_VNETMSG2MEMREQ_NOPARAM___024UNIT_H_
#define VERILATED_VNETMSG2MEMREQ_NOPARAM___024UNIT_H_  // guard

#include "verilated.h"


class VNetMsg2MemReq_noparam__Syms;

class alignas(VL_CACHE_LINE_BYTES) VNetMsg2MemReq_noparam___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VNetMsg2MemReq_noparam__Syms* const vlSymsp;

    // CONSTRUCTORS
    VNetMsg2MemReq_noparam___024unit(VNetMsg2MemReq_noparam__Syms* symsp, const char* v__name);
    ~VNetMsg2MemReq_noparam___024unit();
    VL_UNCOPYABLE(VNetMsg2MemReq_noparam___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
