// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCacheAlt___05Fp_num_banks_4.h for the primary calling header

#ifndef VERILATED_VCACHEALT___05FP_NUM_BANKS_4___024UNIT_H_
#define VERILATED_VCACHEALT___05FP_NUM_BANKS_4___024UNIT_H_  // guard

#include "verilated.h"


class VCacheAlt___05Fp_num_banks_4__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCacheAlt___05Fp_num_banks_4___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VCacheAlt___05Fp_num_banks_4__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCacheAlt___05Fp_num_banks_4___024unit(VCacheAlt___05Fp_num_banks_4__Syms* symsp, const char* v__name);
    ~VCacheAlt___05Fp_num_banks_4___024unit();
    VL_UNCOPYABLE(VCacheAlt___05Fp_num_banks_4___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
