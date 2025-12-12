// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCacheAlt___05Fp_num_banks_1.h for the primary calling header

#include "VCacheAlt___05Fp_num_banks_1__pch.h"
#include "VCacheAlt___05Fp_num_banks_1__Syms.h"
#include "VCacheAlt___05Fp_num_banks_1___024root.h"

extern const VlWide<128>/*4095:0*/ VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_h7ed547c1_0;
extern const VlWide<128>/*4095:0*/ VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_h296ef16f_0;
extern const VlWide<128>/*4095:0*/ VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_h56610484_0;
extern const VlWide<128>/*4095:0*/ VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_h0566f112_0;
extern const VlWide<128>/*4095:0*/ VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_h777355b7_0;
extern const VlWide<128>/*4095:0*/ VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_hed8640c4_0;
extern const VlWide<128>/*4095:0*/ VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_hb98e3b6b_0;
extern const VlWide<128>/*4095:0*/ VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_ha1593b7e_0;
extern const VlWide<128>/*4095:0*/ VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_he2533c7c_0;
extern const VlWide<128>/*4095:0*/ VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_h97a3ee4e_0;
extern const VlWide<128>/*4095:0*/ VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_hd61c3baa_0;
extern const VlWide<128>/*4095:0*/ VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_hf42f8d5f_0;
extern const VlWide<128>/*4095:0*/ VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_h17de8ffe_0;
extern const VlWide<128>/*4095:0*/ VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_hdbedbe02_0;
extern const VlWide<128>/*4095:0*/ VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_h89919522_0;

void VCacheAlt___05Fp_num_banks_1___024root____Vdpiexp_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__line_trace_TOP(VCacheAlt___05Fp_num_banks_1__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_1___024root____Vdpiexp_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__line_trace_TOP\n"); );
    // Init
    IData/*31:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0;
    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 0;
    IData/*31:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 = 0;
    IData/*31:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1;
    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__14__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__14__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__14__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__14__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__15__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__15__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__15__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__15__str);
    // Body
    VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__str, VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_h7ed547c1_0);
    VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__trace, trace_str);
    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
    }
    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
        = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__trace[0U];
    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
        = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
        CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__trace[0U] 
        = CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__0__trace);
    if ((0x10U & (IData)(vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__str, VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_h296ef16f_0);
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__trace, trace_str);
        CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__trace[0U];
        CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__trace[0U] 
            = CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__1__trace);
    } else if ((8U & (IData)(vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
        if ((4U & (IData)(vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
            VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__str, VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_h296ef16f_0);
            VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__trace, trace_str);
            CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__trace[0U];
            CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__trace[0U] 
                = CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__2__trace);
        } else if ((2U & (IData)(vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
                VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__str, VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_h56610484_0);
                VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__trace, trace_str);
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
                }
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__trace[0U];
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__trace, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__trace[0U] 
                    = CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
                VL_ASSIGN_W(4096,trace_str, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__3__trace);
            } else {
                VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__str, VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_h0566f112_0);
                VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__trace, trace_str);
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
                }
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__trace[0U];
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__trace, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__trace[0U] 
                    = CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
                VL_ASSIGN_W(4096,trace_str, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__4__trace);
            }
        } else if ((1U & (IData)(vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
            VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__str, VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_h777355b7_0);
            VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__trace, trace_str);
            CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__trace[0U];
            CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__trace[0U] 
                = CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__5__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__str, VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_hed8640c4_0);
            VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__trace, trace_str);
            CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__trace[0U];
            CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__trace[0U] 
                = CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__6__trace);
        }
    } else if ((4U & (IData)(vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
        if ((2U & (IData)(vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
            if ((1U & (IData)(vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
                VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__str, VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_hb98e3b6b_0);
                VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__trace, trace_str);
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
                }
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__trace[0U];
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__trace, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__trace[0U] 
                    = CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
                VL_ASSIGN_W(4096,trace_str, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__7__trace);
            } else {
                VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__str, VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_ha1593b7e_0);
                VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__trace, trace_str);
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
                }
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__trace[0U];
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__trace, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                        = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                        = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__trace[0U] 
                    = CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
                VL_ASSIGN_W(4096,trace_str, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__8__trace);
            }
        } else if ((1U & (IData)(vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
            VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str, VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_he2533c7c_0);
            VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__trace, trace_str);
            CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__trace[0U];
            CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__trace[0U] 
                = CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__9__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str, VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_h97a3ee4e_0);
            VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__trace, trace_str);
            CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__trace[0U];
            CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__trace[0U] 
                = CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__10__trace);
        }
    } else if ((2U & (IData)(vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
        if ((1U & (IData)(vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
            VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str, VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_hd61c3baa_0);
            VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__trace, trace_str);
            CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__trace[0U];
            CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__trace[0U] 
                = CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__11__trace);
        } else {
            VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__str, VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_hf42f8d5f_0);
            VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__trace, trace_str);
            CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
            while ((0U != (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                      ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                    | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__str[
                                       (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                    = ((IData)(1U) + CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
            }
            CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__trace[0U];
            CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                   - (IData)(1U));
            while (VL_LTES_III(32, 0U, CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
                VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__trace, 
                                (0xffU & (((0U == (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                            ? 0U : 
                                           (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                          | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__str[
                                             (0x7fU 
                                              & (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                    = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                    = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                       - (IData)(1U));
            }
            __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__trace[0U] 
                = CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
            VL_ASSIGN_W(4096,trace_str, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__12__trace);
        }
    } else if ((1U & (IData)(vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__ctrl__DOT__state))) {
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__str, VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_h17de8ffe_0);
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__trace, trace_str);
        CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__trace[0U];
        CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__trace[0U] 
            = CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__13__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__14__str, VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_hdbedbe02_0);
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__14__trace, trace_str);
        CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__14__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__14__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
            CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
        }
        CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__14__trace[0U];
        CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__14__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__14__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__14__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
            CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__14__trace[0U] 
            = CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,trace_str, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__14__trace);
    }
    VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__15__str, VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_h89919522_0);
    VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__15__trace, trace_str);
    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__15__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__15__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0);
    }
    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
        = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__15__trace[0U];
    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
        = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(32, 0U, CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__15__trace, 
                        (0xffU & (((0U == (0x1fU & 
                                           VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1)))
                                    ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__15__str[
                                            (((IData)(7U) 
                                              + (0xfffU 
                                                 & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                  | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__15__str[
                                     (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1) 
                                               >> 5U))] 
                                     >> (0x1fU & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1))))));
        CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
            = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
            = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__15__trace[0U] 
        = CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__idx0;
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__vc_trace__DOT__append_str__15__trace);
}

extern const VlWide<128>/*4095:0*/ VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_h0dfd4e8e_0;
extern const VlWide<128>/*4095:0*/ VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_hf38a1e84_0;
extern const VlWide<128>/*4095:0*/ VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_haead36df_0;

void VCacheAlt___05Fp_num_banks_1___024root____Vdpiexp_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__line_trace_TOP(VCacheAlt___05Fp_num_banks_1__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_1___024root____Vdpiexp_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__type_str;
    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__type_str = 0;
    IData/*31:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__trace);
    CData/*0:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__val;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__val = 0;
    CData/*0:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__rdy;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__31__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__31__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__31__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__31__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__32__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__32__trace);
    CData/*7:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__32__char;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__32__char = 0;
    IData/*31:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__32__num;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__32__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__33__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__33__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__33__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__33__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__34__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__34__trace);
    CData/*7:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__34__char;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__34__char = 0;
    IData/*31:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__34__num;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__34__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__35__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__35__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__35__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__35__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__36__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__36__trace);
    CData/*7:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__36__char;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__36__char = 0;
    IData/*31:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__36__num;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__36__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__37__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__37__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__37__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__37__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__38__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__38__trace);
    CData/*7:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__38__char;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__38__char = 0;
    IData/*31:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__38__num;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__38__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__type_str 
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
    VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__str
                  ,"%s",0,16,CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__str, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__str);
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__rdy 
        = vlSymsp->TOP.proc2cache_reqstream_rdy;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__val 
        = vlSymsp->TOP.proc2cache_reqstream_val;
    VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__trace, trace_str);
    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__rdy) 
         & (IData)(__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__31__str, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__str);
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__31__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__trace);
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__31__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__31__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__31__trace[0U];
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__31__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__31__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__31__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__31__trace[0U] 
            = vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__31__trace);
    } else if (((IData)(__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__rdy) 
                & (~ (IData)(__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__val)))) {
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__32__num 
            = CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__32__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__32__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__trace);
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__32__trace[0U];
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__32__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__32__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__32__char);
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__32__trace[0U] 
            = vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__32__trace);
    } else if (((~ (IData)(__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__rdy)) 
                & (IData)(__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__33__str, VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__33__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__trace);
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__33__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__33__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__33__trace[0U];
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__33__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__33__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__33__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__33__trace[0U] 
            = vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__33__trace);
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__34__num 
            = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__34__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__34__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__trace);
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__34__trace[0U];
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__34__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__34__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__34__char);
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__34__trace[0U] 
            = vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__34__trace);
    } else if ((1U & ((~ (IData)(__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__rdy)) 
                      & (~ (IData)(__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__val))))) {
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__35__str, VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__35__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__trace);
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__35__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__35__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__35__trace[0U];
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__35__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__35__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__35__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__35__trace[0U] 
            = vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__35__trace);
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__36__num 
            = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__36__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__36__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__trace);
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__36__trace[0U];
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__36__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__36__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__36__char);
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__36__trace[0U] 
            = vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__36__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__37__str, VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__37__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__trace);
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__37__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__37__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__37__trace[0U];
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__37__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__37__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__37__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__37__trace[0U] 
            = vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__37__trace);
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__38__num 
            = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__38__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__38__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__trace);
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__38__trace[0U];
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__38__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__38__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__38__char);
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__38__trace[0U] 
            = vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__38__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__trace);
}

void VCacheAlt___05Fp_num_banks_1___024root____Vdpiexp_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__line_trace_TOP(VCacheAlt___05Fp_num_banks_1__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_1___024root____Vdpiexp_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__type_str;
    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__type_str = 0;
    IData/*31:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1;
    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__trace);
    CData/*0:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__val;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__val = 0;
    CData/*0:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__rdy;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__40__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__40__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__40__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__40__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__41__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__41__trace);
    CData/*7:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__41__char;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__41__char = 0;
    IData/*31:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__41__num;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__41__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__42__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__42__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__42__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__42__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__43__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__43__trace);
    CData/*7:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__43__char;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__43__char = 0;
    IData/*31:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__43__num;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__43__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__44__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__44__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__44__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__44__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__45__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__45__trace);
    CData/*7:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__45__char;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__45__char = 0;
    IData/*31:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__45__num;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__45__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__46__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__46__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__46__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__46__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__47__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__47__trace);
    CData/*7:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__47__char;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__47__char = 0;
    IData/*31:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__47__num;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__47__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__type_str 
        = ((0U == (IData)(vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cacheresp_type))
            ? 0x7264U : ((1U == (IData)(vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cacheresp_type))
                          ? 0x7772U : ((2U == (IData)(vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cacheresp_type))
                                        ? 0x776eU : 0x3f3fU)));
    VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__str
                  ,"%s",0,16,CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__str, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__str);
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__rdy 
        = vlSymsp->TOP.proc2cache_respstream_val;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__val 
        = vlSymsp->TOP.proc2cache_respstream_val;
    VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__trace, trace_str);
    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1))))))) {
        CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__rdy) 
         & (IData)(__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__40__str, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__str);
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__40__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__trace);
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__40__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__40__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__40__trace[0U];
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__40__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__40__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__40__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__40__trace[0U] 
            = vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__40__trace);
    } else if (((IData)(__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__rdy) 
                & (~ (IData)(__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__val)))) {
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__41__num 
            = CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1;
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__41__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__41__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__trace);
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__41__trace[0U];
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__41__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__41__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__41__char);
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__41__trace[0U] 
            = vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__41__trace);
    } else if (((~ (IData)(__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__rdy)) 
                & (IData)(__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__42__str, VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__42__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__trace);
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__42__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__42__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__42__trace[0U];
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__42__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__42__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__42__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__42__trace[0U] 
            = vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__42__trace);
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__43__num 
            = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__43__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__43__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__trace);
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__43__trace[0U];
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__43__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__43__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__43__char);
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__43__trace[0U] 
            = vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__43__trace);
    } else if ((1U & ((~ (IData)(__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__rdy)) 
                      & (~ (IData)(__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__val))))) {
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__44__str, VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__44__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__trace);
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__44__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__44__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__44__trace[0U];
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__44__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__44__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__44__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__44__trace[0U] 
            = vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__44__trace);
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__45__num 
            = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__45__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__45__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__trace);
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__45__trace[0U];
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__45__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__45__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__45__char);
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__45__trace[0U] 
            = vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__45__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__46__str, VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__46__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__trace);
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__46__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__46__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__46__trace[0U];
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__46__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__46__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__46__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__46__trace[0U] 
            = vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_str__46__trace);
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__47__num 
            = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__47__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__47__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__trace);
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__47__trace[0U];
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__47__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__47__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__47__char);
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__47__trace[0U] 
            = vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_chars__47__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__proc2cache_respstream_trace__DOT__vc_trace__DOT__append_val_rdy_str__39__trace);
}

void VCacheAlt___05Fp_num_banks_1___024root____Vdpiexp_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__line_trace_TOP(VCacheAlt___05Fp_num_banks_1__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_1___024root____Vdpiexp_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__type_str;
    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__type_str = 0;
    IData/*31:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__trace);
    CData/*0:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__val;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__val = 0;
    CData/*0:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__rdy;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__49__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__49__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__49__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__49__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__50__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__50__trace);
    CData/*7:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__50__char;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__50__char = 0;
    IData/*31:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__50__num;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__50__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__51__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__51__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__51__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__51__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__52__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__52__trace);
    CData/*7:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__52__char;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__52__char = 0;
    IData/*31:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__52__num;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__52__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__53__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__53__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__53__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__53__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__54__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__54__trace);
    CData/*7:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__54__char;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__54__char = 0;
    IData/*31:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__54__num;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__54__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__55__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__55__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__55__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__55__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__56__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__56__trace);
    CData/*7:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__56__char;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__56__char = 0;
    IData/*31:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__56__num;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__56__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__type_str 
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
    VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__str
                  ,"%s",0,16,CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__str, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__str);
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__rdy 
        = vlSymsp->TOP.cache2mem_reqstream_rdy;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__val 
        = vlSymsp->TOP.cache2mem_reqstream_val;
    VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__trace, trace_str);
    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__rdy) 
         & (IData)(__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__49__str, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__str);
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__49__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__trace);
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__49__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__49__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__49__trace[0U];
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__49__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__49__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__49__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__49__trace[0U] 
            = vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__49__trace);
    } else if (((IData)(__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__rdy) 
                & (~ (IData)(__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__val)))) {
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__50__num 
            = CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__50__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__50__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__trace);
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__50__trace[0U];
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__50__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__50__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__50__char);
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__50__trace[0U] 
            = vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__50__trace);
    } else if (((~ (IData)(__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__rdy)) 
                & (IData)(__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__51__str, VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__51__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__trace);
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__51__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__51__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__51__trace[0U];
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__51__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__51__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__51__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__51__trace[0U] 
            = vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__51__trace);
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__52__num 
            = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__52__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__52__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__trace);
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__52__trace[0U];
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__52__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__52__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__52__char);
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__52__trace[0U] 
            = vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__52__trace);
    } else if ((1U & ((~ (IData)(__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__rdy)) 
                      & (~ (IData)(__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__val))))) {
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__53__str, VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__53__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__trace);
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__53__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__53__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__53__trace[0U];
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__53__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__53__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__53__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__53__trace[0U] 
            = vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__53__trace);
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__54__num 
            = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__54__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__54__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__trace);
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__54__trace[0U];
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__54__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__54__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__54__char);
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__54__trace[0U] 
            = vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__54__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__55__str, VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__55__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__trace);
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__55__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__55__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__55__trace[0U];
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__55__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__55__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__55__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__55__trace[0U] 
            = vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__55__trace);
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__56__num 
            = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__56__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__56__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__trace);
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__56__trace[0U];
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__56__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__56__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__56__char);
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__56__trace[0U] 
            = vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__56__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__48__trace);
}

void VCacheAlt___05Fp_num_banks_1___024root____Vdpiexp_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__line_trace_TOP(VCacheAlt___05Fp_num_banks_1__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ &trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_1___024root____Vdpiexp_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__line_trace_TOP\n"); );
    // Init
    SData/*15:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__type_str;
    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__type_str = 0;
    IData/*31:0*/ CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1;
    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__trace);
    CData/*0:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__val;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__val = 0;
    CData/*0:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__rdy;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__58__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__58__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__58__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__58__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__59__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__59__trace);
    CData/*7:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__59__char;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__59__char = 0;
    IData/*31:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__59__num;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__59__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__60__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__60__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__60__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__60__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__61__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__61__trace);
    CData/*7:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__61__char;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__61__char = 0;
    IData/*31:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__61__num;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__61__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__62__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__62__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__62__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__62__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__63__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__63__trace);
    CData/*7:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__63__char;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__63__char = 0;
    IData/*31:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__63__num;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__63__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__64__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__64__trace);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__64__str;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__64__str);
    VlWide<128>/*4095:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__65__trace;
    VL_ZERO_W(4096, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__65__trace);
    CData/*7:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__65__char;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__65__char = 0;
    IData/*31:0*/ __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__65__num;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__65__num = 0;
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__type_str 
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
    VL_SFORMAT_NX(4096,vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__str
                  ,"%s",0,16,CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__type_str);
    VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__str, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__str);
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__rdy 
        = vlSymsp->TOP.cache2mem_respstream_rdy;
    __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__val 
        = vlSymsp->TOP.cache2mem_respstream_val;
    VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__trace, trace_str);
    CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__str[
                                      (((IData)(7U) 
                                        + (0xfffU & 
                                           VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__str[
                               (0x7fU & (VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(32, (IData)(8U), CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__rdy) 
         & (IData)(__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__58__str, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__str);
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__58__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__trace);
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__58__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__58__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__58__trace[0U];
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__58__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__58__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__58__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__58__trace[0U] 
            = vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__58__trace);
    } else if (((IData)(__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__rdy) 
                & (~ (IData)(__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__val)))) {
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__59__num 
            = CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1;
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__59__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__59__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__trace);
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__59__trace[0U];
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__59__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__59__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__59__char);
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__59__trace[0U] 
            = vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__59__trace);
    } else if (((~ (IData)(__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__rdy)) 
                & (IData)(__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__val))) {
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__60__str, VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_h0dfd4e8e_0);
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__60__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__trace);
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__60__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__60__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__60__trace[0U];
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__60__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__60__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__60__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__60__trace[0U] 
            = vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__60__trace);
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__61__num 
            = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__61__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__61__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__trace);
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__61__trace[0U];
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__61__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__61__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__61__char);
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__61__trace[0U] 
            = vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__61__trace);
    } else if ((1U & ((~ (IData)(__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__rdy)) 
                      & (~ (IData)(__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__val))))) {
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__62__str, VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_hf38a1e84_0);
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__62__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__trace);
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__62__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__62__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__62__trace[0U];
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__62__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__62__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__62__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__62__trace[0U] 
            = vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__62__trace);
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__63__num 
            = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__63__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__63__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__trace);
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__63__trace[0U];
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__63__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__63__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__63__char);
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__63__trace[0U] 
            = vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__63__trace);
    } else {
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__64__str, VCacheAlt___05Fp_num_banks_1__ConstPool__CONST_haead36df_0);
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__64__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__trace);
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__64__str[
                                          (((IData)(7U) 
                                            + (0xfffU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__64__str[
                                   (0x7fU & (VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__64__trace[0U];
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(32, 0U, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__64__trace, 
                            (0xffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                        ? 0U : (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__64__str[
                                                (((IData)(7U) 
                                                  + 
                                                  (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                      | (__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__64__str[
                                         (0x7fU & (
                                                   VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__64__trace[0U] 
            = vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_str__64__trace);
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__65__num 
            = (CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__len1 
               - (IData)(1U));
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__65__char = 0x20U;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__65__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__trace);
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__65__trace[0U];
        vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
        while (VL_LTS_III(32, vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__65__num)) {
            VL_ASSIGNSEL_WI(4096,8,(0xfffU & VL_MULS_III(32, (IData)(8U), vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__65__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__65__char);
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = ((IData)(1U) + vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
        }
        __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__65__trace[0U] 
            = vlSymsp->TOP.CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        VL_ASSIGN_W(4096,__Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__trace, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__65__trace);
    }
    VL_ASSIGN_W(4096,trace_str, __Vtask_CacheAlt___05Fp_num_banks_1__DOT__v__DOT__cache2mem_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__57__trace);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCacheAlt___05Fp_num_banks_1___024root___dump_triggers__ico(VCacheAlt___05Fp_num_banks_1___024root* vlSelf);
#endif  // VL_DEBUG

void VCacheAlt___05Fp_num_banks_1___024root___eval_triggers__ico(VCacheAlt___05Fp_num_banks_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheAlt___05Fp_num_banks_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_1___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
    vlSelf->__VicoTriggered.set(1U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VCacheAlt___05Fp_num_banks_1___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCacheAlt___05Fp_num_banks_1___024root___dump_triggers__act(VCacheAlt___05Fp_num_banks_1___024root* vlSelf);
#endif  // VL_DEBUG

void VCacheAlt___05Fp_num_banks_1___024root___eval_triggers__act(VCacheAlt___05Fp_num_banks_1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VCacheAlt___05Fp_num_banks_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCacheAlt___05Fp_num_banks_1___024root___eval_triggers__act\n"); );
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
        VCacheAlt___05Fp_num_banks_1___024root___dump_triggers__act(vlSelf);
    }
#endif
}
