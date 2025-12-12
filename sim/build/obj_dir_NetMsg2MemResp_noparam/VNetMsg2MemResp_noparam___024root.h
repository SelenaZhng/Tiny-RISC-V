// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNetMsg2MemResp_noparam.h for the primary calling header

#ifndef VERILATED_VNETMSG2MEMRESP_NOPARAM___024ROOT_H_
#define VERILATED_VNETMSG2MEMRESP_NOPARAM___024ROOT_H_  // guard

#include "verilated.h"


class VNetMsg2MemResp_noparam__Syms;

class alignas(VL_CACHE_LINE_BYTES) VNetMsg2MemResp_noparam___024root final : public VerilatedModule {
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
    VL_INW(istream_msg,157,0,5);
    VL_OUTW(ostream_msg,145,0,5);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VNetMsg2MemResp_noparam__Syms* const vlSymsp;

    // CONSTRUCTORS
    VNetMsg2MemResp_noparam___024root(VNetMsg2MemResp_noparam__Syms* symsp, const char* v__name);
    ~VNetMsg2MemResp_noparam___024root();
    VL_UNCOPYABLE(VNetMsg2MemResp_noparam___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
