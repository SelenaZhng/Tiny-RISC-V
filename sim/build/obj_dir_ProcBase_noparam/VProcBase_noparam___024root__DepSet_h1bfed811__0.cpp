// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VProcBase_noparam.h for the primary calling header

#include "VProcBase_noparam__pch.h"
#include "VProcBase_noparam__Syms.h"
#include "VProcBase_noparam___024root.h"

extern const VlWide<128>/*4095:0*/ VProcBase_noparam__ConstPool__CONST_h408c6ce7_0;
extern const VlWide<128>/*4095:0*/ VProcBase_noparam__ConstPool__CONST_h0dfd4e8e_0;
extern const VlWide<128>/*4095:0*/ VProcBase_noparam__ConstPool__CONST_h803d56e6_0;

void VProcBase_noparam___024root____Vdpiexp_ProcBase_noparam__DOT__v__DOT__line_trace_TOP(VProcBase_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcBase_noparam___024root____Vdpiexp_ProcBase_noparam__DOT__v__DOT__line_trace_TOP\n"); );
    // Init
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__1__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__1__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__1__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__1__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__1__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__1__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__3__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__3__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__3__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__3__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__3__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__3__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__5__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__5__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__5__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__5__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__5__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__5__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__10__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__10__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__10__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__10__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__10__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__10__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str);
    VlWide<7>/*199:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout;
    VL_ZERO_W(200, __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout);
    IData/*31:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst = 0;
    SData/*11:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__13__Vfuncout;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__13__inst;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__13__inst = 0;
    SData/*11:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__14__Vfuncout;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__14__inst;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__14__inst = 0;
    SData/*11:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__15__Vfuncout;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__15__inst;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__15__inst = 0;
    SData/*11:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__16__Vfuncout;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__16__inst;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__16__inst = 0;
    SData/*11:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__17__Vfuncout;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__17__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__17__inst;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__17__inst = 0;
    SData/*11:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__18__Vfuncout;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__18__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__18__inst;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__18__inst = 0;
    CData/*4:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__19__Vfuncout;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__19__inst;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__19__inst = 0;
    CData/*4:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__20__Vfuncout;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__20__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__20__inst;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__20__inst = 0;
    CData/*4:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__21__Vfuncout;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__21__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__21__inst;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__21__inst = 0;
    CData/*4:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__22__Vfuncout;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__22__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__22__inst;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__22__inst = 0;
    CData/*4:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__23__Vfuncout;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__23__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__23__inst;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__23__inst = 0;
    CData/*4:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__24__Vfuncout;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__24__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__24__inst;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__24__inst = 0;
    IData/*19:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__25__Vfuncout;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__25__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__25__inst;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__25__inst = 0;
    IData/*19:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__26__Vfuncout;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__26__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__26__inst;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__26__inst = 0;
    SData/*11:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__27__Vfuncout;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__27__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__27__inst;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__27__inst = 0;
    SData/*11:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_s__28__Vfuncout;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_s__28__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_s__28__inst;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_s__28__inst = 0;
    IData/*20:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_j__29__Vfuncout;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_j__29__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_j__29__inst;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_j__29__inst = 0;
    SData/*11:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__30__Vfuncout;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__30__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__30__inst;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__30__inst = 0;
    SData/*12:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__31__Vfuncout;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__31__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__31__inst;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__31__inst = 0;
    SData/*12:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__32__Vfuncout;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__32__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__32__inst;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__32__inst = 0;
    SData/*12:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__33__Vfuncout;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__33__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__33__inst;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__33__inst = 0;
    SData/*12:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__34__Vfuncout;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__34__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__34__inst;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__34__inst = 0;
    SData/*12:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__35__Vfuncout;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__35__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__35__inst;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__35__inst = 0;
    SData/*12:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__36__Vfuncout;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__36__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__36__inst;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__36__inst = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__37__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__37__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__37__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__37__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__37__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__37__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__38__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__38__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__38__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__38__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__39__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__39__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__39__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__39__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__40__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__40__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__40__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__40__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__40__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__40__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__41__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__41__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__41__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__41__str);
    IData/*31:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__Vfuncout;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__43__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__43__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__43__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__43__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__43__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__43__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__44__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__44__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__44__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__44__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__45__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__45__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__45__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__45__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__46__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__46__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__46__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__46__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__46__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__46__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__47__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__47__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__47__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__47__str);
    IData/*31:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__Vfuncout;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__49__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__49__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__49__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__49__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__49__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__49__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__50__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__50__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__50__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__50__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__51__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__51__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__51__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__51__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__52__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__52__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__52__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__52__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__52__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__52__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__53__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__53__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__53__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__53__str);
    IData/*31:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__Vfuncout;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst;
    __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__55__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__55__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__55__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__55__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__55__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__55__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    if (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_F) {
        if (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__ctrl__DOT__squash_F) {
            VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str, VProcBase_noparam__ConstPool__CONST_h408c6ce7_0);
            VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__trace, trace_str);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__trace[0U];
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__trace[0U] 
                = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__0__trace);
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__1__num = 7U;
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__1__char = 0x20U;
            VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__1__trace, trace_str);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__1__trace[0U];
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__1__num)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__1__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__1__char);
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__1__trace[0U] 
                = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__1__trace);
        } else if (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__ctrl__DOT__stall_F) {
            VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__str, VProcBase_noparam__ConstPool__CONST_h0dfd4e8e_0);
            VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__trace, trace_str);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__trace[0U];
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__trace[0U] 
                = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__2__trace);
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__3__num = 7U;
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__3__char = 0x20U;
            VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__3__trace, trace_str);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__3__trace[0U];
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__3__num)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__3__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__3__char);
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__3__trace[0U] 
                = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__3__trace);
        } else {
            VL_SFORMAT_NX(4096,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__str
                          ,"%x",0,32,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__pc_F);
            VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__str, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__str);
            VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__trace, trace_str);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__trace[0U];
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__trace[0U] 
                = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__4__trace);
        }
    } else {
        __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__5__num = 8U;
        __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__5__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__5__trace, trace_str);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__5__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__5__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__5__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__5__char);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__5__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__5__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__str, VProcBase_noparam__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__trace, trace_str);
    vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__trace[0U];
    vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__trace[0U] 
        = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__6__trace);
    if (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_D) {
        if (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__ctrl__DOT__squash_D) {
            VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str, VProcBase_noparam__ConstPool__CONST_h408c6ce7_0);
            VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__trace, trace_str);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__trace[0U];
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__trace[0U] 
                = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__7__trace);
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__num = 0x16U;
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__char = 0x20U;
            VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__trace, trace_str);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__trace[0U];
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__num)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__char);
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__trace[0U] 
                = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__8__trace);
        } else if (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__ctrl__DOT__stall_D) {
            VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str, VProcBase_noparam__ConstPool__CONST_h0dfd4e8e_0);
            VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__trace, trace_str);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__trace[0U];
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__trace[0U] 
                = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__9__trace);
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__10__num = 0x16U;
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__10__char = 0x20U;
            VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__10__trace, trace_str);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__10__trace[0U];
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__10__num)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__10__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__10__char);
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__10__trace[0U] 
                = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__10__trace);
        } else {
            VL_EXTEND_WW(4096,200, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str, 
                         ([&]() {
                        __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst 
                            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__inst_D;
                        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1 
                            = (0x1fU & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst 
                                        >> 0xfU));
                        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs2 
                            = (0x1fU & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst 
                                        >> 0x14U));
                        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd 
                            = (0x1fU & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst 
                                        >> 7U));
                        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__csr 
                            = (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst 
                               >> 0x14U);
                        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__funct 
                            = (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst 
                               >> 0x19U);
                        if ((9U >= (IData)(vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1))) {
                            VL_SFORMAT_NX(24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str
                                          ,"x0%0#",0,
                                          5,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1);
                        } else {
                            VL_SFORMAT_NX(24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str
                                          ,"x%2#",0,
                                          5,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1);
                        }
                        if ((9U >= (IData)(vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs2))) {
                            VL_SFORMAT_NX(24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str
                                          ,"x0%0#",0,
                                          5,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs2);
                        } else {
                            VL_SFORMAT_NX(24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str
                                          ,"x%2#",0,
                                          5,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs2);
                        }
                        if ((9U >= (IData)(vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd))) {
                            VL_SFORMAT_NX(24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str
                                          ,"x0%0#",0,
                                          5,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd);
                        } else {
                            VL_SFORMAT_NX(24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str
                                          ,"x%2#",0,
                                          5,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd);
                        }
                        if ((0x7c0U == (IData)(vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__csr))) {
                            VL_SFORMAT_NX(72,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__csr_str
                                          ,"proc2mngr",0);
                        } else if ((0xfc0U == (IData)(vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__csr))) {
                            VL_SFORMAT_NX(72,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__csr_str
                                          ,"mngr2proc",0);
                        } else if ((0xf14U == (IData)(vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__csr))) {
                            VL_SFORMAT_NX(72,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__csr_str
                                          ,"coreid   ",0);
                        } else if ((0xfc1U == (IData)(vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__csr))) {
                            VL_SFORMAT_NX(72,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__csr_str
                                          ,"numcores ",0);
                        } else if ((0x7c1U == (IData)(vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__csr))) {
                            VL_SFORMAT_NX(72,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__csr_str
                                          ,"stats_en ",0);
                        } else {
                            VL_SFORMAT_NX(72,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__csr_str
                                          ,"    0x%x",0,
                                          12,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__csr);
                        }
                        VL_SFORMAT_NX(16,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__funct_str
                                      ,"%x",0,2,(3U 
                                                 & (IData)(vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__funct)));
                        if (((((((((0x2073U == (0x707fU 
                                                & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)) 
                                   | (0x1073U == (0x707fU 
                                                  & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                  | (0x13U == __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)) 
                                 | (0U == __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)) 
                                | (0x33U == (0xfe00707fU 
                                             & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                               | (0x40000033U == (0xfe00707fU 
                                                  & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                              | (0x7033U == (0xfe00707fU 
                                             & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                             | (0x6033U == (0xfe00707fU 
                                            & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)))) {
                            if ((0x2073U == (0x707fU 
                                             & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                              ,"csrr   %s, %s  ",0,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                              72,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__csr_str.data());
                            } else if ((0x1073U == 
                                        (0x707fU & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                              ,"csrw   %s, %s  ",0,
                                              72,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__csr_str.data(),
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str);
                            } else if ((0x13U == __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)) {
                                VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                              ,"nop                    ",0);
                            } else if ((0U == __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)) {
                                VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                              ,"                       ",0);
                            } else if ((0x33U == (0xfe00707fU 
                                                  & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                              ,"add    %s, %s, %s   ",0,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str);
                            } else if ((0x40000033U 
                                        == (0xfe00707fU 
                                            & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                              ,"sub    %s, %s, %s   ",0,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str);
                            } else if ((0x7033U == 
                                        (0xfe00707fU 
                                         & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                              ,"and    %s, %s, %s   ",0,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str);
                            } else {
                                VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                              ,"or     %s, %s, %s   ",0,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str);
                            }
                        } else if (((((((((0x4033U 
                                           == (0xfe00707fU 
                                               & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)) 
                                          | (0x2033U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                         | (0x3033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                        | (0x2000033U 
                                           == (0xfe00707fU 
                                               & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                       | (0x13U == 
                                          (0x707fU 
                                           & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                      | (0x7013U == 
                                         (0x707fU & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                     | (0x6013U == 
                                        (0x707fU & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                    | (0x4013U == (0x707fU 
                                                   & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)))) {
                            if ((0x4033U == (0xfe00707fU 
                                             & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                              ,"xor    %s, %s, %s   ",0,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str);
                            } else if ((0x2033U == 
                                        (0xfe00707fU 
                                         & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                              ,"slt    %s, %s, %s   ",0,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str);
                            } else if ((0x3033U == 
                                        (0xfe00707fU 
                                         & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                              ,"sltu   %s, %s, %s   ",0,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str);
                            } else if ((0x2000033U 
                                        == (0xfe00707fU 
                                            & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                              ,"mul    %s, %s, %s   ",0,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str);
                            } else if ((0x13U == (0x707fU 
                                                  & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                              ,"addi   %s, %s, 0x%x ",0,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                              12,([&]() {
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__13__inst 
                                                    = __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__13__Vfuncout 
                                                    = 
                                                    (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__13__inst 
                                                     >> 0x14U);
                                            }(), (IData)(__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__13__Vfuncout)));
                            } else if ((0x7013U == 
                                        (0x707fU & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                              ,"andi   %s, %s, 0x%x ",0,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                              12,([&]() {
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__14__inst 
                                                    = __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__14__Vfuncout 
                                                    = 
                                                    (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__14__inst 
                                                     >> 0x14U);
                                            }(), (IData)(__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__14__Vfuncout)));
                            } else if ((0x6013U == 
                                        (0x707fU & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                              ,"ori    %s, %s, 0x%x ",0,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                              12,([&]() {
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__15__inst 
                                                    = __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__15__Vfuncout 
                                                    = 
                                                    (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__15__inst 
                                                     >> 0x14U);
                                            }(), (IData)(__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__15__Vfuncout)));
                            } else {
                                VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                              ,"xori   %s, %s, 0x%x ",0,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                              12,([&]() {
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__16__inst 
                                                    = __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__16__Vfuncout 
                                                    = 
                                                    (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__16__inst 
                                                     >> 0x14U);
                                            }(), (IData)(__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__16__Vfuncout)));
                            }
                        } else if (((((((((0x2013U 
                                           == (0x707fU 
                                               & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)) 
                                          | (0x3013U 
                                             == (0x707fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                         | (0x40005033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                        | (0x5033U 
                                           == (0xfe00707fU 
                                               & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                       | (0x1033U == 
                                          (0xfe00707fU 
                                           & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                      | (0x40005013U 
                                         == (0xfe00707fU 
                                             & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                     | (0x5013U == 
                                        (0xfe00707fU 
                                         & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                    | (0x1013U == (0xfe00707fU 
                                                   & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)))) {
                            if ((0x2013U == (0x707fU 
                                             & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                              ,"slti   %s, %s, 0x%x ",0,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                              12,([&]() {
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__17__inst 
                                                    = __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__17__Vfuncout 
                                                    = 
                                                    (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__17__inst 
                                                     >> 0x14U);
                                            }(), (IData)(__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__17__Vfuncout)));
                            } else if ((0x3013U == 
                                        (0x707fU & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                              ,"sltiu  %s, %s, 0x%x ",0,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                              12,([&]() {
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__18__inst 
                                                    = __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__18__Vfuncout 
                                                    = 
                                                    (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__18__inst 
                                                     >> 0x14U);
                                            }(), (IData)(__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__18__Vfuncout)));
                            } else if ((0x40005033U 
                                        == (0xfe00707fU 
                                            & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                              ,"sra    %s, %s, 0x%x  ",0,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                              5,([&]() {
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__19__inst 
                                                    = __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__19__Vfuncout 
                                                    = 
                                                    (0x1fU 
                                                     & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__19__inst 
                                                        >> 0x14U));
                                            }(), (IData)(__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__19__Vfuncout)));
                            } else if ((0x5033U == 
                                        (0xfe00707fU 
                                         & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                              ,"srl    %s, %s, 0x%x  ",0,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                              5,([&]() {
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__20__inst 
                                                    = __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__20__Vfuncout 
                                                    = 
                                                    (0x1fU 
                                                     & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__20__inst 
                                                        >> 0x14U));
                                            }(), (IData)(__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__20__Vfuncout)));
                            } else if ((0x1033U == 
                                        (0xfe00707fU 
                                         & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                              ,"sll    %s, %s, 0x%x  ",0,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                              5,([&]() {
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__21__inst 
                                                    = __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__21__Vfuncout 
                                                    = 
                                                    (0x1fU 
                                                     & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__21__inst 
                                                        >> 0x14U));
                                            }(), (IData)(__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__21__Vfuncout)));
                            } else if ((0x40005013U 
                                        == (0xfe00707fU 
                                            & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                              ,"srai   %s, %s, 0x%x  ",0,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                              5,([&]() {
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__22__inst 
                                                    = __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__22__Vfuncout 
                                                    = 
                                                    (0x1fU 
                                                     & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__22__inst 
                                                        >> 0x14U));
                                            }(), (IData)(__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__22__Vfuncout)));
                            } else if ((0x5013U == 
                                        (0xfe00707fU 
                                         & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                              ,"srli   %s, %s, 0x%x  ",0,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                              5,([&]() {
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__23__inst 
                                                    = __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__23__Vfuncout 
                                                    = 
                                                    (0x1fU 
                                                     & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__23__inst 
                                                        >> 0x14U));
                                            }(), (IData)(__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__23__Vfuncout)));
                            } else {
                                VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                              ,"slli   %s, %s, 0x%x  ",0,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                              5,([&]() {
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__24__inst 
                                                    = __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__24__Vfuncout 
                                                    = 
                                                    (0x1fU 
                                                     & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__24__inst 
                                                        >> 0x14U));
                                            }(), (IData)(__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_shamt__24__Vfuncout)));
                            }
                        } else if (((((((((0x37U == 
                                           (0x7fU & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)) 
                                          | (0x17U 
                                             == (0x7fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                         | (0x2003U 
                                            == (0x707fU 
                                                & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                        | (0x2023U 
                                           == (0x707fU 
                                               & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                       | (0x6fU == 
                                          (0x7fU & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                      | (0x67U == (0x707fU 
                                                   & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                     | (0x63U == (0x707fU 
                                                  & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) 
                                    | (0x1063U == (0x707fU 
                                                   & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst)))) {
                            if ((0x37U == (0x7fU & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                              ,"lui    %s, 0x%x    ",0,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                              20,([&]() {
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__25__inst 
                                                    = __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__25__Vfuncout 
                                                    = 
                                                    (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__25__inst 
                                                     >> 0xcU);
                                            }(), __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__25__Vfuncout));
                            } else if ((0x17U == (0x7fU 
                                                  & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                              ,"auipc  %s, 0x%x    ",0,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                              20,([&]() {
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__26__inst 
                                                    = __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__26__Vfuncout 
                                                    = 
                                                    (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__26__inst 
                                                     >> 0xcU);
                                            }(), __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_u_sh12__26__Vfuncout));
                            } else if ((0x2003U == 
                                        (0x707fU & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                              ,"lw     %s, 0x%x(%s) ",0,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                              12,([&]() {
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__27__inst 
                                                    = __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__27__Vfuncout 
                                                    = 
                                                    (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__27__inst 
                                                     >> 0x14U);
                                            }(), (IData)(__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__27__Vfuncout)),
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str);
                            } else if ((0x2023U == 
                                        (0x707fU & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                              ,"sw     %s, 0x%x(%s) ",0,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str,
                                              12,([&]() {
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_s__28__inst 
                                                    = __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_s__28__Vfuncout 
                                                    = 
                                                    ((0xfe0U 
                                                      & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_s__28__inst 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_s__28__inst 
                                                           >> 7U)));
                                            }(), (IData)(__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_s__28__Vfuncout)),
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str);
                            } else if ((0x6fU == (0x7fU 
                                                  & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                              ,"jal    %s, 0x%x   ",0,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                              21,([&]() {
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_j__29__inst 
                                                    = __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_j__29__Vfuncout 
                                                    = 
                                                    ((0x100000U 
                                                      & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_j__29__inst 
                                                         >> 0xbU)) 
                                                     | ((0xff000U 
                                                         & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_j__29__inst) 
                                                        | ((0x800U 
                                                            & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_j__29__inst 
                                                               >> 9U)) 
                                                           | ((0x7e0U 
                                                               & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_j__29__inst 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_j__29__inst 
                                                                    >> 0x14U))))));
                                            }(), __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_j__29__Vfuncout));
                            } else if ((0x67U == (0x707fU 
                                                  & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                              ,"jalr   %s, %s, 0x%x ",0,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                              12,([&]() {
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__30__inst 
                                                    = __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__30__Vfuncout 
                                                    = 
                                                    (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__30__inst 
                                                     >> 0x14U);
                                            }(), (IData)(__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_i__30__Vfuncout)));
                            } else if ((0x63U == (0x707fU 
                                                  & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                                VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                              ,"beq    %s, %s, 0x%x",0,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str,
                                              13,([&]() {
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__31__inst 
                                                    = __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__31__Vfuncout 
                                                    = 
                                                    ((0x1000U 
                                                      & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__31__inst 
                                                         >> 0x13U)) 
                                                     | ((0x800U 
                                                         & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__31__inst 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__31__inst 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__31__inst 
                                                                 >> 7U)))));
                                            }(), (IData)(__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__31__Vfuncout)));
                            } else {
                                VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                              ,"bne    %s, %s, 0x%x",0,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                              24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str,
                                              13,([&]() {
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__32__inst 
                                                    = __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                                __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__32__Vfuncout 
                                                    = 
                                                    ((0x1000U 
                                                      & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__32__inst 
                                                         >> 0x13U)) 
                                                     | ((0x800U 
                                                         & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__32__inst 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__32__inst 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__32__inst 
                                                                 >> 7U)))));
                                            }(), (IData)(__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__32__Vfuncout)));
                            }
                        } else if ((0x4063U == (0x707fU 
                                                & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                            VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                          ,"blt    %s, %s, 0x%x",0,
                                          24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                          24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str,
                                          13,([&]() {
                                            __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__33__inst 
                                                = __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                            __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__33__Vfuncout 
                                                = (
                                                   (0x1000U 
                                                    & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__33__inst 
                                                       >> 0x13U)) 
                                                   | ((0x800U 
                                                       & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__33__inst 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__33__inst 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__33__inst 
                                                               >> 7U)))));
                                        }(), (IData)(__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__33__Vfuncout)));
                        } else if ((0x5063U == (0x707fU 
                                                & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                            VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                          ,"bge    %s, %s, 0x%x",0,
                                          24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                          24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str,
                                          13,([&]() {
                                            __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__34__inst 
                                                = __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                            __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__34__Vfuncout 
                                                = (
                                                   (0x1000U 
                                                    & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__34__inst 
                                                       >> 0x13U)) 
                                                   | ((0x800U 
                                                       & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__34__inst 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__34__inst 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__34__inst 
                                                               >> 7U)))));
                                        }(), (IData)(__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__34__Vfuncout)));
                        } else if ((0x6063U == (0x707fU 
                                                & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                            VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                          ,"bltu   %s, %s, 0x%x",0,
                                          24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                          24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str,
                                          13,([&]() {
                                            __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__35__inst 
                                                = __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                            __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__35__Vfuncout 
                                                = (
                                                   (0x1000U 
                                                    & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__35__inst 
                                                       >> 0x13U)) 
                                                   | ((0x800U 
                                                       & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__35__inst 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__35__inst 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__35__inst 
                                                               >> 7U)))));
                                        }(), (IData)(__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__35__Vfuncout)));
                        } else if ((0x7063U == (0x707fU 
                                                & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                            VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                          ,"bgeu   %s, %s, 0x%x",0,
                                          24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                          24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str,
                                          13,([&]() {
                                            __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__36__inst 
                                                = __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst;
                                            __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__36__Vfuncout 
                                                = (
                                                   (0x1000U 
                                                    & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__36__inst 
                                                       >> 0x13U)) 
                                                   | ((0x800U 
                                                       & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__36__inst 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__36__inst 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__36__inst 
                                                               >> 7U)))));
                                        }(), (IData)(__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__imm_b__36__Vfuncout)));
                        } else if ((0xbU == (0x7fU 
                                             & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__inst))) {
                            VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                          ,"cust0 %s, %s, %s, %s",0,
                                          24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rd_str,
                                          24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs1_str,
                                          24,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__rs2_str,
                                          16,(IData)(vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__funct_str));
                        } else {
                            VL_SFORMAT_NX(200,__Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout
                                          ,"illegal inst           ",0);
                        }
                    }(), __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm__12__Vfuncout));
            VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__trace, trace_str);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__trace[0U];
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__trace[0U] 
                = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__11__trace);
        }
    } else {
        __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__37__num = 0x17U;
        __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__37__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__37__trace, trace_str);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__37__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__37__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__37__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__37__char);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__37__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__37__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__38__str, VProcBase_noparam__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__38__trace, trace_str);
    vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__38__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__38__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__38__trace[0U];
    vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__38__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__38__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__38__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__38__trace[0U] 
        = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__38__trace);
    if (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_X) {
        if (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__ctrl__DOT__stall_X) {
            VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__39__str, VProcBase_noparam__ConstPool__CONST_h0dfd4e8e_0);
            VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__39__trace, trace_str);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__39__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__39__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__39__trace[0U];
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__39__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__39__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__39__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__39__trace[0U] 
                = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__39__trace);
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__40__num = 3U;
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__40__char = 0x20U;
            VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__40__trace, trace_str);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__40__trace[0U];
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__40__num)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__40__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__40__char);
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__40__trace[0U] 
                = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__40__trace);
        } else {
            VL_EXTEND_WI(4096,32, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__41__str, 
                         ([&]() {
                        __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst 
                            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__ctrl__DOT__inst_X;
                        __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__Vfuncout 
                            = (((((((((0x2073U == (0x707fU 
                                                   & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst)) 
                                      | (0x1073U == 
                                         (0x707fU & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                     | (0x13U == __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst)) 
                                    | (0x33U == (0xfe00707fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                   | (0x40000033U == 
                                      (0xfe00707fU 
                                       & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                  | (0x7033U == (0xfe00707fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                 | (0x6033U == (0xfe00707fU 
                                                & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                | (0x4033U == (0xfe00707fU 
                                               & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst)))
                                ? ((0x2073U == (0x707fU 
                                                & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                    ? 0x63737272U : 
                                   ((0x1073U == (0x707fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                     ? 0x63737277U : 
                                    ((0x13U == __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst)
                                      ? 0x6e6f7020U
                                      : ((0x33U == 
                                          (0xfe00707fU 
                                           & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                          ? 0x61646420U
                                          : ((0x40000033U 
                                              == (0xfe00707fU 
                                                  & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                              ? 0x73756220U
                                              : ((0x7033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                  ? 0x616e6420U
                                                  : 
                                                 ((0x6033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                   ? 0x6f722020U
                                                   : 0x786f7220U)))))))
                                : (((((((((0x2033U 
                                           == (0xfe00707fU 
                                               & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst)) 
                                          | (0x3033U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                         | (0x2000033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                        | (0x13U == 
                                           (0x707fU 
                                            & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                       | (0x7013U == 
                                          (0x707fU 
                                           & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                      | (0x6013U == 
                                         (0x707fU & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                     | (0x4013U == 
                                        (0x707fU & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                    | (0x2013U == (0x707fU 
                                                   & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst)))
                                    ? ((0x2033U == 
                                        (0xfe00707fU 
                                         & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                        ? 0x736c7420U
                                        : ((0x3033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                            ? 0x736c7475U
                                            : ((0x2000033U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                ? 0x6d756c20U
                                                : (
                                                   (0x13U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                    ? 0x61646469U
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                     ? 0x616e6469U
                                                     : 
                                                    ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                      ? 0x6f726920U
                                                      : 
                                                     ((0x4013U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                       ? 0x786f7269U
                                                       : 0x736c7469U)))))))
                                    : (((((((((0x3013U 
                                               == (0x707fU 
                                                   & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst)) 
                                              | (0x40005033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                             | (0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                            | (0x1033U 
                                               == (0xfe00707fU 
                                                   & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                           | (0x40005013U 
                                              == (0xfe00707fU 
                                                  & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                          | (0x5013U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                         | (0x1013U 
                                            == (0xfe00707fU 
                                                & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                        | (0x37U == 
                                           (0x7fU & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst)))
                                        ? ((0x3013U 
                                            == (0x707fU 
                                                & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                            ? 0x736c7449U
                                            : ((0x40005033U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                ? 0x73726120U
                                                : (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                    ? 0x73726c20U
                                                    : 
                                                   ((0x1033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                     ? 0x736c6c20U
                                                     : 
                                                    ((0x40005013U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                      ? 0x73726169U
                                                      : 
                                                     ((0x5013U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                       ? 0x73726c69U
                                                       : 
                                                      ((0x1013U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                        ? 0x736c6c69U
                                                        : 0x6c756920U)))))))
                                        : (((((((((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst)) 
                                                  | (0x2003U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                                 | (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                                | (0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                               | (0x67U 
                                                  == 
                                                  (0x707fU 
                                                   & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                              | (0x63U 
                                                 == 
                                                 (0x707fU 
                                                  & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                             | (0x1063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))) 
                                            | (0x4063U 
                                               == (0x707fU 
                                                   & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst)))
                                            ? ((0x17U 
                                                == 
                                                (0x7fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                ? 0x61756950U
                                                : (
                                                   (0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                    ? 0x6c772020U
                                                    : 
                                                   ((0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                     ? 0x73772020U
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                      ? 0x6a616c20U
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                       ? 0x6a616c72U
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                        ? 0x62657120U
                                                        : 
                                                       ((0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                         ? 0x626e6520U
                                                         : 0x626c7420U)))))))
                                            : ((0x5063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                ? 0x62676520U
                                                : (
                                                   (0x6063U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                    ? 0x626c7475U
                                                    : 
                                                   ((0x7063U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                     ? 0x62676575U
                                                     : 
                                                    ((0xbU 
                                                      == 
                                                      (0x7fU 
                                                       & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__inst))
                                                      ? 0x63757330U
                                                      : 0x3f3f3f3fU))))))));
                    }(), __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__42__Vfuncout));
            VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__41__trace, trace_str);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__41__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__41__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__41__trace[0U];
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__41__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__41__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__41__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__41__trace[0U] 
                = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__41__trace);
        }
    } else {
        __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__43__num = 4U;
        __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__43__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__43__trace, trace_str);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__43__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__43__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__43__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__43__char);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__43__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__43__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__44__str, VProcBase_noparam__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__44__trace, trace_str);
    vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__44__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__44__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__44__trace[0U];
    vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__44__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__44__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__44__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__44__trace[0U] 
        = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__44__trace);
    if (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_M) {
        if (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__ctrl__DOT__stall_M) {
            VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__45__str, VProcBase_noparam__ConstPool__CONST_h0dfd4e8e_0);
            VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__45__trace, trace_str);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__45__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__45__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__45__trace[0U];
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__45__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__45__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__45__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__45__trace[0U] 
                = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__45__trace);
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__46__num = 3U;
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__46__char = 0x20U;
            VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__46__trace, trace_str);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__46__trace[0U];
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__46__num)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__46__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__46__char);
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__46__trace[0U] 
                = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__46__trace);
        } else {
            VL_EXTEND_WI(4096,32, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__47__str, 
                         ([&]() {
                        __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst 
                            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__ctrl__DOT__inst_M;
                        __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__Vfuncout 
                            = (((((((((0x2073U == (0x707fU 
                                                   & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst)) 
                                      | (0x1073U == 
                                         (0x707fU & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                     | (0x13U == __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst)) 
                                    | (0x33U == (0xfe00707fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                   | (0x40000033U == 
                                      (0xfe00707fU 
                                       & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                  | (0x7033U == (0xfe00707fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                 | (0x6033U == (0xfe00707fU 
                                                & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                | (0x4033U == (0xfe00707fU 
                                               & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst)))
                                ? ((0x2073U == (0x707fU 
                                                & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                    ? 0x63737272U : 
                                   ((0x1073U == (0x707fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                     ? 0x63737277U : 
                                    ((0x13U == __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst)
                                      ? 0x6e6f7020U
                                      : ((0x33U == 
                                          (0xfe00707fU 
                                           & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                          ? 0x61646420U
                                          : ((0x40000033U 
                                              == (0xfe00707fU 
                                                  & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                              ? 0x73756220U
                                              : ((0x7033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                  ? 0x616e6420U
                                                  : 
                                                 ((0x6033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                   ? 0x6f722020U
                                                   : 0x786f7220U)))))))
                                : (((((((((0x2033U 
                                           == (0xfe00707fU 
                                               & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst)) 
                                          | (0x3033U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                         | (0x2000033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                        | (0x13U == 
                                           (0x707fU 
                                            & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                       | (0x7013U == 
                                          (0x707fU 
                                           & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                      | (0x6013U == 
                                         (0x707fU & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                     | (0x4013U == 
                                        (0x707fU & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                    | (0x2013U == (0x707fU 
                                                   & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst)))
                                    ? ((0x2033U == 
                                        (0xfe00707fU 
                                         & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                        ? 0x736c7420U
                                        : ((0x3033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                            ? 0x736c7475U
                                            : ((0x2000033U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                ? 0x6d756c20U
                                                : (
                                                   (0x13U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                    ? 0x61646469U
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                     ? 0x616e6469U
                                                     : 
                                                    ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                      ? 0x6f726920U
                                                      : 
                                                     ((0x4013U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                       ? 0x786f7269U
                                                       : 0x736c7469U)))))))
                                    : (((((((((0x3013U 
                                               == (0x707fU 
                                                   & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst)) 
                                              | (0x40005033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                             | (0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                            | (0x1033U 
                                               == (0xfe00707fU 
                                                   & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                           | (0x40005013U 
                                              == (0xfe00707fU 
                                                  & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                          | (0x5013U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                         | (0x1013U 
                                            == (0xfe00707fU 
                                                & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                        | (0x37U == 
                                           (0x7fU & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst)))
                                        ? ((0x3013U 
                                            == (0x707fU 
                                                & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                            ? 0x736c7449U
                                            : ((0x40005033U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                ? 0x73726120U
                                                : (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                    ? 0x73726c20U
                                                    : 
                                                   ((0x1033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                     ? 0x736c6c20U
                                                     : 
                                                    ((0x40005013U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                      ? 0x73726169U
                                                      : 
                                                     ((0x5013U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                       ? 0x73726c69U
                                                       : 
                                                      ((0x1013U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                        ? 0x736c6c69U
                                                        : 0x6c756920U)))))))
                                        : (((((((((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst)) 
                                                  | (0x2003U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                                 | (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                                | (0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                               | (0x67U 
                                                  == 
                                                  (0x707fU 
                                                   & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                              | (0x63U 
                                                 == 
                                                 (0x707fU 
                                                  & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                             | (0x1063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))) 
                                            | (0x4063U 
                                               == (0x707fU 
                                                   & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst)))
                                            ? ((0x17U 
                                                == 
                                                (0x7fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                ? 0x61756950U
                                                : (
                                                   (0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                    ? 0x6c772020U
                                                    : 
                                                   ((0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                     ? 0x73772020U
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                      ? 0x6a616c20U
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                       ? 0x6a616c72U
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                        ? 0x62657120U
                                                        : 
                                                       ((0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                         ? 0x626e6520U
                                                         : 0x626c7420U)))))))
                                            : ((0x5063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                ? 0x62676520U
                                                : (
                                                   (0x6063U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                    ? 0x626c7475U
                                                    : 
                                                   ((0x7063U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                     ? 0x62676575U
                                                     : 
                                                    ((0xbU 
                                                      == 
                                                      (0x7fU 
                                                       & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__inst))
                                                      ? 0x63757330U
                                                      : 0x3f3f3f3fU))))))));
                    }(), __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__48__Vfuncout));
            VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__47__trace, trace_str);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__47__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__47__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__47__trace[0U];
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__47__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__47__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__47__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__47__trace[0U] 
                = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__47__trace);
        }
    } else {
        __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__49__num = 4U;
        __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__49__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__49__trace, trace_str);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__49__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__49__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__49__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__49__char);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__49__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__49__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__50__str, VProcBase_noparam__ConstPool__CONST_h803d56e6_0);
    VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__50__trace, trace_str);
    vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__50__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__50__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__50__trace[0U];
    vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__50__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__50__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__50__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__50__trace[0U] 
        = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__50__trace);
    if (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__ctrl__DOT__val_W) {
        if (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__ctrl__DOT__stall_W) {
            VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__51__str, VProcBase_noparam__ConstPool__CONST_h0dfd4e8e_0);
            VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__51__trace, trace_str);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__51__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__51__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__51__trace[0U];
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__51__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__51__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__51__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__51__trace[0U] 
                = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__51__trace);
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__52__num = 3U;
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__52__char = 0x20U;
            VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__52__trace, trace_str);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__52__trace[0U];
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__52__num)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__52__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__52__char);
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
            }
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__52__trace[0U] 
                = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__52__trace);
        } else {
            VL_EXTEND_WI(4096,32, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__53__str, 
                         ([&]() {
                        __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst 
                            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__ctrl__DOT__inst_W;
                        __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__Vfuncout 
                            = (((((((((0x2073U == (0x707fU 
                                                   & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst)) 
                                      | (0x1073U == 
                                         (0x707fU & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                     | (0x13U == __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst)) 
                                    | (0x33U == (0xfe00707fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                   | (0x40000033U == 
                                      (0xfe00707fU 
                                       & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                  | (0x7033U == (0xfe00707fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                 | (0x6033U == (0xfe00707fU 
                                                & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                | (0x4033U == (0xfe00707fU 
                                               & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst)))
                                ? ((0x2073U == (0x707fU 
                                                & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                    ? 0x63737272U : 
                                   ((0x1073U == (0x707fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                     ? 0x63737277U : 
                                    ((0x13U == __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst)
                                      ? 0x6e6f7020U
                                      : ((0x33U == 
                                          (0xfe00707fU 
                                           & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                          ? 0x61646420U
                                          : ((0x40000033U 
                                              == (0xfe00707fU 
                                                  & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                              ? 0x73756220U
                                              : ((0x7033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                  ? 0x616e6420U
                                                  : 
                                                 ((0x6033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                   ? 0x6f722020U
                                                   : 0x786f7220U)))))))
                                : (((((((((0x2033U 
                                           == (0xfe00707fU 
                                               & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst)) 
                                          | (0x3033U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                         | (0x2000033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                        | (0x13U == 
                                           (0x707fU 
                                            & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                       | (0x7013U == 
                                          (0x707fU 
                                           & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                      | (0x6013U == 
                                         (0x707fU & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                     | (0x4013U == 
                                        (0x707fU & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                    | (0x2013U == (0x707fU 
                                                   & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst)))
                                    ? ((0x2033U == 
                                        (0xfe00707fU 
                                         & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                        ? 0x736c7420U
                                        : ((0x3033U 
                                            == (0xfe00707fU 
                                                & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                            ? 0x736c7475U
                                            : ((0x2000033U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                ? 0x6d756c20U
                                                : (
                                                   (0x13U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                    ? 0x61646469U
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                     ? 0x616e6469U
                                                     : 
                                                    ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                      ? 0x6f726920U
                                                      : 
                                                     ((0x4013U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                       ? 0x786f7269U
                                                       : 0x736c7469U)))))))
                                    : (((((((((0x3013U 
                                               == (0x707fU 
                                                   & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst)) 
                                              | (0x40005033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                             | (0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                            | (0x1033U 
                                               == (0xfe00707fU 
                                                   & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                           | (0x40005013U 
                                              == (0xfe00707fU 
                                                  & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                          | (0x5013U 
                                             == (0xfe00707fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                         | (0x1013U 
                                            == (0xfe00707fU 
                                                & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                        | (0x37U == 
                                           (0x7fU & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst)))
                                        ? ((0x3013U 
                                            == (0x707fU 
                                                & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                            ? 0x736c7449U
                                            : ((0x40005033U 
                                                == 
                                                (0xfe00707fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                ? 0x73726120U
                                                : (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                    ? 0x73726c20U
                                                    : 
                                                   ((0x1033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                     ? 0x736c6c20U
                                                     : 
                                                    ((0x40005013U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                      ? 0x73726169U
                                                      : 
                                                     ((0x5013U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                       ? 0x73726c69U
                                                       : 
                                                      ((0x1013U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                        ? 0x736c6c69U
                                                        : 0x6c756920U)))))))
                                        : (((((((((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst)) 
                                                  | (0x2003U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                                 | (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                                | (0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                               | (0x67U 
                                                  == 
                                                  (0x707fU 
                                                   & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                              | (0x63U 
                                                 == 
                                                 (0x707fU 
                                                  & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                             | (0x1063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))) 
                                            | (0x4063U 
                                               == (0x707fU 
                                                   & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst)))
                                            ? ((0x17U 
                                                == 
                                                (0x7fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                ? 0x61756950U
                                                : (
                                                   (0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                    ? 0x6c772020U
                                                    : 
                                                   ((0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                     ? 0x73772020U
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                      ? 0x6a616c20U
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                       ? 0x6a616c72U
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                        ? 0x62657120U
                                                        : 
                                                       ((0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                         ? 0x626e6520U
                                                         : 0x626c7420U)))))))
                                            : ((0x5063U 
                                                == 
                                                (0x707fU 
                                                 & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                ? 0x62676520U
                                                : (
                                                   (0x6063U 
                                                    == 
                                                    (0x707fU 
                                                     & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                    ? 0x626c7475U
                                                    : 
                                                   ((0x7063U 
                                                     == 
                                                     (0x707fU 
                                                      & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                     ? 0x62676575U
                                                     : 
                                                    ((0xbU 
                                                      == 
                                                      (0x7fU 
                                                       & __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__inst))
                                                      ? 0x63757330U
                                                      : 0x3f3f3f3fU))))))));
                    }(), __Vfunc_ProcBase_noparam__DOT__v__DOT__tinyrv2__DOT__disasm_tiny__54__Vfuncout));
            VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__53__trace, trace_str);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__53__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__53__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0);
            }
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__53__trace[0U];
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__53__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__53__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__53__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__53__trace[0U] 
                = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_str__53__trace);
        }
    } else {
        __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__55__num = 4U;
        __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__55__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__55__trace, trace_str);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__55__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__55__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__55__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__55__char);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__55__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__vc_trace__DOT__append_chars__55__trace);
    }
}

extern const VlWide<128>/*4095:0*/ VProcBase_noparam__ConstPool__CONST_hf38a1e84_0;
extern const VlWide<128>/*4095:0*/ VProcBase_noparam__ConstPool__CONST_haead36df_0;
extern const VlWide<128>/*4095:0*/ VProcBase_noparam__ConstPool__CONST_h7ed547c1_0;
extern const VlWide<128>/*4095:0*/ VProcBase_noparam__ConstPool__CONST_h89919522_0;

void VProcBase_noparam___024root____Vdpiexp_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__line_trace_TOP(VProcBase_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcBase_noparam___024root____Vdpiexp_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1;
    ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__trace);
    CData/*0:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__val;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__val = 0;
    CData/*0:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__rdy;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__86__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__86__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__86__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__86__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__87__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__87__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__87__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__87__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__87__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__87__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__88__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__88__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__88__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__88__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__89__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__89__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__89__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__89__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__89__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__89__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__90__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__90__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__90__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__90__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__91__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__91__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__91__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__91__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__91__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__91__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__92__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__92__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__92__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__92__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__93__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__93__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__93__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__93__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__93__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__93__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__94__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__94__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__94__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__94__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__95__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__95__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__95__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__95__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__trace);
    CData/*0:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__val;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__val = 0;
    CData/*0:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__rdy;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__97__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__97__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__97__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__97__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__98__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__98__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__98__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__98__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__98__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__98__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__99__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__99__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__99__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__99__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__100__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__100__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__100__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__100__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__100__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__100__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__101__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__101__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__101__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__101__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__102__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__102__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__102__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__102__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__102__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__102__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__103__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__103__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__103__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__103__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__104__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__104__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__104__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__104__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__104__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__104__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_SFORMAT_NX(4096,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__str
                  ,"%x",0,64,(((QData)((IData)(vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__op1_sel_mux_out)) 
                               << 0x20U) | (QData)((IData)(vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__op2_D))));
    VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__str, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__str);
    __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__rdy 
        = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imul_req_rdy_D;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__val 
        = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imul_req_val_D;
    VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__trace, trace_str);
    ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1))))))) {
        ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__rdy) 
         & (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__val))) {
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__86__str, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__str);
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__86__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__86__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__86__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__86__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__86__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__86__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__86__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__86__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__86__trace);
    } else if (((IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__rdy) 
                & (~ (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__val)))) {
        __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__87__num 
            = ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1;
        __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__87__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__87__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__87__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__87__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__87__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__87__char);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__87__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__87__trace);
    } else if (((~ (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__rdy)) 
                & (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__val))) {
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__88__str, VProcBase_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__88__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__88__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__88__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__88__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__88__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__88__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__88__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__88__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__88__trace);
        __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__89__num 
            = (ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__89__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__89__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__89__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__89__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__89__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__89__char);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__89__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__89__trace);
    } else if ((1U & ((~ (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__rdy)) 
                      & (~ (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__val))))) {
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__90__str, VProcBase_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__90__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__90__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__90__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__90__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__90__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__90__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__90__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__90__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__90__trace);
        __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__91__num 
            = (ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__91__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__91__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__91__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__91__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__91__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__91__char);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__91__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__91__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__92__str, VProcBase_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__92__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__92__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__92__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__92__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__92__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__92__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__92__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__92__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__92__trace);
        __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__93__num 
            = (ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__93__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__93__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__93__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__93__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__93__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__93__char);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__93__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__93__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__85__trace);
    VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__94__str, VProcBase_noparam__ConstPool__CONST_h7ed547c1_0);
    VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__94__trace, trace_str);
    vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__94__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__94__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
        = __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__94__trace[0U];
    vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__94__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__94__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__94__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__94__trace[0U] 
        = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__94__trace);
    VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__95__str, VProcBase_noparam__ConstPool__CONST_h89919522_0);
    VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__95__trace, trace_str);
    vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__95__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__95__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0);
    }
    vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
        = __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__95__trace[0U];
    vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
        = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__95__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__95__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__95__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))));
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__95__trace[0U] 
        = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__95__trace);
    VL_SFORMAT_NX(4096,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__str
                  ,"%x",0,32,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul_resp_msg);
    VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__str, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__str);
    __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__rdy 
        = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imul_resp_rdy_X;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__val 
        = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imul_resp_val_X;
    VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__trace, trace_str);
    ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1))))))) {
        ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__rdy) 
         & (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__val))) {
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__97__str, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__str);
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__97__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__97__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__97__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__97__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__97__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__97__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__97__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__97__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__97__trace);
    } else if (((IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__rdy) 
                & (~ (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__val)))) {
        __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__98__num 
            = ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1;
        __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__98__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__98__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__98__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__98__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__98__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__98__char);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__98__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__98__trace);
    } else if (((~ (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__rdy)) 
                & (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__val))) {
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__99__str, VProcBase_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__99__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__99__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__99__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__99__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__99__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__99__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__99__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__99__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__99__trace);
        __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__100__num 
            = (ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__100__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__100__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__100__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__100__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__100__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__100__char);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__100__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__100__trace);
    } else if ((1U & ((~ (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__rdy)) 
                      & (~ (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__val))))) {
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__101__str, VProcBase_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__101__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__101__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__101__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__101__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__101__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__101__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__101__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__101__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__101__trace);
        __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__102__num 
            = (ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__102__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__102__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__102__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__102__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__102__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__102__char);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__102__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__102__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__103__str, VProcBase_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__103__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__103__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__103__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__103__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__103__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__103__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__103__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__103__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_str__103__trace);
        __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__104__num 
            = (ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__104__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__104__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__104__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__104__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__104__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__104__char);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__104__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_chars__104__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__96__trace);
}

void VProcBase_noparam___024root____Vdpiexp_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__line_trace_TOP(VProcBase_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcBase_noparam___024root____Vdpiexp_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__type_str;
    ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__type_str = 0;
    IData/*31:0*/ ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1;
    ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__trace);
    CData/*0:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__val;
    __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__val = 0;
    CData/*0:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__rdy;
    __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__106__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__106__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__106__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__106__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__107__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__107__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__107__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__107__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__107__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__107__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__108__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__108__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__108__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__108__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__109__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__109__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__109__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__109__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__109__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__109__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__110__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__110__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__110__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__110__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__111__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__111__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__111__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__111__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__111__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__111__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__112__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__112__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__112__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__112__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__113__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__113__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__113__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__113__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__113__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__113__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__type_str 
        = ((0U == (0xfU & (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[2U] 
                           >> 0xaU))) ? 0x7264U : (
                                                   (1U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                                        >> 0xaU)))
                                                    ? 0x7772U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT____Vcellout__imem_queue__deq_msg[2U] 
                                                         >> 0xaU)))
                                                     ? 0x776eU
                                                     : 0x3f3fU)));
    VL_SFORMAT_NX(4096,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__str
                  ,"%s",0,16,ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__str, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__str);
    __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__rdy 
        = vlSymsp->TOP.imem_reqstream_rdy;
    __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__val 
        = vlSymsp->TOP.imem_reqstream_val;
    VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__trace, trace_str);
    ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1))))))) {
        ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__rdy) 
         & (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__val))) {
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__106__str, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__str);
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__106__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__106__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__106__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__106__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__106__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__106__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__106__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__106__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__106__trace);
    } else if (((IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__rdy) 
                & (~ (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__val)))) {
        __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__107__num 
            = ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1;
        __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__107__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__107__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__107__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__107__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__107__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__107__char);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__107__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__107__trace);
    } else if (((~ (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__rdy)) 
                & (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__val))) {
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__108__str, VProcBase_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__108__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__108__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__108__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__108__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__108__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__108__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__108__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__108__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__108__trace);
        __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__109__num 
            = (ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__109__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__109__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__109__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__109__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__109__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__109__char);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__109__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__109__trace);
    } else if ((1U & ((~ (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__rdy)) 
                      & (~ (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__val))))) {
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__110__str, VProcBase_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__110__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__110__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__110__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__110__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__110__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__110__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__110__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__110__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__110__trace);
        __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__111__num 
            = (ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__111__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__111__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__111__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__111__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__111__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__111__char);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__111__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__111__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__112__str, VProcBase_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__112__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__112__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__112__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__112__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__112__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__112__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__112__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__112__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_str__112__trace);
        __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__113__num 
            = (ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__113__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__113__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__113__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__113__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__113__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__113__char);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__113__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_chars__113__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__105__trace);
}

void VProcBase_noparam___024root____Vdpiexp_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__line_trace_TOP(VProcBase_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcBase_noparam___024root____Vdpiexp_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__type_str;
    ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__type_str = 0;
    IData/*31:0*/ ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1;
    ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__trace);
    CData/*0:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__val;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__val = 0;
    CData/*0:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__rdy;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__115__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__115__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__115__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__115__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__116__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__116__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__116__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__116__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__116__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__116__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__117__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__117__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__117__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__117__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__118__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__118__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__118__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__118__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__118__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__118__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__119__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__119__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__119__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__119__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__120__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__120__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__120__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__120__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__120__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__120__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__121__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__121__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__121__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__121__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__122__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__122__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__122__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__122__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__122__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__122__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__type_str 
        = ((0U == (0xfU & (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                           >> 0xaU))) ? 0x7264U : (
                                                   (1U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                                        >> 0xaU)))
                                                    ? 0x7772U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                                                         >> 0xaU)))
                                                     ? 0x776eU
                                                     : 0x3f3fU)));
    VL_SFORMAT_NX(4096,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__str
                  ,"%s",0,16,ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__str, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__str);
    __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__rdy 
        = vlSymsp->TOP.dmem_reqstream_rdy;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__val 
        = vlSymsp->TOP.dmem_reqstream_val;
    VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__trace, trace_str);
    ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1))))))) {
        ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__rdy) 
         & (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__val))) {
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__115__str, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__str);
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__115__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__115__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__115__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__115__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__115__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__115__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__115__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__115__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__115__trace);
    } else if (((IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__rdy) 
                & (~ (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__val)))) {
        __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__116__num 
            = ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1;
        __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__116__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__116__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__116__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__116__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__116__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__116__char);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__116__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__116__trace);
    } else if (((~ (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__rdy)) 
                & (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__val))) {
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__117__str, VProcBase_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__117__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__117__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__117__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__117__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__117__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__117__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__117__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__117__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__117__trace);
        __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__118__num 
            = (ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__118__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__118__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__118__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__118__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__118__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__118__char);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__118__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__118__trace);
    } else if ((1U & ((~ (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__rdy)) 
                      & (~ (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__val))))) {
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__119__str, VProcBase_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__119__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__119__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__119__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__119__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__119__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__119__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__119__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__119__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__119__trace);
        __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__120__num 
            = (ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__120__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__120__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__120__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__120__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__120__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__120__char);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__120__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__120__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__121__str, VProcBase_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__121__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__121__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__121__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__121__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__121__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__121__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__121__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__121__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_str__121__trace);
        __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__122__num 
            = (ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__122__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__122__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__122__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__122__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__122__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__122__char);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__122__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_chars__122__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__114__trace);
}

void VProcBase_noparam___024root____Vdpiexp_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__line_trace_TOP(VProcBase_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcBase_noparam___024root____Vdpiexp_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__type_str;
    ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__type_str = 0;
    IData/*31:0*/ ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1;
    ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__trace);
    CData/*0:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__val;
    __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__val = 0;
    CData/*0:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__rdy;
    __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__124__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__124__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__124__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__124__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__125__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__125__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__125__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__125__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__125__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__125__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__126__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__126__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__126__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__126__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__127__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__127__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__127__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__127__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__127__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__127__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__128__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__128__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__128__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__128__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__129__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__129__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__129__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__129__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__129__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__129__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__130__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__130__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__130__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__130__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__131__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__131__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__131__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__131__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__131__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__131__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__type_str 
        = ((0U == (0xfU & (IData)((vlSymsp->TOP.imem_respstream_msg 
                                   >> 0x2cU)))) ? 0x7264U
            : ((1U == (0xfU & (IData)((vlSymsp->TOP.imem_respstream_msg 
                                       >> 0x2cU))))
                ? 0x7772U : ((2U == (0xfU & (IData)(
                                                    (vlSymsp->TOP.imem_respstream_msg 
                                                     >> 0x2cU))))
                              ? 0x776eU : 0x3f3fU)));
    VL_SFORMAT_NX(4096,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__str
                  ,"%s",0,16,ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__str, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__str);
    __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__rdy 
        = vlSymsp->TOP.imem_respstream_rdy;
    __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__val 
        = vlSymsp->TOP.imem_respstream_val;
    VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__trace, trace_str);
    ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1))))))) {
        ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__rdy) 
         & (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__val))) {
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__124__str, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__str);
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__124__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__124__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__124__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__124__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__124__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__124__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__124__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__124__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__124__trace);
    } else if (((IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__rdy) 
                & (~ (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__val)))) {
        __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__125__num 
            = ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1;
        __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__125__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__125__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__125__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__125__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__125__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__125__char);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__125__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__125__trace);
    } else if (((~ (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__rdy)) 
                & (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__val))) {
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__126__str, VProcBase_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__126__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__126__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__126__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__126__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__126__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__126__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__126__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__126__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__126__trace);
        __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__127__num 
            = (ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__127__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__127__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__127__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__127__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__127__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__127__char);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__127__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__127__trace);
    } else if ((1U & ((~ (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__rdy)) 
                      & (~ (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__val))))) {
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__128__str, VProcBase_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__128__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__128__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__128__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__128__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__128__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__128__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__128__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__128__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__128__trace);
        __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__129__num 
            = (ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__129__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__129__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__129__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__129__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__129__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__129__char);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__129__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__129__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__130__str, VProcBase_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__130__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__130__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__130__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__130__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__130__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__130__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__130__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__130__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_str__130__trace);
        __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__131__num 
            = (ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__131__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__131__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__131__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__131__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__131__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__131__char);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__131__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_chars__131__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__123__trace);
}

void VProcBase_noparam___024root____Vdpiexp_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__line_trace_TOP(VProcBase_noparam__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcBase_noparam___024root____Vdpiexp_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__type_str;
    ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__type_str = 0;
    IData/*31:0*/ ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1;
    ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__trace);
    CData/*0:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__val;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__val = 0;
    CData/*0:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__rdy;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__133__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__133__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__133__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__133__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__134__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__134__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__134__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__134__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__134__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__134__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__135__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__135__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__135__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__135__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__136__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__136__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__136__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__136__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__136__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__136__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__137__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__137__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__137__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__137__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__138__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__138__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__138__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__138__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__138__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__138__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__139__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__139__trace);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__139__str;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__139__str);
    VlWide<128>/*4095:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__140__trace;
    VL_ZERO_W(4096, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__140__trace);
    CData/*7:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__140__char;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__140__char = 0;
    IData/*31:0*/ __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__140__num;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__140__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__type_str 
        = ((0U == (0xfU & (IData)((vlSymsp->TOP.dmem_respstream_msg 
                                   >> 0x2cU)))) ? 0x7264U
            : ((1U == (0xfU & (IData)((vlSymsp->TOP.dmem_respstream_msg 
                                       >> 0x2cU))))
                ? 0x7772U : ((2U == (0xfU & (IData)(
                                                    (vlSymsp->TOP.dmem_respstream_msg 
                                                     >> 0x2cU))))
                              ? 0x776eU : 0x3f3fU)));
    VL_SFORMAT_NX(4096,vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__str
                  ,"%s",0,16,ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__str, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__str);
    __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__rdy 
        = vlSymsp->TOP.dmem_respstream_rdy;
    __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__val 
        = vlSymsp->TOP.dmem_respstream_val;
    VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__trace, trace_str);
    ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1))))))) {
        ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__rdy) 
         & (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__val))) {
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__133__str, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__str);
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__133__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__133__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__133__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__133__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__133__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__133__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__133__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__133__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__133__trace);
    } else if (((IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__rdy) 
                & (~ (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__val)))) {
        __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__134__num 
            = ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1;
        __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__134__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__134__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__134__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__134__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__134__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__134__char);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__134__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__134__trace);
    } else if (((~ (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__rdy)) 
                & (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__val))) {
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__135__str, VProcBase_noparam__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__135__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__135__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__135__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__135__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__135__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__135__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__135__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__135__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__135__trace);
        __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__136__num 
            = (ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__136__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__136__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__136__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__136__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__136__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__136__char);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__136__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__136__trace);
    } else if ((1U & ((~ (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__rdy)) 
                      & (~ (IData)(__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__val))))) {
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__137__str, VProcBase_noparam__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__137__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__137__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__137__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__137__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__137__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__137__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__137__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__137__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__137__trace);
        __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__138__num 
            = (ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__138__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__138__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__138__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__138__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__138__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__138__char);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__138__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__138__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__139__str, VProcBase_noparam__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__139__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__139__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__139__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__139__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__139__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__139__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__139__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__139__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_str__139__trace);
        __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__140__num 
            = (ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__140__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__140__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__trace);
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__140__trace[0U];
        vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__140__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__140__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__140__char);
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__140__trace[0U] 
            = vlSymsp->TOP.ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__trace, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_chars__140__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_ProcBase_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__132__trace);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VProcBase_noparam___024root___dump_triggers__ico(VProcBase_noparam___024root* vlSelf);
#endif  // VL_DEBUG

void VProcBase_noparam___024root___eval_triggers__ico(VProcBase_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcBase_noparam___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
    vlSelf->__VicoTriggered.set(1U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VProcBase_noparam___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VProcBase_noparam___024root___dump_triggers__act(VProcBase_noparam___024root* vlSelf);
#endif  // VL_DEBUG

void VProcBase_noparam___024root___eval_triggers__act(VProcBase_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcBase_noparam___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(2U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((IData)(vlSelf->reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0)))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VProcBase_noparam___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VProcBase_noparam___024root___nba_sequent__TOP__1(VProcBase_noparam___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VProcBase_noparam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcBase_noparam___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state 
        = ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__next_state));
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)) 
                               << 2U) | (((1U == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)))))))) {
        if ((((2U == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)) 
              << 2U) | (((1U == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state)) 
                         << 1U) | (0U == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                VL_WRITEF_NX("[%0t] %%Error: IntMulAlt.v:250: Assertion failed in %NProcBase_noparam.v.dpath.imul.ctrl: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state));
                VL_STOP_MT("lab1_imul/IntMulAlt.v", 250, "");
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF_NX("[%0t] %%Error: IntMulAlt.v:250: Assertion failed in %NProcBase_noparam.v.dpath.imul.ctrl: unique case, but none matched for '2'h%x'\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),2,(IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state));
            VL_STOP_MT("lab1_imul/IntMulAlt.v", 250, "");
        }
    }
    vlSelf->ProcBase_noparam__DOT__v__DOT__imul_req_rdy_D = 0U;
    if ((0U == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        vlSelf->ProcBase_noparam__DOT__v__DOT__imul_req_rdy_D = 1U;
    }
    vlSelf->ProcBase_noparam__DOT__v__DOT__imul_resp_val_X = 0U;
    if ((0U != (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
        if ((1U != (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
            if ((2U == (IData)(vlSelf->ProcBase_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__ctrl__DOT__state))) {
                vlSelf->ProcBase_noparam__DOT__v__DOT__imul_resp_val_X = 1U;
            }
        }
    }
}
