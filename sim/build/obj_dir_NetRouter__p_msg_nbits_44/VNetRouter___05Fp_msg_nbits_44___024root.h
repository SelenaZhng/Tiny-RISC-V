// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNetRouter___05Fp_msg_nbits_44.h for the primary calling header

#ifndef VERILATED_VNETROUTER___05FP_MSG_NBITS_44___024ROOT_H_
#define VERILATED_VNETROUTER___05FP_MSG_NBITS_44___024ROOT_H_  // guard

#include "verilated.h"


class VNetRouter___05Fp_msg_nbits_44__Syms;

class alignas(VL_CACHE_LINE_BYTES) VNetRouter___05Fp_msg_nbits_44___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(router_id,3,0);
        CData/*2:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inq0_num_free_entries;
        CData/*0:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0_deq_rdy;
        CData/*2:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inq1_num_free_entries;
        CData/*0:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1_deq_rdy;
        CData/*2:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inq2_num_free_entries;
        CData/*0:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2_deq_rdy;
        CData/*0:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit0__ostream_val;
        CData/*0:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit1__ostream_val;
        CData/*0:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit2__ostream_val;
        CData/*0:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__write_en;
        CData/*0:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel;
        CData/*1:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        CData/*1:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next;
        CData/*1:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr;
        CData/*1:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next;
        CData/*0:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full;
        CData/*0:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__ctrl__DOT__full_next;
        CData/*0:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__write_en;
        CData/*0:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel;
        CData/*1:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        CData/*1:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next;
        CData/*1:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr;
        CData/*1:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next;
        CData/*0:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full;
        CData/*0:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__ctrl__DOT__full_next;
        CData/*0:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__write_en;
        CData/*0:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel;
        CData/*1:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr;
        CData/*1:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__enq_ptr_next;
        CData/*1:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr;
        CData/*1:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__deq_ptr_next;
        CData/*0:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full;
        CData/*0:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__ctrl__DOT__full_next;
        CData/*0:0*/ __Vdpi_export_trigger;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__istream_msg_hdr;
        SData/*11:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__istream_msg_hdr;
        SData/*11:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__istream_msg_hdr;
        VlWide<128>/*4095:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__str;
        IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__idx1;
        VlWide<128>/*4095:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__str;
        IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__idx1;
        VlWide<128>/*4095:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__str;
        IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__idx1;
        IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1;
        IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1;
        IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0;
    };
    struct {
        IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1;
        VlWide<128>/*4095:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__str;
        IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1;
        VlWide<128>/*4095:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__str;
        IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1;
        VlWide<128>/*4095:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__str;
        IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1;
        IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1;
        IData/*31:0*/ __VactIterCount;
        QData/*43:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0_deq_msg;
        QData/*43:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1_deq_msg;
        QData/*43:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2_deq_msg;
        QData/*43:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit0__ostream_msg;
        QData/*43:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit1__ostream_msg;
        QData/*43:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit2__ostream_msg;
        VL_IN64(istream_msg[3],43,0);
        VL_OUT8(istream_rdy[3],0,0);
        VL_IN8(istream_val[3],0,0);
        VL_OUT64(ostream_msg[3],43,0);
        VL_IN8(ostream_rdy[3],0,0);
        VL_OUT8(ostream_val[3],0,0);
        VlUnpacked<CData/*0:0*/, 3> NetRouter___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_val;
        VlUnpacked<CData/*0:0*/, 3> NetRouter___05Fp_msg_nbits_44__DOT____Vcellinp__v__ostream_rdy;
        VlUnpacked<QData/*43:0*/, 3> NetRouter___05Fp_msg_nbits_44__DOT____Vcellout__v__ostream_msg;
        VlUnpacked<CData/*0:0*/, 3> NetRouter___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_val;
        VlUnpacked<CData/*0:0*/, 3> NetRouter___05Fp_msg_nbits_44__DOT____Vcellout__v__istream_rdy;
        VlUnpacked<QData/*43:0*/, 3> NetRouter___05Fp_msg_nbits_44__DOT____Vcellinp__v__istream_msg;
        VlUnpacked<QData/*43:0*/, 3> NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit0_ostream_msg;
        VlUnpacked<CData/*0:0*/, 3> NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit0_ostream_val;
        VlUnpacked<CData/*0:0*/, 3> NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit0_ostream_rdy;
        VlUnpacked<QData/*43:0*/, 3> NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit1_ostream_msg;
        VlUnpacked<CData/*0:0*/, 3> NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit1_ostream_val;
        VlUnpacked<CData/*0:0*/, 3> NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit1_ostream_rdy;
        VlUnpacked<QData/*43:0*/, 3> NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit2_ostream_msg;
        VlUnpacked<CData/*0:0*/, 3> NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit2_ostream_val;
        VlUnpacked<CData/*0:0*/, 3> NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__routeunit2_ostream_rdy;
        VlUnpacked<CData/*0:0*/, 3> NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit0__istream_rdy;
        VlUnpacked<CData/*0:0*/, 3> NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit0__istream_val;
        VlUnpacked<QData/*43:0*/, 3> NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit0__istream_msg;
        VlUnpacked<CData/*0:0*/, 3> NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit1__istream_rdy;
        VlUnpacked<CData/*0:0*/, 3> NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit1__istream_val;
        VlUnpacked<QData/*43:0*/, 3> NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit1__istream_msg;
        VlUnpacked<CData/*0:0*/, 3> NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit2__istream_rdy;
        VlUnpacked<CData/*0:0*/, 3> NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit2__istream_val;
        VlUnpacked<QData/*43:0*/, 3> NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit2__istream_msg;
        VlUnpacked<QData/*43:0*/, 4> NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile;
        VlUnpacked<QData/*43:0*/, 4> NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile;
        VlUnpacked<QData/*43:0*/, 4> NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__dpath__DOT__qstore__DOT__rfile;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VNetRouter___05Fp_msg_nbits_44__Syms* const vlSymsp;

    // CONSTRUCTORS
    VNetRouter___05Fp_msg_nbits_44___024root(VNetRouter___05Fp_msg_nbits_44__Syms* symsp, const char* v__name);
    ~VNetRouter___05Fp_msg_nbits_44___024root();
    VL_UNCOPYABLE(VNetRouter___05Fp_msg_nbits_44___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
