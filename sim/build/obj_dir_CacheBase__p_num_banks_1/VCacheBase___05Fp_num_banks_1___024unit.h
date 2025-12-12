// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCacheBase___05Fp_num_banks_1.h for the primary calling header

#ifndef VERILATED_VCACHEBASE___05FP_NUM_BANKS_1___024UNIT_H_
#define VERILATED_VCACHEBASE___05FP_NUM_BANKS_1___024UNIT_H_  // guard

#include "verilated.h"


class VCacheBase___05Fp_num_banks_1__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCacheBase___05Fp_num_banks_1___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VCacheBase___05Fp_num_banks_1__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCacheBase___05Fp_num_banks_1___024unit(VCacheBase___05Fp_num_banks_1__Syms* symsp, const char* v__name);
    ~VCacheBase___05Fp_num_banks_1___024unit();
    VL_UNCOPYABLE(VCacheBase___05Fp_num_banks_1___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
