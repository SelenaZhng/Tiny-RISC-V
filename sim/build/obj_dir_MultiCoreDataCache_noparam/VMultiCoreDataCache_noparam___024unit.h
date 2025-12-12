// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMultiCoreDataCache_noparam.h for the primary calling header

#ifndef VERILATED_VMULTICOREDATACACHE_NOPARAM___024UNIT_H_
#define VERILATED_VMULTICOREDATACACHE_NOPARAM___024UNIT_H_  // guard

#include "verilated.h"


class VMultiCoreDataCache_noparam__Syms;

class alignas(VL_CACHE_LINE_BYTES) VMultiCoreDataCache_noparam___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VMultiCoreDataCache_noparam__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMultiCoreDataCache_noparam___024unit(VMultiCoreDataCache_noparam__Syms* symsp, const char* v__name);
    ~VMultiCoreDataCache_noparam___024unit();
    VL_UNCOPYABLE(VMultiCoreDataCache_noparam___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
