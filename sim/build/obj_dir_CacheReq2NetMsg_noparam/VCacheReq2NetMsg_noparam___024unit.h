// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCacheReq2NetMsg_noparam.h for the primary calling header

#ifndef VERILATED_VCACHEREQ2NETMSG_NOPARAM___024UNIT_H_
#define VERILATED_VCACHEREQ2NETMSG_NOPARAM___024UNIT_H_  // guard

#include "verilated.h"


class VCacheReq2NetMsg_noparam__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCacheReq2NetMsg_noparam___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VCacheReq2NetMsg_noparam__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCacheReq2NetMsg_noparam___024unit(VCacheReq2NetMsg_noparam__Syms* symsp, const char* v__name);
    ~VCacheReq2NetMsg_noparam___024unit();
    VL_UNCOPYABLE(VCacheReq2NetMsg_noparam___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
