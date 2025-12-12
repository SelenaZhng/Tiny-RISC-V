// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCacheNet_noparam.h for the primary calling header

#ifndef VERILATED_VCACHENET_NOPARAM___024UNIT_H_
#define VERILATED_VCACHENET_NOPARAM___024UNIT_H_  // guard

#include "verilated.h"


class VCacheNet_noparam__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCacheNet_noparam___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VCacheNet_noparam__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCacheNet_noparam___024unit(VCacheNet_noparam__Syms* symsp, const char* v__name);
    ~VCacheNet_noparam___024unit();
    VL_UNCOPYABLE(VCacheNet_noparam___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
