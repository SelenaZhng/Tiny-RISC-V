// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCacheBase___05Fp_num_banks_1.h for the primary calling header

#include "VCacheBase___05Fp_num_banks_1__pch.h"
#include "VCacheBase___05Fp_num_banks_1__Syms.h"
#include "VCacheBase___05Fp_num_banks_1___024root.h"

extern const VlWide<128>/*4095:0*/ VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h7ed547c1_0;
extern const VlWide<128>/*4095:0*/ VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h296ef16f_0;
extern const VlWide<128>/*4095:0*/ VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h56610484_0;
extern const VlWide<128>/*4095:0*/ VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h0566f112_0;
extern const VlWide<128>/*4095:0*/ VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h777355b7_0;
extern const VlWide<128>/*4095:0*/ VCacheBase___05Fp_num_banks_1__ConstPool__CONST_hed8640c4_0;
extern const VlWide<128>/*4095:0*/ VCacheBase___05Fp_num_banks_1__ConstPool__CONST_hb98e3b6b_0;
extern const VlWide<128>/*4095:0*/ VCacheBase___05Fp_num_banks_1__ConstPool__CONST_ha1593b7e_0;
extern const VlWide<128>/*4095:0*/ VCacheBase___05Fp_num_banks_1__ConstPool__CONST_he2533c7c_0;
extern const VlWide<128>/*4095:0*/ VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h97a3ee4e_0;
extern const VlWide<128>/*4095:0*/ VCacheBase___05Fp_num_banks_1__ConstPool__CONST_hd61c3baa_0;
extern const VlWide<128>/*4095:0*/ VCacheBase___05Fp_num_banks_1__ConstPool__CONST_hf42f8d5f_0;
extern const VlWide<128>/*4095:0*/ VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h17de8ffe_0;
extern const VlWide<128>/*4095:0*/ VCacheBase___05Fp_num_banks_1__ConstPool__CONST_hdbedbe02_0;
extern const VlWide<128>/*4095:0*/ VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h77bdfd62_0;
extern const VlWide<128>/*4095:0*/ VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h62af43b0_0;
extern const VlWide<128>/*4095:0*/ VCacheBase___05Fp_num_banks_1__ConstPool__CONST_he3f441ec_0;
extern const VlWide<128>/*4095:0*/ VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h9e441b29_0;
extern const VlWide<128>/*4095:0*/ VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h8e148618_0;
extern const VlWide<128>/*4095:0*/ VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h1843b710_0;
extern const VlWide<128>/*4095:0*/ VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h2fa89459_0;
extern const VlWide<128>/*4095:0*/ VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h89919522_0;

void VCacheBase___05Fp_num_banks_1___024root____Vdpiexp_CacheBase___05Fp_num_banks_1__DOT__v__DOT__line_trace_TOP(VCacheBase___05Fp_num_banks_1__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheBase___05Fp_num_banks_1___024root____Vdpiexp_CacheBase___05Fp_num_banks_1__DOT__v__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0;
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 0;
    IData/*31:0*/ CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 = 0;
    IData/*31:0*/ CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1;
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__14__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__14__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__14__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__14__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__15__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__15__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__15__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__15__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__16__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__16__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__16__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__16__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__17__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__17__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__17__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__17__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__18__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__18__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__18__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__18__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__19__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__19__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__19__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__19__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__24__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__24__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__24__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__24__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__25__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__25__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__25__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__25__str);
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h7ed547c1_0);
    VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__trace, trace_str);
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
    }
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
        = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__trace[0U];
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
        = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__trace[0U] 
        = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__trace);
    if ((0x10U & (IData)(vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h296ef16f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__trace);
    } else if ((8U & (IData)(vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
        if ((4U & (IData)(vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h296ef16f_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__trace);
        } else if ((2U & (IData)(vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
                VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h56610484_0);
                VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__trace, trace_str);
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                    CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
                }
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__trace[0U];
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__trace, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                    CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__trace[0U] 
                    = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
                VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__trace);
            } else {
                VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h0566f112_0);
                VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__trace, trace_str);
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                    CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
                }
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__trace[0U];
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__trace, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                    CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__trace[0U] 
                    = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
                VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__trace);
            }
        } else if ((1U & (IData)(vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h777355b7_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_hed8640c4_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__trace);
        }
    } else if ((4U & (IData)(vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
        if ((2U & (IData)(vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
                VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_hb98e3b6b_0);
                VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__trace, trace_str);
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                    CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
                }
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__trace[0U];
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__trace, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                    CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__trace[0U] 
                    = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
                VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__trace);
            } else {
                VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_ha1593b7e_0);
                VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__trace, trace_str);
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                    CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
                }
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__trace[0U];
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__trace, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                    CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__trace[0U] 
                    = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
                VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__trace);
            }
        } else if ((1U & (IData)(vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_he2533c7c_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h97a3ee4e_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__trace);
        }
    } else if ((2U & (IData)(vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
        if ((1U & (IData)(vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_hd61c3baa_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_hf42f8d5f_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__trace);
        }
    } else if ((1U & (IData)(vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h17de8ffe_0);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__14__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_hdbedbe02_0);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__14__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__14__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__14__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__14__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__14__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__14__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__14__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__14__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__14__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__15__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h77bdfd62_0);
    VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__15__trace, trace_str);
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__15__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__15__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
    }
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
        = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__15__trace[0U];
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
        = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__15__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__15__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__15__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__15__trace[0U] 
        = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__15__trace);
    if ((1U == (IData)(vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
        if (((1U == (IData)(vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state)) 
             & (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
                [(0xfU & (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__cachereq_addr_reg_out 
                          >> 4U))] & (IData)(vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__tag_match)))) {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__16__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h62af43b0_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__16__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__16__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__16__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__16__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__16__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__16__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__16__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__16__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__16__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__17__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_he3f441ec_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__17__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__17__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__17__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__17__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__17__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__17__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__17__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__17__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__17__trace);
        }
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__18__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h77bdfd62_0);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__18__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__18__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__18__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__18__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__18__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__18__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__18__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__18__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__18__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__19__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h9e441b29_0);
    VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__19__trace, trace_str);
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__19__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__19__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
    }
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
        = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__19__trace[0U];
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
        = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__19__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__19__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__19__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__19__trace[0U] 
        = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__19__trace);
    if (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
        [0U]) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__str
                      ,"%x",0,8,(0xffU & vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem
                                 [0U]));
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace);
        if (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_bits__DOT__rfile
            [0U]) {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h8e148618_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h77bdfd62_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace);
        }
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h1843b710_0);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace);
    }
    if (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
        [1U]) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__str
                      ,"%x",0,8,(0xffU & vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem
                                 [1U]));
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace);
        if (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_bits__DOT__rfile
            [1U]) {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h8e148618_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h77bdfd62_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace);
        }
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h1843b710_0);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace);
    }
    if (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
        [2U]) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__str
                      ,"%x",0,8,(0xffU & vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem
                                 [2U]));
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace);
        if (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_bits__DOT__rfile
            [2U]) {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h8e148618_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h77bdfd62_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace);
        }
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h1843b710_0);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace);
    }
    if (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
        [3U]) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__str
                      ,"%x",0,8,(0xffU & vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem
                                 [3U]));
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace);
        if (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_bits__DOT__rfile
            [3U]) {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h8e148618_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h77bdfd62_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace);
        }
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h1843b710_0);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace);
    }
    if (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
        [4U]) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__str
                      ,"%x",0,8,(0xffU & vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem
                                 [4U]));
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace);
        if (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_bits__DOT__rfile
            [4U]) {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h8e148618_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h77bdfd62_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace);
        }
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h1843b710_0);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace);
    }
    if (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
        [5U]) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__str
                      ,"%x",0,8,(0xffU & vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem
                                 [5U]));
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace);
        if (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_bits__DOT__rfile
            [5U]) {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h8e148618_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h77bdfd62_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace);
        }
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h1843b710_0);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace);
    }
    if (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
        [6U]) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__str
                      ,"%x",0,8,(0xffU & vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem
                                 [6U]));
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace);
        if (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_bits__DOT__rfile
            [6U]) {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h8e148618_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h77bdfd62_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace);
        }
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h1843b710_0);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace);
    }
    if (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
        [7U]) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__str
                      ,"%x",0,8,(0xffU & vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem
                                 [7U]));
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace);
        if (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_bits__DOT__rfile
            [7U]) {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h8e148618_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h77bdfd62_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace);
        }
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h1843b710_0);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace);
    }
    if (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
        [8U]) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__str
                      ,"%x",0,8,(0xffU & vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem
                                 [8U]));
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace);
        if (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_bits__DOT__rfile
            [8U]) {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h8e148618_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h77bdfd62_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace);
        }
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h1843b710_0);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace);
    }
    if (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
        [9U]) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__str
                      ,"%x",0,8,(0xffU & vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem
                                 [9U]));
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace);
        if (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_bits__DOT__rfile
            [9U]) {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h8e148618_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h77bdfd62_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace);
        }
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h1843b710_0);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace);
    }
    if (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
        [0xaU]) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__str
                      ,"%x",0,8,(0xffU & vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem
                                 [0xaU]));
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace);
        if (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_bits__DOT__rfile
            [0xaU]) {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h8e148618_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h77bdfd62_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace);
        }
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h1843b710_0);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace);
    }
    if (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
        [0xbU]) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__str
                      ,"%x",0,8,(0xffU & vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem
                                 [0xbU]));
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace);
        if (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_bits__DOT__rfile
            [0xbU]) {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h8e148618_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h77bdfd62_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace);
        }
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h1843b710_0);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace);
    }
    if (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
        [0xcU]) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__str
                      ,"%x",0,8,(0xffU & vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem
                                 [0xcU]));
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace);
        if (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_bits__DOT__rfile
            [0xcU]) {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h8e148618_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h77bdfd62_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace);
        }
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h1843b710_0);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace);
    }
    if (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
        [0xdU]) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__str
                      ,"%x",0,8,(0xffU & vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem
                                 [0xdU]));
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace);
        if (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_bits__DOT__rfile
            [0xdU]) {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h8e148618_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h77bdfd62_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace);
        }
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h1843b710_0);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace);
    }
    if (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
        [0xeU]) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__str
                      ,"%x",0,8,(0xffU & vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem
                                 [0xeU]));
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace);
        if (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_bits__DOT__rfile
            [0xeU]) {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h8e148618_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h77bdfd62_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace);
        }
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h1843b710_0);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace);
    }
    if (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__valid_bits__DOT__rfile
        [0xfU]) {
        VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__str
                      ,"%x",0,8,(0xffU & vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__dpath__DOT__tag_array__DOT__mem
                                 [0xfU]));
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__str);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__20__trace);
        if (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__dirty_bits__DOT__rfile
            [0xfU]) {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h8e148618_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__21__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h77bdfd62_0);
            VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace, trace_str);
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace[0U];
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace[0U] 
                = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__22__trace);
        }
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h1843b710_0);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, trace_str);
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U];
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace[0U] 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__23__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__24__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h2fa89459_0);
    VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__24__trace, trace_str);
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__24__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__24__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
    }
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
        = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__24__trace[0U];
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
        = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__24__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__24__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__24__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__24__trace[0U] 
        = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__24__trace);
    VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__25__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h89919522_0);
    VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__25__trace, trace_str);
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__25__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__25__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
    }
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
        = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__25__trace[0U];
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
        = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__25__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__25__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__25__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__25__trace[0U] 
        = CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__25__trace);
}

extern const VlWide<128>/*4095:0*/ VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h0dfd4e8e_0;
extern const VlWide<128>/*4095:0*/ VCacheBase___05Fp_num_banks_1__ConstPool__CONST_hf38a1e84_0;
extern const VlWide<128>/*4095:0*/ VCacheBase___05Fp_num_banks_1__ConstPool__CONST_haead36df_0;

void VCacheBase___05Fp_num_banks_1___024root____Vdpiexp_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__line_trace_TOP(VCacheBase___05Fp_num_banks_1__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheBase___05Fp_num_banks_1___024root____Vdpiexp_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__type_str;
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__type_str = 0;
    IData/*31:0*/ CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__trace);
    CData/*0:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__val;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__val = 0;
    CData/*0:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__rdy;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__41__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__41__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__41__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__41__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__42__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__42__trace);
    CData/*7:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__42__char;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__42__char = 0;
    IData/*31:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__42__num;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__42__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__43__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__43__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__43__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__43__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__44__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__44__trace);
    CData/*7:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__44__char;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__44__char = 0;
    IData/*31:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__44__num;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__44__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__45__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__45__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__45__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__45__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__46__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__46__trace);
    CData/*7:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__46__char;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__46__char = 0;
    IData/*31:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__46__num;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__46__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__47__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__47__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__47__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__47__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__48__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__48__trace);
    CData/*7:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__48__char;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__48__char = 0;
    IData/*31:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__48__num;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__48__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__type_str 
        = ((0U == (0xfU & (vlSymsp->TOP.proc2cache_reqstream_msg[2U] 
                           >> 0xaU))) ? 0x7264U : (
                                                   (1U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.proc2cache_reqstream_msg[2U] 
                                                        >> 0xaU)))
                                                    ? 0x7772U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.proc2cache_reqstream_msg[2U] 
                                                         >> 0xaU)))
                                                     ? 0x776eU
                                                     : 0x3f3fU)));
    VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__str
                  ,"%s",0,16,CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__str, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__str);
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__rdy 
        = vlSymsp->TOP.proc2cache_reqstream_rdy;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__val 
        = vlSymsp->TOP.proc2cache_reqstream_val;
    VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__trace, trace_str);
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__rdy) 
         & (IData)(__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__41__str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__str);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__41__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__trace);
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__41__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__41__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__41__trace[0U];
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__41__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__41__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__41__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__41__trace[0U] 
            = vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__41__trace);
    } else if (((IData)(__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__rdy) 
                & (~ (IData)(__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__val)))) {
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__42__num 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__42__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__42__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__trace);
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__42__trace[0U];
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__42__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__42__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__42__char);
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__42__trace[0U] 
            = vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__42__trace);
    } else if (((~ (IData)(__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__rdy)) 
                & (IData)(__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__43__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__43__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__trace);
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__43__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__43__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__43__trace[0U];
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__43__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__43__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__43__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__43__trace[0U] 
            = vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__43__trace);
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__44__num 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__44__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__44__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__trace);
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__44__trace[0U];
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__44__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__44__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__44__char);
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__44__trace[0U] 
            = vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__44__trace);
    } else if ((1U & ((~ (IData)(__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__rdy)) 
                      & (~ (IData)(__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__val))))) {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__45__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__45__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__trace);
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__45__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__45__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__45__trace[0U];
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__45__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__45__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__45__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__45__trace[0U] 
            = vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__45__trace);
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__46__num 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__46__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__46__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__trace);
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__46__trace[0U];
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__46__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__46__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__46__char);
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__46__trace[0U] 
            = vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__46__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__47__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__47__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__trace);
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__47__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__47__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__47__trace[0U];
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__47__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__47__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__47__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__47__trace[0U] 
            = vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__47__trace);
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__48__num 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__48__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__48__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__trace);
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__48__trace[0U];
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__48__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__48__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__48__char);
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__48__trace[0U] 
            = vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__48__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__40__trace);
}

void VCacheBase___05Fp_num_banks_1___024root____Vdpiexp_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__line_trace_TOP(VCacheBase___05Fp_num_banks_1__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheBase___05Fp_num_banks_1___024root____Vdpiexp_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__type_str;
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__type_str = 0;
    IData/*31:0*/ CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1;
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace);
    CData/*0:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__val;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__val = 0;
    CData/*0:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__rdy;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__50__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__50__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__50__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__50__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__51__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__51__trace);
    CData/*7:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__51__char;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__51__char = 0;
    IData/*31:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__51__num;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__51__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__52__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__52__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__52__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__52__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__53__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__53__trace);
    CData/*7:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__53__char;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__53__char = 0;
    IData/*31:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__53__num;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__53__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__54__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__54__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__54__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__54__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__55__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__55__trace);
    CData/*7:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__55__char;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__55__char = 0;
    IData/*31:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__55__num;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__55__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__56__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__56__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__56__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__56__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__57__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__57__trace);
    CData/*7:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__57__char;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__57__char = 0;
    IData/*31:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__57__num;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__57__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__type_str 
        = ((0U == (IData)(vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cacheresp_type))
            ? 0x7264U : ((1U == (IData)(vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cacheresp_type))
                          ? 0x7772U : ((2U == (IData)(vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cacheresp_type))
                                        ? 0x776eU : 0x3f3fU)));
    VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__str
                  ,"%s",0,16,CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__str, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__str);
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__rdy 
        = vlSymsp->TOP.proc2cache_respstream_rdy;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__val 
        = vlSymsp->TOP.proc2cache_respstream_val;
    VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace, trace_str);
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1))))))) {
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__rdy) 
         & (IData)(__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__50__str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__str);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__50__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace);
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__50__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__50__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__50__trace[0U];
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__50__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__50__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__50__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__50__trace[0U] 
            = vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__50__trace);
    } else if (((IData)(__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__rdy) 
                & (~ (IData)(__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__val)))) {
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__51__num 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1;
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__51__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__51__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace);
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__51__trace[0U];
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__51__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__51__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__51__char);
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__51__trace[0U] 
            = vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__51__trace);
    } else if (((~ (IData)(__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__rdy)) 
                & (IData)(__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__52__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__52__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace);
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__52__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__52__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__52__trace[0U];
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__52__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__52__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__52__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__52__trace[0U] 
            = vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__52__trace);
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__53__num 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__53__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__53__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace);
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__53__trace[0U];
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__53__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__53__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__53__char);
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__53__trace[0U] 
            = vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__53__trace);
    } else if ((1U & ((~ (IData)(__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__rdy)) 
                      & (~ (IData)(__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__val))))) {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__54__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__54__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace);
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__54__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__54__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__54__trace[0U];
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__54__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__54__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__54__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__54__trace[0U] 
            = vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__54__trace);
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__55__num 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__55__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__55__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace);
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__55__trace[0U];
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__55__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__55__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__55__char);
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__55__trace[0U] 
            = vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__55__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__56__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__56__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace);
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__56__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__56__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__56__trace[0U];
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__56__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__56__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__56__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__56__trace[0U] 
            = vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__56__trace);
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__57__num 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__57__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__57__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace);
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__57__trace[0U];
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__57__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__57__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__57__char);
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__57__trace[0U] 
            = vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__57__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__49__trace);
}

void VCacheBase___05Fp_num_banks_1___024root____Vdpiexp_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__line_trace_TOP(VCacheBase___05Fp_num_banks_1__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheBase___05Fp_num_banks_1___024root____Vdpiexp_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__type_str;
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__type_str = 0;
    IData/*31:0*/ CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace);
    CData/*0:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__val;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__val = 0;
    CData/*0:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__rdy;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__59__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__59__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__59__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__59__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__60__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__60__trace);
    CData/*7:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__60__char;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__60__char = 0;
    IData/*31:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__60__num;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__60__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__61__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__61__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__61__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__61__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__62__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__62__trace);
    CData/*7:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__62__char;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__62__char = 0;
    IData/*31:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__62__num;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__62__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__63__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__63__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__63__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__63__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__64__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__64__trace);
    CData/*7:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__64__char;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__64__char = 0;
    IData/*31:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__64__num;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__64__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__65__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__65__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__65__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__65__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__66__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__66__trace);
    CData/*7:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__66__char;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__66__char = 0;
    IData/*31:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__66__num;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__66__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__type_str 
        = ((0U == (0xfU & (vlSymsp->TOP.cache2mem_reqstream_msg[5U] 
                           >> 0xcU))) ? 0x7264U : (
                                                   (1U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.cache2mem_reqstream_msg[5U] 
                                                        >> 0xcU)))
                                                    ? 0x7772U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.cache2mem_reqstream_msg[5U] 
                                                         >> 0xcU)))
                                                     ? 0x776eU
                                                     : 0x3f3fU)));
    VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__str
                  ,"%s",0,16,CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__str, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__str);
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__rdy 
        = vlSymsp->TOP.cache2mem_reqstream_rdy;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__val 
        = vlSymsp->TOP.cache2mem_reqstream_val;
    VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace, trace_str);
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__rdy) 
         & (IData)(__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__59__str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__str);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__59__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace);
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__59__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__59__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__59__trace[0U];
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__59__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__59__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__59__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__59__trace[0U] 
            = vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__59__trace);
    } else if (((IData)(__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__rdy) 
                & (~ (IData)(__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__val)))) {
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__60__num 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__60__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__60__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace);
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__60__trace[0U];
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__60__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__60__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__60__char);
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__60__trace[0U] 
            = vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__60__trace);
    } else if (((~ (IData)(__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__rdy)) 
                & (IData)(__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__61__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__61__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace);
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__61__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__61__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__61__trace[0U];
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__61__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__61__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__61__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__61__trace[0U] 
            = vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__61__trace);
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__62__num 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__62__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__62__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace);
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__62__trace[0U];
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__62__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__62__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__62__char);
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__62__trace[0U] 
            = vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__62__trace);
    } else if ((1U & ((~ (IData)(__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__rdy)) 
                      & (~ (IData)(__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__val))))) {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__63__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__63__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace);
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__63__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__63__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__63__trace[0U];
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__63__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__63__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__63__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__63__trace[0U] 
            = vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__63__trace);
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__64__num 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__64__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__64__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace);
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__64__trace[0U];
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__64__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__64__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__64__char);
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__64__trace[0U] 
            = vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__64__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__65__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__65__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace);
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__65__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__65__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__65__trace[0U];
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__65__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__65__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__65__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__65__trace[0U] 
            = vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__65__trace);
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__66__num 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__66__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__66__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace);
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__66__trace[0U];
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__66__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__66__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__66__char);
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__66__trace[0U] 
            = vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__66__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__58__trace);
}

void VCacheBase___05Fp_num_banks_1___024root____Vdpiexp_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__line_trace_TOP(VCacheBase___05Fp_num_banks_1__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheBase___05Fp_num_banks_1___024root____Vdpiexp_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__type_str;
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__type_str = 0;
    IData/*31:0*/ CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1;
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace);
    CData/*0:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__val;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__val = 0;
    CData/*0:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__rdy;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__68__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__68__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__68__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__68__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__69__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__69__trace);
    CData/*7:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__69__char;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__69__char = 0;
    IData/*31:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__69__num;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__69__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__70__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__70__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__70__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__70__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__71__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__71__trace);
    CData/*7:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__71__char;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__71__char = 0;
    IData/*31:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__71__num;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__71__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__72__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__72__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__72__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__72__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__73__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__73__trace);
    CData/*7:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__73__char;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__73__char = 0;
    IData/*31:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__73__num;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__73__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__74__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__74__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__74__str;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__74__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__75__trace;
    VL_ZERO_W(4096, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__75__trace);
    CData/*7:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__75__char;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__75__char = 0;
    IData/*31:0*/ __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__75__num;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__75__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__type_str 
        = ((0U == (0xfU & (vlSymsp->TOP.cache2mem_respstream_msg[4U] 
                           >> 0xeU))) ? 0x7264U : (
                                                   (1U 
                                                    == 
                                                    (0xfU 
                                                     & (vlSymsp->TOP.cache2mem_respstream_msg[4U] 
                                                        >> 0xeU)))
                                                    ? 0x7772U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xfU 
                                                      & (vlSymsp->TOP.cache2mem_respstream_msg[4U] 
                                                         >> 0xeU)))
                                                     ? 0x776eU
                                                     : 0x3f3fU)));
    VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__str
                  ,"%s",0,16,CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__str, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__str);
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__rdy 
        = vlSymsp->TOP.cache2mem_respstream_rdy;
    __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__val 
        = vlSymsp->TOP.cache2mem_respstream_val;
    VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace, trace_str);
    CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__rdy) 
         & (IData)(__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__68__str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__str);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__68__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace);
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__68__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__68__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__68__trace[0U];
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__68__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__68__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__68__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__68__trace[0U] 
            = vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__68__trace);
    } else if (((IData)(__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__rdy) 
                & (~ (IData)(__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__val)))) {
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__69__num 
            = CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1;
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__69__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__69__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace);
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__69__trace[0U];
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__69__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__69__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__69__char);
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__69__trace[0U] 
            = vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__69__trace);
    } else if (((~ (IData)(__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__rdy)) 
                & (IData)(__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__70__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__70__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace);
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__70__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__70__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__70__trace[0U];
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__70__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__70__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__70__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__70__trace[0U] 
            = vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__70__trace);
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__71__num 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__71__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__71__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace);
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__71__trace[0U];
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__71__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__71__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__71__char);
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__71__trace[0U] 
            = vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__71__trace);
    } else if ((1U & ((~ (IData)(__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__rdy)) 
                      & (~ (IData)(__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__val))))) {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__72__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__72__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace);
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__72__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__72__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__72__trace[0U];
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__72__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__72__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__72__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__72__trace[0U] 
            = vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__72__trace);
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__73__num 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__73__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__73__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace);
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__73__trace[0U];
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__73__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__73__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__73__char);
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__73__trace[0U] 
            = vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__73__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__74__str, VCacheBase___05Fp_num_banks_1__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__74__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace);
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__74__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__74__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__74__trace[0U];
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__74__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__74__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__74__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__74__trace[0U] 
            = vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__74__trace);
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__75__num 
            = (CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__75__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__75__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace);
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__75__trace[0U];
        vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__75__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__75__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__75__char);
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__75__trace[0U] 
            = vlSymsp->TOP.CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__75__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheBase___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__67__trace);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCacheBase___05Fp_num_banks_1___024root___dump_triggers__ico(VCacheBase___05Fp_num_banks_1___024root* vlSelf);
#endif  // VL_DEBUG

void VCacheBase___05Fp_num_banks_1___024root___eval_triggers__ico(VCacheBase___05Fp_num_banks_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheBase___05Fp_num_banks_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheBase___05Fp_num_banks_1___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
    vlSelf->__VicoTriggered.set(1U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCacheBase___05Fp_num_banks_1___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCacheBase___05Fp_num_banks_1___024root___dump_triggers__act(VCacheBase___05Fp_num_banks_1___024root* vlSelf);
#endif  // VL_DEBUG

void VCacheBase___05Fp_num_banks_1___024root___eval_triggers__act(VCacheBase___05Fp_num_banks_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheBase___05Fp_num_banks_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheBase___05Fp_num_banks_1___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((IData)(vlSelf->reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0)))));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCacheBase___05Fp_num_banks_1___024root___dump_triggers__act(vlSelf);
    }
#endif
}
