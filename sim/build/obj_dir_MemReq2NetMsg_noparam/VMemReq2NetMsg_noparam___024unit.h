// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMemReq2NetMsg_noparam.h for the primary calling header

#ifndef VERILATED_VMEMREQ2NETMSG_NOPARAM___024UNIT_H_
#define VERILATED_VMEMREQ2NETMSG_NOPARAM___024UNIT_H_  // guard

#include "verilated.h"


class VMemReq2NetMsg_noparam__Syms;

class alignas(VL_CACHE_LINE_BYTES) VMemReq2NetMsg_noparam___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VMemReq2NetMsg_noparam__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMemReq2NetMsg_noparam___024unit(VMemReq2NetMsg_noparam__Syms* symsp, const char* v__name);
    ~VMemReq2NetMsg_noparam___024unit();
    VL_UNCOPYABLE(VMemReq2NetMsg_noparam___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
