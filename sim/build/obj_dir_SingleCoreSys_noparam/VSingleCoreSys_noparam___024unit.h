// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSingleCoreSys_noparam.h for the primary calling header

#ifndef VERILATED_VSINGLECORESYS_NOPARAM___024UNIT_H_
#define VERILATED_VSINGLECORESYS_NOPARAM___024UNIT_H_  // guard

#include "verilated.h"


class VSingleCoreSys_noparam__Syms;

class alignas(VL_CACHE_LINE_BYTES) VSingleCoreSys_noparam___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VSingleCoreSys_noparam__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSingleCoreSys_noparam___024unit(VSingleCoreSys_noparam__Syms* symsp, const char* v__name);
    ~VSingleCoreSys_noparam___024unit();
    VL_UNCOPYABLE(VSingleCoreSys_noparam___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
