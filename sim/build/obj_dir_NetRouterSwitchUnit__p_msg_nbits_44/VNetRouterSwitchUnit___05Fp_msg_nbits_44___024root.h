// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNetRouterSwitchUnit___05Fp_msg_nbits_44.h for the primary calling header

#ifndef VERILATED_VNETROUTERSWITCHUNIT___05FP_MSG_NBITS_44___024ROOT_H_
#define VERILATED_VNETROUTERSWITCHUNIT___05FP_MSG_NBITS_44___024ROOT_H_  // guard

#include "verilated.h"


class VNetRouterSwitchUnit___05Fp_msg_nbits_44__Syms;

class alignas(VL_CACHE_LINE_BYTES) VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(ostream_rdy,0,0);
    VL_OUT8(ostream_val,0,0);
    CData/*0:0*/ __Vdpi_export_trigger;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0;
    IData/*31:0*/ NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0;
    IData/*31:0*/ NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1;
    IData/*31:0*/ __VactIterCount;
    VL_OUT64(ostream_msg,43,0);
    VL_IN64(istream_msg[3],43,0);
    VL_OUT8(istream_rdy[3],0,0);
    VL_IN8(istream_val[3],0,0);
    VlUnpacked<CData/*0:0*/, 3> NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_val;
    VlUnpacked<CData/*0:0*/, 3> NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT____Vcellout__v__istream_rdy;
    VlUnpacked<QData/*43:0*/, 3> NetRouterSwitchUnit___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_msg;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VNetRouterSwitchUnit___05Fp_msg_nbits_44__Syms* const vlSymsp;

    // CONSTRUCTORS
    VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root(VNetRouterSwitchUnit___05Fp_msg_nbits_44__Syms* symsp, const char* v__name);
    ~VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root();
    VL_UNCOPYABLE(VNetRouterSwitchUnit___05Fp_msg_nbits_44___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
