// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNetRouter___05Fp_msg_nbits_44.h for the primary calling header

#include "VNetRouter___05Fp_msg_nbits_44__pch.h"
#include "VNetRouter___05Fp_msg_nbits_44__Syms.h"
#include "VNetRouter___05Fp_msg_nbits_44___024root.h"

extern const VlWide<128>/*4095:0*/ VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0;
extern const VlWide<128>/*4095:0*/ VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0;
extern const VlWide<128>/*4095:0*/ VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0;
extern const VlWide<128>/*4095:0*/ VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_hf1afa22a_0;
extern const VlWide<128>/*4095:0*/ VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0;
extern const VlWide<128>/*4095:0*/ VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h803d56e6_0;

void VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__line_trace_TOP(VNetRouter___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__num_reqs;
    NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__num_reqs = 0;
    IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__num_reqs;
    NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__num_reqs = 0;
    IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__num_reqs;
    NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__0__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__0__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__0__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__0__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__1__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__1__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__1__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__1__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__2__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__2__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__2__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__2__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__3__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__3__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__3__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__3__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__4__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__4__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__4__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__4__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__5__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__5__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__5__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__5__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__6__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__6__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__6__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__6__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__7__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__7__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__7__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__7__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__8__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__8__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__8__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__8__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__9__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__9__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__9__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__9__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__10__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__10__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__10__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__10__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__11__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__11__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__11__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__11__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__12__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__12__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__12__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__12__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__13__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__13__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__13__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__13__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__14__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__14__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__14__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__14__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__15__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__15__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__15__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__15__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__line_trace__16__trace_str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__line_trace__16__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__17__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__17__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__17__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__17__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__18__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__18__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__18__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__18__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__19__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__19__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__19__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__19__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__20__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__20__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__20__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__20__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__line_trace__21__trace_str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__line_trace__21__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__22__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__22__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__22__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__22__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__23__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__23__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__23__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__23__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__24__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__24__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__24__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__24__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__25__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__25__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__25__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__25__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__line_trace__26__trace_str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__line_trace__26__trace_str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__27__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__27__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__27__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__27__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__28__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__28__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__28__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__28__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__29__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__29__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__29__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__29__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__30__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__30__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__30__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__30__str);
    // Body
    if ((4U == (IData)(vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__0__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__0__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__0__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__0__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__0__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__0__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__1__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__1__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__1__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__1__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__1__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__1__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__2__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__2__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__2__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__2__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__2__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__2__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__3__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__3__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__3__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__3__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__3__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__3__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inq0_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__4__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__4__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__4__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__4__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__4__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__4__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__4__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__4__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__4__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__4__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__5__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__5__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__5__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__5__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__5__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__5__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__6__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__6__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__6__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__6__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__6__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__6__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__6__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__6__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__6__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__6__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__7__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__7__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__7__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__7__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__7__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__7__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__8__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__8__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__8__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__8__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__8__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__8__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__8__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__8__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__8__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__8__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inq1_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__9__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__9__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__9__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__9__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__9__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__9__trace);
    }
    if ((4U == (IData)(vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__10__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__10__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__10__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__10__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__10__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__10__trace);
    } else if ((3U == (IData)(vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__11__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__11__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__11__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__11__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__11__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__11__trace);
    } else if ((2U == (IData)(vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__12__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__12__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__12__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__12__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__12__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__12__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__12__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__12__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__12__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__12__trace);
    } else if ((1U == (IData)(vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__13__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_hf1afa22a_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__13__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__13__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__13__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__13__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__13__trace);
    } else if ((0U == (IData)(vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inq2_num_free_entries))) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__14__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__14__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__14__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__14__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__14__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__14__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__14__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__14__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__14__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__14__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__15__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__15__trace, trace_str);
    vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__15__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__15__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
        = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__15__trace[0U];
    vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__15__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__15__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__15__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__15__trace[0U] 
        = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__vc_trace__DOT__append_str__15__trace);
    VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__line_trace__16__trace_str, trace_str);
    NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__17__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__17__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__line_trace__16__trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__17__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__17__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__17__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__17__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__17__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__17__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__17__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__line_trace__16__trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__17__trace);
    } else if ((1U == NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__18__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__18__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__line_trace__16__trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__18__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__18__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__18__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__18__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__18__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__18__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__18__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__line_trace__16__trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__18__trace);
    } else if ((2U == NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__19__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__19__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__line_trace__16__trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__19__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__19__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__19__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__19__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__19__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__19__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__19__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__line_trace__16__trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__19__trace);
    } else if ((3U == NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__20__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__20__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__line_trace__16__trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__20__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__20__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__20__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__20__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__20__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__20__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__20__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__line_trace__16__trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__20__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__line_trace__16__trace_str);
    VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__line_trace__21__trace_str, trace_str);
    NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__22__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__22__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__line_trace__21__trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__22__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__22__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__22__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__22__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__22__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__22__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__22__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__line_trace__21__trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__22__trace);
    } else if ((1U == NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__23__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__23__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__line_trace__21__trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__23__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__23__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__23__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__23__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__23__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__23__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__23__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__line_trace__21__trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__23__trace);
    } else if ((2U == NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__24__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__24__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__line_trace__21__trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__24__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__24__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__24__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__24__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__24__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__24__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__24__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__line_trace__21__trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__24__trace);
    } else if ((3U == NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__25__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__25__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__line_trace__21__trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__25__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__25__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__25__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__25__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__25__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__25__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__25__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__line_trace__21__trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__25__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__line_trace__21__trace_str);
    VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__line_trace__26__trace_str, trace_str);
    NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__27__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__27__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__line_trace__26__trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__27__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__27__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__27__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__27__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__27__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__27__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__27__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__line_trace__26__trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__27__trace);
    } else if ((1U == NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__28__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__28__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__line_trace__26__trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__28__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__28__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__28__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__28__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__28__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__28__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__28__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__line_trace__26__trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__28__trace);
    } else if ((2U == NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__29__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__29__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__line_trace__26__trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__29__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__29__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__29__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__29__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__29__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__29__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__29__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__line_trace__26__trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__29__trace);
    } else if ((3U == NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__30__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__30__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__line_trace__26__trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__30__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__30__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__30__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__30__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__30__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__30__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__30__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__line_trace__26__trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__30__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__line_trace__26__trace_str);
}

void VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__line_trace_TOP(VNetRouter___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__append_str__31__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__append_str__31__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__append_str__31__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__append_str__31__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__append_str__32__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__append_str__32__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__append_str__32__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__append_str__32__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream0_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__append_str__31__str, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__append_str__31__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__append_str__31__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__append_str__31__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__append_str__31__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__append_str__31__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__append_str__31__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__append_str__31__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__append_str__31__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__append_str__31__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__append_str__32__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__append_str__32__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__append_str__32__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__append_str__32__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__append_str__32__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__append_str__32__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__append_str__32__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__append_str__32__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__append_str__32__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit0__DOT__vc_trace__DOT__append_str__32__trace);
    }
}

void VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__line_trace_TOP(VNetRouter___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__append_str__33__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__append_str__33__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__append_str__33__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__append_str__33__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__append_str__34__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__append_str__34__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__append_str__34__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__append_str__34__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream1_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__append_str__33__str, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__append_str__33__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__append_str__33__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__append_str__33__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__append_str__33__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__append_str__33__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__append_str__33__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__append_str__33__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__append_str__33__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__append_str__33__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__append_str__34__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__append_str__34__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__append_str__34__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__append_str__34__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__append_str__34__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__append_str__34__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__append_str__34__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__append_str__34__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__append_str__34__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit1__DOT__vc_trace__DOT__append_str__34__trace);
    }
}

void VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__line_trace_TOP(VNetRouter___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__append_str__35__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__append_str__35__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__append_str__35__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__append_str__35__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__append_str__36__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__append_str__36__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__append_str__36__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__append_str__36__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (((~ (IData)(vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2__DOT__genblk1__DOT__bypass_mux_sel)) 
         & (IData)(vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__inputstream2_deq_rdy))) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__str
                      ,"%1#",0,2,(3U & ((IData)(vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__istream_msg_hdr) 
                                        >> 8U)));
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__append_str__35__str, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__append_str__35__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__append_str__35__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__append_str__35__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__append_str__35__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__append_str__35__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__append_str__35__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__append_str__35__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__append_str__35__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__append_str__35__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__append_str__36__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__append_str__36__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__append_str__36__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__append_str__36__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__append_str__36__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__append_str__36__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__append_str__36__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__append_str__36__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__append_str__36__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__runit2__DOT__vc_trace__DOT__append_str__36__trace);
    }
}

void VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__line_trace_TOP(VNetRouter___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__num_reqs;
    NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__37__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__37__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__37__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__37__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__38__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__38__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__38__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__38__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__39__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__39__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__39__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__39__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__40__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__40__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__40__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__40__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__num_reqs 
        = ((vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit0__istream_val
            [0U] + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit0__istream_val
            [1U]) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit0__istream_val
           [2U]);
    if ((0U == NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__37__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__37__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__37__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__37__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__37__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__37__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__37__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__37__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__37__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__37__trace);
    } else if ((1U == NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__38__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__38__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__38__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__38__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__38__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__38__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__38__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__38__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__38__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__38__trace);
    } else if ((2U == NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__39__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__39__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__39__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__39__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__39__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__39__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__39__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__39__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__39__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__39__trace);
    } else if ((3U == NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__40__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__40__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__40__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__40__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__40__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__40__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__40__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__40__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__40__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit0__DOT__vc_trace__DOT__append_str__40__trace);
    }
}

void VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__line_trace_TOP(VNetRouter___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__num_reqs;
    NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__41__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__41__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__41__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__41__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__42__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__42__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__42__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__42__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__43__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__43__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__43__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__43__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__44__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__44__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__44__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__44__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__num_reqs 
        = ((vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit1__istream_val
            [0U] + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit1__istream_val
            [1U]) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit1__istream_val
           [2U]);
    if ((0U == NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__41__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__41__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__41__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__41__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__41__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__41__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__41__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__41__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__41__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__41__trace);
    } else if ((1U == NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__42__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__42__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__42__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__42__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__42__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__42__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__42__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__42__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__42__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__42__trace);
    } else if ((2U == NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__43__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__43__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__43__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__43__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__43__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__43__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__43__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__43__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__43__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__43__trace);
    } else if ((3U == NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__44__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__44__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__44__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__44__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__44__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__44__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__44__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__44__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__44__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit1__DOT__vc_trace__DOT__append_str__44__trace);
    }
}

void VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__line_trace_TOP(VNetRouter___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__num_reqs;
    NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__num_reqs = 0;
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__45__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__45__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__45__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__45__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__46__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__46__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__46__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__46__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__47__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__47__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__47__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__47__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__48__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__48__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__48__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__48__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__num_reqs 
        = ((vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit2__istream_val
            [0U] + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit2__istream_val
            [1U]) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellinp__sunit2__istream_val
           [2U]);
    if ((0U == NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__45__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__45__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__45__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__45__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__45__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__45__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__45__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__45__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__45__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__45__trace);
    } else if ((1U == NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__46__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__46__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__46__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__46__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__46__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__46__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__46__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__46__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__46__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__46__trace);
    } else if ((2U == NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__47__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h363e659f_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__47__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__47__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__47__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__47__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__47__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__47__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__47__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__47__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__47__trace);
    } else if ((3U == NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__num_reqs)) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__48__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__48__trace, trace_str);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__48__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__48__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__48__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__48__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__48__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__48__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__48__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__sunit2__DOT__vc_trace__DOT__append_str__48__trace);
    }
}

extern const VlWide<128>/*4095:0*/ VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_haead36df_0;

void VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__line_trace_TOP(VNetRouter___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
    NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace);
    CData/*0:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__val;
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__val = 0;
    CData/*0:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__rdy;
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__50__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__50__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__50__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__50__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__51__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__51__trace);
    CData/*7:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__51__char;
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__51__char = 0;
    IData/*31:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__51__num;
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__51__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__52__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__52__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__52__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__52__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__53__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__53__trace);
    CData/*7:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__53__char;
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__53__char = 0;
    IData/*31:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__53__num;
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__53__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__54__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__54__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__54__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__54__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__55__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__55__trace);
    CData/*7:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__55__char;
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__55__char = 0;
    IData/*31:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__55__num;
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__55__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__56__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__56__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__56__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__56__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__57__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__57__trace);
    CData/*7:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__57__char;
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__57__char = 0;
    IData/*31:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__57__num;
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__57__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (IData)((vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit0__ostream_msg 
                                                 >> 0x2aU))),
                  2,(3U & (IData)((vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit0__ostream_msg 
                                   >> 0x28U))),8,(0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit0__ostream_msg 
                                                             >> 0x20U))));
    VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__str, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__str);
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__rdy 
        = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT____Vcellinp__v__ostream_rdy
        [0U];
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__val 
        = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit0__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace, trace_str);
    NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len1))))))) {
        NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__rdy) 
         & (IData)(__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__val))) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__50__str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__str);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__50__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__50__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__50__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__50__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__50__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__50__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__50__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__50__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__50__trace);
    } else if (((IData)(__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__rdy) 
                & (~ (IData)(__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__val)))) {
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__51__num 
            = NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len1;
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__51__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__51__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__51__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__51__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__51__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__51__char);
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__51__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__51__trace);
    } else if (((~ (IData)(__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__rdy)) 
                & (IData)(__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__val))) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__52__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__52__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__52__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__52__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__52__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__52__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__52__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__52__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__52__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__52__trace);
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__53__num 
            = (NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__53__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__53__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__53__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__53__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__53__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__53__char);
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__53__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__53__trace);
    } else if ((1U & ((~ (IData)(__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__rdy)) 
                      & (~ (IData)(__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__val))))) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__54__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__54__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__54__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__54__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__54__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__54__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__54__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__54__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__54__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__54__trace);
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__55__num 
            = (NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__55__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__55__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__55__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__55__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__55__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__55__char);
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__55__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__55__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__56__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__56__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__56__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__56__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__56__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__56__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__56__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__56__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__56__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_str__56__trace);
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__57__num 
            = (NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__57__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__57__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__57__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__57__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__57__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__57__char);
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__57__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_chars__57__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream0_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace);
}

void VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__line_trace_TOP(VNetRouter___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
    NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace);
    CData/*0:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__val;
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__val = 0;
    CData/*0:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__rdy;
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__59__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__59__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__59__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__59__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__60__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__60__trace);
    CData/*7:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__60__char;
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__60__char = 0;
    IData/*31:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__60__num;
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__60__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__61__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__61__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__61__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__61__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__62__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__62__trace);
    CData/*7:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__62__char;
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__62__char = 0;
    IData/*31:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__62__num;
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__62__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__63__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__63__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__63__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__63__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__64__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__64__trace);
    CData/*7:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__64__char;
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__64__char = 0;
    IData/*31:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__64__num;
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__64__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__65__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__65__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__65__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__65__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__66__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__66__trace);
    CData/*7:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__66__char;
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__66__char = 0;
    IData/*31:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__66__num;
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__66__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (IData)((vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit1__ostream_msg 
                                                 >> 0x2aU))),
                  2,(3U & (IData)((vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit1__ostream_msg 
                                   >> 0x28U))),8,(0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit1__ostream_msg 
                                                             >> 0x20U))));
    VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__str, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__str);
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__rdy 
        = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT____Vcellinp__v__ostream_rdy
        [1U];
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__val 
        = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit1__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace, trace_str);
    NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len1))))))) {
        NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__rdy) 
         & (IData)(__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__val))) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__59__str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__str);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__59__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__59__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__59__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__59__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__59__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__59__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__59__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__59__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__59__trace);
    } else if (((IData)(__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__rdy) 
                & (~ (IData)(__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__val)))) {
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__60__num 
            = NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len1;
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__60__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__60__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__60__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__60__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__60__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__60__char);
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__60__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__60__trace);
    } else if (((~ (IData)(__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__rdy)) 
                & (IData)(__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__val))) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__61__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__61__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__61__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__61__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__61__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__61__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__61__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__61__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__61__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__61__trace);
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__62__num 
            = (NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__62__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__62__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__62__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__62__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__62__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__62__char);
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__62__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__62__trace);
    } else if ((1U & ((~ (IData)(__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__rdy)) 
                      & (~ (IData)(__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__val))))) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__63__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__63__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__63__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__63__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__63__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__63__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__63__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__63__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__63__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__63__trace);
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__64__num 
            = (NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__64__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__64__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__64__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__64__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__64__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__64__char);
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__64__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__64__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__65__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__65__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__65__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__65__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__65__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__65__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__65__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__65__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__65__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_str__65__trace);
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__66__num 
            = (NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__66__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__66__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__66__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__66__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__66__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__66__char);
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__66__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_chars__66__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream1_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace);
}

void VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__line_trace_TOP(VNetRouter___05Fp_msg_nbits_44__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouter___05Fp_msg_nbits_44___024root____Vdpiexp_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
    NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace);
    CData/*0:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__val;
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__val = 0;
    CData/*0:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__rdy;
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__68__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__68__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__68__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__68__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__69__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__69__trace);
    CData/*7:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__69__char;
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__69__char = 0;
    IData/*31:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__69__num;
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__69__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__70__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__70__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__70__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__70__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__71__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__71__trace);
    CData/*7:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__71__char;
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__71__char = 0;
    IData/*31:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__71__num;
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__71__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__72__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__72__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__72__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__72__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__73__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__73__trace);
    CData/*7:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__73__char;
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__73__char = 0;
    IData/*31:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__73__num;
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__73__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__74__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__74__trace);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__74__str;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__74__str);
    VlWide<128>/*4095:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__75__trace;
    VL_ZERO_W(4096, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__75__trace);
    CData/*7:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__75__char;
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__75__char = 0;
    IData/*31:0*/ __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__75__num;
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__75__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__str
                  ,"%x>%x:%x",0,2,(3U & (IData)((vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit2__ostream_msg 
                                                 >> 0x2aU))),
                  2,(3U & (IData)((vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit2__ostream_msg 
                                   >> 0x28U))),8,(0xffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit2__ostream_msg 
                                                             >> 0x20U))));
    VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__str, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__str);
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__rdy 
        = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT____Vcellinp__v__ostream_rdy
        [2U];
    __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__val 
        = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT____Vcellout__sunit2__ostream_val;
    VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace, trace_str);
    NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len1))))))) {
        NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__rdy) 
         & (IData)(__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__val))) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__68__str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__str);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__68__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__68__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__68__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__68__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__68__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__68__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__68__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__68__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__68__trace);
    } else if (((IData)(__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__rdy) 
                & (~ (IData)(__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__val)))) {
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__69__num 
            = NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len1;
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__69__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__69__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__69__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__69__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__69__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__69__char);
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__69__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__69__trace);
    } else if (((~ (IData)(__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__rdy)) 
                & (IData)(__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__val))) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__70__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__70__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__70__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__70__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__70__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__70__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__70__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__70__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__70__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__70__trace);
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__71__num 
            = (NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__71__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__71__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__71__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__71__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__71__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__71__char);
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__71__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__71__trace);
    } else if ((1U & ((~ (IData)(__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__rdy)) 
                      & (~ (IData)(__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__val))))) {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__72__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__72__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__72__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__72__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__72__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__72__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__72__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__72__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__72__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__72__trace);
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__73__num 
            = (NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__73__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__73__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__73__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__73__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__73__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__73__char);
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__73__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__73__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__74__str, VNetRouter___05Fp_msg_nbits_44__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__74__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__74__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__74__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__74__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__74__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__74__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__74__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__74__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_str__74__trace);
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__75__num 
            = (NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__75__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__75__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace);
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__75__trace[0U];
        vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__75__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0)), __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__75__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__75__char);
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__75__trace[0U] 
            = vlSymsp->TOP.NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_chars__75__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_NetRouter___05Fp_msg_nbits_44__DOT__v__DOT__ostream2_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VNetRouter___05Fp_msg_nbits_44___024root___dump_triggers__ico(VNetRouter___05Fp_msg_nbits_44___024root* vlSelf);
#endif  // VL_DEBUG

void VNetRouter___05Fp_msg_nbits_44___024root___eval_triggers__ico(VNetRouter___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouter___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouter___05Fp_msg_nbits_44___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
    vlSelf->__VicoTriggered.set(1U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VNetRouter___05Fp_msg_nbits_44___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VNetRouter___05Fp_msg_nbits_44___024root___dump_triggers__act(VNetRouter___05Fp_msg_nbits_44___024root* vlSelf);
#endif  // VL_DEBUG

void VNetRouter___05Fp_msg_nbits_44___024root___eval_triggers__act(VNetRouter___05Fp_msg_nbits_44___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VNetRouter___05Fp_msg_nbits_44__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNetRouter___05Fp_msg_nbits_44___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VNetRouter___05Fp_msg_nbits_44___024root___dump_triggers__act(vlSelf);
    }
#endif
}
