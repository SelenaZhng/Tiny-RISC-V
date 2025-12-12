// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMultiCoreSys_noparam.h for the primary calling header

#ifndef VERILATED_VMULTICORESYS_NOPARAM___024UNIT_H_
#define VERILATED_VMULTICORESYS_NOPARAM___024UNIT_H_  // guard

#include "verilated.h"


class VMultiCoreSys_noparam__Syms;

class alignas(VL_CACHE_LINE_BYTES) VMultiCoreSys_noparam___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VMultiCoreSys_noparam__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMultiCoreSys_noparam___024unit(VMultiCoreSys_noparam__Syms* symsp, const char* v__name);
    ~VMultiCoreSys_noparam___024unit();
    VL_UNCOPYABLE(VMultiCoreSys_noparam___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
