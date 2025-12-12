// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMemNet_noparam.h for the primary calling header

#ifndef VERILATED_VMEMNET_NOPARAM___024UNIT_H_
#define VERILATED_VMEMNET_NOPARAM___024UNIT_H_  // guard

#include "verilated.h"


class VMemNet_noparam__Syms;

class alignas(VL_CACHE_LINE_BYTES) VMemNet_noparam___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VMemNet_noparam__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMemNet_noparam___024unit(VMemNet_noparam__Syms* symsp, const char* v__name);
    ~VMemNet_noparam___024unit();
    VL_UNCOPYABLE(VMemNet_noparam___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
