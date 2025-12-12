// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VProcDpathImmGen_noparam.h for the primary calling header

#ifndef VERILATED_VPROCDPATHIMMGEN_NOPARAM___024ROOT_H_
#define VERILATED_VPROCDPATHIMMGEN_NOPARAM___024ROOT_H_  // guard

#include "verilated.h"


class VProcDpathImmGen_noparam__Syms;

class alignas(VL_CACHE_LINE_BYTES) VProcDpathImmGen_noparam___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(reset,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(imm_type,2,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_OUT(imm,31,0);
    VL_IN(inst,31,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VProcDpathImmGen_noparam__Syms* const vlSymsp;

    // CONSTRUCTORS
    VProcDpathImmGen_noparam___024root(VProcDpathImmGen_noparam__Syms* symsp, const char* v__name);
    ~VProcDpathImmGen_noparam___024root();
    VL_UNCOPYABLE(VProcDpathImmGen_noparam___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
