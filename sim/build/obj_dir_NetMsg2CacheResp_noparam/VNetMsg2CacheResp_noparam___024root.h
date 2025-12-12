// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNetMsg2CacheResp_noparam.h for the primary calling header

#ifndef VERILATED_VNETMSG2CACHERESP_NOPARAM___024ROOT_H_
#define VERILATED_VNETMSG2CACHERESP_NOPARAM___024ROOT_H_  // guard

#include "verilated.h"


class VNetMsg2CacheResp_noparam__Syms;

class alignas(VL_CACHE_LINE_BYTES) VNetMsg2CacheResp_noparam___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(reset,0,0);
    VL_IN8(clk,0,0);
    VL_OUT8(istream_rdy,0,0);
    VL_IN8(istream_val,0,0);
    VL_IN8(ostream_rdy,0,0);
    VL_OUT8(ostream_val,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VL_IN64(istream_msg,59,0);
    VL_OUT64(ostream_msg,47,0);
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VNetMsg2CacheResp_noparam__Syms* const vlSymsp;

    // CONSTRUCTORS
    VNetMsg2CacheResp_noparam___024root(VNetMsg2CacheResp_noparam__Syms* symsp, const char* v__name);
    ~VNetMsg2CacheResp_noparam___024root();
    VL_UNCOPYABLE(VNetMsg2CacheResp_noparam___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
