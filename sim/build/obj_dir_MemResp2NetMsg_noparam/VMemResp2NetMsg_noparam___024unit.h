// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMemResp2NetMsg_noparam.h for the primary calling header

#ifndef VERILATED_VMEMRESP2NETMSG_NOPARAM___024UNIT_H_
#define VERILATED_VMEMRESP2NETMSG_NOPARAM___024UNIT_H_  // guard

#include "verilated.h"


class VMemResp2NetMsg_noparam__Syms;

class alignas(VL_CACHE_LINE_BYTES) VMemResp2NetMsg_noparam___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VMemResp2NetMsg_noparam__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMemResp2NetMsg_noparam___024unit(VMemResp2NetMsg_noparam__Syms* symsp, const char* v__name);
    ~VMemResp2NetMsg_noparam___024unit();
    VL_UNCOPYABLE(VMemResp2NetMsg_noparam___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
